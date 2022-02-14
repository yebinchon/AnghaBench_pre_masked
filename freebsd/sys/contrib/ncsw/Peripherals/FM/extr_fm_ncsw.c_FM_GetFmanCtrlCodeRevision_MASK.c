
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef void* uint8_t ;
typedef int uint32_t ;
typedef scalar_t__ uint16_t ;
typedef scalar_t__ t_Handle ;
struct TYPE_10__ {int error; int replyBody; int msgId; } ;
typedef TYPE_1__ t_FmIpcReply ;
typedef TYPE_1__ t_FmIpcMsg ;
struct TYPE_11__ {void* minorRev; void* majorRev; scalar_t__ packageRev; } ;
typedef TYPE_3__ t_FmIpcFmanCtrlCodeRevisionInfo ;
struct TYPE_12__ {scalar_t__ guestId; void* minorRev; void* majorRev; scalar_t__ packageRev; scalar_t__ baseAddr; scalar_t__* h_IpcSessions; } ;
typedef TYPE_4__ t_FmCtrlCodeRevisionInfo ;
typedef TYPE_4__ t_Fm ;
struct TYPE_13__ {int idata; int iadd; } ;
typedef TYPE_6__ t_FMIramRegs ;
typedef int t_Error ;
typedef int reply ;
typedef int msg ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_0 (int ) ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 char* VAR_10 ;
 int FUNC_1 (int ,int ,char*) ;
 int FUNC_2 (TYPE_4__*,int ) ;
 scalar_t__ FUNC_3 (scalar_t__) ;
 int FUNC_4 (int ,int) ;
 int FUNC_5 (scalar_t__,void**,int,void**,int*,int *,int *) ;
 int FUNC_6 (void**,int ,int) ;
 int FUNC_7 (TYPE_1__*,int ,int) ;

t_Error FUNC_8(t_Handle VAR_11, t_FmCtrlCodeRevisionInfo *VAR_12)
{
    t_Fm *VAR_13 = (t_Fm*)VAR_11;
    t_FMIramRegs *VAR_14;
    uint32_t VAR_15;

    FUNC_2(VAR_13, VAR_0);
    FUNC_2(VAR_12, VAR_3);

    if ((VAR_13->guestId != VAR_9) &&
        VAR_13->h_IpcSessions[0])
    {
        t_Error VAR_16;
        t_FmIpcMsg VAR_17;
        t_FmIpcReply VAR_18;
        uint32_t VAR_19;
        t_FmIpcFmanCtrlCodeRevisionInfo VAR_20;

        FUNC_7(&VAR_17, 0, sizeof(VAR_17));
        FUNC_7(&VAR_18, 0, sizeof(VAR_18));
        VAR_17.msgId = VAR_5;
        VAR_19 = sizeof(uint32_t) + sizeof(t_FmCtrlCodeRevisionInfo);
        if ((VAR_16 = FUNC_5(VAR_13->h_IpcSessions[0],
                                     (uint8_t*)&VAR_17,
                                     sizeof(VAR_17.msgId),
                                     (uint8_t*)&VAR_18,
                                     &VAR_19,
                                     ((void*)0),
                                     ((void*)0))) != VAR_4)
            FUNC_1(VAR_8, VAR_16, VAR_10);
        if (VAR_19 != (sizeof(uint32_t) + sizeof(t_FmCtrlCodeRevisionInfo)))
            FUNC_1(VAR_7, VAR_1, ("IPC reply length mismatch"));
        FUNC_6((uint8_t*)&VAR_20, VAR_18.replyBody, sizeof(t_FmCtrlCodeRevisionInfo));
        VAR_12->packageRev = VAR_20.packageRev;
        VAR_12->majorRev = VAR_20.majorRev;
        VAR_12->minorRev = VAR_20.minorRev;
        return (t_Error)(VAR_18.error);
    }
    else if (VAR_13->guestId != VAR_9)
        FUNC_1(VAR_8, VAR_2,
                     ("running in guest-mode without IPC!"));

    VAR_14 = (t_FMIramRegs *)FUNC_3(VAR_13->baseAddr + VAR_6);
    FUNC_4(VAR_14->iadd, 0x4);
    while (FUNC_0(VAR_14->iadd) != 0x4) ;
    VAR_15 = FUNC_0(VAR_14->idata);
    VAR_12->packageRev = (uint16_t)((VAR_15 & 0xFFFF0000) >> 16);
    VAR_12->majorRev = (uint8_t)((VAR_15 & 0x0000FF00) >> 8);
    VAR_12->minorRev = (uint8_t)(VAR_15 & 0x000000FF);

    return VAR_4;
}
