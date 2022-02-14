
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


 TYPE_2__* FUNC_0 (struct ath_hal*) ;
 int VAR_0 ;
 int FUNC_1 (struct ath_hal*,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (struct ath_hal*,int ) ;
 int FUNC_3 (struct ath_hal*,int ,int) ;

void
FUNC_4(struct ath_hal *VAR_3, u_int32_t VAR_4,
                         u_int32_t VAR_5)
{
    u_int32_t VAR_6;

    VAR_6 = (1 << FUNC_0(VAR_3)->ah_caps.halNumGpioPins) - 1;
    FUNC_3(VAR_3, FUNC_1(VAR_3, VAR_0), VAR_6 & VAR_4);
    FUNC_3(VAR_3, FUNC_1(VAR_3, VAR_1),
                 VAR_5 << VAR_2);
    FUNC_2(VAR_3, FUNC_1(VAR_3, VAR_1));

}
