
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ t_Handle ;
struct TYPE_6__ {TYPE_2__* p_Code; } ;
struct TYPE_7__ {scalar_t__ guestId; scalar_t__* fmModuleName; scalar_t__ irq; scalar_t__ errIrq; struct TYPE_7__* p_FmStateStruct; int recoveryMode; struct TYPE_7__* p_FmDriverParam; TYPE_1__ firmware; scalar_t__ h_Spinlock; struct TYPE_7__* p_FmSp; int partNumOfVSPs; int partVSPBase; int p_FmDmaRegs; int p_FmFpmRegs; int p_FmQmiRegs; int p_FmBmiRegs; } ;
typedef TYPE_2__ t_Fm ;
typedef int t_Error ;
struct fman_rg {int dma_rg; int fpm_rg; int qmi_rg; int bmi_rg; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (scalar_t__,int ,int ,scalar_t__) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_2 (TYPE_2__*,int ) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (TYPE_2__*) ;
 int FUNC_5 (scalar_t__) ;
 int FUNC_6 (scalar_t__) ;
 int FUNC_7 (scalar_t__*) ;
 int FUNC_8 (struct fman_rg*) ;

t_Error FUNC_9(t_Handle VAR_4)
{
    t_Fm *VAR_5 = (t_Fm*)VAR_4;
    struct fman_rg VAR_6;

    FUNC_2(VAR_5, VAR_0);

    VAR_6.bmi_rg = VAR_5->p_FmBmiRegs;
    VAR_6.qmi_rg = VAR_5->p_FmQmiRegs;
    VAR_6.fpm_rg = VAR_5->p_FmFpmRegs;
    VAR_6.dma_rg = VAR_5->p_FmDmaRegs;

    if (VAR_5->guestId != VAR_2)
    {
        if (VAR_5->fmModuleName[0] != 0)
            FUNC_7(VAR_5->fmModuleName);

        if (!VAR_5->recoveryMode)
            FUNC_4(VAR_5->p_FmStateStruct);

        FUNC_4(VAR_5);

        return VAR_1;
    }

    FUNC_8(&VAR_6);

    if ((VAR_5->guestId == VAR_2) && (VAR_5->fmModuleName[0] != 0))
        FUNC_7(VAR_5->fmModuleName);

    if (VAR_5->p_FmStateStruct)
    {
        if (VAR_5->p_FmStateStruct->irq != VAR_3)
        {
            FUNC_3(VAR_5->p_FmStateStruct->irq);
            FUNC_5(VAR_5->p_FmStateStruct->irq);
        }
        if (VAR_5->p_FmStateStruct->errIrq != VAR_3)
        {
            FUNC_3(VAR_5->p_FmStateStruct->errIrq);
            FUNC_5(VAR_5->p_FmStateStruct->errIrq);
        }
    }
    if (VAR_5->h_Spinlock)
        FUNC_6(VAR_5->h_Spinlock);

    if (VAR_5->p_FmDriverParam)
    {
        if (VAR_5->firmware.p_Code)
            FUNC_4(VAR_5->firmware.p_Code);
        FUNC_4(VAR_5->p_FmDriverParam);
        VAR_5->p_FmDriverParam = ((void*)0);
    }

    FUNC_0(VAR_5);

    if (!VAR_5->recoveryMode && VAR_5->p_FmStateStruct)
        FUNC_4(VAR_5->p_FmStateStruct);

    FUNC_4(VAR_5);

    return VAR_1;
}
