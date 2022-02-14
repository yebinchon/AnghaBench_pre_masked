
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef struct bm_portal* t_Handle ;
struct TYPE_6__ {struct TYPE_6__* h_Bm; int irq; scalar_t__ swPortalId; int ciBaseAddress; int ceBaseAddress; } ;
typedef TYPE_2__ t_BmPortalParam ;
struct TYPE_5__ {void* addr_ci; void* addr_ce; } ;
struct bm_portal {int cpu; int mask; struct bm_portal* p_BmPortalDriverParams; int hwExtStructsMemAttr; TYPE_2__* h_Bm; int irq; TYPE_1__ addr; struct bm_portal* p_BmPortalLow; } ;
typedef struct bm_portal t_BmPortalDriverParams ;
typedef struct bm_portal t_BmPortal ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int ,char*) ;
 int FUNC_1 (TYPE_2__*,int ,int *) ;
 void* FUNC_2 (int ) ;
 int FUNC_3 (struct bm_portal*) ;
 scalar_t__ FUNC_4 (int) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (struct bm_portal*,int ,int) ;

t_Handle FUNC_7(t_BmPortalParam *VAR_4)
{
    t_BmPortal *VAR_5;

    FUNC_1(VAR_4, VAR_1, ((void*)0));
    FUNC_1(VAR_4->h_Bm, VAR_1, ((void*)0));

    VAR_5 = (t_BmPortal *)FUNC_4(sizeof(t_BmPortal));
    if (!VAR_5)
    {
        FUNC_0(VAR_3, VAR_2, ("Bm Portal obj!!!"));
        return ((void*)0);
    }
    FUNC_6(VAR_5, 0, sizeof(t_BmPortal));

    VAR_5->p_BmPortalLow = (struct bm_portal *)FUNC_4(sizeof(struct bm_portal));
    if (!VAR_5->p_BmPortalLow)
    {
        FUNC_3(VAR_5);
        FUNC_0(VAR_3, VAR_2, ("Low bm portal obj!!!"));
        return ((void*)0);
    }
    FUNC_6(VAR_5->p_BmPortalLow, 0, sizeof(struct bm_portal));

    VAR_5->p_BmPortalDriverParams = (t_BmPortalDriverParams *)FUNC_4(sizeof(t_BmPortalDriverParams));
    if (!VAR_5->p_BmPortalDriverParams)
    {
        FUNC_3(VAR_5);
        FUNC_3(VAR_5->p_BmPortalLow);
        FUNC_0(VAR_3, VAR_2, ("Bm Portal driver parameters"));
        return ((void*)0);
    }
    FUNC_6(VAR_5->p_BmPortalDriverParams, 0, sizeof(t_BmPortalDriverParams));

    VAR_5->p_BmPortalLow->addr.addr_ce = FUNC_2(VAR_4->ceBaseAddress);
    VAR_5->p_BmPortalLow->addr.addr_ci = FUNC_2(VAR_4->ciBaseAddress);
    VAR_5->cpu = (int)VAR_4->swPortalId;
    VAR_5->irq = VAR_4->irq;

    VAR_5->h_Bm = VAR_4->h_Bm;

    VAR_5->p_BmPortalDriverParams->hwExtStructsMemAttr = VAR_0;
    FUNC_5(&VAR_5->p_BmPortalDriverParams->mask);

    return VAR_5;
}
