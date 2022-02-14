
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef scalar_t__ uint8_t ;
typedef int uint32_t ;
typedef scalar_t__ uint16_t ;
struct TYPE_13__ {scalar_t__ guestId; scalar_t__ base; scalar_t__* msgBody; struct TYPE_13__* replyBody; int msgId; int num; } ;
typedef TYPE_3__ t_FmPcdIpcReply ;
typedef TYPE_3__ t_FmPcdIpcMsg ;
struct TYPE_14__ {scalar_t__ guestId; scalar_t__ partPlcrProfilesBase; int h_Spinlock; TYPE_2__* profiles; struct TYPE_14__* p_FmPcdPlcr; scalar_t__ h_IpcSession; int partNumOfPlcrProfiles; } ;
typedef TYPE_5__ t_FmPcd ;
typedef TYPE_3__ t_FmIpcResourceAllocParams ;
typedef scalar_t__ t_Error ;
typedef int reply ;
typedef int msg ;
struct TYPE_11__ {scalar_t__ ownerId; } ;
struct TYPE_12__ {TYPE_1__ profilesMng; } ;


 int FUNC_0 (TYPE_5__*) ;
 int FUNC_1 (int ,char*) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int FUNC_2 (int ,scalar_t__,int ) ;
 int VAR_7 ;
 scalar_t__ FUNC_3 (scalar_t__,scalar_t__*,int,scalar_t__*,int*,int *,int *) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,int) ;
 int FUNC_6 (scalar_t__*,TYPE_3__*,int) ;
 int FUNC_7 (TYPE_3__*,int ,int) ;

uint16_t FUNC_8(t_FmPcd *VAR_8, uint16_t VAR_9, uint16_t VAR_10, uint8_t VAR_11)
{
    uint32_t VAR_12;
    uint16_t VAR_13 = 0;
    int VAR_14 = 0;

    FUNC_0(VAR_8);
    FUNC_0(VAR_8->p_FmPcdPlcr);

    if (!VAR_10)
        return 0;

    if ((VAR_10 > VAR_2) ||
        (VAR_9 + VAR_10 > VAR_2))
        return (uint16_t)VAR_3;

    if (VAR_8->h_IpcSession)
    {
        t_FmIpcResourceAllocParams VAR_15;
        t_FmPcdIpcMsg VAR_16;
        t_FmPcdIpcReply VAR_17;
        t_Error VAR_18;
        uint32_t VAR_19;

        FUNC_7(&VAR_16, 0, sizeof(VAR_16));
        FUNC_7(&VAR_17, 0, sizeof(VAR_17));
        FUNC_7(&VAR_15, 0, sizeof(t_FmIpcResourceAllocParams));
        VAR_15.guestId = VAR_8->guestId;
        VAR_15.num = VAR_8->p_FmPcdPlcr->partNumOfPlcrProfiles;
        VAR_15.base = VAR_8->p_FmPcdPlcr->partPlcrProfilesBase;
        VAR_16.msgId = VAR_1;
        FUNC_6(VAR_16.msgBody, &VAR_15, sizeof(t_FmIpcResourceAllocParams));
        VAR_19 = sizeof(uint32_t) + sizeof(uint16_t);
        VAR_18 = FUNC_3(VAR_8->h_IpcSession,
                                (uint8_t*)&VAR_16,
                                sizeof(VAR_16.msgId) + sizeof(t_FmIpcResourceAllocParams),
                                (uint8_t*)&VAR_17,
                                &VAR_19,
                                ((void*)0),
                                ((void*)0));
        if ((VAR_18 != VAR_0) ||
            (VAR_19 != (sizeof(uint32_t) + sizeof(uint16_t))))
        {
            FUNC_2(VAR_4, VAR_18, VAR_6);
            return (uint16_t)VAR_3;
        }
        else
            FUNC_6((uint8_t*)&VAR_8->p_FmPcdPlcr->partPlcrProfilesBase, VAR_17.replyBody, sizeof(uint16_t));
        if (VAR_8->p_FmPcdPlcr->partPlcrProfilesBase == (uint16_t)VAR_3)
        {
            FUNC_2(VAR_4, VAR_18, VAR_6);
            return (uint16_t)VAR_3;
        }
    }
    else if (VAR_8->guestId != VAR_5)
    {
        FUNC_1(VAR_7, ("FM Guest mode, without IPC - can't validate Policer-profiles range!"));
        return (uint16_t)VAR_3;
    }

    VAR_12 = FUNC_4(VAR_8->h_Spinlock);
    for (VAR_14=VAR_9; VAR_14<(VAR_9+VAR_10); VAR_14++)
        if (VAR_8->p_FmPcdPlcr->profiles[VAR_14].profilesMng.ownerId == (uint8_t)VAR_3)
            VAR_13++;
        else
            break;

    if (VAR_13 == VAR_10)
        for (VAR_14=VAR_9; VAR_14<(VAR_9+VAR_10); VAR_14++)
            VAR_8->p_FmPcdPlcr->profiles[VAR_14].profilesMng.ownerId = VAR_11;
    else
    {
        FUNC_5(VAR_8->h_Spinlock, VAR_12);
        return (uint16_t)VAR_3;
    }
    FUNC_5(VAR_8->h_Spinlock, VAR_12);

    return VAR_9;
}
