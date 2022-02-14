
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int fdFqDrop; struct TYPE_5__* p_QmPortalDriverParams; int fdFqHighPri; int fdFq; int dqrrHighPri; int dqrr; int eqcrHighPri; int eqcr; int fdFqLiodn; int dqrrLiodn; int stashDestQueue; } ;
typedef TYPE_1__ t_QmPortalStashParam ;
typedef TYPE_1__ t_QmPortal ;
typedef scalar_t__ t_Handle ;
typedef int t_Error ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_1__*,int ) ;

t_Error FUNC_1(t_Handle VAR_3, t_QmPortalStashParam *VAR_4)
{
    t_QmPortal *VAR_5 = (t_QmPortal *)VAR_3;

    FUNC_0(VAR_5, VAR_0);
    FUNC_0(VAR_5->p_QmPortalDriverParams, VAR_1);
    FUNC_0(VAR_4, VAR_1);

    VAR_5->p_QmPortalDriverParams->stashDestQueue = VAR_4->stashDestQueue;
    VAR_5->p_QmPortalDriverParams->dqrrLiodn = VAR_4->dqrrLiodn;
    VAR_5->p_QmPortalDriverParams->fdFqLiodn = VAR_4->fdFqLiodn;
    VAR_5->p_QmPortalDriverParams->eqcr = VAR_4->eqcr;
    VAR_5->p_QmPortalDriverParams->eqcrHighPri = VAR_4->eqcrHighPri;
    VAR_5->p_QmPortalDriverParams->dqrr = VAR_4->dqrr;
    VAR_5->p_QmPortalDriverParams->dqrrHighPri = VAR_4->dqrrHighPri;
    VAR_5->p_QmPortalDriverParams->fdFq = VAR_4->fdFq;
    VAR_5->p_QmPortalDriverParams->fdFqHighPri = VAR_4->fdFqHighPri;
    VAR_5->p_QmPortalDriverParams->fdFqDrop = VAR_4->fdFqDrop;

    return VAR_2;
}
