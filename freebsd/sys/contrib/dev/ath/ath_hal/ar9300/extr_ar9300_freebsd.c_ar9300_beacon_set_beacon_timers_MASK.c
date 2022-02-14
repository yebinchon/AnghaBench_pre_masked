
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint32_t ;
struct ath_hal {int dummy; } ;
struct TYPE_5__ {int ah_beaconInterval; } ;
struct TYPE_4__ {int bt_nexttbtt; int bt_nextatim; int bt_intval; scalar_t__ bt_flags; int bt_nextswba; int bt_nextdba; } ;
typedef TYPE_1__ HAL_BEACON_TIMERS ;


 TYPE_3__* FUNC_0 (struct ath_hal*) ;
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
 int FUNC_1 (int) ;
 int VAR_14 ;
 int VAR_15 ;
 scalar_t__ VAR_16 ;
 scalar_t__ VAR_17 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct ath_hal*,int ,int) ;
 int FUNC_4 (struct ath_hal*,int ,int ) ;
 int FUNC_5 (int) ;
 int FUNC_6 (struct ath_hal*) ;
 scalar_t__ VAR_18 ;

__attribute__((used)) static void
FUNC_7(struct ath_hal *VAR_19,
    const HAL_BEACON_TIMERS *VAR_20)
{
 uint32_t VAR_21;
 FUNC_4(VAR_19, VAR_7, FUNC_5(VAR_20->bt_nexttbtt));
 FUNC_4(VAR_19, VAR_4, FUNC_2(VAR_20->bt_nextdba));
 FUNC_4(VAR_19, VAR_6, FUNC_2(VAR_20->bt_nextswba));
 FUNC_4(VAR_19, VAR_5, FUNC_5(VAR_20->bt_nextatim));

 VAR_21 = FUNC_5(VAR_20->bt_intval & VAR_14);
 FUNC_0(VAR_19)->ah_beaconInterval = VAR_20->bt_intval & VAR_14;
 FUNC_4(VAR_19, VAR_0, VAR_21);
 FUNC_4(VAR_19, VAR_2, VAR_21);
 FUNC_4(VAR_19, VAR_8, VAR_21);
 FUNC_4(VAR_19, VAR_3, VAR_21);




 if (VAR_20->bt_intval & VAR_15)
  FUNC_6(VAR_19);



 FUNC_3(VAR_19, VAR_11,
     VAR_20->bt_flags != 0 ? VAR_20->bt_flags :
     VAR_10 | VAR_1 | VAR_9);
}
