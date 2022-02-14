
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u_int16_t ;
struct ath_hal {int dummy; } ;
struct TYPE_2__ {scalar_t__ ah_currentRD; } ;
typedef int HAL_STATUS ;
typedef int HAL_BOOL ;


 int VAR_0 ;
 TYPE_1__* FUNC_0 (struct ath_hal*) ;
 int VAR_1 ;
 int VAR_2 ;

HAL_BOOL
FUNC_1(struct ath_hal *VAR_3,
        u_int16_t VAR_4, HAL_STATUS *VAR_5)
{
    HAL_STATUS VAR_6;

    if (FUNC_0(VAR_3)->ah_currentRD == 0) {
        FUNC_0(VAR_3)->ah_currentRD = VAR_4;
        return VAR_1;
    }
    VAR_6 = VAR_2;




    if (VAR_5) {
        *VAR_5 = VAR_6;
    }
    return VAR_0;
}
