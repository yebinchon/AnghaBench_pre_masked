
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ uint8_t ;
typedef int uint32_t ;
typedef int t_Error ;
struct TYPE_7__ {int flags; int p_BmPortalLow; int irq; int depletionPoolsTable; scalar_t__ rcrCons; scalar_t__ rcrProd; scalar_t__ slowpoll; struct bman_depletion* pools; TYPE_1__* cbs; } ;
typedef TYPE_2__ t_BmPortal ;
struct bman_depletion {int dummy; } ;
typedef int e_BmPortalRcrConsumeMode ;
typedef int e_BmPortalProduceMode ;
struct TYPE_6__ {int * f_BmPrefetchCb; int f_BmUpdateCb; int f_BmCommitCb; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 size_t VAR_7 ;
 int FUNC_0 (int ) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_1 (int ,int ,char*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (int ,int ,TYPE_2__*) ;
 int FUNC_5 (int ,scalar_t__,int ) ;
 int FUNC_6 (int ,int) ;
 int FUNC_7 (int ,int) ;
 int FUNC_8 (int ,int) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int ) ;
 scalar_t__ FUNC_11 (int ) ;
 int * VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_12 (int ) ;
 int FUNC_13 (int ) ;
 scalar_t__ FUNC_14 (int ,int,int) ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int FUNC_15 (struct bman_depletion*) ;





 int FUNC_16 (int *,int ,int) ;
 int VAR_17 ;

__attribute__((used)) static t_Error FUNC_17(t_BmPortal *VAR_18,
                                  uint32_t VAR_19,
                                  const struct bman_depletion *VAR_20)
{
    int VAR_21 = 0;
    uint8_t VAR_22 = 0;
    e_BmPortalRcrConsumeMode VAR_23;
    e_BmPortalProduceMode VAR_24;

    VAR_24 = 130;
    VAR_23 = (VAR_19 & VAR_0) ? 129 : 128;

    switch (VAR_24)
    {
        case 131:
            VAR_18->cbs[VAR_7].f_BmCommitCb = VAR_15;
            break;
        case 132:
            VAR_18->cbs[VAR_7].f_BmCommitCb = VAR_14;
            break;
        case 130:
            VAR_18->cbs[VAR_7].f_BmCommitCb = VAR_16;
            break;
    }
    switch (VAR_23)
    {
        case 128:
            VAR_18->cbs[VAR_7].f_BmUpdateCb = VAR_13;
            VAR_18->cbs[VAR_7].f_BmPrefetchCb = ((void*)0);
            break;
        case 129:
            VAR_18->cbs[VAR_7].f_BmUpdateCb = VAR_12;
            VAR_18->cbs[VAR_7].f_BmPrefetchCb = VAR_11;
            break;
    }

    if (FUNC_14(VAR_18->p_BmPortalLow, VAR_24, VAR_23)) {
        FUNC_1(VAR_10, VAR_8, ("RCR initialization failed"));
        goto fail_rcr;
    }
    if (FUNC_11(VAR_18->p_BmPortalLow)) {
        FUNC_1(VAR_10, VAR_8, ("MC initialization failed"));
        goto fail_mc;
    }
    VAR_18->pools[0] = *VAR_20;
    FUNC_15(&VAR_18->pools[1]);
    while (VAR_22 < VAR_4) {


        FUNC_5(VAR_18->p_BmPortalLow, VAR_22, 0);
        VAR_22++;
    }
    VAR_18->flags = VAR_19;
    VAR_18->slowpoll = 0;
    VAR_18->rcrProd = VAR_18->rcrCons = 0;
    FUNC_16(&VAR_18->depletionPoolsTable, 0, sizeof(VAR_18->depletionPoolsTable));

    FUNC_6(VAR_18->p_BmPortalLow, 0xffffffff);
    FUNC_8(VAR_18->p_BmPortalLow, 0xffffffff);
    FUNC_7(VAR_18->p_BmPortalLow, VAR_6 | VAR_5);
    if (VAR_19 & VAR_1)
    {
        FUNC_4(VAR_18->irq, VAR_17, VAR_18);
        FUNC_2(VAR_18->irq);

        FUNC_9(VAR_18->p_BmPortalLow);
    } else

        VAR_19 &= ~VAR_3;

    FUNC_6(VAR_18->p_BmPortalLow, (uint32_t)~VAR_6);
    if (!(VAR_19 & VAR_2) ||
        !(VAR_19 & VAR_3))
        VAR_21 = FUNC_13(VAR_18->p_BmPortalLow);
    if (VAR_21) {
        FUNC_1(VAR_10, VAR_8, ("RCR unclean, need recovery"));
        goto fail_rcr_empty;
    }
    FUNC_6(VAR_18->p_BmPortalLow, 0);
    return VAR_9;
fail_rcr_empty:
    FUNC_10(VAR_18->p_BmPortalLow);
fail_mc:
    FUNC_12(VAR_18->p_BmPortalLow);
fail_rcr:
    FUNC_3(VAR_18);
    return FUNC_0(VAR_8);
}
