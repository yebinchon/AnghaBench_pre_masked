
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef size_t uint8_t ;
typedef int uint32_t ;
typedef scalar_t__ t_Handle ;
struct TYPE_6__ {int error; scalar_t__ replyBody; int msgId; } ;
typedef TYPE_1__ t_FmIpcReply ;
typedef TYPE_1__ t_FmIpcMsg ;
struct TYPE_7__ {scalar_t__ guestId; scalar_t__* usedEventRegs; scalar_t__* h_IpcSessions; } ;
typedef TYPE_3__ t_Fm ;
typedef int t_Error ;
typedef int reply ;
typedef int msg ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 size_t VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 char* VAR_10 ;
 int FUNC_0 (int ,int ,char*) ;
 int FUNC_1 (TYPE_3__*,int ) ;
 scalar_t__ VAR_11 ;
 int FUNC_2 (scalar_t__,size_t*,int,size_t*,int*,int *,int *) ;
 int FUNC_3 (TYPE_1__*,int ,int) ;

t_Error FUNC_4(t_Handle VAR_12, uint8_t *VAR_13)
{
    t_Fm *VAR_14 = (t_Fm*)VAR_12;
    uint8_t VAR_15;

    FUNC_1(VAR_14, VAR_1);

    if ((VAR_14->guestId != VAR_9) &&
        VAR_14->h_IpcSessions[0])
    {
        t_Error VAR_16;
        t_FmIpcMsg VAR_17;
        t_FmIpcReply VAR_18;
        uint32_t VAR_19;

        FUNC_3(&VAR_17, 0, sizeof(VAR_17));
        FUNC_3(&VAR_18, 0, sizeof(VAR_18));
        VAR_17.msgId = VAR_5;
        VAR_19 = sizeof(uint32_t) + sizeof(uint8_t);
        if ((VAR_16 = FUNC_2(VAR_14->h_IpcSessions[0],
                                     (uint8_t*)&VAR_17,
                                     sizeof(VAR_17.msgId),
                                     (uint8_t*)&VAR_18,
                                     &VAR_19,
                                     ((void*)0),
                                     ((void*)0))) != VAR_4)
            FUNC_0(VAR_7, VAR_16, VAR_10);

        if (VAR_19 != (sizeof(uint32_t) + sizeof(uint8_t)))
            FUNC_0(VAR_7, VAR_2, ("IPC reply length mismatch"));

        *VAR_13 = *(uint8_t*)(VAR_18.replyBody);

        return (t_Error)(VAR_18.error);
    }
    else if (VAR_14->guestId != VAR_9)
        FUNC_0(VAR_8, VAR_3,
                     ("running in guest-mode without IPC!"));

    for (VAR_15=0;VAR_15<VAR_6;VAR_15++)
        if (!VAR_14->usedEventRegs[VAR_15])
        {
            VAR_14->usedEventRegs[VAR_15] = VAR_11;
            *VAR_13 = VAR_15;
            break;
        }

    if (VAR_15==VAR_6)
        FUNC_0(VAR_7, VAR_0, ("No resource - FMan controller event register."));

    return VAR_4;
}
