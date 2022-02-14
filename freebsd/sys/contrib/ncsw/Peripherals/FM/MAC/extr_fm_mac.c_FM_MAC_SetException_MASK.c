
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ t_Handle ;
struct TYPE_3__ {int (* f_FM_MAC_SetException ) (scalar_t__,int ,int) ;} ;
typedef TYPE_1__ t_FmMacControllerDriver ;
typedef int t_Error ;
typedef int e_FmMacExceptions ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (TYPE_1__*,int ) ;
 int FUNC_2 (scalar_t__,int ,int) ;

t_Error FUNC_3(t_Handle VAR_4, e_FmMacExceptions VAR_5, bool VAR_6)
{
   t_FmMacControllerDriver *VAR_7 = (t_FmMacControllerDriver *)VAR_4;

    FUNC_1(VAR_7, VAR_0);

    if (VAR_7->f_FM_MAC_SetException)
        return VAR_7->f_FM_MAC_SetException(VAR_4, VAR_5, VAR_6);

    FUNC_0(VAR_2, VAR_1, VAR_3);
}
