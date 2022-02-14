
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int pullMode; struct TYPE_3__* p_QmPortalDriverParams; } ;
typedef TYPE_1__ t_QmPortal ;
typedef scalar_t__ t_Handle ;
typedef int t_Error ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_1__*,int ) ;

t_Error FUNC_1(t_Handle VAR_3, bool VAR_4)
{
    t_QmPortal *VAR_5 = (t_QmPortal *)VAR_3;

    FUNC_0(VAR_5, VAR_0);
    FUNC_0(VAR_5->p_QmPortalDriverParams, VAR_1);

    VAR_5->p_QmPortalDriverParams->pullMode = VAR_4;

    return VAR_2;
}
