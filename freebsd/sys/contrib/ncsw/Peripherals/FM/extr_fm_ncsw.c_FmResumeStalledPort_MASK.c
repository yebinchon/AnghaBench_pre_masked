
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
struct TYPE_9__ {int error; int * msgBody; int msgId; } ;
typedef TYPE_3__ t_FmIpcReply ;
typedef TYPE_3__ t_FmIpcMsg ;
struct TYPE_10__ {scalar_t__ guestId; TYPE_2__* p_FmStateStruct; int baseAddr; scalar_t__* h_IpcSessions; struct fman_fpm_regs* p_FmFpmRegs; } ;
typedef TYPE_5__ t_Fm ;
typedef scalar_t__ t_Error ;
struct fman_fpm_regs {int dummy; } ;
typedef int reply ;
typedef int msg ;
typedef int hardwarePortId ;
struct TYPE_7__ {int majorRev; } ;
struct TYPE_8__ {TYPE_1__ revInfo; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (scalar_t__,int ,int*) ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 char* VAR_9 ;
 int FUNC_1 (int ,scalar_t__,char*) ;
 scalar_t__ FUNC_2 (scalar_t__,int *,int,int *,int*,int *,int *) ;
 int FUNC_3 (struct fman_fpm_regs*,int ) ;
 int FUNC_4 (TYPE_3__*,int ,int) ;

t_Error FUNC_5(t_Handle VAR_10, uint8_t VAR_11)
{
    t_Fm *VAR_12 = (t_Fm*)VAR_10;
    t_Error VAR_13;
    bool VAR_14;
    struct fman_fpm_regs *VAR_15 = VAR_12->p_FmFpmRegs;

    if ((VAR_12->guestId != VAR_8) &&
        !VAR_12->baseAddr &&
        VAR_12->h_IpcSessions[0])
    {
        t_FmIpcMsg VAR_16;
        t_FmIpcReply VAR_17;
        uint32_t VAR_18;

        FUNC_4(&VAR_16, 0, sizeof(VAR_16));
        FUNC_4(&VAR_17, 0, sizeof(VAR_17));
        VAR_16.msgId = VAR_5;
        VAR_16.msgBody[0] = VAR_11;
        VAR_18 = sizeof(uint32_t);
        VAR_13 = FUNC_2(VAR_12->h_IpcSessions[0],
                                (uint8_t*)&VAR_16,
                                sizeof(VAR_16.msgId) + sizeof(VAR_11),
                                (uint8_t*)&VAR_17,
                                &VAR_18,
                                ((void*)0),
                                ((void*)0));
        if (VAR_13 != VAR_4)
            FUNC_1(VAR_7, VAR_13, VAR_9);
        if (VAR_18 != sizeof(uint32_t))
            FUNC_1(VAR_6, VAR_1, ("IPC reply length mismatch"));
        return (t_Error)(VAR_17.error);
    }
    else if (!VAR_12->baseAddr)
        FUNC_1(VAR_7, VAR_3,
                     ("Either IPC or 'baseAddress' is required!"));

    if (VAR_12->p_FmStateStruct->revInfo.majorRev >= 6)
        FUNC_1(VAR_7, VAR_2, ("Not available for this FM revision!"));


    VAR_13 = FUNC_0(VAR_10, VAR_11, &VAR_14);
    if (VAR_13)
        FUNC_1(VAR_6, VAR_0, ("Can't get port status"));
    if (!VAR_14)
        return VAR_4;

    FUNC_3(VAR_15, VAR_11);

    return VAR_4;
}
