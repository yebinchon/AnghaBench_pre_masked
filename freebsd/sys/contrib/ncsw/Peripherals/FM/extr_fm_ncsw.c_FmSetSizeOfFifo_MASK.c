
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef void* uint8_t ;
typedef int uint32_t ;
typedef int uint16_t ;
typedef scalar_t__ t_Handle ;
struct TYPE_9__ {int error; int msgBody; int msgId; } ;
typedef TYPE_2__ t_FmIpcReply ;
struct TYPE_10__ {int val; int extra; void* boolInitialConfig; void* hardwarePortId; } ;
typedef TYPE_3__ t_FmIpcPortRsrcParams ;
typedef TYPE_2__ t_FmIpcMsg ;
struct TYPE_11__ {scalar_t__ guestId; TYPE_1__* p_FmStateStruct; scalar_t__ baseAddr; scalar_t__* h_IpcSessions; struct fman_bmi_regs* p_FmBmiRegs; } ;
typedef TYPE_5__ t_Fm ;
typedef int t_Error ;
struct fman_bmi_regs {int dummy; } ;
typedef int rsrcParams ;
typedef int reply ;
typedef int msg ;
struct TYPE_8__ {int extraFifoPoolSize; int accumulatedFifoSize; int totalFifoSize; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (int ,char*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_2 (int,int) ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 char* VAR_9 ;
 int FUNC_3 (int ,int ,char*) ;
 int FUNC_4 (int ,int ,char*) ;
 int VAR_10 ;
 int FUNC_5 (scalar_t__,void**,int,void**,int*,int *,int *) ;
 int FUNC_6 (struct fman_bmi_regs*,void*) ;
 int FUNC_7 (struct fman_bmi_regs*,void*) ;
 int FUNC_8 (struct fman_bmi_regs*,void*,int,int) ;
 int FUNC_9 (int ,TYPE_3__*,int) ;
 int FUNC_10 (TYPE_2__*,int ,int) ;

t_Error FUNC_11(t_Handle VAR_11,
                        uint8_t VAR_12,
                        uint32_t *VAR_13,
                        uint32_t *VAR_14,
                        bool VAR_15)
{
    t_Fm *VAR_16 = (t_Fm*)VAR_11;
    t_FmIpcPortRsrcParams VAR_17;
    t_Error VAR_18;
    struct fman_bmi_regs *VAR_19 = VAR_16->p_FmBmiRegs;
    uint32_t VAR_20 = *VAR_13, VAR_21 = *VAR_14;
    uint16_t VAR_22 = 0, VAR_23 = 0;

    if ((VAR_16->guestId != VAR_8) &&
        !VAR_16->baseAddr &&
        VAR_16->h_IpcSessions[0])
    {
        t_FmIpcMsg VAR_24;
        t_FmIpcReply VAR_25;
        uint32_t VAR_26;

        VAR_17.hardwarePortId = VAR_12;
        VAR_17.val = VAR_20;
        VAR_17.extra = VAR_21;
        VAR_17.boolInitialConfig = (uint8_t)VAR_15;

        FUNC_10(&VAR_24, 0, sizeof(VAR_24));
        FUNC_10(&VAR_25, 0, sizeof(VAR_25));
        VAR_24.msgId = VAR_5;
        FUNC_9(VAR_24.msgBody, &VAR_17, sizeof(VAR_17));
        VAR_26 = sizeof(uint32_t);
        if ((VAR_18 = FUNC_5(VAR_16->h_IpcSessions[0],
                                     (uint8_t*)&VAR_24,
                                     sizeof(VAR_24.msgId) + sizeof(VAR_17),
                                     (uint8_t*)&VAR_25,
                                     &VAR_26,
                                     ((void*)0),
                                     ((void*)0))) != VAR_3)
            FUNC_4(VAR_7, VAR_18, VAR_9);
        if (VAR_26 != sizeof(uint32_t))
            FUNC_4(VAR_6, VAR_1, ("IPC reply length mismatch"));
        return (t_Error)(VAR_25.error);
    }
    else if ((VAR_16->guestId != VAR_8) &&
             VAR_16->baseAddr)
    {
        FUNC_1(VAR_10, ("No IPC - can't validate FM total-fifo size."));
        FUNC_8(VAR_19, VAR_12, VAR_20, VAR_21);
    }
    else if (VAR_16->guestId != VAR_8)
        FUNC_4(VAR_6, VAR_2,
                     ("running in guest-mode without neither IPC nor mapped register!"));

    if (!VAR_15)
    {


        VAR_23 = FUNC_6(VAR_19, VAR_12);
        VAR_22 = FUNC_7(VAR_19, VAR_12);
    }

    if (VAR_21 > VAR_23)
    {
        if (VAR_21 && !VAR_16->p_FmStateStruct->extraFifoPoolSize)



            VAR_16->p_FmStateStruct->extraFifoPoolSize = VAR_4*VAR_0;

        VAR_16->p_FmStateStruct->extraFifoPoolSize = FUNC_2(VAR_16->p_FmStateStruct->extraFifoPoolSize, VAR_21);
    }


    if ((VAR_16->p_FmStateStruct->accumulatedFifoSize - VAR_22 + VAR_20) >
        (VAR_16->p_FmStateStruct->totalFifoSize - VAR_16->p_FmStateStruct->extraFifoPoolSize)){
        FUNC_3(VAR_6, VAR_1,
            ("Port request fifo size + accumulated size > total FIFO size:"));
        FUNC_4(VAR_6, VAR_1,
            ("port 0x%x requested %d bytes, extra size = %d, accumulated size = %d total size = %d",
                VAR_12, VAR_20, VAR_16->p_FmStateStruct->extraFifoPoolSize,
                VAR_16->p_FmStateStruct->accumulatedFifoSize,
                VAR_16->p_FmStateStruct->totalFifoSize));
    }
    else
    {

        FUNC_0(VAR_16->p_FmStateStruct->accumulatedFifoSize >= VAR_22);
        VAR_16->p_FmStateStruct->accumulatedFifoSize -= VAR_22;
        VAR_16->p_FmStateStruct->accumulatedFifoSize += VAR_20;
        FUNC_8(VAR_19, VAR_12, VAR_20, VAR_21);
    }

    return VAR_3;
}
