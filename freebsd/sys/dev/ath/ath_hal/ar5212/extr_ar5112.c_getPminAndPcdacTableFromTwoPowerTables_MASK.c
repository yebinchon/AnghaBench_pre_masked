
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16_t ;
typedef int int16_t ;



__attribute__((used)) static int16_t
FUNC_0(int16_t *VAR_0,
 int16_t *VAR_1, uint16_t VAR_2[], int16_t *VAR_3)
{
    int16_t VAR_4, VAR_5, VAR_6;
    int16_t VAR_7, VAR_8, VAR_9;
    int16_t *VAR_10;
    uint16_t VAR_11 = 0x40;


    if ((VAR_0[63] - VAR_1[0]) > 126) {
        VAR_7 = VAR_0[63] - 126;
    } else {
        VAR_7 = VAR_1[0];
    }

    VAR_8 = VAR_0[63];
    VAR_6 = 63;

    while ((VAR_0[VAR_6] > (VAR_8 - 1) ) && (VAR_6 >= 0)){
        VAR_6--;
    }

    *VAR_3 = VAR_1[63];
    VAR_5 = VAR_6;
    VAR_4 = 63;
    VAR_9 = VAR_8;
    VAR_10 = &(VAR_0[0]);
    while (VAR_4 >= 0) {
        if ((VAR_9 <= *VAR_3) || ( (VAR_5 == 0) && (VAR_11 == 0x40))){
            VAR_11 = 0x00;
            VAR_10 = &(VAR_1[0]);
            VAR_5 = 63;
        }
        while ((VAR_5 > 0) && (VAR_10[VAR_5] >= VAR_9)) {
            VAR_5--;
        }
        if ((VAR_5 == 0) && (VAR_11 == 0x00)) {
            while (VAR_4 >= 0) {
                VAR_2[VAR_4] = VAR_2[VAR_4+1];
                VAR_4--;
            }
            break;
        }
        VAR_2[VAR_4] = VAR_5 | VAR_11;
        VAR_9 -= 2;
        VAR_4--;
    }
    return VAR_7;
}
