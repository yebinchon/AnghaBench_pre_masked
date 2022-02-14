
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_10__ {int * fmpl_pmr; } ;
typedef TYPE_2__ t_FmPcdPlcrRegs ;
struct TYPE_11__ {int guestId; int msgBody; int msgId; } ;
typedef TYPE_3__ t_FmPcdIpcMsg ;
struct TYPE_12__ {scalar_t__ guestId; scalar_t__ h_IpcSession; TYPE_1__* p_FmPcdPlcr; } ;
typedef TYPE_4__ t_FmPcd ;
typedef TYPE_3__ t_FmIpcResourceAllocParams ;
typedef scalar_t__ t_Error ;
typedef int msg ;
struct TYPE_9__ {TYPE_2__* p_FmPcdPlcrRegs; } ;


 int FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int,int,int) ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 char* VAR_6 ;
 int FUNC_2 (int ,scalar_t__,char*) ;
 int FUNC_3 (int ,int ) ;
 scalar_t__ FUNC_4 (scalar_t__,int*,int,int *,int *,int *,int *) ;
 int FUNC_5 (int ,TYPE_3__*,int) ;
 int FUNC_6 (TYPE_3__*,int ,int) ;

t_Error FUNC_7(t_FmPcd *VAR_7, uint8_t VAR_8)
{
    t_FmPcdPlcrRegs *VAR_9 = VAR_7->p_FmPcdPlcr->p_FmPcdPlcrRegs;

    if ((VAR_7->guestId != VAR_5) &&
        !VAR_9 &&
        VAR_7->h_IpcSession)
    {
        t_FmIpcResourceAllocParams VAR_10;
        t_FmPcdIpcMsg VAR_11;
        t_Error VAR_12;

        FUNC_6(&VAR_11, 0, sizeof(VAR_11));
        FUNC_6(&VAR_10, 0, sizeof(t_FmIpcResourceAllocParams));
        VAR_10.guestId = VAR_8;
        VAR_11.msgId = VAR_2;
        FUNC_5(VAR_11.msgBody, &VAR_10, sizeof(t_FmIpcResourceAllocParams));
        VAR_12 = FUNC_4(VAR_7->h_IpcSession,
                                (uint8_t*)&VAR_11,
                                sizeof(VAR_11.msgId) + sizeof(t_FmIpcResourceAllocParams),
                                ((void*)0),
                                ((void*)0),
                                ((void*)0),
                                ((void*)0));
        if (VAR_12 != VAR_1)
            FUNC_2(VAR_3, VAR_12, VAR_6);
        return VAR_1;
    }
    else if (!VAR_9)
        FUNC_2(VAR_4, VAR_0,
                     ("Either IPC or 'baseAddress' is required!"));

    FUNC_0(FUNC_1(1, VAR_8, 63));
    FUNC_3(VAR_9->fmpl_pmr[VAR_8-1], 0);

    return VAR_1;
}
