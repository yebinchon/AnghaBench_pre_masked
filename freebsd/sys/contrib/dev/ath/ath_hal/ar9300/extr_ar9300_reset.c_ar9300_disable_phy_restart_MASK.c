
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u_int32_t ;
struct ath_hal {int dummy; } ;
struct TYPE_2__ {int ah_phyrestart_disabled; } ;


 TYPE_1__* FUNC_0 (struct ath_hal*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct ath_hal*,int ) ;
 int FUNC_2 (struct ath_hal*,int ,int ) ;

void FUNC_3(struct ath_hal *VAR_2, int VAR_3)
{
    u_int32_t VAR_4;

    VAR_4 = FUNC_1(VAR_2, VAR_0);
    if (VAR_3) {
        VAR_4 &= ~VAR_1;
        FUNC_0(VAR_2)->ah_phyrestart_disabled = 1;
    } else {
        VAR_4 |= VAR_1;
        FUNC_0(VAR_2)->ah_phyrestart_disabled = 0;
    }
    FUNC_2(VAR_2, VAR_0, VAR_4);

    VAR_4 = FUNC_1(VAR_2, VAR_0);
}
