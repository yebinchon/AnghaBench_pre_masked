
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef scalar_t__ uint8_t ;
typedef int uint64_t ;
typedef size_t uint32_t ;
struct TYPE_11__ {TYPE_2__* p_LowQmPortal; struct TYPE_11__* p_QmPortalDriverParams; int h_Qm; int dqrrSize; struct qman_fq_cb* p_NullCB; scalar_t__ f_RejectedFrame; scalar_t__ f_DfltFrame; int f_LoopDequeueRingCB; int wqId; int poolChannelId; scalar_t__ dedicatedChannel; scalar_t__* poolChannels; scalar_t__ dedicatedChannelHasPrecedenceOverPoolChannels; int specifiedWq; int commandType; int userToken; scalar_t__ dequeueUpToThreeFrames; int pullMode; scalar_t__ fdFq; scalar_t__ dqrr; scalar_t__ dequeueDcaMode; int stashDestQueue; int fdFqLiodn; int dqrrLiodn; int fdLiodnOffset; } ;
typedef TYPE_4__ t_QmPortal ;
struct qman_fq_cb {int fqs; int dc_ern; scalar_t__ ern; scalar_t__ dqrr; int stashDestQueue; int fdFqLiodn; int dqrrLiodn; int liodn; scalar_t__ portalId; } ;
typedef struct qman_fq_cb t_QmInterModulePortalInitParams ;
typedef scalar_t__ t_Handle ;
typedef scalar_t__ t_Error ;
typedef int qmParams ;
typedef int e_DpaaSwPortal ;
struct TYPE_10__ {int addr_ci; int addr_ce; } ;
struct TYPE_8__ {scalar_t__ irq; scalar_t__ cpu; } ;
struct TYPE_9__ {TYPE_3__ addr; TYPE_1__ config; } ;


 int FUNC_0 (int ,char*) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 char* VAR_9 ;
 size_t VAR_10 ;
 size_t VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 size_t VAR_15 ;
 size_t VAR_16 ;
 size_t VAR_17 ;
 size_t FUNC_1 (size_t) ;
 size_t VAR_18 ;
 size_t VAR_19 ;
 size_t VAR_20 ;
 size_t VAR_21 ;
 size_t VAR_22 ;
 size_t FUNC_2 (int ) ;
 size_t FUNC_3 (int ) ;
 size_t FUNC_4 (int ) ;
 size_t FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (int ,struct qman_fq_cb*) ;
 int FUNC_7 (int ,scalar_t__,int ) ;
 int FUNC_8 (int ,scalar_t__,char*) ;
 int FUNC_9 (TYPE_4__*,int ) ;
 int VAR_23 ;
 int FUNC_10 (TYPE_4__*) ;
 scalar_t__ FUNC_11 (int) ;
 scalar_t__ FUNC_12 (int ) ;
 int FUNC_13 (struct qman_fq_cb*,int ,int) ;
 int VAR_24 ;
 scalar_t__ FUNC_14 (TYPE_4__*,size_t,size_t,int ) ;

