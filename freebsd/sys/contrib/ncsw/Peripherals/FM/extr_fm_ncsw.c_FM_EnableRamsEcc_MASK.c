
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint8_t ;
typedef scalar_t__ t_Handle ;
struct TYPE_7__ {int msgId; } ;
typedef TYPE_2__ t_FmIpcMsg ;
struct TYPE_8__ {scalar_t__ guestId; TYPE_1__* p_FmStateStruct; int * h_IpcSessions; struct fman_fpm_regs* p_FmFpmRegs; } ;
typedef TYPE_3__ t_Fm ;
typedef scalar_t__ t_Error ;
struct fman_fpm_regs {int dummy; } ;
typedef int msg ;
struct TYPE_6__ {void* ramsEccEnable; scalar_t__ internalCall; void* explicitEnable; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ,scalar_t__,int ) ;
 int FUNC_1 (TYPE_3__*,int ) ;
 void* VAR_7 ;
 scalar_t__ FUNC_2 (int ,int *,int,int *,int *,int *,int *) ;
 int FUNC_3 (struct fman_fpm_regs*) ;
 int FUNC_4 (TYPE_2__*,int ,int) ;

t_Error FUNC_5(t_Handle VAR_8)
{
    t_Fm *VAR_9 = (t_Fm*)VAR_8;
    struct fman_fpm_regs *VAR_10;

    FUNC_1(VAR_9, VAR_0);

    VAR_10 = VAR_9->p_FmFpmRegs;

    if (VAR_9->guestId != VAR_5)
    {
        t_FmIpcMsg VAR_11;
        t_Error VAR_12;

        FUNC_4(&VAR_11, 0, sizeof(VAR_11));
        VAR_11.msgId = VAR_3;
        VAR_12 = FUNC_2(VAR_9->h_IpcSessions[0],
                                (uint8_t*)&VAR_11,
                                sizeof(VAR_11.msgId),
                                ((void*)0),
                                ((void*)0),
                                ((void*)0),
                                ((void*)0));
        if (VAR_12 != VAR_1)
            FUNC_0(VAR_4, VAR_12, VAR_6);
        return VAR_1;
    }

    if (!VAR_9->p_FmStateStruct->internalCall)
        VAR_9->p_FmStateStruct->explicitEnable = VAR_7;
    VAR_9->p_FmStateStruct->internalCall = VAR_2;

    if (VAR_9->p_FmStateStruct->ramsEccEnable)
        return VAR_1;
    else
    {
        FUNC_3(VAR_10);
        VAR_9->p_FmStateStruct->ramsEccEnable = VAR_7;
    }

    return VAR_1;
}
