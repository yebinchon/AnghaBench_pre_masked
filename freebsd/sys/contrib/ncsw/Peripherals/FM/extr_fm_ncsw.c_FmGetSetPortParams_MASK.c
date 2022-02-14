
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_26__ TYPE_9__ ;
typedef struct TYPE_25__ TYPE_8__ ;
typedef struct TYPE_24__ TYPE_6__ ;
typedef struct TYPE_23__ TYPE_5__ ;
typedef struct TYPE_22__ TYPE_4__ ;
typedef struct TYPE_21__ TYPE_3__ ;
typedef struct TYPE_20__ TYPE_2__ ;
typedef struct TYPE_19__ TYPE_1__ ;
typedef struct TYPE_18__ TYPE_17__ ;


typedef size_t uint8_t ;
typedef int uint32_t ;
typedef scalar_t__ t_Handle ;
struct TYPE_22__ {size_t* msgBody; int error; TYPE_6__* replyBody; int msgId; } ;
typedef TYPE_4__ t_FmIpcReply ;
struct TYPE_19__ {int low; int high; } ;
struct TYPE_23__ {int extraSizeOfFifo; int sizeOfFifo; int numOfExtraOpenDmas; int numOfOpenDmas; int numOfExtraTasks; int numOfTasks; TYPE_1__ ipcPhysAddr; } ;
typedef TYPE_5__ t_FmIpcPortOutInitParams ;
struct TYPE_24__ {size_t hardwarePortId; int enumPortType; size_t boolIndependentMode; size_t deqPipelineDepth; scalar_t__ maxFrameLength; int liodnBase; int extraSizeOfFifo; int sizeOfFifo; int numOfExtraOpenDmas; int numOfOpenDmas; int numOfExtraTasks; int numOfTasks; int liodnOffset; } ;
typedef TYPE_6__ t_FmIpcPortInInitParams ;
typedef TYPE_4__ t_FmIpcMsg ;
struct TYPE_18__ {int low; int high; } ;
struct TYPE_25__ {size_t hardwarePortId; scalar_t__ portType; size_t deqPipelineDepth; scalar_t__ maxFrameLength; TYPE_17__ fmMuramPhysBaseAddr; scalar_t__ independentMode; int liodnOffset; int liodnBase; int numOfExtraOpenDmas; int numOfOpenDmas; int extraSizeOfFifo; int sizeOfFifo; int numOfExtraTasks; int numOfTasks; } ;
typedef TYPE_8__ t_FmInterModulePortInitParams ;
struct TYPE_26__ {scalar_t__ guestId; int h_Spinlock; TYPE_3__* p_FmStateStruct; void* hcPortInitialized; scalar_t__ independentMode; int * h_IpcSessions; int p_FmDmaRegs; int p_FmFpmRegs; int p_FmQmiRegs; int p_FmBmiRegs; } ;
typedef TYPE_9__ t_Fm ;
typedef scalar_t__ t_Error ;
struct fman_rg {int fpm_rg; int qmi_rg; int dma_rg; int bmi_rg; } ;
typedef int reply ;
typedef int portInParams ;
typedef int msg ;
struct TYPE_20__ {int majorRev; } ;
struct TYPE_21__ {scalar_t__* portsTypes; size_t accumulatedNumOfDeqTnums; scalar_t__* macMaxFrameLengths10G; scalar_t__* portMaxFrameLengths10G; scalar_t__* macMaxFrameLengths1G; scalar_t__* portMaxFrameLengths1G; TYPE_2__ revInfo; void* lowEndRestriction; } ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 int FUNC_1 (TYPE_9__*,TYPE_17__*) ;
 scalar_t__ FUNC_2 (TYPE_9__*,size_t,int *,int *,void*) ;
 scalar_t__ FUNC_3 (TYPE_9__*,size_t,int *,int *,void*) ;
 scalar_t__ FUNC_4 (TYPE_9__*,size_t,int *,int *,void*) ;
 int FUNC_5 (size_t,size_t) ;
 int FUNC_6 (int,size_t,int) ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 char* VAR_10 ;
 int VAR_11 ;
 int FUNC_7 (int ,scalar_t__,char*) ;
 void* VAR_12 ;
 scalar_t__ FUNC_8 (int ,size_t*,int,size_t*,int*,int *,int *) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int ,int) ;
 scalar_t__ VAR_13 ;
 scalar_t__ VAR_14 ;
 scalar_t__ VAR_15 ;
 scalar_t__ VAR_16 ;
 scalar_t__ VAR_17 ;
 size_t FUNC_11 (int ) ;
 size_t FUNC_12 (int ) ;
 int FUNC_13 (int ) ;
 int FUNC_14 (struct fman_rg*,size_t,int ,int ) ;
 int FUNC_15 (int ,size_t,scalar_t__,int) ;
 int FUNC_16 (int ,size_t) ;
 int FUNC_17 (int ,size_t) ;
 int FUNC_18 (size_t*,TYPE_6__*,int) ;
 int FUNC_19 (TYPE_4__*,int ,int) ;

