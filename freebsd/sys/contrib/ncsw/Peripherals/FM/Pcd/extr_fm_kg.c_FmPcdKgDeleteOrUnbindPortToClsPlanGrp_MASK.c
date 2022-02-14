
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef size_t uint8_t ;
typedef scalar_t__ t_Handle ;
struct TYPE_11__ {int numOfClsPlanEntries; int baseEntry; } ;
typedef TYPE_2__ t_FmPcdKgInterModuleClsPlanSet ;
struct TYPE_12__ {int sizeOfGrp; int baseEntry; int owners; } ;
typedef TYPE_3__ t_FmPcdKgClsPlanGrp ;
struct TYPE_13__ {TYPE_1__* p_FmPcdKg; scalar_t__ h_Hc; } ;
typedef TYPE_4__ t_FmPcd ;
typedef int t_Error ;
struct TYPE_10__ {TYPE_3__* clsPlanGrps; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (scalar_t__,size_t) ;
 int FUNC_2 (scalar_t__,size_t) ;
 int FUNC_3 (TYPE_4__*,TYPE_2__*) ;
 int VAR_2 ;
 int FUNC_4 (int ,int ,char*) ;
 int FUNC_5 (TYPE_4__*,size_t) ;
 int FUNC_6 (TYPE_2__*) ;
 scalar_t__ FUNC_7 (int) ;
 int FUNC_8 (TYPE_2__*,int ,int) ;

t_Error FUNC_9(t_Handle VAR_3, uint8_t VAR_4, uint8_t VAR_5)
{
    t_FmPcd *VAR_6 = (t_FmPcd *)VAR_3;
    t_FmPcdKgClsPlanGrp *VAR_7 = &VAR_6->p_FmPcdKg->clsPlanGrps[VAR_5];
    t_FmPcdKgInterModuleClsPlanSet *VAR_8;
    t_Error VAR_9;




    FUNC_5(VAR_6, VAR_4);


    FUNC_0(VAR_7->owners);
    VAR_7->owners--;

    if (!VAR_7->owners)
    {
        if (VAR_6->h_Hc)
        {
            VAR_9 = FUNC_1(VAR_6->h_Hc, VAR_5);
            return VAR_9;
        }
        else
        {

            VAR_8 = (t_FmPcdKgInterModuleClsPlanSet *)FUNC_7(sizeof(t_FmPcdKgInterModuleClsPlanSet));
            if (!VAR_8)
            {
                FUNC_4(VAR_2, VAR_0, ("Classification plan set"));
            }
            FUNC_8(VAR_8, 0, sizeof(t_FmPcdKgInterModuleClsPlanSet));

            VAR_8->baseEntry = VAR_6->p_FmPcdKg->clsPlanGrps[VAR_5].baseEntry;
            VAR_8->numOfClsPlanEntries = VAR_6->p_FmPcdKg->clsPlanGrps[VAR_5].sizeOfGrp;
            FUNC_3(VAR_6, VAR_8);
            FUNC_6(VAR_8);

            FUNC_2(VAR_3, VAR_5);
       }
    }
    return VAR_1;
}
