
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint8_t ;
typedef int uint16_t ;
typedef int HAL_BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;

HAL_BOOL
FUNC_1(uint8_t VAR_2, uint8_t *VAR_3, uint16_t VAR_4,
                   uint16_t *VAR_5, uint16_t *VAR_6)
{
    uint16_t VAR_7;




    if (VAR_2 <= VAR_3[0]) {
        *VAR_5 = *VAR_6 = 0;
        return VAR_1;
    }
    if (VAR_2 >= VAR_3[VAR_4-1]) {
        *VAR_5 = *VAR_6 = (uint16_t)(VAR_4 - 1);
        return VAR_1;
    }


    for (VAR_7 = 0; VAR_7 < VAR_4 - 1; VAR_7++) {




        if (VAR_3[VAR_7] == VAR_2) {
            *VAR_5 = *VAR_6 = VAR_7;
            return VAR_1;
        }




        if (VAR_2 < VAR_3[VAR_7 + 1]) {
            *VAR_5 = VAR_7;
            *VAR_6 = (uint16_t)(VAR_7 + 1);
            return VAR_0;
        }
    }
    FUNC_0(0);
    *VAR_5 = *VAR_6 = 0;
    return VAR_0;
}
