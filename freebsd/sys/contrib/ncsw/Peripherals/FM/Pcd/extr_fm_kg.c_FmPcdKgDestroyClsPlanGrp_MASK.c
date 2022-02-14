
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef size_t uint8_t ;
typedef int uint32_t ;
typedef scalar_t__ t_Handle ;
typedef int t_FmPcdKgClsPlanGrp ;
struct TYPE_11__ {scalar_t__ error; int msgBody; int msgId; int baseEntry; int sizeOfGrp; int netEnvId; scalar_t__ owners; } ;
typedef TYPE_2__ t_FmPcdIpcReply ;
typedef TYPE_2__ t_FmPcdIpcMsg ;
struct TYPE_12__ {scalar_t__ guestId; int clsPlanBase; int numOfClsPlanEntries; } ;
typedef TYPE_4__ t_FmPcdIpcKgClsPlanParams ;
struct TYPE_13__ {scalar_t__ guestId; TYPE_1__* p_FmPcdKg; int h_IpcSession; } ;
typedef TYPE_5__ t_FmPcd ;
typedef scalar_t__ t_Error ;
typedef int reply ;
typedef int msg ;
typedef int kgAlloc ;
struct TYPE_10__ {size_t emptyClsPlanGrpId; TYPE_2__* clsPlanGrps; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (TYPE_5__*,int ) ;
 int FUNC_1 (TYPE_5__*,int ,size_t) ;
 size_t VAR_4 ;
 int FUNC_2 (scalar_t__,int ,scalar_t__,int ) ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 char* VAR_8 ;
 int FUNC_3 (int ,scalar_t__,char*) ;
 scalar_t__ FUNC_4 (int ,size_t*,int,size_t*,int*,int *,int *) ;
 int FUNC_5 (int ,TYPE_4__*,int) ;
 int FUNC_6 (TYPE_2__*,int ,int) ;

void FUNC_7(t_Handle VAR_9, uint8_t VAR_10)
{
    t_FmPcd *VAR_11 = (t_FmPcd*)VAR_9;
    t_FmPcdIpcKgClsPlanParams VAR_12;
    t_Error VAR_13;
    t_FmPcdIpcMsg VAR_14;
    uint32_t VAR_15;
    t_FmPcdIpcReply VAR_16;


    if (VAR_11->p_FmPcdKg->clsPlanGrps[VAR_10].owners)
    {
        FUNC_3(VAR_6, VAR_0, ("Trying to delete a clsPlan grp that has ports bound to"));
        return;
    }

    FUNC_1(VAR_11, VAR_11->p_FmPcdKg->clsPlanGrps[VAR_10].netEnvId, VAR_4);

    if (VAR_10 == VAR_11->p_FmPcdKg->emptyClsPlanGrpId)
        VAR_11->p_FmPcdKg->emptyClsPlanGrpId = VAR_4;
    else
        FUNC_0(VAR_11, VAR_11->p_FmPcdKg->clsPlanGrps[VAR_10].netEnvId);


    if (VAR_11->guestId == VAR_7)
        FUNC_2(VAR_9,
                             VAR_11->p_FmPcdKg->clsPlanGrps[VAR_10].sizeOfGrp,
                             VAR_11->guestId,
                             VAR_11->p_FmPcdKg->clsPlanGrps[VAR_10].baseEntry);
    else
    {
        FUNC_6(&VAR_16, 0, sizeof(VAR_16));
        FUNC_6(&VAR_14, 0, sizeof(VAR_14));
        VAR_12.guestId = VAR_11->guestId;
        VAR_12.numOfClsPlanEntries = VAR_11->p_FmPcdKg->clsPlanGrps[VAR_10].sizeOfGrp;
        VAR_12.clsPlanBase = VAR_11->p_FmPcdKg->clsPlanGrps[VAR_10].baseEntry;
        VAR_14.msgId = VAR_3;
        FUNC_5(VAR_14.msgBody, &VAR_12, sizeof(VAR_12));
        VAR_15 = sizeof(uint32_t);
        VAR_13 = FUNC_4(VAR_11->h_IpcSession,
                                (uint8_t*)&VAR_14,
                                sizeof(VAR_14.msgId) + sizeof(VAR_12),
                                (uint8_t*)&VAR_16,
                                &VAR_15,
                                ((void*)0),
                                ((void*)0));
        if (VAR_13 != VAR_2)
        {
            FUNC_3(VAR_6, VAR_13, VAR_8);
            return;
        }
        if (VAR_15 != sizeof(uint32_t))
        {
            FUNC_3(VAR_5, VAR_1, ("IPC reply length mismatch"));
            return;
        }
        if ((t_Error)VAR_16.error != VAR_2)
        {
            FUNC_3(VAR_5, VAR_0, ("Free KG clsPlan failed"));
            return;
        }
    }


    FUNC_6(&VAR_11->p_FmPcdKg->clsPlanGrps[VAR_10], 0, sizeof(t_FmPcdKgClsPlanGrp));
}
