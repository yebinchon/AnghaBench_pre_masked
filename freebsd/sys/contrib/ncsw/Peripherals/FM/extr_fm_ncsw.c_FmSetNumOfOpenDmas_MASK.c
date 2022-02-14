
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef scalar_t__ uint8_t ;
typedef int uint32_t ;
typedef scalar_t__ t_Handle ;
struct TYPE_11__ {int error; int msgBody; int msgId; } ;
typedef TYPE_3__ t_FmIpcReply ;
struct TYPE_12__ {scalar_t__ boolInitialConfig; scalar_t__ extra; scalar_t__ val; scalar_t__ hardwarePortId; } ;
typedef TYPE_4__ t_FmIpcPortRsrcParams ;
typedef TYPE_3__ t_FmIpcMsg ;
struct TYPE_13__ {scalar_t__ guestId; TYPE_2__* p_FmStateStruct; scalar_t__ baseAddr; scalar_t__* h_IpcSessions; struct fman_bmi_regs* p_FmBmiRegs; } ;
typedef TYPE_6__ t_Fm ;
typedef int t_Error ;
struct fman_bmi_regs {int dummy; } ;
typedef int rsrcParams ;
typedef int reply ;
typedef int msg ;
struct TYPE_9__ {int majorRev; scalar_t__ minorRev; } ;
struct TYPE_10__ {scalar_t__ accumulatedNumOfOpenDmas; scalar_t__ extraOpenDmasPoolSize; scalar_t__ maxNumOfOpenDmas; TYPE_1__ revInfo; int fmId; } ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int,scalar_t__,int) ;
 int VAR_6 ;
 scalar_t__ FUNC_2 (scalar_t__,scalar_t__) ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 char* VAR_9 ;
 int FUNC_3 (int ,int ,char*) ;
 int FUNC_4 (scalar_t__,scalar_t__*,int,scalar_t__*,int*,int *,int *) ;
 scalar_t__ FUNC_5 (struct fman_bmi_regs*,scalar_t__) ;
 scalar_t__ FUNC_6 (struct fman_bmi_regs*,scalar_t__) ;
 int FUNC_7 (struct fman_bmi_regs*,scalar_t__,scalar_t__,scalar_t__,scalar_t__) ;
 int FUNC_8 (int ,TYPE_4__*,int) ;
 int FUNC_9 (TYPE_3__*,int ,int) ;

t_Error FUNC_10(t_Handle VAR_10,
                           uint8_t VAR_11,
                           uint8_t *VAR_12,
                           uint8_t *VAR_13,
                           bool VAR_14)

{
    t_Fm *VAR_15 = (t_Fm *)VAR_10;
    t_Error VAR_16;
    struct fman_bmi_regs *VAR_17 = VAR_15->p_FmBmiRegs;
    uint8_t VAR_18 = *VAR_12, VAR_19 = *VAR_13;
    uint8_t VAR_20 = 0, VAR_21 = 0, VAR_22 = 0;

    FUNC_0(FUNC_1(1, VAR_11, 63));

    if ((VAR_15->guestId != VAR_8) &&
        !VAR_15->baseAddr &&
        VAR_15->h_IpcSessions[0])
    {
        t_FmIpcPortRsrcParams VAR_23;
        t_FmIpcMsg VAR_24;
        t_FmIpcReply VAR_25;
        uint32_t VAR_26;

        VAR_23.hardwarePortId = VAR_11;
        VAR_23.val = VAR_18;
        VAR_23.extra = VAR_19;
        VAR_23.boolInitialConfig = (uint8_t)VAR_14;

        FUNC_9(&VAR_24, 0, sizeof(VAR_24));
        FUNC_9(&VAR_25, 0, sizeof(VAR_25));
        VAR_24.msgId = VAR_5;
        FUNC_8(VAR_24.msgBody, &VAR_23, sizeof(VAR_23));
        VAR_26 = sizeof(uint32_t);
        if ((VAR_16 = FUNC_4(VAR_15->h_IpcSessions[0],
                                     (uint8_t*)&VAR_24,
                                     sizeof(VAR_24.msgId) + sizeof(VAR_23),
                                     (uint8_t*)&VAR_25,
                                     &VAR_26,
                                     ((void*)0),
                                     ((void*)0))) != VAR_4)
            FUNC_3(VAR_7, VAR_16, VAR_9);
        if (VAR_26 != sizeof(uint32_t))
            FUNC_3(VAR_6, VAR_1, ("IPC reply length mismatch"));
        return (t_Error)(VAR_25.error);
    }




    else if ((VAR_15->guestId != VAR_8) &&
             VAR_15->baseAddr &&
             (VAR_15->p_FmStateStruct->revInfo.majorRev >= 6))
    {


        if (!VAR_18)
        {


                *VAR_12 = FUNC_6(VAR_17, VAR_11);
                *VAR_13 = FUNC_5(VAR_17, VAR_11);
        }
        else

            FUNC_7(VAR_17,
                                   VAR_11,
                                   VAR_18,
                                   VAR_19,
                                   VAR_15->p_FmStateStruct->accumulatedNumOfOpenDmas + VAR_15->p_FmStateStruct->extraOpenDmasPoolSize);
    }
    else if (VAR_15->guestId != VAR_8)
        FUNC_3(VAR_6, VAR_3,
                     ("running in guest-mode without neither IPC nor mapped register!"));


    if (!VAR_14)
    {


        VAR_22 = FUNC_5(VAR_17, VAR_11);
        VAR_21 = FUNC_6(VAR_17, VAR_11);
    }
        if (VAR_19 > VAR_22)
             VAR_15->p_FmStateStruct->extraOpenDmasPoolSize =
                 (uint8_t)FUNC_2(VAR_15->p_FmStateStruct->extraOpenDmasPoolSize, VAR_19);
        if ((VAR_15->p_FmStateStruct->revInfo.majorRev >= 6) &&




            (VAR_15->p_FmStateStruct->accumulatedNumOfOpenDmas - VAR_21 + VAR_18 > VAR_0 + 1))
            FUNC_3(VAR_6, VAR_2,
                         ("Requested numOfOpenDmas for fm%d exceeds DMA Command queue (%d)",
                          VAR_15->p_FmStateStruct->fmId, VAR_0+1));

        else
        {
            FUNC_0(VAR_15->p_FmStateStruct->accumulatedNumOfOpenDmas >= VAR_21);

            VAR_15->p_FmStateStruct->accumulatedNumOfOpenDmas -= VAR_21;
            VAR_15->p_FmStateStruct->accumulatedNumOfOpenDmas += VAR_18;





            FUNC_7(VAR_17,
                               VAR_11,
                               VAR_18,
                               VAR_19,
                               VAR_20);
        }

    return VAR_4;
}
