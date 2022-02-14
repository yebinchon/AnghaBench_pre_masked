
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;
typedef int uint16_t ;



uint16_t
FUNC_0 (const uint8_t *VAR_0, int VAR_1, int VAR_2)
{

    int VAR_3;
    int VAR_4;
    uint32_t VAR_5;
    uint32_t VAR_6;
    uint32_t VAR_7;
    uint16_t VAR_8;
    int VAR_9;

    VAR_6 = 0;
    VAR_7 = 0;

    for (VAR_9 = 0; VAR_9 < VAR_2; VAR_9++) {



        if (VAR_9 == VAR_1 ||
            VAR_9 == VAR_1+1) {
            VAR_7 += VAR_6;
            VAR_0++;
        } else {
            VAR_6 = VAR_6 + *(VAR_0++);
            VAR_7 += VAR_6;
        }
    }

    VAR_6 = VAR_6 % 255;
    VAR_7 = VAR_7 % 255;

    VAR_5 = (VAR_2 - VAR_1)*(VAR_6);

    VAR_3 = VAR_5 - VAR_6 - VAR_7;
    VAR_4 = VAR_7 - VAR_5 - 1;

    if ( VAR_4 >= 0 ) VAR_4++;
    if ( VAR_3 < 0 ) VAR_3--;

    VAR_3 %= 255;
    VAR_4 %= 255;


    if (VAR_3 == 0) VAR_3 = 255;
    if (VAR_4 == 0) VAR_4 = 255;

    VAR_4 &= 0x00FF;
    VAR_8 = ((VAR_3 << 8) | VAR_4);

    return VAR_8;
}
