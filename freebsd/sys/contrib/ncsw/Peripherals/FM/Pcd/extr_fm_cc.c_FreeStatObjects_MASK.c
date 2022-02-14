
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int t_List ;
typedef int t_Handle ;
struct TYPE_5__ {int h_StatsCounters; int h_StatsAd; } ;
typedef TYPE_1__ t_FmPcdStatsObj ;


 int FUNC_0 (TYPE_1__*) ;
 TYPE_1__* FUNC_1 (int *) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (TYPE_1__*) ;

__attribute__((used)) static void FUNC_5(t_List *VAR_0, t_Handle VAR_1)
{
    t_FmPcdStatsObj *VAR_2;

    while (!FUNC_3(VAR_0))
    {
        VAR_2 = FUNC_1(VAR_0);
        FUNC_0(VAR_2);

        FUNC_2(VAR_1, VAR_2->h_StatsAd);
        FUNC_2(VAR_1, VAR_2->h_StatsCounters);

        FUNC_4(VAR_2);
    }
}
