
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16_t ;
typedef int int16_t ;



__attribute__((used)) static int16_t
FUNC_0(int16_t *VAR_0, uint16_t VAR_1[])
{
    int16_t VAR_2, VAR_3, VAR_4;
    int16_t VAR_5, VAR_6, VAR_7;


    if ((VAR_0[63] - VAR_0[0]) > 126) {
        VAR_5 = VAR_0[63] - 126;
    } else {
        VAR_5 = VAR_0[0];
    }

    VAR_7 = VAR_0[63];
    VAR_4 = 63;


    while ((VAR_0[VAR_4] > (VAR_7 - 1) ) && (VAR_4 >= 0)) {
        VAR_4--;
    }

    VAR_3 = VAR_4;
    VAR_6 = VAR_7;
    for (VAR_2 = 63; VAR_2 >= 0; VAR_2--) {
        while ((VAR_3 < 64) && (VAR_3 > 0) && (VAR_0[VAR_3] >= VAR_6)) {
            VAR_3--;
        }
        if (VAR_3 == 0) {
            while (VAR_2 >= 0) {
                VAR_1[VAR_2] = VAR_1[VAR_2 + 1];
                VAR_2--;
            }
            break;
        }
        VAR_1[VAR_2] = VAR_3;
        VAR_6 -= 2;
    }
    return VAR_5;
}
