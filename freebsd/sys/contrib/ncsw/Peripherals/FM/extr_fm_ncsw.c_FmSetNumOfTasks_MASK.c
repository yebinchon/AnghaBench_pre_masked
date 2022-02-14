
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
struct TYPE_9__ {int error; int msgBody; int msgId; } ;
typedef TYPE_2__ t_FmIpcReply ;
struct TYPE_10__ {scalar_t__ boolInitialConfig; scalar_t__ extra; scalar_t__ val; scalar_t__ hardwarePortId; } ;
typedef TYPE_3__ t_FmIpcPortRsrcParams ;
typedef TYPE_2__ t_FmIpcMsg ;
struct TYPE_11__ {scalar_t__ guestId; TYPE_1__* p_FmStateStruct; scalar_t__ baseAddr; scalar_t__* h_IpcSessions; struct fman_bmi_regs* p_FmBmiRegs; } ;
typedef TYPE_5__ t_Fm ;
typedef int t_Error ;
struct fman_bmi_regs {int dummy; } ;
typedef int rsrcParams ;
typedef int reply ;
typedef int msg ;
struct TYPE_8__ {scalar_t__ extraTasksPoolSize; scalar_t__ accumulatedNumOfTasks; scalar_t__ totalNumOfTasks; int fmId; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (int,scalar_t__,int) ;
 int VAR_5 ;
 scalar_t__ FUNC_3 (scalar_t__,scalar_t__) ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 char* VAR_8 ;
 int FUNC_4 (int ,int ,char*) ;
 int VAR_9 ;
 int FUNC_5 (scalar_t__,scalar_t__*,int,scalar_t__*,int*,int *,int *) ;
 scalar_t__ FUNC_6 (struct fman_bmi_regs*,scalar_t__) ;
 scalar_t__ FUNC_7 (struct fman_bmi_regs*,scalar_t__) ;
 int FUNC_8 (struct fman_bmi_regs*,scalar_t__,scalar_t__,scalar_t__) ;
 int FUNC_9 (int ,TYPE_3__*,int) ;
 int FUNC_10 (TYPE_2__*,int ,int) ;

t_Error FUNC_11(t_Handle VAR_10,
                        uint8_t VAR_11,
                        uint8_t *VAR_12,
                        uint8_t *VAR_13,
                        bool VAR_14)
{
    t_Fm *VAR_15 = (t_Fm *)VAR_10;
    t_Error VAR_16;
    struct fman_bmi_regs *VAR_17 = VAR_15->p_FmBmiRegs;
    uint8_t VAR_18 = 0, VAR_19 = 0, VAR_20 = *VAR_12, VAR_21 = *VAR_13;

    FUNC_0(FUNC_2(1, VAR_11, 63));

    if ((VAR_15->guestId != VAR_7) &&
        !VAR_15->baseAddr &&
        VAR_15->h_IpcSessions[0])
    {
        t_FmIpcPortRsrcParams VAR_22;
        t_FmIpcMsg VAR_23;
        t_FmIpcReply VAR_24;
        uint32_t VAR_25;

        VAR_22.hardwarePortId = VAR_11;
        VAR_22.val = VAR_20;
        VAR_22.extra = VAR_21;
        VAR_22.boolInitialConfig = (uint8_t)VAR_14;

        FUNC_10(&VAR_23, 0, sizeof(VAR_23));
        FUNC_10(&VAR_24, 0, sizeof(VAR_24));
        VAR_23.msgId = VAR_4;
        FUNC_9(VAR_23.msgBody, &VAR_22, sizeof(VAR_22));
        VAR_25 = sizeof(uint32_t);
        if ((VAR_16 = FUNC_5(VAR_15->h_IpcSessions[0],
                                     (uint8_t*)&VAR_23,
                                     sizeof(VAR_23.msgId) + sizeof(VAR_22),
                                     (uint8_t*)&VAR_24,
                                     &VAR_25,
                                     ((void*)0),
                                     ((void*)0))) != VAR_3)
            FUNC_4(VAR_6, VAR_16, VAR_8);
        if (VAR_25 != sizeof(uint32_t))
            FUNC_4(VAR_5, VAR_0, ("IPC reply length mismatch"));
        return (t_Error)(VAR_24.error);
    }
    else if ((VAR_15->guestId != VAR_7) &&
             VAR_15->baseAddr)
    {
        FUNC_1(VAR_9, ("No IPC - can't validate FM total-num-of-tasks."));
        FUNC_8(VAR_17, VAR_11, VAR_20, VAR_21);
    }
    else if (VAR_15->guestId != VAR_7)
        FUNC_4(VAR_5, VAR_2,
                     ("running in guest-mode without neither IPC nor mapped register!"));

    if (!VAR_14)
    {


        VAR_18 = FUNC_7(VAR_17, VAR_11);
        VAR_19 = FUNC_6(VAR_17, VAR_11);
    }

    if (VAR_21 > VAR_19)
         VAR_15->p_FmStateStruct->extraTasksPoolSize =
             (uint8_t)FUNC_3(VAR_15->p_FmStateStruct->extraTasksPoolSize, VAR_21);


    if ((VAR_15->p_FmStateStruct->accumulatedNumOfTasks - VAR_18 + VAR_20) >
       (VAR_15->p_FmStateStruct->totalNumOfTasks - VAR_15->p_FmStateStruct->extraTasksPoolSize))
        FUNC_4(VAR_5, VAR_1,
                     ("Requested numOfTasks and extra tasks pool for fm%d exceed total numOfTasks.",
                      VAR_15->p_FmStateStruct->fmId));
    else
    {
        FUNC_0(VAR_15->p_FmStateStruct->accumulatedNumOfTasks >= VAR_18);

        VAR_15->p_FmStateStruct->accumulatedNumOfTasks -= VAR_18;
        VAR_15->p_FmStateStruct->accumulatedNumOfTasks += VAR_20;
        FUNC_8(VAR_17, VAR_11, VAR_20, VAR_21);
    }

    return VAR_3;
}
