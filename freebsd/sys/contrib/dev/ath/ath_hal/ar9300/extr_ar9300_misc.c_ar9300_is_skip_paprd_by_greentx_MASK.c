
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ ath_hal_sta_update_tx_pwr_enable; } ;
struct ath_hal {TYPE_1__ ah_config; } ;
struct TYPE_4__ {scalar_t__ green_tx_status; } ;
typedef int HAL_BOOL ;


 TYPE_2__* FUNC_0 (struct ath_hal*) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (struct ath_hal*) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;

HAL_BOOL
FUNC_2(struct ath_hal *VAR_4)
{
    if (FUNC_1(VAR_4) &&
        VAR_4->ah_config.ath_hal_sta_update_tx_pwr_enable &&
        ((FUNC_0(VAR_4)->green_tx_status == VAR_3) ||
         (FUNC_0(VAR_4)->green_tx_status == VAR_2)))
    {
        return VAR_1;
    }
    return VAR_0;
}
