#include <iostream>
#include <cmath>

using namespace std;

void calcProjectileMotion(float initialVelocity, float launchAngleDeg) {
    const float pi = 3.14;
    const float g = 9.8;

    float launchAngleRad = (launchAngleDeg * pi / 180);
    float timeOfFlight = 2 * initialVelocity * sin(launchAngleRad) / g;

    float horizontalDistance = initialVelocity * cos(launchAngleRad);
    float verticalDistance = (initialVelocity * sin(launchAngleRad)) - (-g * timeOfFlight);

    cout << "Distance Travelled Horizontally: " << round(horizontalDistance * 100.0) / 100.0 << " meters" << endl;
    cout << "Distance Travelled Vertically: " << round(verticalDistance * 100.0) / 100.0 << " meters" << endl;
}

int main() {
    calcProjectileMotion(52.0, 78);
    return 0;
}
