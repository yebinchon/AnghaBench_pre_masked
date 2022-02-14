
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int uint8_t ;
typedef scalar_t__ t_Handle ;
struct TYPE_7__ {scalar_t__ numOfClsPlanEntries; int baseEntry; } ;
typedef TYPE_1__ t_FmPcdKgInterModuleClsPlanSet ;
struct TYPE_8__ {int h_FmPcd; } ;
typedef TYPE_2__ t_FmHc ;
typedef scalar_t__ t_Error ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_1 (TYPE_2__*,TYPE_1__*) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ,int ) ;
 scalar_t__ FUNC_4 (int ,int ) ;
 int VAR_4 ;
 char* VAR_5 ;
 int FUNC_5 (int ,int ,char*) ;
 int FUNC_6 (TYPE_1__*) ;
 scalar_t__ FUNC_7 (int) ;
 int FUNC_8 (TYPE_1__*,int ,int) ;

t_Error FUNC_9(t_Handle VAR_6, uint8_t VAR_7)
{
    t_FmHc *VAR_8 = (t_FmHc*)VAR_6;
    t_FmPcdKgInterModuleClsPlanSet *VAR_9;

    VAR_9 = (t_FmPcdKgInterModuleClsPlanSet *)FUNC_7(sizeof(t_FmPcdKgInterModuleClsPlanSet));
    if (!VAR_9)
        FUNC_5(VAR_4, VAR_1, ("Classification plan set"));

    FUNC_8(VAR_9, 0, sizeof(t_FmPcdKgInterModuleClsPlanSet));

    VAR_9->baseEntry = FUNC_3(VAR_8->h_FmPcd, VAR_7);
    VAR_9->numOfClsPlanEntries = FUNC_4(VAR_8->h_FmPcd, VAR_7);
    FUNC_0(VAR_9->numOfClsPlanEntries <= VAR_3);

    if (FUNC_1(VAR_8, VAR_9) != VAR_2)
    {
        FUNC_6(VAR_9);
        FUNC_5(VAR_4, VAR_0, VAR_5);
    }

    FUNC_6(VAR_9);
    FUNC_2(VAR_8->h_FmPcd, VAR_7);

    return VAR_2;
}
