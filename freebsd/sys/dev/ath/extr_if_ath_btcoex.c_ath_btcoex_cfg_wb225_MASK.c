
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct ath_softc {int sc_dev; struct ath_hal* sc_ah; } ;
struct ath_hal {int dummy; } ;
typedef int btinfo ;
typedef int btconfig ;
struct TYPE_6__ {int bt_gpio_bt_active; int bt_gpio_bt_priority; int bt_gpio_wlan_active; int bt_active_polarity; int bt_single_ant; int bt_txstate_extend; int bt_txframe_extend; int bt_quiet_collision; int bt_rxclear_polarity; int bt_priority_time; int bt_first_slot_time; int bt_hold_rxclear; int bt_mode; scalar_t__ bt_time_extend; scalar_t__ bt_isolation; int bt_coex_config; int bt_module; } ;
typedef TYPE_1__ HAL_BT_COEX_INFO ;
typedef TYPE_1__ HAL_BT_COEX_CONFIG ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct ath_hal*,TYPE_1__*) ;
 int FUNC_1 (struct ath_hal*,TYPE_1__*) ;
 int FUNC_2 (struct ath_hal*,int ,int) ;
 int FUNC_3 (struct ath_hal*) ;
 int FUNC_4 (TYPE_1__*,int) ;
 int FUNC_5 (int ,char*) ;

__attribute__((used)) static int
FUNC_6(struct ath_softc *VAR_5)
{
 HAL_BT_COEX_INFO VAR_6;
 HAL_BT_COEX_CONFIG VAR_7;
 struct ath_hal *VAR_8 = VAR_5->sc_ah;

 if (! FUNC_3(VAR_8))
  return (VAR_0);

 FUNC_4(&VAR_6, sizeof(VAR_6));
 FUNC_4(&VAR_7, sizeof(VAR_7));

 FUNC_5(VAR_5->sc_dev, "Enabling WB225 BTCOEX\n");

 VAR_6.bt_module = VAR_4;
 VAR_6.bt_coex_config = VAR_2;




 VAR_6.bt_gpio_bt_active = 4;
 VAR_6.bt_gpio_bt_priority = 8;
 VAR_6.bt_gpio_wlan_active = 5;

 VAR_6.bt_active_polarity = 1;
 VAR_6.bt_single_ant = 1;
 VAR_6.bt_isolation = 0;

 FUNC_1(VAR_8, &VAR_6);

 VAR_7.bt_time_extend = 0;
 VAR_7.bt_txstate_extend = 1;
 VAR_7.bt_txframe_extend = 1;
 VAR_7.bt_mode = VAR_3;
 VAR_7.bt_quiet_collision = 1;
 VAR_7.bt_rxclear_polarity = 1;
 VAR_7.bt_priority_time = 2;
 VAR_7.bt_first_slot_time = 5;
 VAR_7.bt_hold_rxclear = 1;

 FUNC_0(VAR_8, &VAR_7);




 FUNC_2(VAR_8, VAR_1, 1);

 return (0);
}
