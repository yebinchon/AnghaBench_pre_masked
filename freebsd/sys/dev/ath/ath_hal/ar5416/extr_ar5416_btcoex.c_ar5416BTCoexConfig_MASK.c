
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct ath_hal_5416 {int ah_btCoexMode; int ah_btCoexMode2; scalar_t__ ah_btCoexSingleAnt; } ;
struct ath_hal {int dummy; } ;
struct TYPE_3__ {int bt_rxclear_polarity; int bt_time_extend; int bt_txstate_extend; int bt_txframe_extend; int bt_mode; int bt_quiet_collision; int bt_priority_time; int bt_first_slot_time; int bt_hold_rxclear; } ;
typedef TYPE_1__ HAL_BT_COEX_CONFIG ;
typedef int HAL_BOOL ;


 struct ath_hal_5416* FUNC_0 (struct ath_hal*) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 scalar_t__ FUNC_1 (struct ath_hal*) ;
 int FUNC_2 (int,int ) ;

void
FUNC_3(struct ath_hal *VAR_12, HAL_BT_COEX_CONFIG *VAR_13)
{
 struct ath_hal_5416 *VAR_14 = FUNC_0(VAR_12);
 HAL_BOOL VAR_15 = VAR_13->bt_rxclear_polarity;





 if (FUNC_1(VAR_12)) {
  VAR_15 = !VAR_13->bt_rxclear_polarity;
 }

 VAR_14->ah_btCoexMode = (VAR_14->ah_btCoexMode & VAR_6) |
     FUNC_2(VAR_13->bt_time_extend, VAR_9) |
     FUNC_2(VAR_13->bt_txstate_extend, VAR_10) |
     FUNC_2(VAR_13->bt_txframe_extend, VAR_11) |
     FUNC_2(VAR_13->bt_mode, VAR_4) |
     FUNC_2(VAR_13->bt_quiet_collision, VAR_7) |
     FUNC_2(VAR_15, VAR_8) |
     FUNC_2(VAR_13->bt_priority_time, VAR_5) |
     FUNC_2(VAR_13->bt_first_slot_time, VAR_2);

 VAR_14->ah_btCoexMode2 |= FUNC_2(VAR_13->bt_hold_rxclear,
     VAR_3);

 if (VAR_14->ah_btCoexSingleAnt == VAR_0) {

  VAR_14->ah_btCoexMode2 |= VAR_1;
 }
}