t_Error FUNC_20(t_Handle VAR_18, t_FmInterModulePortInitParams *VAR_19)
{
    t_Fm *VAR_20 = (t_Fm*)VAR_18;
    t_Error VAR_21;
    uint32_t VAR_22;
    uint8_t VAR_23 = VAR_19->hardwarePortId, VAR_24;
    struct fman_rg VAR_25;

    VAR_25.bmi_rg = VAR_20->p_FmBmiRegs;
    VAR_25.qmi_rg = VAR_20->p_FmQmiRegs;
    VAR_25.fpm_rg = VAR_20->p_FmFpmRegs;
    VAR_25.dma_rg = VAR_20->p_FmDmaRegs;

    if (VAR_20->guestId != VAR_9)
    {
        t_FmIpcPortInInitParams VAR_26;
        t_FmIpcPortOutInitParams VAR_27;
        t_FmIpcMsg VAR_28;
        t_FmIpcReply VAR_29;
        uint32_t VAR_30;

        VAR_26.hardwarePortId = VAR_19->hardwarePortId;
        VAR_26.enumPortType = (uint32_t)VAR_19->portType;
        VAR_26.boolIndependentMode= (uint8_t)VAR_19->independentMode;
        VAR_26.liodnOffset = VAR_19->liodnOffset;
        VAR_26.numOfTasks = VAR_19->numOfTasks;
        VAR_26.numOfExtraTasks = VAR_19->numOfExtraTasks;
        VAR_26.numOfOpenDmas = VAR_19->numOfOpenDmas;
        VAR_26.numOfExtraOpenDmas = VAR_19->numOfExtraOpenDmas;
        VAR_26.sizeOfFifo = VAR_19->sizeOfFifo;
        VAR_26.extraSizeOfFifo = VAR_19->extraSizeOfFifo;
        VAR_26.deqPipelineDepth = VAR_19->deqPipelineDepth;
        VAR_26.maxFrameLength = VAR_19->maxFrameLength;
        VAR_26.liodnBase = VAR_19->liodnBase;

        FUNC_19(&VAR_28, 0, sizeof(VAR_28));
        FUNC_19(&VAR_29, 0, sizeof(VAR_29));
        VAR_28.msgId = VAR_4;
        FUNC_18(VAR_28.msgBody, &VAR_26, sizeof(VAR_26));
        VAR_30 = (sizeof(uint32_t) + sizeof(t_FmIpcPortOutInitParams));
        if ((VAR_21 = FUNC_8(VAR_20->h_IpcSessions[0],
                                     (uint8_t*)&VAR_28,
                                     sizeof(VAR_28.msgId) +sizeof(VAR_26),
                                     (uint8_t*)&VAR_29,
                                     &VAR_30,
                                     ((void*)0),
                                     ((void*)0))) != VAR_3)
            FUNC_7(VAR_8, VAR_21, VAR_10);
        if (VAR_30 != (sizeof(uint32_t) + sizeof(t_FmIpcPortOutInitParams)))
            FUNC_7(VAR_7, VAR_1, ("IPC reply length mismatch"));
        FUNC_18((uint8_t*)&VAR_27, VAR_29.replyBody, sizeof(t_FmIpcPortOutInitParams));

        VAR_19->fmMuramPhysBaseAddr.high = VAR_27.ipcPhysAddr.high;
        VAR_19->fmMuramPhysBaseAddr.low = VAR_27.ipcPhysAddr.low;
        VAR_19->numOfTasks = VAR_27.numOfTasks;
        VAR_19->numOfExtraTasks = VAR_27.numOfExtraTasks;
        VAR_19->numOfOpenDmas = VAR_27.numOfOpenDmas;
        VAR_19->numOfExtraOpenDmas = VAR_27.numOfExtraOpenDmas;
        VAR_19->sizeOfFifo = VAR_27.sizeOfFifo;
        VAR_19->extraSizeOfFifo = VAR_27.extraSizeOfFifo;

        return (t_Error)(VAR_29.error);
    }

    FUNC_0(FUNC_6(1, VAR_23, 63));

    VAR_22 = FUNC_9(VAR_20->h_Spinlock);
    if (VAR_19->independentMode)
    {

        VAR_20->independentMode = VAR_19->independentMode;

        FUNC_13(VAR_25.fpm_rg);
    }

    if (VAR_19->portType == VAR_13)
    {
        if (VAR_20->hcPortInitialized)
        {
            FUNC_10(VAR_20->h_Spinlock, VAR_22);
            FUNC_7(VAR_7, VAR_0, ("Only one host command port is allowed."));
        }
        else
            VAR_20->hcPortInitialized = VAR_12;
    }
    VAR_20->p_FmStateStruct->portsTypes[VAR_23] = VAR_19->portType;

    VAR_21 = FUNC_3(VAR_20, VAR_23, &VAR_19->numOfTasks, &VAR_19->numOfExtraTasks, VAR_12);
    if (VAR_21)
    {
        FUNC_10(VAR_20->h_Spinlock, VAR_22);
        FUNC_7(VAR_7, VAR_21, VAR_10);
    }




    if ((VAR_19->portType != VAR_14) &&
       (VAR_19->portType != VAR_15))

    {
        uint8_t VAR_31;
        uint8_t VAR_32;


        VAR_20->p_FmStateStruct->accumulatedNumOfDeqTnums += VAR_19->deqPipelineDepth;
        VAR_31 = FUNC_12(VAR_25.qmi_rg);

        if (VAR_31 >= (VAR_11 - VAR_20->p_FmStateStruct->accumulatedNumOfDeqTnums))
        {
            VAR_31 = (uint8_t)(VAR_11 - VAR_20->p_FmStateStruct->accumulatedNumOfDeqTnums - 1);
            FUNC_17(VAR_25.qmi_rg, VAR_31);
        }

        VAR_32 = FUNC_11(VAR_25.qmi_rg);


        if ((VAR_32 <= VAR_20->p_FmStateStruct->accumulatedNumOfDeqTnums) && (VAR_32 < VAR_11-1))
        {
            VAR_32 = (uint8_t)(VAR_20->p_FmStateStruct->accumulatedNumOfDeqTnums + 1);
            FUNC_16(VAR_25.qmi_rg, VAR_32);
        }
    }
    VAR_21 = FUNC_4(VAR_20,
                          VAR_23,
                          &VAR_19->sizeOfFifo,
                          &VAR_19->extraSizeOfFifo,
                          VAR_12);
    if (VAR_21)
    {
        FUNC_10(VAR_20->h_Spinlock, VAR_22);
        FUNC_7(VAR_7, VAR_21, VAR_10);
    }

    VAR_21 = FUNC_2(VAR_20,
                             VAR_23,
                             &VAR_19->numOfOpenDmas,
                             &VAR_19->numOfExtraOpenDmas,
                             VAR_12);
    if (VAR_21)
    {
        FUNC_10(VAR_20->h_Spinlock, VAR_22);
        FUNC_7(VAR_7, VAR_21, VAR_10);
    }

    FUNC_14(&VAR_25,
                            VAR_23,
                            VAR_19->liodnBase,
                            VAR_19->liodnOffset);

    if (VAR_20->p_FmStateStruct->revInfo.majorRev < 6)
        FUNC_15(VAR_25.fpm_rg,
                                            VAR_23,
                                            VAR_19->independentMode,
                                            !!((VAR_19->portType==VAR_14) || (VAR_19->portType==VAR_15)));

    FUNC_5(VAR_24, VAR_23);
    if ((VAR_19->portType == VAR_16) ||
        (VAR_19->portType == VAR_14))
    {
        FUNC_0(VAR_24 < VAR_6);
        if (VAR_19->maxFrameLength >= VAR_20->p_FmStateStruct->macMaxFrameLengths1G[VAR_24])
            VAR_20->p_FmStateStruct->portMaxFrameLengths1G[VAR_24] = VAR_19->maxFrameLength;
        else
            FUNC_7(VAR_8, VAR_1, ("Port maxFrameLength is smaller than MAC current MTU"));
    }

    FUNC_1(VAR_20, &VAR_19->fmMuramPhysBaseAddr);
    FUNC_10(VAR_20->h_Spinlock, VAR_22);

    return VAR_3;
}
