
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_5__ ;
typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;


typedef size_t uint8_t ;
typedef scalar_t__ t_Handle ;
struct TYPE_16__ {size_t clsPlanGrpId; size_t netEnvId; scalar_t__ grpExists; } ;
typedef TYPE_2__ t_FmPcdKgInterModuleClsPlanSet ;
typedef TYPE_2__ t_FmPcdKgInterModuleClsPlanGrpParams ;
struct TYPE_17__ {int optArray; int owners; } ;
typedef TYPE_4__ t_FmPcdKgClsPlanGrp ;
struct TYPE_18__ {TYPE_1__* p_FmPcdKg; scalar_t__ h_Hc; } ;
typedef TYPE_5__ t_FmPcd ;
typedef scalar_t__ t_Error ;
typedef int protocolOpt_t ;
typedef int grpParams ;
struct TYPE_15__ {size_t emptyClsPlanGrpId; TYPE_4__* clsPlanGrps; } ;


 scalar_t__ FUNC_0 (TYPE_5__*,size_t,size_t) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (scalar_t__,TYPE_2__*) ;
 scalar_t__ FUNC_3 (scalar_t__,TYPE_2__*,TYPE_2__*) ;
 size_t VAR_4 ;
 int FUNC_4 (TYPE_5__*,TYPE_2__*) ;
 int VAR_5 ;
 int VAR_6 ;
 char* VAR_7 ;
 scalar_t__ FUNC_5 (scalar_t__,TYPE_2__*) ;
 int FUNC_6 (int ,scalar_t__,char*) ;
 int VAR_8 ;
 int FUNC_7 (TYPE_2__*) ;
 scalar_t__ FUNC_8 (int) ;
 int FUNC_9 (int *,int *,int) ;
 int FUNC_10 (TYPE_2__*,int ,int) ;

t_Error FUNC_11(t_Handle VAR_9, uint8_t VAR_10, uint8_t VAR_11, protocolOpt_t *VAR_12, uint8_t *VAR_13, bool *VAR_14)
{
    t_FmPcd *VAR_15 = (t_FmPcd *)VAR_9;
    t_FmPcdKgInterModuleClsPlanGrpParams VAR_16, *VAR_17;
    t_FmPcdKgClsPlanGrp *VAR_18;
    t_FmPcdKgInterModuleClsPlanSet *VAR_19;
    t_Error VAR_20;




    FUNC_10(&VAR_16, 0, sizeof(VAR_16));
    VAR_16.clsPlanGrpId = VAR_4;
    VAR_17 = &VAR_16;

    VAR_17->netEnvId = VAR_11;



    VAR_20 = FUNC_5(VAR_9, VAR_17);
    if (VAR_20)
        FUNC_6(VAR_6,VAR_20,VAR_7);

    if (VAR_17->grpExists)
    {

        *VAR_13 = VAR_17->clsPlanGrpId;
    }
    else
    {
        VAR_19 = (t_FmPcdKgInterModuleClsPlanSet *)FUNC_8(sizeof(t_FmPcdKgInterModuleClsPlanSet));
        if (!VAR_19)
            FUNC_6(VAR_5, VAR_0, ("Classification plan set"));
        FUNC_10(VAR_19, 0, sizeof(t_FmPcdKgInterModuleClsPlanSet));

        VAR_20 = FUNC_3(VAR_9, VAR_17, VAR_19);
        if (VAR_20)
        {
            FUNC_7(VAR_19);
            FUNC_6(VAR_6, VAR_20, VAR_7);
        }
        *VAR_13 = VAR_17->clsPlanGrpId;

        if (VAR_15->h_Hc)
        {

            VAR_20 = FUNC_2(VAR_15->h_Hc, VAR_19);
            if (VAR_20)
            {
                FUNC_7(VAR_19);
                FUNC_6(VAR_5, VAR_20, VAR_7);
            }
        }
        else

            FUNC_4(VAR_15, VAR_19);

        FUNC_7(VAR_19);
    }




    if (*VAR_13 == VAR_15->p_FmPcdKg->emptyClsPlanGrpId)
        *VAR_14 = VAR_8;
    else
        *VAR_14 = VAR_2;

    VAR_18 = &VAR_15->p_FmPcdKg->clsPlanGrps[*VAR_13];


    VAR_18->owners++;


    FUNC_9(VAR_12, &VAR_15->p_FmPcdKg->clsPlanGrps[*VAR_13].optArray, FUNC_1(VAR_3)*sizeof(protocolOpt_t));


    VAR_20 = FUNC_0(VAR_15, VAR_10, VAR_17->clsPlanGrpId);
    if (VAR_20)
        FUNC_6(VAR_6, VAR_20, VAR_7);

    return VAR_1;
}
