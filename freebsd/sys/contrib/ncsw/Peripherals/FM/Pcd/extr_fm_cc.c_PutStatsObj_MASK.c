
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef TYPE_1__* t_Handle ;
struct TYPE_11__ {int h_StatsCounters; int h_StatsAd; scalar_t__ h_FmPcd; int availableStatsLst; int countersArraySize; scalar_t__ maxNumOfKeys; } ;
typedef TYPE_1__ t_FmPcdStatsObj ;
typedef TYPE_1__ t_FmPcdCcNode ;
struct TYPE_12__ {TYPE_1__* h_FmMuram; } ;
typedef TYPE_4__ t_FmPcd ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int *,TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*,int ) ;
 int FUNC_3 (int ,int ,int ) ;
 int FUNC_4 (TYPE_1__*) ;

__attribute__((used)) static void FUNC_5(t_FmPcdCcNode *VAR_0, t_FmPcdStatsObj *VAR_1)
{
    t_Handle VAR_2;

    FUNC_0(VAR_0);
    FUNC_0(VAR_1);



    if (VAR_0->maxNumOfKeys)
    {

        FUNC_3(VAR_1->h_StatsCounters, 0, VAR_0->countersArraySize);

        FUNC_1(&VAR_0->availableStatsLst, VAR_1);
    }
    else
    {
        VAR_2 = ((t_FmPcd *)(VAR_0->h_FmPcd))->h_FmMuram;
        FUNC_0(VAR_2);

        FUNC_2(VAR_2, VAR_1->h_StatsAd);
        FUNC_2(VAR_2, VAR_1->h_StatsCounters);

        FUNC_4(VAR_1);
    }
}
