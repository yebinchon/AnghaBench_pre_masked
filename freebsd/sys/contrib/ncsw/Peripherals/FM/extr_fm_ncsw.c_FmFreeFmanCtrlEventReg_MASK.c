
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef size_t uint8_t ;
typedef scalar_t__ t_Handle ;
struct TYPE_5__ {size_t* msgBody; int msgId; } ;
typedef TYPE_1__ t_FmIpcMsg ;
struct TYPE_6__ {scalar_t__ guestId; int * usedEventRegs; scalar_t__* h_IpcSessions; } ;
typedef TYPE_2__ t_Fm ;
typedef scalar_t__ t_Error ;
typedef int msg ;
typedef int eventId ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 char* VAR_7 ;
 int FUNC_0 (int ,scalar_t__,char*) ;
 int FUNC_1 (TYPE_2__*,int ) ;
 scalar_t__ FUNC_2 (scalar_t__,size_t*,int,int *,int *,int *,int *) ;
 int FUNC_3 (TYPE_1__*,int ,int) ;

void FUNC_4(t_Handle VAR_8, uint8_t VAR_9)
{
    t_Fm *VAR_10 = (t_Fm*)VAR_8;

    FUNC_1(VAR_10, VAR_0);

    if ((VAR_10->guestId != VAR_6) &&
        VAR_10->h_IpcSessions[0])
    {
        t_Error VAR_11;
        t_FmIpcMsg VAR_12;

        FUNC_3(&VAR_12, 0, sizeof(VAR_12));
        VAR_12.msgId = VAR_4;
        VAR_12.msgBody[0] = VAR_9;
        VAR_11 = FUNC_2(VAR_10->h_IpcSessions[0],
                                (uint8_t*)&VAR_12,
                                sizeof(VAR_12.msgId)+sizeof(VAR_9),
                                ((void*)0),
                                ((void*)0),
                                ((void*)0),
                                ((void*)0));
        if (VAR_11 != VAR_2)
            FUNC_0(VAR_5, VAR_11, VAR_7);
        return;
    }
    else if (VAR_10->guestId != VAR_6)
    {
        FUNC_0(VAR_5, VAR_1,
                     ("running in guest-mode without IPC!"));
        return;
    }

    ((t_Fm*)VAR_8)->usedEventRegs[VAR_9] = VAR_3;
}
