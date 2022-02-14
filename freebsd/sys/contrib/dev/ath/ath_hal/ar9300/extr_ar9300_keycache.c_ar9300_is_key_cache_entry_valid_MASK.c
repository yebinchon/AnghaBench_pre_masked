
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u_int32_t ;
typedef scalar_t__ u_int16_t ;
struct ath_hal {int dummy; } ;
struct TYPE_3__ {scalar_t__ halKeyCacheSize; } ;
struct TYPE_4__ {TYPE_1__ ah_caps; } ;
typedef int HAL_BOOL ;


 int VAR_0 ;
 TYPE_2__* FUNC_0 (struct ath_hal*) ;
 int VAR_1 ;
 int FUNC_1 (scalar_t__) ;
 int VAR_2 ;
 int FUNC_2 (struct ath_hal*,int ) ;

HAL_BOOL
FUNC_3(struct ath_hal *VAR_3, u_int16_t VAR_4)
{
    if (VAR_4 < FUNC_0(VAR_3)->ah_caps.halKeyCacheSize) {
        u_int32_t VAR_5 = FUNC_2(VAR_3, FUNC_1(VAR_4));
        if (VAR_5 & VAR_2) {
            return VAR_1;
        }
    }
    return VAR_0;
}
