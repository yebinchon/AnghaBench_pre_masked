
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int get_chip_power_lim; int set_channel; } ;
struct ath_hal_9300 {TYPE_1__ ah_rf_hal; } ;
struct ath_hal {int dummy; } ;
typedef int HAL_STATUS ;
typedef int HAL_BOOL ;


 struct ath_hal_9300* FUNC_0 (struct ath_hal*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

HAL_BOOL
FUNC_1(struct ath_hal *VAR_4, HAL_STATUS *VAR_5)
{
    struct ath_hal_9300 *VAR_6 = FUNC_0(VAR_4);

    VAR_6->ah_rf_hal.set_channel = VAR_3;
    VAR_6->ah_rf_hal.get_chip_power_lim = VAR_2;

    *VAR_5 = VAR_1;

    return VAR_0;
}
