
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
typedef scalar_t__ t_Handle ;
struct TYPE_6__ {int congestionGroupId; int msgBody; int msgId; int priorityBitMap; } ;
typedef TYPE_1__ t_FmIpcSetCongestionGroupPfcPriority ;
typedef TYPE_1__ t_FmIpcMsg ;
struct TYPE_7__ {scalar_t__ guestId; scalar_t__* h_IpcSessions; scalar_t__ baseAddr; } ;
typedef TYPE_3__ t_Fm ;
typedef scalar_t__ t_Error ;
typedef int msg ;


 int FUNC_0 (scalar_t__) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 char* VAR_9 ;
 int FUNC_1 (int ,scalar_t__,char*) ;
 scalar_t__ FUNC_2 (scalar_t__,int *,int,int *,int *,int *,int *) ;
 int FUNC_3 (int*,int,int ,int) ;
 int FUNC_4 (int ,TYPE_1__*,int) ;
 int FUNC_5 (TYPE_1__*,int ,int) ;

t_Error FUNC_6(t_Handle VAR_10,
                                        uint32_t VAR_11,
                                        uint8_t VAR_12)
{
    t_Fm *VAR_13 = (t_Fm *)VAR_10;
    uint32_t VAR_14;

    FUNC_0(VAR_10);

    if (VAR_11 > VAR_4)
        FUNC_1(VAR_6, VAR_1,
                     ("Congestion group ID bigger than %d",
                      VAR_4));

    if (VAR_13->guestId == VAR_8)
    {
        FUNC_0(VAR_13->baseAddr);
        VAR_14 = (VAR_4 - 1 - VAR_11) / 4;
        FUNC_3((uint32_t *)((VAR_13->baseAddr+VAR_3)),
                                               VAR_11,
                                               VAR_12,
                                               VAR_14);
    }
    else if (VAR_13->h_IpcSessions[0])
    {
        t_Error VAR_15;
        t_FmIpcMsg VAR_16;
        t_FmIpcSetCongestionGroupPfcPriority VAR_17;

        FUNC_5(&VAR_16, 0, sizeof(VAR_16));
        FUNC_5(&VAR_17, 0, sizeof(t_FmIpcSetCongestionGroupPfcPriority));
        VAR_17.congestionGroupId = VAR_11;
        VAR_17.priorityBitMap = VAR_12;

        VAR_16.msgId = VAR_5;
        FUNC_4(VAR_16.msgBody, &VAR_17, sizeof(t_FmIpcSetCongestionGroupPfcPriority));

        VAR_15 = FUNC_2(VAR_13->h_IpcSessions[0],
                                (uint8_t*)&VAR_16,
                                sizeof(VAR_16.msgId),
                                ((void*)0),
                                ((void*)0),
                                ((void*)0),
                                ((void*)0));
        if (VAR_15 != VAR_2)
            FUNC_1(VAR_7, VAR_15, VAR_9);
    }
    else
        FUNC_1(VAR_6, VAR_0, ("guest without IPC!"));

    return VAR_2;
}
