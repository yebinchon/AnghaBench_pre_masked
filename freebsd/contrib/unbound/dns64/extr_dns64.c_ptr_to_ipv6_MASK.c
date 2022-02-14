
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;



__attribute__((used)) static int
FUNC_0(const char* VAR_0, uint8_t VAR_1[16])
{
    int VAR_2;

    for (VAR_2 = 0; VAR_2 < 64; VAR_2++) {
        int VAR_3;

        if (VAR_0[VAR_2++] != 1)
            return 0;

        if (VAR_0[VAR_2] >= '0' && VAR_0[VAR_2] <= '9') {
            VAR_3 = VAR_0[VAR_2] - '0';
        } else if (VAR_0[VAR_2] >= 'a' && VAR_0[VAR_2] <= 'f') {
            VAR_3 = VAR_0[VAR_2] - 'a' + 10;
        } else if (VAR_0[VAR_2] >= 'A' && VAR_0[VAR_2] <= 'F') {
            VAR_3 = VAR_0[VAR_2] - 'A' + 10;
        } else {
            return 0;
        }

        VAR_1[15-VAR_2/4] |= VAR_3 << (2 * ((VAR_2-1) % 4));
    }

    return 1;
}
