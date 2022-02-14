
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u_int32_t ;
struct ath_hal {int dummy; } ;
struct TYPE_3__ {int halNumGpioPins; } ;
struct TYPE_4__ {TYPE_1__ ah_caps; } ;
typedef int HAL_BOOL ;


 int VAR_0 ;
 TYPE_2__* FUNC_0 (struct ath_hal*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int) ;
 int VAR_4 ;
 int FUNC_2 (struct ath_hal*,int ) ;
 int FUNC_3 (int) ;
 int FUNC_4 (struct ath_hal*,int ,int,int ) ;

HAL_BOOL
FUNC_5(struct ath_hal *VAR_5, u_int32_t VAR_6, u_int32_t VAR_7)
{
    FUNC_3(VAR_6 < FUNC_0(VAR_5)->ah_caps.halNumGpioPins);
    if ((VAR_6 == VAR_3) ||
        (VAR_6 == VAR_2))
    {
        return VAR_0;
    }
    FUNC_4(VAR_5, FUNC_2(VAR_5, VAR_4),
        ((VAR_7 & 1) << VAR_6), FUNC_1(VAR_6));

    return VAR_1;
}
