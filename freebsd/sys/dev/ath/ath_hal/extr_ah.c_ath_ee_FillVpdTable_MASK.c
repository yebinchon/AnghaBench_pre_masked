
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint8_t ;
typedef scalar_t__ uint16_t ;
typedef int HAL_BOOL ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (scalar_t__,scalar_t__*,scalar_t__,scalar_t__*,scalar_t__*) ;

HAL_BOOL
FUNC_2(uint8_t VAR_1, uint8_t VAR_2, uint8_t *VAR_3,
                   uint8_t *VAR_4, uint16_t VAR_5, uint8_t *VAR_6)
{
    uint16_t VAR_7, VAR_8;
    uint8_t VAR_9 = VAR_1;
    uint16_t VAR_10, VAR_11;

    FUNC_0(VAR_2 > VAR_1);
    for (VAR_7 = 0; VAR_7 <= (VAR_2 - VAR_1) / 2; VAR_7++) {
        FUNC_1(VAR_9, VAR_3, VAR_5,
                           &(VAR_10), &(VAR_11));
        if (VAR_11 < 1)
            VAR_11 = 1;
        if (VAR_10 == VAR_5 - 1)
            VAR_10 = (uint16_t)(VAR_5 - 2);
        if (VAR_3[VAR_10] == VAR_3[VAR_11])
            VAR_8 = VAR_4[VAR_10];
        else
            VAR_8 = (uint16_t)( ((VAR_9 - VAR_3[VAR_10]) * VAR_4[VAR_11] + (VAR_3[VAR_11] - VAR_9) * VAR_4[VAR_10]) /
                  (VAR_3[VAR_11] - VAR_3[VAR_10]) );
        FUNC_0(VAR_8 < 256);
        VAR_6[VAR_7] = (uint8_t)VAR_8;
        VAR_9 += 2;
    }

    return VAR_0;
}
