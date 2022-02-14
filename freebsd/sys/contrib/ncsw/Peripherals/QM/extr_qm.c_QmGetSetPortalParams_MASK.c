
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_6__ ;
typedef struct TYPE_18__ TYPE_5__ ;
typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
struct TYPE_16__ {int majorRev; scalar_t__ minorRev; } ;
typedef TYPE_3__ t_QmRevisionInfo ;
struct TYPE_17__ {size_t portalId; int stashDestQueue; int liodn; int dqrrLiodn; int fdFqLiodn; } ;
typedef TYPE_4__ t_QmIpcPortalInitParams ;
struct TYPE_18__ {int msgBody; int msgId; } ;
typedef TYPE_5__ t_QmIpcMsg ;
struct TYPE_19__ {scalar_t__ guestId; int stashDestQueue; int liodn; int dqrrLiodn; int fdFqLiodn; size_t portalId; int lock; scalar_t__ h_Session; TYPE_2__* p_QmRegs; } ;
typedef TYPE_6__ t_QmInterModulePortalInitParams ;
typedef TYPE_6__ t_Qm ;
typedef scalar_t__ t_Handle ;
typedef int t_Error ;
struct TYPE_15__ {TYPE_1__* swpConfRegs; } ;
struct TYPE_14__ {int io_cfg; int lio_cfg; } ;


 int FUNC_0 (int ,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (TYPE_6__*,TYPE_3__*) ;
 int FUNC_2 (int ,int ,int ) ;
 int FUNC_3 (TYPE_6__*,int ) ;
 int VAR_7 ;
 int FUNC_4 (int ,int) ;
 int FUNC_5 (scalar_t__,int *,int,int *,int *,int *,int *) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ,TYPE_4__*,int) ;
 int FUNC_9 (TYPE_5__*,int ,int) ;

t_Error FUNC_10(t_Handle VAR_8, t_QmInterModulePortalInitParams *VAR_9)
{
    t_Qm *VAR_10 = (t_Qm *)VAR_8;
    t_QmRevisionInfo VAR_11;
    uint32_t VAR_12,VAR_13;

    FUNC_3(VAR_10, VAR_0);
    FUNC_3(VAR_9, VAR_1);

    if (VAR_10->guestId == VAR_4)
    {
        FUNC_1(VAR_10, &VAR_11);

        if ((VAR_11.majorRev == 1) && (VAR_11.minorRev == 0))
        {
            VAR_12 = (uint32_t)(VAR_9->stashDestQueue << 24) |
                      (VAR_9->liodn << 16) |
                      (VAR_9->dqrrLiodn);
            VAR_13 = (VAR_9->fdFqLiodn);
        }
        else
        {
            VAR_12 = (uint32_t)(VAR_9->liodn << 16) |
                      (VAR_9->dqrrLiodn);
            VAR_13 = (uint32_t)(VAR_9->stashDestQueue << 16) |
                      (VAR_9->fdFqLiodn);
        }

        FUNC_4(VAR_10->p_QmRegs->swpConfRegs[VAR_9->portalId].lio_cfg, VAR_12);
        FUNC_4(VAR_10->p_QmRegs->swpConfRegs[VAR_9->portalId].io_cfg, VAR_13);
    }
    else if (VAR_10->h_Session)
    {
        t_QmIpcMsg VAR_14;
        t_QmIpcPortalInitParams VAR_15;
        t_Error VAR_16;

        FUNC_9(&VAR_14, 0, sizeof(t_QmIpcMsg));
        VAR_15.portalId = VAR_9->portalId;
        VAR_15.stashDestQueue = VAR_9->stashDestQueue;
        VAR_15.liodn = VAR_9->liodn;
        VAR_15.dqrrLiodn = VAR_9->dqrrLiodn;
        VAR_15.fdFqLiodn = VAR_9->fdFqLiodn;
        VAR_14.msgId = VAR_6;
        FUNC_8(VAR_14.msgBody, &VAR_15, sizeof(t_QmIpcPortalInitParams));
        FUNC_6(VAR_10->lock);
        if ((VAR_16 = FUNC_5(VAR_10->h_Session,
                                         (uint8_t*)&VAR_14,
                                         sizeof(VAR_14.msgId) + sizeof(t_QmIpcPortalInitParams),
                                         ((void*)0),
                                         ((void*)0),
                                         ((void*)0),
                                         ((void*)0))) != VAR_2)
        {
            FUNC_7(VAR_10->lock);
            FUNC_2(VAR_3, VAR_16, VAR_5);
        }
        FUNC_7(VAR_10->lock);
    }
    else
        FUNC_0(VAR_7, ("Can't set portal parameters (e.g. liodns). " "probably QM is running in guest-mode with no IPC!"));


    return VAR_2;
}