t_Error FUNC_15(t_Handle VAR_25)
{
    t_QmPortal *VAR_26 = (t_QmPortal *)VAR_25;
    uint32_t VAR_27, VAR_28=0, VAR_29=0;
    t_Error VAR_30;
    t_QmInterModulePortalInitParams VAR_31;

    FUNC_9(VAR_26, VAR_0);
    FUNC_9(VAR_26->p_QmPortalDriverParams, VAR_0);

    FUNC_13(&VAR_31, 0, sizeof(VAR_31));
    VAR_31.portalId = (uint8_t)VAR_26->p_LowQmPortal->config.cpu;
    VAR_31.liodn = VAR_26->p_QmPortalDriverParams->fdLiodnOffset;
    VAR_31.dqrrLiodn = VAR_26->p_QmPortalDriverParams->dqrrLiodn;
    VAR_31.fdFqLiodn = VAR_26->p_QmPortalDriverParams->fdFqLiodn;
    VAR_31.stashDestQueue = VAR_26->p_QmPortalDriverParams->stashDestQueue;
    if ((VAR_30 = FUNC_6(VAR_26->h_Qm, &VAR_31)) != VAR_3)
        FUNC_8(VAR_7, VAR_30, VAR_9);

    VAR_28 = (uint32_t)(((VAR_26->p_LowQmPortal->config.irq == VAR_8) ?
            0 :
            (VAR_12 |
             VAR_13 |
             VAR_14)));
    VAR_28 |= ((VAR_26->p_QmPortalDriverParams->dequeueDcaMode) ? VAR_10 : 0);
    VAR_28 |= (VAR_26->p_QmPortalDriverParams->dqrr)?VAR_15:0;
    VAR_28 |= (VAR_26->p_QmPortalDriverParams->fdFq)?VAR_11:0;

    VAR_26->pullMode = VAR_26->p_QmPortalDriverParams->pullMode;
    if (!VAR_26->pullMode)
    {
        VAR_29 |= (VAR_26->p_QmPortalDriverParams->dequeueUpToThreeFrames) ? VAR_19 : VAR_18;
        VAR_29 |= FUNC_4(VAR_26->p_QmPortalDriverParams->userToken);
        VAR_29 |= FUNC_5(VAR_26->p_QmPortalDriverParams->commandType);
        if (!VAR_26->p_QmPortalDriverParams->specifiedWq)
        {

            VAR_29 |= (VAR_26->p_QmPortalDriverParams->dedicatedChannelHasPrecedenceOverPoolChannels) ? VAR_20 : 0;
            VAR_29 |= (VAR_26->p_QmPortalDriverParams->dedicatedChannel) ? VAR_17 : 0;
            for (VAR_27=0;VAR_27<VAR_16;VAR_27++)
                VAR_29 |= ((VAR_26->p_QmPortalDriverParams->poolChannels[VAR_27]) ?
                     FUNC_1(VAR_27+1) : 0);
        }
        else
        {
            VAR_29 |= VAR_21;
            VAR_29 |= (VAR_26->p_QmPortalDriverParams->dedicatedChannel) ?
                            VAR_22 : FUNC_2(VAR_26->p_QmPortalDriverParams->poolChannelId);
            VAR_29 |= FUNC_3(VAR_26->p_QmPortalDriverParams->wqId);
        }
    }
    if ((VAR_28 & VAR_15) && (VAR_28 & VAR_10))
        VAR_26->f_LoopDequeueRingCB = VAR_5;
    else if ((VAR_28 & VAR_15) && !(VAR_28 & VAR_10))
        VAR_26->f_LoopDequeueRingCB = VAR_6;
    else
        VAR_26->f_LoopDequeueRingCB = VAR_4;

    if ((!VAR_26->f_RejectedFrame) || (!VAR_26->f_DfltFrame))
        FUNC_8(VAR_7, VAR_1, ("f_RejectedFrame or f_DfltFrame callback not provided"));

    VAR_26->p_NullCB = (struct qman_fq_cb *)FUNC_11(sizeof(struct qman_fq_cb));
    if (!VAR_26->p_NullCB)
        FUNC_8(VAR_7, VAR_2, ("FQ Null CB obj!!!"));
    FUNC_13(VAR_26->p_NullCB, 0, sizeof(struct qman_fq_cb));

    VAR_26->p_NullCB->dqrr = VAR_26->f_DfltFrame;
    VAR_26->p_NullCB->ern = VAR_26->f_RejectedFrame;
    VAR_26->p_NullCB->dc_ern = VAR_26->p_NullCB->fqs = VAR_24;

    if (FUNC_14(VAR_26, VAR_28, VAR_29, VAR_26->p_QmPortalDriverParams->dqrrSize) != VAR_3)
    {
        FUNC_8(VAR_7, VAR_2, ("create portal failed"));
    }

    FUNC_7(VAR_26->h_Qm, (t_Handle)VAR_26, (e_DpaaSwPortal)VAR_26->p_LowQmPortal->config.cpu);
    FUNC_10(VAR_26->p_QmPortalDriverParams);
    VAR_26->p_QmPortalDriverParams = ((void*)0);

    FUNC_0(VAR_23, ("Qman-Portal %d @ %p:%p",
                VAR_26->p_LowQmPortal->config.cpu,
                VAR_26->p_LowQmPortal->addr.addr_ce,
                VAR_26->p_LowQmPortal->addr.addr_ci
                ));

    FUNC_0(VAR_23, ("Qman-Portal %d phys @ 0x%016llx:0x%016llx",
                VAR_26->p_LowQmPortal->config.cpu,
                (uint64_t)FUNC_12(VAR_26->p_LowQmPortal->addr.addr_ce),
                (uint64_t)FUNC_12(VAR_26->p_LowQmPortal->addr.addr_ci)
                ));

    return VAR_3;
}
