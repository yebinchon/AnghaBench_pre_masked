
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct ath_hal {int dummy; } ;
struct TYPE_3__ {int bt_intval; int bt_nextatim; int bt_nextswba; int bt_nextdba; int bt_nexttbtt; } ;
typedef TYPE_1__ HAL_BEACON_TIMERS ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct ath_hal*,int ,int ) ;

void
FUNC_1(struct ath_hal *VAR_5, const HAL_BEACON_TIMERS *VAR_6)
{

 FUNC_0(VAR_5, VAR_1, VAR_6->bt_nexttbtt);
 FUNC_0(VAR_5, VAR_2, VAR_6->bt_nextdba);
 FUNC_0(VAR_5, VAR_3, VAR_6->bt_nextswba);
 FUNC_0(VAR_5, VAR_4, VAR_6->bt_nextatim);



 FUNC_0(VAR_5, VAR_0, VAR_6->bt_intval);
}
