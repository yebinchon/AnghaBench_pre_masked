
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ cpu; } ;
struct TYPE_7__ {struct TYPE_7__* p_LowQmPortal; struct TYPE_7__* p_QmPortalDriverParams; scalar_t__ bind_lock; struct TYPE_7__* p_NullCB; TYPE_1__ config; int h_Qm; } ;
typedef TYPE_2__ t_QmPortal ;
typedef scalar_t__ t_Handle ;
typedef int t_Error ;
typedef int e_DpaaSwPortal ;


 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (int ,int *,int ) ;
 int FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (scalar_t__) ;
 int FUNC_5 (TYPE_2__*) ;

t_Error FUNC_6(t_Handle VAR_2)
{
    t_QmPortal *VAR_3 = (t_QmPortal *)VAR_2;

    if (!VAR_3)
       return FUNC_1(VAR_0);

    FUNC_0(VAR_3->p_LowQmPortal);
    FUNC_2(VAR_3->h_Qm, ((void*)0), (e_DpaaSwPortal)VAR_3->p_LowQmPortal->config.cpu);
    FUNC_5(VAR_3);
    if (VAR_3->p_NullCB)
        FUNC_3(VAR_3->p_NullCB);

    if (VAR_3->p_LowQmPortal->bind_lock)
        FUNC_4(VAR_3->p_LowQmPortal->bind_lock);
    if(VAR_3->p_QmPortalDriverParams)
        FUNC_3(VAR_3->p_QmPortalDriverParams);
    FUNC_3(VAR_3->p_LowQmPortal);
    FUNC_3(VAR_3);

    return VAR_1;
}
