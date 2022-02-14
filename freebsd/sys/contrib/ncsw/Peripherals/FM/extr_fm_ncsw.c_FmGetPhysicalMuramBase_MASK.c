
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef scalar_t__ uint8_t ;
typedef int uint32_t ;
typedef scalar_t__ t_Handle ;
struct TYPE_8__ {int low; scalar_t__ high; } ;
typedef TYPE_1__ t_FmPhysAddr ;
struct TYPE_9__ {int replyBody; int msgId; } ;
typedef TYPE_2__ t_FmIpcReply ;
struct TYPE_10__ {int low; scalar_t__ high; } ;
typedef TYPE_3__ t_FmIpcPhysAddr ;
typedef TYPE_2__ t_FmIpcMsg ;
struct TYPE_11__ {int fmMuramPhysBaseAddr; scalar_t__ guestId; scalar_t__* h_IpcSessions; } ;
typedef TYPE_5__ t_Fm ;
typedef scalar_t__ t_Error ;
typedef int reply ;
typedef int msg ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 char* VAR_6 ;
 int FUNC_1 (int ,scalar_t__,char*) ;
 scalar_t__ FUNC_2 (scalar_t__,scalar_t__*,int,scalar_t__*,int*,int *,int *) ;
 int FUNC_3 (scalar_t__*,int ,int) ;
 int FUNC_4 (TYPE_2__*,int ,int) ;

void FUNC_5(t_Handle VAR_7, t_FmPhysAddr *VAR_8)
{
    t_Fm *VAR_9 = (t_Fm*)VAR_7;

    if (VAR_9->fmMuramPhysBaseAddr)
    {

        VAR_8->low = (uint32_t)VAR_9->fmMuramPhysBaseAddr;
        VAR_8->high = (uint8_t)((VAR_9->fmMuramPhysBaseAddr & 0x000000ff00000000LL) >> 32);
        return;
    }

    FUNC_0(VAR_9->guestId != VAR_5);

    if (VAR_9->h_IpcSessions[0])
    {
        t_Error VAR_10;
        t_FmIpcMsg VAR_11;
        t_FmIpcReply VAR_12;
        uint32_t VAR_13;
        t_FmIpcPhysAddr VAR_14;

        FUNC_4(&VAR_11, 0, sizeof(VAR_11));
        FUNC_4(&VAR_12, 0, sizeof(VAR_12));
        VAR_11.msgId = VAR_3;
        VAR_13 = sizeof(uint32_t) + sizeof(t_FmPhysAddr);
        VAR_10 = FUNC_2(VAR_9->h_IpcSessions[0],
                                (uint8_t*)&VAR_11,
                                sizeof(VAR_11.msgId),
                                (uint8_t*)&VAR_12,
                                &VAR_13,
                                ((void*)0),
                                ((void*)0));
        if (VAR_10 != VAR_2)
        {
            FUNC_1(VAR_4, VAR_10, VAR_6);
            return;
        }
        if (VAR_13 != (sizeof(uint32_t) + sizeof(t_FmPhysAddr)))
        {
            FUNC_1(VAR_4, VAR_0,("IPC reply length mismatch"));
            return;
        }
        FUNC_3((uint8_t*)&VAR_14, VAR_12.replyBody, sizeof(t_FmIpcPhysAddr));
        VAR_8->high = VAR_14.high;
        VAR_8->low = VAR_14.low;
    }
    else
        FUNC_1(VAR_4, VAR_1,
                     ("running in guest-mode without neither IPC nor mapped register!"));
}
