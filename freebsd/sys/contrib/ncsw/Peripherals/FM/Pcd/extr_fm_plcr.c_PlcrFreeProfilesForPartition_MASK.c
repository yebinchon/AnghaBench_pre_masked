
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef scalar_t__ uint8_t ;
typedef int uint16_t ;
struct TYPE_12__ {scalar_t__ guestId; int msgBody; int msgId; int base; int num; } ;
typedef TYPE_3__ t_FmPcdIpcMsg ;
struct TYPE_13__ {scalar_t__ guestId; TYPE_2__* profiles; struct TYPE_13__* p_FmPcdPlcr; scalar_t__ h_IpcSession; int partPlcrProfilesBase; int partNumOfPlcrProfiles; } ;
typedef TYPE_4__ t_FmPcd ;
typedef TYPE_3__ t_FmIpcResourceAllocParams ;
typedef scalar_t__ t_Error ;
typedef int msg ;
struct TYPE_10__ {scalar_t__ ownerId; } ;
struct TYPE_11__ {TYPE_1__ profilesMng; } ;


 int FUNC_0 (TYPE_4__*) ;
 int FUNC_1 (int ,char*) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (int ,scalar_t__,int ) ;
 int VAR_6 ;
 scalar_t__ FUNC_3 (scalar_t__,scalar_t__*,int,int *,int *,int *,int *) ;
 int FUNC_4 (int ,TYPE_3__*,int) ;
 int FUNC_5 (TYPE_3__*,int ,int) ;

void FUNC_6(t_FmPcd *VAR_7, uint16_t VAR_8, uint16_t VAR_9, uint8_t VAR_10)
{
    int VAR_11 = 0;

    FUNC_0(VAR_7);
    FUNC_0(VAR_7->p_FmPcdPlcr);

    if (VAR_7->h_IpcSession)
    {
        t_FmIpcResourceAllocParams VAR_12;
        t_FmPcdIpcMsg VAR_13;
        t_Error VAR_14;

        FUNC_5(&VAR_13, 0, sizeof(VAR_13));
        FUNC_5(&VAR_12, 0, sizeof(t_FmIpcResourceAllocParams));
        VAR_12.guestId = VAR_7->guestId;
        VAR_12.num = VAR_7->p_FmPcdPlcr->partNumOfPlcrProfiles;
        VAR_12.base = VAR_7->p_FmPcdPlcr->partPlcrProfilesBase;
        VAR_13.msgId = VAR_1;
        FUNC_4(VAR_13.msgBody, &VAR_12, sizeof(t_FmIpcResourceAllocParams));
        VAR_14 = FUNC_3(VAR_7->h_IpcSession,
                                (uint8_t*)&VAR_13,
                                sizeof(VAR_13.msgId) + sizeof(t_FmIpcResourceAllocParams),
                                ((void*)0),
                                ((void*)0),
                                ((void*)0),
                                ((void*)0));
        if (VAR_14 != VAR_0)
            FUNC_2(VAR_3, VAR_14, VAR_5);
        return;
    }
    else if (VAR_7->guestId != VAR_4)
    {
        FUNC_1(VAR_6, ("FM Guest mode, without IPC - can't validate Policer-profiles range!"));
        return;
    }

    for (VAR_11=VAR_8; VAR_11<(VAR_8+VAR_9); VAR_11++)
    {
        if (VAR_7->p_FmPcdPlcr->profiles[VAR_11].profilesMng.ownerId == VAR_10)
           VAR_7->p_FmPcdPlcr->profiles[VAR_11].profilesMng.ownerId = (uint8_t)VAR_2;
        else
            FUNC_1(VAR_6, ("Request for freeing storage profile window which wasn't allocated to this partition"));
    }
}
