
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ t_Handle ;
struct TYPE_3__ {int resetOnInit; int (* f_FM_MAC_ConfigResetOnInit ) (scalar_t__,int) ;} ;
typedef TYPE_1__ t_FmMacControllerDriver ;
typedef int t_Error ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__*,int ) ;
 int FUNC_1 (scalar_t__,int) ;

t_Error FUNC_2 (t_Handle VAR_2, bool VAR_3)
{
    t_FmMacControllerDriver *VAR_4 = (t_FmMacControllerDriver *)VAR_2;

    FUNC_0(VAR_4, VAR_0);

    if (VAR_4->f_FM_MAC_ConfigResetOnInit)
        return VAR_4->f_FM_MAC_ConfigResetOnInit(VAR_2, VAR_3);

    VAR_4->resetOnInit = VAR_3;

    return VAR_1;
}
