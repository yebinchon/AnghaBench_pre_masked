
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ t_Handle ;
struct TYPE_3__ {int plcrAutoRefresh; struct TYPE_3__* p_FmPcdDriverParam; int h_Fm; struct TYPE_3__* p_FmPcdPlcr; } ;
typedef TYPE_1__ t_FmPcd ;
typedef int t_Error ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int VAR_3 ;
 int FUNC_1 (int ,int ,char*) ;
 int FUNC_2 (TYPE_1__*,int ) ;

t_Error FUNC_3(t_Handle VAR_4, bool VAR_5)
{
   t_FmPcd *VAR_6 = (t_FmPcd*)VAR_4;

    FUNC_2(VAR_6, VAR_0);
    FUNC_2(VAR_6->p_FmPcdDriverParam, VAR_0);
    FUNC_2(VAR_6->p_FmPcdPlcr, VAR_0);

    if (!FUNC_0(VAR_6->h_Fm))
        FUNC_1(VAR_3, VAR_1, ("FM_PCD_ConfigPlcrAutoRefreshMode - guest mode!"));

    VAR_6->p_FmPcdDriverParam->plcrAutoRefresh = VAR_5;

    return VAR_2;
}
