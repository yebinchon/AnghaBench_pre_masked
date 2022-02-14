
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
struct ath_hal_5212 {int ah_beaconInterval; } ;
struct ath_hal {int dummy; } ;
struct TYPE_3__ {int bt_nexttbtt; int bt_nextatim; int bt_intval; scalar_t__ bt_flags; int bt_nextswba; int bt_nextdba; } ;
typedef TYPE_1__ HAL_BEACON_TIMERS ;


 struct ath_hal_5212* FUNC_0 (struct ath_hal*) ;
 int VAR_0 ;
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
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct ath_hal*,int ,int) ;
 int FUNC_3 (struct ath_hal*,int ,int ) ;
 int FUNC_4 (int) ;
 int FUNC_5 (struct ath_hal*) ;

void
FUNC_6(struct ath_hal *VAR_14, const HAL_BEACON_TIMERS *VAR_15)
{
 uint32_t VAR_16;
 struct ath_hal_5212 *VAR_17 = FUNC_0(VAR_14);

 FUNC_3(VAR_14, VAR_7, FUNC_4(VAR_15->bt_nexttbtt));
 FUNC_3(VAR_14, VAR_4, FUNC_1(VAR_15->bt_nextdba));
 FUNC_3(VAR_14, VAR_6, FUNC_1(VAR_15->bt_nextswba));
 FUNC_3(VAR_14, VAR_5, FUNC_4(VAR_15->bt_nextatim));

 VAR_16 = FUNC_4(VAR_15->bt_intval & VAR_13);
 VAR_17->ah_beaconInterval = VAR_15->bt_intval & VAR_13;
 FUNC_3(VAR_14, VAR_0, VAR_16);
 FUNC_3(VAR_14, VAR_2, VAR_16);
 FUNC_3(VAR_14, VAR_8, VAR_16);
 FUNC_3(VAR_14, VAR_3, VAR_16);




 if (VAR_15->bt_intval & VAR_1)
  FUNC_5(VAR_14);



 FUNC_2(VAR_14, VAR_9,
     VAR_15->bt_flags != 0 ? VAR_15->bt_flags :
  VAR_12 | VAR_10 | VAR_11);
}
