
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int uint32_t ;
struct ath_softc {struct ath_hal* sc_ah; int sc_dev; } ;
struct TYPE_7__ {int ath_hal_mci_config; } ;
struct ath_hal {TYPE_1__ ah_config; } ;
typedef int btinfo ;
typedef int btconfig ;
struct TYPE_8__ {int bt_gpio_bt_active; int bt_gpio_bt_priority; int bt_gpio_wlan_active; int bt_active_polarity; int bt_txstate_extend; int bt_txframe_extend; int bt_quiet_collision; int bt_rxclear_polarity; int bt_priority_time; int bt_first_slot_time; int bt_hold_rxclear; int bt_mode; scalar_t__ bt_time_extend; scalar_t__ bt_isolation; scalar_t__ bt_single_ant; int bt_coex_config; int bt_module; } ;
typedef TYPE_2__ HAL_BT_COEX_INFO ;
typedef TYPE_2__ HAL_BT_COEX_CONFIG ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (struct ath_softc*) ;
 int FUNC_1 (struct ath_hal*) ;
 int FUNC_2 (struct ath_hal*,TYPE_2__*) ;
 int FUNC_3 (struct ath_hal*,TYPE_2__*) ;
 int FUNC_4 (struct ath_hal*,int ,int) ;
 int FUNC_5 (struct ath_hal*,int ) ;
 int FUNC_6 (struct ath_hal*) ;
 int FUNC_7 (TYPE_2__*,int) ;
 int FUNC_8 (int ,char*) ;

__attribute__((used)) static int
FUNC_9(struct ath_softc *VAR_6, uint32_t VAR_7, int VAR_8)
{
 HAL_BT_COEX_INFO VAR_9;
 HAL_BT_COEX_CONFIG VAR_10;
 struct ath_hal *VAR_11 = VAR_6->sc_ah;

 if (! FUNC_6(VAR_11))
  return (VAR_0);

 FUNC_7(&VAR_9, sizeof(VAR_9));
 FUNC_7(&VAR_10, sizeof(VAR_10));

 VAR_6->sc_ah->ah_config.ath_hal_mci_config = VAR_7;

 if (FUNC_0(VAR_6) != 0) {
  FUNC_8(VAR_6->sc_dev, "Failed to setup btcoex\n");
  return (VAR_0);
 }

 VAR_9.bt_module = VAR_5;
 VAR_9.bt_coex_config = VAR_2;
 VAR_9.bt_gpio_bt_active = 4;
 VAR_9.bt_gpio_bt_priority = 8;
 VAR_9.bt_gpio_wlan_active = 5;

 VAR_9.bt_active_polarity = 1;
 VAR_9.bt_single_ant = 0;
 VAR_9.bt_isolation = 0;

 FUNC_3(VAR_11, &VAR_9);

 VAR_10.bt_time_extend = 0;
 VAR_10.bt_txstate_extend = 1;
 VAR_10.bt_txframe_extend = 1;
 VAR_10.bt_mode = VAR_3;
 VAR_10.bt_quiet_collision = 1;
 VAR_10.bt_rxclear_polarity = 1;
 VAR_10.bt_priority_time = 2;
 VAR_10.bt_first_slot_time = 5;
 VAR_10.bt_hold_rxclear = 1;

 FUNC_2(VAR_11, &VAR_10);


 FUNC_1(VAR_6->sc_ah);


 FUNC_5(VAR_11, VAR_4);




 FUNC_4(VAR_11, VAR_1,
     VAR_8);

 return (0);
}
