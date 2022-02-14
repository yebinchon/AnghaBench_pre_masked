
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u_int32_t ;
struct ath_hal {int dummy; } ;
struct TYPE_2__ {scalar_t__ ah_devid; } ;


 TYPE_1__* FUNC_0 (struct ath_hal*) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

u_int32_t
FUNC_1(struct ath_hal *VAR_4)
{
    u_int32_t VAR_5 = (1 << (VAR_2 + 1) ) - 1;

    if (FUNC_0(VAR_4)->ah_devid == VAR_0) {
        VAR_5 = (1 << VAR_3) - 1;
        VAR_5 &= ~(1 << VAR_1);
    }
    return VAR_5;
}
