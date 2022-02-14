
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct ath_hal {int dummy; } ;
struct TYPE_6__ {scalar_t__ green_ap_ps_on; } ;
struct TYPE_4__ {scalar_t__ halApmEnable; } ;
struct TYPE_5__ {TYPE_1__ ah_caps; } ;


 TYPE_3__* FUNC_0 (struct ath_hal*) ;
 TYPE_2__* FUNC_1 (struct ath_hal*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (struct ath_hal*,int ,int ) ;
 int FUNC_3 (struct ath_hal*,int ,int) ;

__attribute__((used)) static inline void
FUNC_4(struct ath_hal *VAR_6, int VAR_7, int VAR_8)
{
    if (FUNC_0(VAR_6)->green_ap_ps_on) {
        VAR_7 = VAR_5;
    }
    if (VAR_7 == 0x5) {
        FUNC_2(VAR_6, VAR_0, VAR_3);
    }
    FUNC_3(VAR_6, VAR_2, VAR_7);
    FUNC_3(VAR_6, VAR_1, VAR_7);
    if (FUNC_1(VAR_6)->ah_caps.halApmEnable && (VAR_8 == 0x7)) {
        FUNC_3(VAR_6, VAR_4, 0x3);
    }
    else {
        FUNC_3(VAR_6, VAR_4, VAR_8);
    }

    if (VAR_8 == 0x5) {
        FUNC_2(VAR_6, VAR_0, VAR_3);
    }
}
