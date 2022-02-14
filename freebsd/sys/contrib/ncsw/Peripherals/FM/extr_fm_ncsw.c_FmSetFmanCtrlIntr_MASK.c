
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
typedef scalar_t__ t_Handle ;
struct TYPE_6__ {int msgBody; int msgId; } ;
typedef TYPE_1__ t_FmIpcMsg ;
struct TYPE_7__ {int enableEvents; int eventRegId; } ;
typedef TYPE_2__ t_FmIpcFmanEvents ;
struct TYPE_8__ {scalar_t__ guestId; struct fman_fpm_regs* p_FmFpmRegs; scalar_t__* h_IpcSessions; } ;
typedef TYPE_3__ t_Fm ;
typedef scalar_t__ t_Error ;
struct fman_fpm_regs {int dummy; } ;
typedef int msg ;
typedef int fmanCtrl ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 char* VAR_6 ;
 int FUNC_1 (int ,scalar_t__,char*) ;
 scalar_t__ FUNC_2 (scalar_t__,int *,int,int *,int *,int *,int *) ;
 int FUNC_3 (struct fman_fpm_regs*,int ,int ) ;
 int FUNC_4 (int ,TYPE_2__*,int) ;
 int FUNC_5 (TYPE_1__*,int ,int) ;

void FUNC_6(t_Handle VAR_7, uint8_t VAR_8, uint32_t VAR_9)
{
    t_Fm *VAR_10 = (t_Fm*)VAR_7;
    struct fman_fpm_regs *VAR_11 = VAR_10->p_FmFpmRegs;

    if ((VAR_10->guestId != VAR_5) &&
        !VAR_10->p_FmFpmRegs &&
        VAR_10->h_IpcSessions[0])
    {
        t_FmIpcFmanEvents VAR_12;
        t_Error VAR_13;
        t_FmIpcMsg VAR_14;

        VAR_12.eventRegId = VAR_8;
        VAR_12.enableEvents = VAR_9;
        FUNC_5(&VAR_14, 0, sizeof(VAR_14));
        VAR_14.msgId = VAR_3;
        FUNC_4(VAR_14.msgBody, &VAR_12, sizeof(VAR_12));
        VAR_13 = FUNC_2(VAR_10->h_IpcSessions[0],
                                (uint8_t*)&VAR_14,
                                sizeof(VAR_14.msgId)+sizeof(VAR_12),
                                ((void*)0),
                                ((void*)0),
                                ((void*)0),
                                ((void*)0));
        if (VAR_13 != VAR_1)
            FUNC_1(VAR_4, VAR_13, VAR_6);
        return;
    }
    else if (!VAR_10->p_FmFpmRegs)
    {
        FUNC_1(VAR_4, VAR_0,
                     ("Either IPC or 'baseAddress' is required!"));
        return;
    }

    FUNC_0(VAR_8 < VAR_2);
    FUNC_3(VAR_11, VAR_8, VAR_9);
}
