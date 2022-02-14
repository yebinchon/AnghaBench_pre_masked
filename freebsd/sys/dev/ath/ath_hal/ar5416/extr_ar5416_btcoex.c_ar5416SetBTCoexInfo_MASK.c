
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct ath_hal_5416 {int ah_btWlanIsolation; int ah_btCoexSingleAnt; int ah_btActivePolarity; int ah_wlanActiveGpioSelect; int ah_btPriorityGpioSelect; int ah_btActiveGpioSelect; int ah_btCoexConfigType; int ah_btModule; } ;
struct ath_hal {int dummy; } ;
struct TYPE_3__ {int bt_isolation; int bt_single_ant; int bt_active_polarity; int bt_gpio_wlan_active; int bt_gpio_bt_priority; int bt_gpio_bt_active; int bt_coex_config; int bt_module; } ;
typedef TYPE_1__ HAL_BT_COEX_INFO ;


 struct ath_hal_5416* FUNC_0 (struct ath_hal*) ;

void
FUNC_1(struct ath_hal *VAR_0, HAL_BT_COEX_INFO *VAR_1)
{
 struct ath_hal_5416 *VAR_2 = FUNC_0(VAR_0);

 VAR_2->ah_btModule = VAR_1->bt_module;
 VAR_2->ah_btCoexConfigType = VAR_1->bt_coex_config;
 VAR_2->ah_btActiveGpioSelect = VAR_1->bt_gpio_bt_active;
 VAR_2->ah_btPriorityGpioSelect = VAR_1->bt_gpio_bt_priority;
 VAR_2->ah_wlanActiveGpioSelect = VAR_1->bt_gpio_wlan_active;
 VAR_2->ah_btActivePolarity = VAR_1->bt_active_polarity;
 VAR_2->ah_btCoexSingleAnt = VAR_1->bt_single_ant;
 VAR_2->ah_btWlanIsolation = VAR_1->bt_isolation;
}
