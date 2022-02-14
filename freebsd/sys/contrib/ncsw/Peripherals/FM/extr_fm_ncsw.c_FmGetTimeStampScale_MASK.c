
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
typedef scalar_t__ t_Handle ;
struct TYPE_9__ {int replyBody; int msgId; } ;
typedef TYPE_3__ t_FmIpcReply ;
typedef TYPE_3__ t_FmIpcMsg ;
struct TYPE_10__ {scalar_t__ guestId; TYPE_2__* p_FmStateStruct; TYPE_1__* p_FmFpmRegs; scalar_t__ baseAddr; scalar_t__* h_IpcSessions; } ;
typedef TYPE_5__ t_Fm ;
typedef int t_Error ;
typedef int reply ;
typedef int msg ;
struct TYPE_8__ {int count1MicroBit; } ;
struct TYPE_7__ {int fmfp_tsc1; } ;


 int FUNC_0 (int ,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int ) ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 char* VAR_7 ;
 int FUNC_2 (int ,int ,char*) ;
 int VAR_8 ;
 int FUNC_3 (scalar_t__,int *,int,int *,int*,int *,int *) ;
 int FUNC_4 (int *,int ,int) ;
 int FUNC_5 (TYPE_3__*,int ,int) ;

uint32_t FUNC_6(t_Handle VAR_9)
{
    t_Fm *VAR_10 = (t_Fm*)VAR_9;

    if ((VAR_10->guestId != VAR_6) &&
        !VAR_10->baseAddr &&
        VAR_10->h_IpcSessions[0])
    {
        t_Error VAR_11;
        t_FmIpcMsg VAR_12;
        t_FmIpcReply VAR_13;
        uint32_t VAR_14, VAR_15;

        FUNC_5(&VAR_12, 0, sizeof(VAR_12));
        FUNC_5(&VAR_13, 0, sizeof(VAR_13));
        VAR_12.msgId = VAR_3;
        VAR_14 = sizeof(uint32_t) + sizeof(uint32_t);
        if ((VAR_11 = FUNC_3(VAR_10->h_IpcSessions[0],
                                     (uint8_t*)&VAR_12,
                                     sizeof(VAR_12.msgId),
                                     (uint8_t*)&VAR_13,
                                     &VAR_14,
                                     ((void*)0),
                                     ((void*)0))) != VAR_2)
        {
            FUNC_2(VAR_5, VAR_11, VAR_7);
            return 0;
        }
        if (VAR_14 != (sizeof(uint32_t) + sizeof(uint32_t)))
        {
            FUNC_2(VAR_5, VAR_1, ("IPC reply length mismatch"));
            return 0;
        }

        FUNC_4((uint8_t*)&VAR_15, VAR_13.replyBody, sizeof(uint32_t));
        return VAR_15;
    }
    else if ((VAR_10->guestId != VAR_6) &&
             VAR_10->baseAddr)
    {
        if (!(FUNC_1(VAR_10->p_FmFpmRegs->fmfp_tsc1) & VAR_4))
        {
            FUNC_2(VAR_5, VAR_0, ("timestamp is not enabled!"));
            return 0;
        }
    }
    else if (VAR_10->guestId != VAR_6)
        FUNC_0(VAR_8, ("No IPC - can't validate FM if timestamp enabled."));

    return VAR_10->p_FmStateStruct->count1MicroBit;
}
