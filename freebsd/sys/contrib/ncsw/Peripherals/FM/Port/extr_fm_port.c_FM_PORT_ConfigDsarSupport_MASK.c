
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ t_Handle ;
typedef int t_FmPortDsarTablesSizes ;
struct TYPE_3__ {int autoResMaxSizes; } ;
struct TYPE_4__ {TYPE_1__ deepSleepVars; } ;
typedef TYPE_2__ t_FmPort ;
typedef int t_Error ;
struct t_FmPortDsarTablesSizes {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,int *,int) ;

t_Error FUNC_2(t_Handle VAR_1,
                                  t_FmPortDsarTablesSizes *VAR_2)
{
    t_FmPort *VAR_3 = (t_FmPort *)VAR_1;
    VAR_3->deepSleepVars.autoResMaxSizes = FUNC_0(
            sizeof(struct t_FmPortDsarTablesSizes));
    FUNC_1(VAR_3->deepSleepVars.autoResMaxSizes, VAR_2,
           sizeof(struct t_FmPortDsarTablesSizes));
    return VAR_0;
}
