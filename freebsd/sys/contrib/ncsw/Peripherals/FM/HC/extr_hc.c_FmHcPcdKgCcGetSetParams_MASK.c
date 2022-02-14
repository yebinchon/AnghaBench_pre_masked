
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef scalar_t__ uint8_t ;
typedef int uint32_t ;
struct TYPE_11__ {int kgse_mode; int kgse_om; } ;
struct TYPE_12__ {TYPE_1__ schemeRegs; } ;
struct TYPE_13__ {int opcode; int commandSequence; void* extraReg; int actionReg; TYPE_2__ hcSpecificData; } ;
typedef TYPE_3__ t_HcFrame ;
typedef scalar_t__ t_Handle ;
struct TYPE_14__ {int h_FmPcd; } ;
typedef TYPE_4__ t_FmHc ;
typedef scalar_t__ t_Error ;
typedef int t_DpaaFD ;


 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_2 (TYPE_4__*,int *,int) ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_5 (int ,scalar_t__) ;
 scalar_t__ FUNC_6 (int ,scalar_t__) ;
 int FUNC_7 (int ,scalar_t__) ;
 scalar_t__ FUNC_8 (int ,scalar_t__) ;
 int FUNC_9 (int ,scalar_t__) ;
 int FUNC_10 (int ,scalar_t__) ;
 scalar_t__ FUNC_11 (scalar_t__) ;
 scalar_t__ FUNC_12 (int ,scalar_t__) ;
 scalar_t__ FUNC_13 (int ,scalar_t__) ;
 scalar_t__ FUNC_14 (int ,int ,int) ;
 TYPE_3__* FUNC_15 (TYPE_4__*,int*) ;
 int VAR_6 ;
 void* VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 char* VAR_19 ;
 int FUNC_16 (TYPE_4__*,TYPE_3__*,int) ;
 int FUNC_17 (int ,scalar_t__,char*) ;
 int VAR_20 ;
 scalar_t__ VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 scalar_t__ VAR_26 ;
 scalar_t__ VAR_27 ;
 scalar_t__ VAR_28 ;
 scalar_t__ VAR_29 ;
 int FUNC_18 (TYPE_3__*,int ,int) ;

t_Error FUNC_19(t_Handle VAR_30, t_Handle VAR_31, uint32_t VAR_32, uint32_t VAR_33)
{
    t_FmHc *VAR_34 = (t_FmHc*)VAR_30;
    t_Error VAR_35 = VAR_3;
    t_HcFrame *VAR_36;
    t_DpaaFD VAR_37;
    uint8_t VAR_38;
    uint8_t VAR_39 = FUNC_11(VAR_31);
    uint32_t VAR_40 = 0;
    uint32_t VAR_41;






    VAR_38 = FUNC_8(VAR_34->h_FmPcd, VAR_39);
    if ( VAR_38 == VAR_5)
        FUNC_17(VAR_9, VAR_0, VAR_19);

    if (!FUNC_10(VAR_34->h_FmPcd, VAR_38) ||
       !(FUNC_9(VAR_34->h_FmPcd, VAR_38) & VAR_32))
    {
        if ((VAR_32 & VAR_25) &&
            (FUNC_6(VAR_34->h_FmPcd, VAR_38) == VAR_29))
            {
                if ((FUNC_12(VAR_34->h_FmPcd, VAR_38) == VAR_4) ||
                    (FUNC_13(VAR_34->h_FmPcd, VAR_38) == VAR_21))
                    FUNC_17(VAR_9, VAR_1, ("In this situation PP can not be with distribution and has to be shared"));
                VAR_35 = FUNC_14(VAR_34->h_FmPcd, FUNC_7(VAR_34->h_FmPcd, VAR_38), VAR_32);
                if (VAR_35)
                    FUNC_17(VAR_9, VAR_35, VAR_19);
            }
        else
        {

            VAR_36 = FUNC_15(VAR_34, &VAR_41);
            if (!VAR_36)
                FUNC_17(VAR_10, VAR_2, ("HC Frame object"));
            FUNC_18(VAR_36, 0, sizeof(t_HcFrame));
            VAR_36->opcode = (uint32_t)(VAR_6 | VAR_8);
            VAR_36->actionReg = FUNC_3(VAR_39);
            VAR_36->extraReg = VAR_7;
            VAR_36->commandSequence = VAR_41;
            FUNC_1(VAR_20);
            if ((VAR_35 = FUNC_2(VAR_34, &VAR_37, VAR_41)) != VAR_3)
            {
                FUNC_16(VAR_34, VAR_36, VAR_41);
                FUNC_17(VAR_10, VAR_35, VAR_19);
            }


            if ((VAR_32 & VAR_25) &&
                ((FUNC_6(VAR_34->h_FmPcd, VAR_38) == VAR_27) &&
                 (FUNC_5(VAR_34->h_FmPcd, VAR_38) == VAR_28)))
            {
                VAR_40 = VAR_36->hcSpecificData.schemeRegs.kgse_mode;
                FUNC_0(VAR_40 & (VAR_14 | VAR_12));
                VAR_36->hcSpecificData.schemeRegs.kgse_mode = VAR_40 | VAR_13;
            }

            if ((VAR_32 & VAR_23) &&
                (FUNC_6(VAR_34->h_FmPcd, VAR_38) == VAR_26))
            {
                VAR_40 = VAR_36->hcSpecificData.schemeRegs.kgse_mode;
                FUNC_0(VAR_40 & (VAR_15 | VAR_17));
                VAR_40 &= ~VAR_17;
                VAR_36->hcSpecificData.schemeRegs.kgse_mode = VAR_40 | VAR_18;
            }

            if (VAR_32 & VAR_24)
                VAR_36->hcSpecificData.schemeRegs.kgse_om = VAR_33;

            if (VAR_32 & VAR_22)
            {
                VAR_40 = VAR_36->hcSpecificData.schemeRegs.kgse_mode;
                VAR_40 &= ~(VAR_16 | VAR_11);
                VAR_40 |= VAR_33;
                VAR_36->hcSpecificData.schemeRegs.kgse_mode = VAR_40;
            }


            VAR_36->opcode = (uint32_t)(VAR_6 | VAR_8);
            VAR_36->actionReg = FUNC_4(VAR_39, VAR_4);
            VAR_36->extraReg = VAR_7;

            FUNC_1(sizeof(t_HcFrame));
            VAR_35 = FUNC_2(VAR_34, &VAR_37, VAR_41);

            FUNC_16(VAR_34, VAR_36, VAR_41);

            if (VAR_35 != VAR_3)
                FUNC_17(VAR_10, VAR_35, VAR_19);
        }
    }

    return VAR_3;
}
