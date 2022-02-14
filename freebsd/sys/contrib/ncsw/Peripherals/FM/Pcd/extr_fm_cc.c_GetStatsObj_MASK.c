
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;


typedef TYPE_1__* t_Handle ;
struct TYPE_16__ {TYPE_1__* h_StatsCounters; TYPE_1__* h_StatsAd; } ;
typedef TYPE_2__ t_FmPcdStatsObj ;
struct TYPE_15__ {int countersArraySize; scalar_t__ h_FmPcd; int availableStatsLst; scalar_t__ maxNumOfKeys; } ;
typedef TYPE_1__ t_FmPcdCcNode ;
struct TYPE_17__ {TYPE_1__* h_FmMuram; } ;
typedef TYPE_4__ t_FmPcd ;


 int FUNC_0 (TYPE_1__*) ;
 TYPE_2__* FUNC_1 (int *) ;
 int VAR_0 ;
 scalar_t__ FUNC_2 (TYPE_1__*,int ,int ) ;
 int FUNC_3 (TYPE_1__*,TYPE_1__*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_4 (TYPE_1__*,int ,int ) ;
 int FUNC_5 (int ,int ,char*) ;
 int FUNC_6 (TYPE_2__*) ;
 TYPE_2__* FUNC_7 (int) ;

__attribute__((used)) static t_FmPcdStatsObj* FUNC_8(t_FmPcdCcNode *VAR_4)
{
    t_FmPcdStatsObj* VAR_5;
    t_Handle VAR_6;

    FUNC_0(VAR_4);



    if (VAR_4->maxNumOfKeys)
    {
        VAR_5 = FUNC_1(&VAR_4->availableStatsLst);
    }
    else
    {
        VAR_6 = ((t_FmPcd *)(VAR_4->h_FmPcd))->h_FmMuram;
        FUNC_0(VAR_6);

        VAR_5 = FUNC_7(sizeof(t_FmPcdStatsObj));
        if (!VAR_5)
        {
            FUNC_5(VAR_3, VAR_0, ("statistics object"));
            return ((void*)0);
        }

        VAR_5->h_StatsAd = (t_Handle)FUNC_2(
                VAR_6, VAR_1, VAR_2);
        if (!VAR_5->h_StatsAd)
        {
            FUNC_6(VAR_5);
            FUNC_5(VAR_3, VAR_0, ("MURAM allocation for statistics ADs"));
            return ((void*)0);
        }
        FUNC_4(VAR_5->h_StatsAd, 0, VAR_1);

        VAR_5->h_StatsCounters = (t_Handle)FUNC_2(
                VAR_6, VAR_4->countersArraySize,
                VAR_2);
        if (!VAR_5->h_StatsCounters)
        {
            FUNC_3(VAR_6, VAR_5->h_StatsAd);
            FUNC_6(VAR_5);
            FUNC_5(VAR_3, VAR_0, ("MURAM allocation for statistics counters"));
            return ((void*)0);
        }
        FUNC_4(VAR_5->h_StatsCounters, 0, VAR_4->countersArraySize);
    }

    return VAR_5;
}
