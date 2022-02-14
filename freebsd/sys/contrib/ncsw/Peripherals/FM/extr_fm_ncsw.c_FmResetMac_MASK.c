
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
typedef scalar_t__ t_Handle ;
struct TYPE_11__ {scalar_t__ error; int msgBody; int msgId; } ;
typedef TYPE_3__ t_FmIpcReply ;
typedef TYPE_3__ t_FmIpcMsg ;
struct TYPE_12__ {int enumType; int id; } ;
typedef TYPE_5__ t_FmIpcMacParams ;
struct TYPE_13__ {scalar_t__ guestId; int baseAddr; scalar_t__* h_IpcSessions; TYPE_2__* p_FmStateStruct; struct fman_fpm_regs* p_FmFpmRegs; } ;
typedef TYPE_6__ t_Fm ;
typedef int t_Error ;
struct fman_fpm_regs {int dummy; } ;
typedef int reply ;
typedef int msg ;
typedef int macParams ;
typedef scalar_t__ e_FmMacType ;
struct TYPE_9__ {int majorRev; } ;
struct TYPE_10__ {TYPE_1__ revInfo; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 char* VAR_9 ;
 int FUNC_1 (int ,int,char*) ;
 int FUNC_2 (scalar_t__,int *,int,int *,int*,int *,int *) ;
 scalar_t__ VAR_10 ;
 scalar_t__ FUNC_3 (struct fman_fpm_regs*,int ,int) ;
 int FUNC_4 (int ,TYPE_5__*,int) ;
 int FUNC_5 (TYPE_3__*,int ,int) ;

t_Error FUNC_6(t_Handle VAR_11, e_FmMacType VAR_12, uint8_t VAR_13)
{
    t_Fm *VAR_14 = (t_Fm*)VAR_11;
    t_Error VAR_15;
    struct fman_fpm_regs *VAR_16 = VAR_14->p_FmFpmRegs;







    if ((VAR_14->guestId != VAR_8) &&
        !VAR_14->baseAddr &&
        VAR_14->h_IpcSessions[0])
    {
        t_FmIpcMacParams VAR_17;
        t_FmIpcMsg VAR_18;
        t_FmIpcReply VAR_19;
        uint32_t VAR_20;

        FUNC_5(&VAR_18, 0, sizeof(VAR_18));
        FUNC_5(&VAR_19, 0, sizeof(VAR_19));
        VAR_17.id = VAR_13;
        VAR_17.enumType = (uint32_t)VAR_12;
        VAR_18.msgId = VAR_5;
        FUNC_4(VAR_18.msgBody, &VAR_17, sizeof(VAR_17));
        VAR_20 = sizeof(uint32_t);
        VAR_15 = FUNC_2(VAR_14->h_IpcSessions[0],
                                (uint8_t*)&VAR_18,
                                sizeof(VAR_18.msgId)+sizeof(VAR_17),
                                (uint8_t*)&VAR_19,
                                &VAR_20,
                                ((void*)0),
                                ((void*)0));
        if (VAR_15 != VAR_3)
            FUNC_1(VAR_7, VAR_15, VAR_9);
        if (VAR_20 != sizeof(uint32_t))
            FUNC_1(VAR_6, VAR_1, ("IPC reply length mismatch"));
        return (t_Error)(VAR_19.error);
    }
    else if (!VAR_14->baseAddr)
        FUNC_1(VAR_7, VAR_2,
                     ("Either IPC or 'baseAddress' is required!"));

    VAR_15 = (t_Error)FUNC_3(VAR_16, VAR_13, !!(VAR_12 == VAR_10));

    if (VAR_15 == -VAR_0)
        return FUNC_0(VAR_4);
    else if (VAR_15)
        FUNC_1(VAR_6, VAR_1, ("Illegal MAC ID"));

    return VAR_3;
}
