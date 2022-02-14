
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ t_Handle ;
struct TYPE_3__ {int (* f_FM_MAC_RemoveHashMacAddr ) (scalar_t__,int *) ;} ;
typedef TYPE_1__ t_FmMacControllerDriver ;
typedef int t_Error ;
typedef int t_EnetAddr ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (TYPE_1__*,int ) ;
 int FUNC_2 (scalar_t__,int *) ;

t_Error FUNC_3 (t_Handle VAR_4, t_EnetAddr *VAR_5)
{
    t_FmMacControllerDriver *VAR_6 = (t_FmMacControllerDriver *)VAR_4;

    FUNC_1(VAR_6, VAR_0);

    if (VAR_6->f_FM_MAC_RemoveHashMacAddr)
        return VAR_6->f_FM_MAC_RemoveHashMacAddr(VAR_4, VAR_5);

    FUNC_0(VAR_2, VAR_1, VAR_3);
}
