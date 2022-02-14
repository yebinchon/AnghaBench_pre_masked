
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int uint8_t ;
typedef void* uint32_t ;
struct TYPE_9__ {int kgse_mv; int kgse_ccbs; int kgse_dv1; int kgse_dv0; } ;
struct TYPE_7__ {TYPE_4__ schemeRegs; } ;
struct TYPE_8__ {void* commandSequence; TYPE_1__ hcSpecificData; int extraReg; int actionReg; void* opcode; } ;
typedef TYPE_2__ t_HcFrame ;
typedef scalar_t__ t_Handle ;
typedef int t_FmHc ;
typedef scalar_t__ t_Error ;
typedef int t_DpaaFD ;
struct fman_kg_scheme_regs {int kgse_mv; int kgse_ccbs; int kgse_dv1; int kgse_dv0; } ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_1 (int *,int *,void*) ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (scalar_t__) ;
 TYPE_2__* FUNC_4 (int *,void**) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 char* VAR_6 ;
 int FUNC_5 (int *,TYPE_2__*,void*) ;
 int FUNC_6 (int ,scalar_t__,char*) ;
 int FUNC_7 (TYPE_4__*,struct fman_kg_scheme_regs*,int) ;
 int FUNC_8 (TYPE_2__*,int ,int) ;

t_Error FUNC_9(t_Handle VAR_7,
                           t_Handle VAR_8,
                           struct fman_kg_scheme_regs *VAR_9,
                           bool VAR_10)
{
    t_FmHc *VAR_11 = (t_FmHc*)VAR_7;
    t_Error VAR_12 = VAR_1;
    t_HcFrame *VAR_13;
    t_DpaaFD VAR_14;
    uint8_t VAR_15;
    uint32_t VAR_16;

    VAR_13 = FUNC_4(VAR_11, &VAR_16);
    if (!VAR_13)
        FUNC_6(VAR_5, VAR_0, ("HC Frame object"));

    VAR_15 = FUNC_3(VAR_8);

    FUNC_8(VAR_13, 0, sizeof(t_HcFrame));
    VAR_13->opcode = (uint32_t)(VAR_2 | VAR_4);
    VAR_13->actionReg = FUNC_2(VAR_15, VAR_10);
    VAR_13->extraReg = VAR_3;
    FUNC_7(&VAR_13->hcSpecificData.schemeRegs, VAR_9, sizeof(struct fman_kg_scheme_regs));
    if (!VAR_10)
    {
        VAR_13->hcSpecificData.schemeRegs.kgse_dv0 = VAR_9->kgse_dv0;
        VAR_13->hcSpecificData.schemeRegs.kgse_dv1 = VAR_9->kgse_dv1;
        VAR_13->hcSpecificData.schemeRegs.kgse_ccbs = VAR_9->kgse_ccbs;
        VAR_13->hcSpecificData.schemeRegs.kgse_mv = VAR_9->kgse_mv;
    }
    VAR_13->commandSequence = VAR_16;

    FUNC_0(sizeof(t_HcFrame));

    VAR_12 = FUNC_1(VAR_11, &VAR_14, VAR_16);

    FUNC_5(VAR_11, VAR_13, VAR_16);

    if (VAR_12 != VAR_1)
        FUNC_6(VAR_5, VAR_12, VAR_6);

    return VAR_1;
}
