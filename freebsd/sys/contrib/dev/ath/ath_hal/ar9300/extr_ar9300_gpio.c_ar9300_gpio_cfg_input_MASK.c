
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
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_1 (struct ath_hal*,int ) ;
 int FUNC_2 (int) ;
 int FUNC_3 (struct ath_hal*,int ,int,int) ;
 int FUNC_4 (struct ath_hal*,int ,int ) ;

HAL_BOOL
FUNC_5(struct ath_hal *VAR_10, u_int32_t VAR_11)
{
    u_int32_t VAR_12;

    FUNC_2(VAR_11 < FUNC_0(VAR_10)->ah_caps.halNumGpioPins);
    if ((VAR_11 == VAR_2) ||
        (VAR_11 > VAR_3))
    {
        return VAR_0;
    }

    if (VAR_11 <= VAR_4) {
        FUNC_4(VAR_10,
            FUNC_1(VAR_10, VAR_5), VAR_6);
    }


    VAR_12 = 2 * VAR_11;

    FUNC_3(VAR_10,
               FUNC_1(VAR_10, VAR_7),
               (VAR_9 << VAR_12),
               (VAR_8 << VAR_12));
    return VAR_1;
}
