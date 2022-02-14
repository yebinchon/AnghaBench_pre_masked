
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_22__ TYPE_8__ ;
typedef struct TYPE_21__ TYPE_7__ ;
typedef struct TYPE_20__ TYPE_6__ ;
typedef struct TYPE_19__ TYPE_5__ ;
typedef struct TYPE_18__ TYPE_4__ ;
typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;


typedef int uint32_t ;
typedef size_t uint16_t ;
typedef scalar_t__ t_Handle ;
struct TYPE_19__ {int fmpl_pernia; int fmpl_peynia; int fmpl_pegnia; } ;
struct TYPE_20__ {TYPE_5__ profileRegs; } ;
typedef TYPE_6__ t_FmPcdPlcrRegs ;
struct TYPE_21__ {TYPE_4__* profiles; TYPE_6__* p_FmPcdPlcrRegs; } ;
typedef TYPE_7__ t_FmPcdPlcr ;
struct TYPE_22__ {TYPE_7__* p_FmPcdPlcr; scalar_t__ h_Hc; } ;
typedef TYPE_8__ t_FmPcd ;
typedef int t_Error ;
struct TYPE_17__ {scalar_t__ action; } ;
struct TYPE_16__ {scalar_t__ action; } ;
struct TYPE_15__ {scalar_t__ action; } ;
struct TYPE_18__ {int requiredAction; scalar_t__ nextEngineOnGreen; scalar_t__ nextEngineOnYellow; scalar_t__ nextEngineOnRed; TYPE_3__ paramsOnRed; TYPE_2__ paramsOnYellow; TYPE_1__ paramsOnGreen; int requiredActionFlag; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (scalar_t__,size_t,int) ;
 int FUNC_1 (size_t) ;
 int FUNC_2 (size_t) ;
 int FUNC_3 (TYPE_8__*,size_t) ;
 int FUNC_4 (TYPE_8__*,size_t,int) ;
 int FUNC_5 (int ) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_6 (TYPE_7__*) ;
 int FUNC_7 (TYPE_7__*,int) ;
 int FUNC_8 (int ,int ,char*) ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_9 (TYPE_8__*,size_t,int ) ;
 int FUNC_10 (int ,int) ;
 int FUNC_11 (TYPE_8__*,int) ;
 scalar_t__ VAR_13 ;
 scalar_t__ VAR_14 ;

t_Error FUNC_12(t_Handle VAR_15, uint16_t VAR_16 ,uint32_t VAR_17)
{
    t_FmPcd *VAR_18 = (t_FmPcd *)VAR_15;
    t_FmPcdPlcr *VAR_19 = VAR_18->p_FmPcdPlcr;
    t_FmPcdPlcrRegs *VAR_20 = VAR_19->p_FmPcdPlcrRegs;
    uint32_t VAR_21, VAR_22;
    t_Error VAR_23;



    if (VAR_16 >= VAR_3)
        FUNC_8(VAR_7, VAR_1,("Policer profile out of range"));

    if (!FUNC_3(VAR_18, VAR_16))
        FUNC_8(VAR_7, VAR_1,("Policer profile is not valid"));



    if (VAR_18->h_Hc)
    {
        VAR_23 = FUNC_0(VAR_18->h_Hc, VAR_16, VAR_17);

        FUNC_9(VAR_18, VAR_16, VAR_11);
        FUNC_4(VAR_18, VAR_16, VAR_17);


        return VAR_23;
    }




    VAR_22 = FUNC_6(VAR_19);
    FUNC_11(VAR_18, FUNC_1(VAR_16));

    if (!VAR_18->p_FmPcdPlcr->profiles[VAR_16].requiredActionFlag ||
       !(VAR_18->p_FmPcdPlcr->profiles[VAR_16].requiredAction & VAR_17))
    {
        if (VAR_17 & VAR_12)
        {
            if ((VAR_18->p_FmPcdPlcr->profiles[VAR_16].nextEngineOnGreen!= VAR_13) ||
               (VAR_18->p_FmPcdPlcr->profiles[VAR_16].nextEngineOnYellow!= VAR_13) ||
               (VAR_18->p_FmPcdPlcr->profiles[VAR_16].nextEngineOnRed!= VAR_13))
            {
                FUNC_7(VAR_19, VAR_22);

                FUNC_8 (VAR_7, VAR_2, ("In this case the next engine can be e_FM_PCD_DONE"));
            }

            if (VAR_18->p_FmPcdPlcr->profiles[VAR_16].paramsOnGreen.action == VAR_14)
            {
                VAR_21 = FUNC_5(VAR_20->profileRegs.fmpl_pegnia);
                if (!(VAR_21 & (VAR_10 | VAR_8)))
                {
                    FUNC_7(VAR_19, VAR_22);

                    FUNC_8(VAR_7, VAR_0, ("Next engine of this policer profile has to be assigned to FM_PCD_DONE"));
                }
                VAR_21 |= VAR_9;
                FUNC_10(VAR_20->profileRegs.fmpl_pegnia, VAR_21);
                VAR_21 = FUNC_2(VAR_16);
                VAR_21 |= VAR_4;
                FUNC_11(VAR_18, VAR_21);
            }

            if (VAR_18->p_FmPcdPlcr->profiles[VAR_16].paramsOnYellow.action == VAR_14)
            {
                VAR_21 = FUNC_5(VAR_20->profileRegs.fmpl_peynia);
                if (!(VAR_21 & (VAR_10 | VAR_8)))
                {
                    FUNC_7(VAR_19, VAR_22);

                    FUNC_8(VAR_7, VAR_0, ("Next engine of this policer profile has to be assigned to FM_PCD_DONE"));
                }
                VAR_21 |= VAR_9;
                FUNC_10(VAR_20->profileRegs.fmpl_peynia, VAR_21);
                VAR_21 = FUNC_2(VAR_16);
                VAR_21 |= VAR_6;
                FUNC_11(VAR_18, VAR_21);
                FUNC_7(VAR_19, VAR_22);
            }

            if (VAR_18->p_FmPcdPlcr->profiles[VAR_16].paramsOnRed.action == VAR_14)
            {
                VAR_21 = FUNC_5(VAR_20->profileRegs.fmpl_pernia);
                if (!(VAR_21 & (VAR_10 | VAR_8)))
                {
                    FUNC_7(VAR_19, VAR_22);

                    FUNC_8(VAR_7, VAR_0, ("Next engine of this policer profile has to be assigned to FM_PCD_DONE"));
                }
                VAR_21 |= VAR_9;
                FUNC_10(VAR_20->profileRegs.fmpl_pernia, VAR_21);
                VAR_21 = FUNC_2(VAR_16);
                VAR_21 |= VAR_5;
                FUNC_11(VAR_18, VAR_21);

            }
        }
    }
    FUNC_7(VAR_19, VAR_22);

    FUNC_9(VAR_18, VAR_16, VAR_11);
    FUNC_4(VAR_18, VAR_16, VAR_17);



    return VAR_2;
}
