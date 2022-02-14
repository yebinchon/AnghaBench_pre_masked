
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint64_t ;
typedef int uint32_t ;
typedef void* uint16_t ;
struct TYPE_10__ {int * fmpl_pmr; } ;
typedef TYPE_2__ t_FmPcdPlcrRegs ;
struct TYPE_11__ {int guestId; int msgBody; int msgId; void* base; void* num; } ;
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
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int,int,int) ;
 int FUNC_3 (int ,int) ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 char* VAR_8 ;
 int FUNC_4 (int ,scalar_t__,char*) ;
 int FUNC_5 (int ,int) ;
 scalar_t__ FUNC_6 (scalar_t__,int*,int,int *,int *,int *,int *) ;
 int FUNC_7 (int ,TYPE_3__*,int) ;
 int FUNC_8 (TYPE_3__*,int ,int) ;

t_Error FUNC_9(t_FmPcd *VAR_9,
                            uint8_t VAR_10,
                            uint16_t VAR_11,
                            uint16_t VAR_12)
{
    t_FmPcdPlcrRegs *VAR_13 = VAR_9->p_FmPcdPlcr->p_FmPcdPlcrRegs;
    uint32_t VAR_14, VAR_15;

    if ((VAR_9->guestId != VAR_7) &&
        !VAR_13 &&
        VAR_9->h_IpcSession)
    {
        t_FmIpcResourceAllocParams VAR_16;
        t_FmPcdIpcMsg VAR_17;
        t_Error VAR_18;

        FUNC_8(&VAR_17, 0, sizeof(VAR_17));
        FUNC_8(&VAR_16, 0, sizeof(t_FmIpcResourceAllocParams));
        VAR_16.guestId = VAR_10;
        VAR_16.num = VAR_11;
        VAR_16.base = VAR_12;
        VAR_17.msgId = VAR_4;
        FUNC_7(VAR_17.msgBody, &VAR_16, sizeof(t_FmIpcResourceAllocParams));
        VAR_18 = FUNC_6(VAR_9->h_IpcSession,
                                (uint8_t*)&VAR_17,
                                sizeof(VAR_17.msgId) + sizeof(t_FmIpcResourceAllocParams),
                                ((void*)0),
                                ((void*)0),
                                ((void*)0),
                                ((void*)0));
        if (VAR_18 != VAR_2)
            FUNC_4(VAR_5, VAR_18, VAR_8);
        return VAR_2;
    }
    else if (!VAR_13)
        FUNC_4(VAR_6, VAR_1,
                     ("Either IPC or 'baseAddress' is required!"));

    FUNC_0(FUNC_2(1, VAR_10, 63));

    if (FUNC_1(VAR_13->fmpl_pmr[VAR_10-1]) & VAR_3)
        FUNC_4(VAR_5, VAR_0,
                     ("The requesting port has already an allocated profiles window."));


    FUNC_3((uint64_t)VAR_11, VAR_14);
    VAR_15 = VAR_12;
    VAR_15 |= VAR_14 << 16;
    VAR_15 |= VAR_3;
    FUNC_5(VAR_13->fmpl_pmr[VAR_10-1], VAR_15);

    return VAR_2;
}
