
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct ath_hal_5212 {int ah_beaconInterval; } ;
struct ath_hal {int dummy; } ;
struct TYPE_3__ {int bt_nexttbtt; int bt_nextdba; int bt_nextswba; int bt_nextatim; int bt_intval; } ;
typedef TYPE_1__ HAL_BEACON_TIMERS ;


 struct ath_hal_5212* FUNC_0 (struct ath_hal*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (struct ath_hal*,int ,int) ;

void
FUNC_2(struct ath_hal *VAR_7, const HAL_BEACON_TIMERS *VAR_8)
{
 struct ath_hal_5212 *VAR_9 = FUNC_0(VAR_7);
 FUNC_1(VAR_7, VAR_2, VAR_8->bt_nexttbtt & 0xffff);
 FUNC_1(VAR_7, VAR_3, VAR_8->bt_nextdba & 0x7ffff);
 FUNC_1(VAR_7, VAR_4, VAR_8->bt_nextswba & 0x1ffffff);

 FUNC_1(VAR_7, VAR_5, VAR_8->bt_nextatim & 0xffff);



 if (VAR_8->bt_intval & VAR_1) {
  FUNC_1(VAR_7, VAR_0, VAR_1);
 }
 FUNC_1(VAR_7, VAR_0, VAR_8->bt_intval);
 VAR_9->ah_beaconInterval = (VAR_8->bt_intval & VAR_6);
}
