
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
struct TYPE_14__ {size_t netEnvId; scalar_t__ clsPlanGrpId; int numOfOptions; scalar_t__* options; void* grpExists; int * optVectors; } ;
typedef TYPE_5__ t_FmPcdKgInterModuleClsPlanGrpParams ;
struct TYPE_15__ {TYPE_4__* p_FmPcdKg; TYPE_3__* netEnvs; } ;
typedef TYPE_6__ t_FmPcd ;
typedef int t_Error ;
struct TYPE_13__ {scalar_t__ emptyClsPlanGrpId; } ;
struct TYPE_12__ {scalar_t__ clsPlanGrpId; TYPE_2__* units; int * unitsVectors; } ;
struct TYPE_11__ {TYPE_1__* hdrs; } ;
struct TYPE_10__ {scalar_t__ hdr; scalar_t__ opt; } ;


 int FUNC_0 (TYPE_6__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 void* VAR_5 ;

t_Error FUNC_1(t_FmPcd *VAR_6, t_FmPcdKgInterModuleClsPlanGrpParams *VAR_7)
{
    uint8_t VAR_8 = VAR_7->netEnvId;
    int VAR_9, VAR_10, VAR_11;

    FUNC_0(VAR_6);
    if (VAR_6->netEnvs[VAR_8].clsPlanGrpId != VAR_4)
    {
        VAR_7->grpExists = VAR_5;
        VAR_7->clsPlanGrpId = VAR_6->netEnvs[VAR_8].clsPlanGrpId;
        return VAR_0;
    }

    for (VAR_9=0; ((VAR_9 < VAR_1) &&
              (VAR_6->netEnvs[VAR_8].units[VAR_9].hdrs[0].hdr != VAR_3)); VAR_9++)
    {
        for (VAR_10=0; ((VAR_10 < VAR_2) &&
                   (VAR_6->netEnvs[VAR_8].units[VAR_9].hdrs[VAR_10].hdr != VAR_3)); VAR_10++)
        {

            if (VAR_6->netEnvs[VAR_8].units[VAR_9].hdrs[VAR_10].opt)
            {

                for (VAR_11 = 0;VAR_11<VAR_7->numOfOptions;VAR_11++)
                {
                    if (VAR_7->options[VAR_11] == VAR_6->netEnvs[VAR_8].units[VAR_9].hdrs[VAR_10].opt)
                        break;
                }
                VAR_7->optVectors[VAR_11] |= VAR_6->netEnvs[VAR_8].unitsVectors[VAR_9];
                if (VAR_11 == VAR_7->numOfOptions)
                {
                    VAR_7->options[VAR_7->numOfOptions] = VAR_6->netEnvs[VAR_8].units[VAR_9].hdrs[VAR_10].opt;
                    VAR_7->numOfOptions++;
                }
            }
        }
    }

    if (VAR_7->numOfOptions == 0)
    {
        if (VAR_6->p_FmPcdKg->emptyClsPlanGrpId != VAR_4)
        {
            VAR_7->grpExists = VAR_5;
            VAR_7->clsPlanGrpId = VAR_6->p_FmPcdKg->emptyClsPlanGrpId;
        }
    }

    return VAR_0;

}
