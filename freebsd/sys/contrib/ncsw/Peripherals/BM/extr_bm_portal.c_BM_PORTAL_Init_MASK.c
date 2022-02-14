
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int uint64_t ;
typedef int uint32_t ;
typedef scalar_t__ t_Handle ;
typedef scalar_t__ t_Error ;
struct TYPE_10__ {scalar_t__ irq; TYPE_2__* p_BmPortalLow; scalar_t__ cpu; TYPE_5__* p_BmPortalDriverParams; int h_Bm; } ;
typedef TYPE_3__ t_BmPortal ;
typedef int e_DpaaSwPortal ;
struct TYPE_11__ {int hwExtStructsMemAttr; int mask; } ;
struct TYPE_8__ {int addr_ci; int addr_ce; } ;
struct TYPE_9__ {TYPE_1__ addr; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (TYPE_3__*) ;
 int FUNC_1 (int ,scalar_t__,int ) ;
 int FUNC_2 (int ,char*) ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_3 (int ,int ,char*) ;
 int FUNC_4 (TYPE_3__*,int ) ;
 int VAR_8 ;
 int FUNC_5 (TYPE_5__*) ;
 scalar_t__ FUNC_6 (int ) ;
 scalar_t__ FUNC_7 (TYPE_3__*,int ,int *) ;

t_Error FUNC_8(t_Handle VAR_9)
{
    t_BmPortal *VAR_10 = (t_BmPortal *)VAR_9;
    uint32_t VAR_11;

    FUNC_4(VAR_10, VAR_2);

    VAR_11 = (uint32_t)((VAR_10->irq != VAR_7) ? VAR_1 : 0);
    VAR_11 |= ((VAR_10->p_BmPortalDriverParams->hwExtStructsMemAttr & VAR_6) ?
           VAR_0 : 0);

    if (FUNC_7(VAR_10,VAR_11,&VAR_10->p_BmPortalDriverParams->mask)!=VAR_4)
    {
        FUNC_0(VAR_10);
        FUNC_3(VAR_5, VAR_3, ("create portal failed"));
    }
    FUNC_1(VAR_10->h_Bm, (t_Handle)VAR_10, (e_DpaaSwPortal)VAR_10->cpu);

    FUNC_5(VAR_10->p_BmPortalDriverParams);
    VAR_10->p_BmPortalDriverParams = ((void*)0);

    FUNC_2(VAR_8,("Bman-Portal (%d) @ %p:%p\n",
               VAR_10->cpu,
               VAR_10->p_BmPortalLow->addr.addr_ce,
               VAR_10->p_BmPortalLow->addr.addr_ci
               ));

    FUNC_2(VAR_8,("Bman-Portal (%d) @ 0x%016llx:0x%016llx",
               VAR_10->cpu,
               (uint64_t)FUNC_6(VAR_10->p_BmPortalLow->addr.addr_ce),
               (uint64_t)FUNC_6(VAR_10->p_BmPortalLow->addr.addr_ci)
               ));

    return VAR_4;
}
