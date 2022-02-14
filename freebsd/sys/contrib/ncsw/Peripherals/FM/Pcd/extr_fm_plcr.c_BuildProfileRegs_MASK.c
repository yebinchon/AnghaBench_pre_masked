
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_7__ ;
typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct TYPE_14__ {int fmpl_pects; int fmpl_pepts_ets; scalar_t__ fmpl_perrpc; scalar_t__ fmpl_perypc; scalar_t__ fmpl_perpc; scalar_t__ fmpl_peypc; scalar_t__ fmpl_pegpc; scalar_t__ fmpl_pernia; scalar_t__ fmpl_peynia; scalar_t__ fmpl_pegnia; scalar_t__ fmpl_pemode; scalar_t__ fmpl_pepbs_ebs; scalar_t__ fmpl_pepepir_eir; scalar_t__ fmpl_pecbs; scalar_t__ fmpl_pecir; int fmpl_pelts; } ;
typedef TYPE_3__ t_FmPcdPlcrProfileRegs ;
struct TYPE_13__ {int rollBackFrameSelection; int frameLengthSelection; } ;
struct TYPE_17__ {TYPE_2__ byteModeParams; int rateMode; int peakOrExcessInfoRate; int committedInfoRate; } ;
struct TYPE_12__ {int override; int dfltColor; } ;
struct TYPE_15__ {int algSelection; TYPE_7__ nonPassthroughAlgParams; TYPE_1__ color; int colorMode; int paramsOnRed; int nextEngineOnRed; int paramsOnYellow; int nextEngineOnYellow; int paramsOnGreen; int nextEngineOnGreen; } ;
typedef TYPE_4__ t_FmPcdPlcrProfileParams ;
struct TYPE_16__ {int h_Fm; } ;
typedef TYPE_5__ t_FmPcd ;
typedef scalar_t__ t_Error ;


 int FUNC_0 (TYPE_5__*) ;
 int FUNC_1 (scalar_t__,TYPE_7__*,scalar_t__*,scalar_t__*,scalar_t__*,scalar_t__*,scalar_t__*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 scalar_t__ VAR_14 ;
 scalar_t__ VAR_15 ;
 scalar_t__ VAR_16 ;
 scalar_t__ VAR_17 ;
 scalar_t__ VAR_18 ;
 scalar_t__ VAR_19 ;
 scalar_t__ VAR_20 ;
 scalar_t__ VAR_21 ;
 scalar_t__ VAR_22 ;
 scalar_t__ FUNC_2 (int ) ;
 int VAR_23 ;
 char* VAR_24 ;
 int FUNC_3 (int ,scalar_t__,char*) ;
 scalar_t__ FUNC_4 (TYPE_5__*,int ,int *,scalar_t__*) ;
__attribute__((used)) static t_Error FUNC_5(t_FmPcd *VAR_25,
                                t_FmPcdPlcrProfileParams *VAR_26,
                                t_FmPcdPlcrProfileRegs *VAR_27)
{
    t_Error VAR_28 = VAR_2;
    uint32_t VAR_29, VAR_30, VAR_31, VAR_32, VAR_33;

    FUNC_0(VAR_25);

    VAR_33 = FUNC_2(VAR_25->h_Fm);
    if (VAR_33 == 0)
    FUNC_3(VAR_23, VAR_1, ("Timestamp scale"));


    VAR_28 = FUNC_4(VAR_25, VAR_26->nextEngineOnGreen, &(VAR_26->paramsOnGreen), &VAR_30);
    if (VAR_28)
        FUNC_3(VAR_23, VAR_28, VAR_24);
    VAR_28 = FUNC_4(VAR_25, VAR_26->nextEngineOnYellow, &(VAR_26->paramsOnYellow), &VAR_31);
    if (VAR_28)
        FUNC_3(VAR_23, VAR_28, VAR_24);
    VAR_28 = FUNC_4(VAR_25, VAR_26->nextEngineOnRed, &(VAR_26->paramsOnRed), &VAR_32);
   if (VAR_28)
        FUNC_3(VAR_23, VAR_28, VAR_24);


    VAR_29 = VAR_20;

    switch (VAR_26->algSelection)
    {
        case 134:
            VAR_27->fmpl_pecir = 0;
            VAR_27->fmpl_pecbs = 0;
            VAR_27->fmpl_pepepir_eir = 0;
            VAR_27->fmpl_pepbs_ebs = 0;
            VAR_27->fmpl_pelts = 0;
            VAR_27->fmpl_pects = 0;
            VAR_27->fmpl_pepts_ets = 0;
            VAR_29 &= ~VAR_3;
            switch (VAR_26->colorMode)
            {
                case 142:
                    VAR_29 |= VAR_6;
                    switch (VAR_26->color.dfltColor)
                    {
                        case 140:
                            VAR_29 &= ~VAR_7;
                            break;
                        case 128:
                            VAR_29 |= VAR_10;
                            break;
                        case 133:
                            VAR_29 |= VAR_9;
                            break;
                        case 136:
                            VAR_29 |= VAR_8;
                            break;
                        default:
                            FUNC_3(VAR_23, VAR_0, VAR_24);
                    }

                    break;
                case 143:
                    VAR_29 &= ~VAR_6;
                    break;
                default:
                    FUNC_3(VAR_23, VAR_0, VAR_24);
            }
            break;

        case 132:

            VAR_29 |= VAR_4;
            if (VAR_26->nonPassthroughAlgParams.committedInfoRate > VAR_26->nonPassthroughAlgParams.peakOrExcessInfoRate)
                FUNC_3(VAR_23, VAR_0, ("in RFC2698 Peak rate must be equal or larger than committedInfoRate."));
            goto cont_rfc;
        case 131:

            VAR_29 |= VAR_5;
cont_rfc:

            switch (VAR_26->colorMode)
            {
                case 142:
                    VAR_29 |= VAR_6;
                    break;
                case 143:
                    VAR_29 &= ~VAR_6;

                    switch (VAR_26->color.override)
                    {
                        case 140:
                            VAR_29 &= ~VAR_17;
                            break;
                        case 128:
                            VAR_29 |= VAR_19;
                            break;
                        case 133:
                            VAR_29 |= VAR_18;
                            break;
                        case 136:
                            VAR_29 |= VAR_16;
                            break;
                        default:
                            FUNC_3(VAR_23, VAR_0, VAR_24);
                    }
                    break;
                default:
                    FUNC_3(VAR_23, VAR_0, VAR_24);
            }

            switch (VAR_26->nonPassthroughAlgParams.rateMode)
            {
                case 144 :
                    VAR_29 &= ~VAR_21;
                        switch (VAR_26->nonPassthroughAlgParams.byteModeParams.frameLengthSelection)
                        {
                            case 139:
                                VAR_29 |= VAR_12;
                                break;
                            case 138:
                                VAR_29 |= VAR_13;
                                break;
                            case 137:
                                VAR_29 |= VAR_14;
                                break;
                            case 141:
                                VAR_29 |= VAR_11;
                                break;
                            default:
                                FUNC_3(VAR_23, VAR_0, VAR_24);
                        }
                        switch (VAR_26->nonPassthroughAlgParams.byteModeParams.rollBackFrameSelection)
                        {
                            case 129:
                                VAR_29 &= ~VAR_22;
                                break;
                            case 130:
                                VAR_29 |= VAR_22;
                                break;
                            default:
                                FUNC_3(VAR_23, VAR_0, VAR_24);
                        }
                    break;
                case 135 :
                    VAR_29 |= VAR_21;
                    break;
                default:
                    FUNC_3(VAR_23, VAR_0, VAR_24);
            }





            {
                uint32_t VAR_34=0, VAR_35=0, VAR_36=0, VAR_37=0, VAR_38=0;

                FUNC_1(VAR_33, &VAR_26->nonPassthroughAlgParams, &VAR_34, &VAR_35, &VAR_36, &VAR_37, &VAR_38);


                VAR_27->fmpl_pecir = VAR_34;

                VAR_27->fmpl_pecbs = VAR_35;

                VAR_27->fmpl_pepepir_eir = VAR_36;

                VAR_27->fmpl_pepbs_ebs = VAR_37;



                VAR_27->fmpl_pepts_ets = 0xFFFFFFFF;

                VAR_27->fmpl_pects = 0xFFFFFFFF;


                VAR_29 |= (VAR_38 << VAR_15);
            }
            break;
        default:
            FUNC_3(VAR_23, VAR_0, VAR_24);
    }

    VAR_27->fmpl_pemode = VAR_29;

    VAR_27->fmpl_pegnia = VAR_30;
    VAR_27->fmpl_peynia = VAR_31;
    VAR_27->fmpl_pernia = VAR_32;


    VAR_27->fmpl_pegpc = 0;
    VAR_27->fmpl_peypc = 0;
    VAR_27->fmpl_perpc = 0;
    VAR_27->fmpl_perypc = 0;
    VAR_27->fmpl_perrpc = 0;

    return VAR_2;
}
