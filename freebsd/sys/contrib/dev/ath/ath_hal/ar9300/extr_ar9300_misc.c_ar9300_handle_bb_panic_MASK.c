
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u_int32_t ;
struct ath_hal {int dummy; } ;
struct TYPE_2__ {int ah_bb_panic_last_status; } ;


 TYPE_1__* FUNC_0 (struct ath_hal*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct ath_hal*,int ) ;
 int FUNC_2 (struct ath_hal*,int ,int) ;

void
FUNC_3(struct ath_hal *VAR_2)
{
    u_int32_t VAR_3;




    FUNC_0(VAR_2)->ah_bb_panic_last_status = VAR_3 =
        FUNC_1(VAR_2, VAR_1);




    FUNC_2(VAR_2, VAR_1, VAR_3 & ~VAR_0);
}
