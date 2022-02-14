
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef scalar_t__ uint8_t ;
typedef void* uint32_t ;
struct TYPE_11__ {void* kgse_spc; int kgse_mode; } ;
struct TYPE_12__ {TYPE_1__ schemeRegs; } ;
struct TYPE_13__ {TYPE_2__ hcSpecificData; void* commandSequence; int extraReg; int actionReg; void* opcode; } ;
typedef TYPE_3__ t_HcFrame ;
typedef scalar_t__ t_Handle ;
struct TYPE_14__ {int h_FmPcd; } ;
typedef TYPE_4__ t_FmHc ;
typedef scalar_t__ t_Error ;
typedef int t_DpaaFD ;


 int FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_1 (TYPE_4__*,int *,void*) ;
 scalar_t__ VAR_4 ;
 int FUNC_2 (scalar_t__) ;
 scalar_t__ FUNC_3 (int ,scalar_t__) ;
 scalar_t__ FUNC_4 (scalar_t__) ;
 int FUNC_5 (int ) ;
 TYPE_3__* FUNC_6 (TYPE_4__*,void**) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 char* VAR_10 ;
 int FUNC_7 (TYPE_4__*,TYPE_3__*,void*) ;
 int FUNC_8 (int ,scalar_t__,char*) ;
 int VAR_11 ;
 int FUNC_9 (TYPE_3__*,int ,int) ;

uint32_t FUNC_10(t_Handle VAR_12, t_Handle VAR_13)
{
    t_FmHc *VAR_14 = (t_FmHc*)VAR_12;
    t_Error VAR_15;
    t_HcFrame *VAR_16;
    t_DpaaFD VAR_17;
    uint32_t VAR_18;
    uint8_t VAR_19;
    uint8_t VAR_20 = FUNC_4(VAR_13);
    uint32_t VAR_21;

    VAR_19 = FUNC_3(VAR_14->h_FmPcd, VAR_20);
    if ( VAR_19 == VAR_4)
    {
        FUNC_8(VAR_8, VAR_1, VAR_10);
        return 0;
    }


    VAR_16 = FUNC_6(VAR_14, &VAR_21);
    if (!VAR_16)
    {
        FUNC_8(VAR_9, VAR_2, ("HC Frame object"));
        return 0;
    }
    FUNC_9(VAR_16, 0, sizeof(t_HcFrame));
    VAR_16->opcode = (uint32_t)(VAR_5 | VAR_7);
    VAR_16->actionReg = FUNC_2(VAR_20);
    VAR_16->extraReg = VAR_6;
    VAR_16->commandSequence = VAR_21;

    FUNC_0(VAR_11);

    VAR_15 = FUNC_1(VAR_14, &VAR_17, VAR_21);
    if (VAR_15 != VAR_3)
    {
        FUNC_7(VAR_14, VAR_16, VAR_21);
        FUNC_8(VAR_9, VAR_15, VAR_10);
        return 0;
    }

    if (!FUNC_5(VAR_16->hcSpecificData.schemeRegs.kgse_mode))
    {
        FUNC_7(VAR_14, VAR_16, VAR_21);
        FUNC_8(VAR_8, VAR_0, ("Scheme is invalid"));
        return 0;
    }

    VAR_18 = VAR_16->hcSpecificData.schemeRegs.kgse_spc;
    FUNC_7(VAR_14, VAR_16, VAR_21);

    return VAR_18;
}
