
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ t_Handle ;
struct TYPE_3__ {int (* f_FM_MAC_Resume ) (scalar_t__) ;} ;
typedef TYPE_1__ t_FmMacControllerDriver ;
typedef int t_Error ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__*,int ) ;
 int FUNC_1 (scalar_t__) ;

t_Error FUNC_2 (t_Handle VAR_2)
{
    t_FmMacControllerDriver *VAR_3 = (t_FmMacControllerDriver *)VAR_2;

    FUNC_0(VAR_3, VAR_0);

    if (VAR_3->f_FM_MAC_Resume)
        return VAR_3->f_FM_MAC_Resume(VAR_2);

    return VAR_1;
}
