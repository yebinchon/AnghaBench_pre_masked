
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u_int8_t ;
typedef int u_int16_t ;
struct ath_hal {scalar_t__ ah_magic; } ;
typedef scalar_t__ int8_t ;
typedef int HAL_STATUS ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct ath_hal*,int ,scalar_t__*) ;

HAL_STATUS
FUNC_1(struct ath_hal *VAR_4, u_int16_t VAR_5,
                                        int8_t *VAR_6, int8_t *VAR_7)
{



    if (VAR_4->ah_magic == VAR_0) {
        u_int8_t VAR_8[VAR_3];
        int VAR_9;

        *VAR_6 = 0;
        *VAR_7 = VAR_1;

        FUNC_0(VAR_4, VAR_5, VAR_8);

        for (VAR_9=0; VAR_9<VAR_3; VAR_9++) {
            if (VAR_8[VAR_9] > *VAR_6)
                *VAR_6 = VAR_8[VAR_9];
            if (VAR_8[VAR_9] < *VAR_7)
                *VAR_7 = VAR_8[VAR_9];
        }
    } else {
        *VAR_6 = 0;
        *VAR_7 = 0;
    }

    return VAR_2;
}
