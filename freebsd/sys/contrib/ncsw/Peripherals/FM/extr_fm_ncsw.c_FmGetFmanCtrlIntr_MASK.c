
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
typedef scalar_t__ t_Handle ;
struct TYPE_5__ {int replyBody; int * msgBody; int msgId; } ;
typedef TYPE_1__ t_FmIpcReply ;
typedef TYPE_1__ t_FmIpcMsg ;
struct TYPE_6__ {scalar_t__ guestId; struct fman_fpm_regs* p_FmFpmRegs; scalar_t__* h_IpcSessions; } ;
typedef TYPE_3__ t_Fm ;
typedef scalar_t__ t_Error ;
struct fman_fpm_regs {int dummy; } ;
typedef int reply ;
typedef int msg ;
typedef int eventRegId ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 char* VAR_6 ;
 int FUNC_0 (int ,scalar_t__,char*) ;
 scalar_t__ FUNC_1 (scalar_t__,int *,int,int *,int*,int *,int *) ;
 int FUNC_2 (struct fman_fpm_regs*,int ) ;
 int FUNC_3 (int *,int ,int) ;
 int FUNC_4 (TYPE_1__*,int ,int) ;

uint32_t FUNC_5(t_Handle VAR_7, uint8_t VAR_8)
{
    t_Fm *VAR_9 = (t_Fm*)VAR_7;
    struct fman_fpm_regs *VAR_10 = VAR_9->p_FmFpmRegs;

    if ((VAR_9->guestId != VAR_5) &&
        !VAR_9->p_FmFpmRegs &&
        VAR_9->h_IpcSessions[0])
    {
        t_Error VAR_11;
        t_FmIpcMsg VAR_12;
        t_FmIpcReply VAR_13;
        uint32_t VAR_14, VAR_15;

        FUNC_4(&VAR_12, 0, sizeof(VAR_12));
        FUNC_4(&VAR_13, 0, sizeof(VAR_13));
        VAR_12.msgId = VAR_3;
        VAR_12.msgBody[0] = VAR_8;
        VAR_14 = sizeof(uint32_t) + sizeof(uint32_t);
        VAR_11 = FUNC_1(VAR_9->h_IpcSessions[0],
                                (uint8_t*)&VAR_12,
                                sizeof(VAR_12.msgId)+sizeof(VAR_8),
                                (uint8_t*)&VAR_13,
                                &VAR_14,
                                ((void*)0),
                                ((void*)0));
        if (VAR_11 != VAR_2)
        {
            FUNC_0(VAR_4, VAR_11, VAR_6);
            return 0;
        }
        if (VAR_14 != (sizeof(uint32_t) + sizeof(uint32_t)))
        {
            FUNC_0(VAR_4, VAR_0, ("IPC reply length mismatch"));
            return 0;
        }
        FUNC_3((uint8_t*)&VAR_15, VAR_13.replyBody, sizeof(uint32_t));
        return VAR_15;
    }
    else if (!VAR_9->p_FmFpmRegs)
    {
        FUNC_0(VAR_4, VAR_1,
                     ("Either IPC or 'baseAddress' is required!"));
        return 0;
    }

    return FUNC_2(VAR_10, VAR_8);
}
