
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_6__ ;
typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef size_t uint8_t ;
typedef scalar_t__ uint32_t ;
typedef int uint16_t ;
typedef scalar_t__ t_Handle ;
struct TYPE_12__ {size_t hardwarePortId; int deqPipelineDepth; scalar_t__ enumPortType; } ;
typedef TYPE_3__ t_FmIpcPortFreeParams ;
struct TYPE_13__ {int msgBody; int msgId; } ;
typedef TYPE_4__ t_FmIpcMsg ;
struct TYPE_14__ {size_t hardwarePortId; scalar_t__ portType; int deqPipelineDepth; } ;
typedef TYPE_5__ t_FmInterModulePortFreeParams ;
struct TYPE_15__ {scalar_t__ guestId; int hcPortInitialized; int h_Spinlock; TYPE_2__* p_FmStateStruct; int * h_IpcSessions; struct fman_bmi_regs* p_FmBmiRegs; struct fman_qmi_regs* p_FmQmiRegs; } ;
typedef TYPE_6__ t_Fm ;
typedef scalar_t__ t_Error ;
struct fman_qmi_regs {int dummy; } ;
struct fman_bmi_regs {int dummy; } ;
typedef int portParams ;
typedef int msg ;
struct TYPE_10__ {int majorRev; } ;
struct TYPE_11__ {size_t accumulatedNumOfTasks; size_t accumulatedNumOfOpenDmas; size_t extraOpenDmasPoolSize; int accumulatedFifoSize; int accumulatedNumOfDeqTnums; void* lowEndRestriction; scalar_t__* portMaxFrameLengths1G; scalar_t__* portMaxFrameLengths10G; TYPE_1__ revInfo; int * portsTypes; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 void* VAR_2 ;
 int VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 int FUNC_1 (size_t,size_t) ;
 int FUNC_2 (int,size_t,int) ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_3 (int ,scalar_t__,int ) ;
 scalar_t__ FUNC_4 (int ,size_t*,int,int *,int *,int *,int *) ;
 scalar_t__ FUNC_5 (int ) ;
 int FUNC_6 (int ,scalar_t__) ;
 int VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 scalar_t__ VAR_14 ;
 scalar_t__ VAR_15 ;
 size_t FUNC_7 (struct fman_bmi_regs*,size_t) ;
 size_t FUNC_8 (struct fman_bmi_regs*,size_t) ;
 int FUNC_9 (struct fman_bmi_regs*,size_t) ;
 int FUNC_10 (struct fman_bmi_regs*,size_t,int,int ,size_t) ;
 int FUNC_11 (struct fman_qmi_regs*,size_t) ;
 int FUNC_12 (struct fman_qmi_regs*,size_t) ;
 int FUNC_13 (int ,TYPE_3__*,int) ;
 int FUNC_14 (TYPE_4__*,int ,int) ;

void FUNC_15(t_Handle VAR_16,t_FmInterModulePortFreeParams *VAR_17)
{
    t_Fm *VAR_18 = (t_Fm*)VAR_16;
    uint32_t VAR_19;
    uint8_t VAR_20 = VAR_17->hardwarePortId;
    uint8_t VAR_21, VAR_22, VAR_23;
    uint16_t VAR_24;
    t_Error VAR_25;
    t_FmIpcPortFreeParams VAR_26;
    t_FmIpcMsg VAR_27;
    struct fman_qmi_regs *VAR_28 = VAR_18->p_FmQmiRegs;
    struct fman_bmi_regs *VAR_29 = VAR_18->p_FmBmiRegs;

    if (VAR_18->guestId != VAR_7)
    {
        VAR_26.hardwarePortId = VAR_17->hardwarePortId;
        VAR_26.enumPortType = (uint32_t)VAR_17->portType;
        VAR_26.deqPipelineDepth = VAR_17->deqPipelineDepth;
        FUNC_14(&VAR_27, 0, sizeof(VAR_27));
        VAR_27.msgId = VAR_3;
        FUNC_13(VAR_27.msgBody, &VAR_26, sizeof(VAR_26));
        VAR_25 = FUNC_4(VAR_18->h_IpcSessions[0],
                                (uint8_t*)&VAR_27,
                                sizeof(VAR_27.msgId)+sizeof(VAR_26),
                                ((void*)0),
                                ((void*)0),
                                ((void*)0),
                                ((void*)0));
        if (VAR_25 != VAR_1)
            FUNC_3(VAR_6, VAR_25, VAR_8);
        return;
    }

    FUNC_0(FUNC_2(1, VAR_20, 63));

    VAR_19 = FUNC_5(VAR_18->h_Spinlock);

    if (VAR_17->portType == VAR_11)
    {
        FUNC_0(VAR_18->hcPortInitialized);
        VAR_18->hcPortInitialized = VAR_2;
    }

    VAR_18->p_FmStateStruct->portsTypes[VAR_20] = VAR_10;


    VAR_21 = FUNC_8(VAR_29, VAR_20);
    FUNC_0(VAR_18->p_FmStateStruct->accumulatedNumOfTasks >= VAR_21);
    VAR_18->p_FmStateStruct->accumulatedNumOfTasks -= VAR_21;


    VAR_22 = FUNC_7(VAR_29, VAR_20);
    FUNC_0(VAR_18->p_FmStateStruct->accumulatedNumOfOpenDmas >= VAR_22);
    VAR_18->p_FmStateStruct->accumulatedNumOfOpenDmas -= VAR_22;
    VAR_24 = FUNC_9(VAR_29, VAR_20);
    FUNC_0(VAR_18->p_FmStateStruct->accumulatedFifoSize >= (VAR_24 * VAR_0));
    VAR_18->p_FmStateStruct->accumulatedFifoSize -= (VAR_24 * VAR_0);




    if ((VAR_17->portType != VAR_12) &&
        (VAR_17->portType != VAR_13))

    {
        uint8_t VAR_30;
        uint8_t VAR_31;


        VAR_18->p_FmStateStruct->accumulatedNumOfDeqTnums -= VAR_17->deqPipelineDepth;



        VAR_30 = (uint8_t)(VAR_9 - VAR_18->p_FmStateStruct->accumulatedNumOfDeqTnums - 1);



        VAR_31 = (uint8_t)(VAR_18->p_FmStateStruct->accumulatedNumOfDeqTnums + 1);

        FUNC_12(VAR_28, VAR_30);
        FUNC_11(VAR_28, VAR_31);
    }

    FUNC_1(VAR_23, VAR_20);
    if ((VAR_17->portType == VAR_14) ||
        (VAR_17->portType == VAR_12))
    {
        FUNC_0(VAR_23 < VAR_5);
        VAR_18->p_FmStateStruct->portMaxFrameLengths1G[VAR_23] = 0;
    }





    FUNC_6(VAR_18->h_Spinlock, VAR_19);
}
