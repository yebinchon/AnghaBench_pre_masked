
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int dequeueDcaMode; struct TYPE_3__* p_QmPortalDriverParams; } ;
typedef TYPE_1__ t_QmPortal ;
typedef scalar_t__ t_Handle ;
typedef int t_Error ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__*,int ) ;

t_Error FUNC_1(t_Handle VAR_2, bool VAR_3)
{
    t_QmPortal *VAR_4 = (t_QmPortal *)VAR_2;

    FUNC_0(VAR_4, VAR_0);
    FUNC_0(VAR_4->p_QmPortalDriverParams, VAR_0);

    VAR_4->p_QmPortalDriverParams->dequeueDcaMode = VAR_3;

    return VAR_1;
}
