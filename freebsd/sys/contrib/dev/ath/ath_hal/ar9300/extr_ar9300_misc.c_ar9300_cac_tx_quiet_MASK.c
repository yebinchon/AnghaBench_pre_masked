
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct ath_hal {int dummy; } ;
struct TYPE_2__ {scalar_t__ ah_cac_quiet_enabled; } ;
typedef scalar_t__ HAL_BOOL ;


 TYPE_1__* FUNC_0 (struct ath_hal*) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (struct ath_hal*,int ) ;
 int FUNC_3 (struct ath_hal*,int ,int) ;

void
FUNC_4(struct ath_hal *VAR_4, HAL_BOOL VAR_5)
{
    uint32_t VAR_6, VAR_7;

    VAR_6 = FUNC_2(VAR_4, FUNC_1(VAR_2));
    VAR_7 = FUNC_2(VAR_4, FUNC_1(VAR_3));
    FUNC_0(VAR_4)->ah_cac_quiet_enabled = VAR_5;

    if (VAR_5) {
        FUNC_3(VAR_4, FUNC_1(VAR_2),
                     VAR_6 | VAR_0);
        FUNC_3(VAR_4, FUNC_1(VAR_3),
                     VAR_7 & ~VAR_1);
    } else {
        FUNC_3(VAR_4, FUNC_1(VAR_2),
                     VAR_6 & ~VAR_0);
        FUNC_3(VAR_4, FUNC_1(VAR_3),
                     VAR_7 | VAR_1);
    }
}
