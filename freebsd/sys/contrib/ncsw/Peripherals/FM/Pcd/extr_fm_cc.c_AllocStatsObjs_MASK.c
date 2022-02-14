
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
typedef void* t_Handle ;
struct TYPE_8__ {void* h_StatsCounters; void* h_StatsAd; } ;
typedef TYPE_1__ t_FmPcdStatsObj ;
struct TYPE_9__ {scalar_t__ maxNumOfKeys; int availableStatsLst; int countersArraySize; int h_FmPcd; } ;
typedef TYPE_2__ t_FmPcdCcNode ;
typedef int t_Error ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,TYPE_1__*) ;
 scalar_t__ FUNC_1 (void*,int ,int ) ;
 int FUNC_2 (void*,void*) ;
 int VAR_3 ;
 int VAR_4 ;
 void* FUNC_3 (int ) ;
 int FUNC_4 (int *,void*) ;
 int VAR_5 ;
 int FUNC_5 (void*,int ,int ) ;
 int FUNC_6 (int ,int ,char*) ;
 int FUNC_7 (TYPE_1__*) ;
 TYPE_1__* FUNC_8 (int) ;
 int FUNC_9 (TYPE_1__*,int ,int) ;

__attribute__((used)) static t_Error FUNC_10(t_FmPcdCcNode *VAR_6)
{
    t_FmPcdStatsObj *VAR_7;
    t_Handle VAR_8, VAR_9, VAR_10;
    uint32_t VAR_11;

    VAR_8 = FUNC_3(VAR_6->h_FmPcd);
    if (!VAR_8)
        FUNC_6(VAR_5, VAR_0, ("FM MURAM"));



    for (VAR_11 = 0; VAR_11 < VAR_6->maxNumOfKeys + 2; VAR_11++)
    {

        VAR_7 = FUNC_8(sizeof(t_FmPcdStatsObj));
        if (!VAR_7)
        {
            FUNC_4(&VAR_6->availableStatsLst, VAR_8);
            FUNC_6(VAR_5, VAR_1, ("Statistics object"));
        }
        FUNC_9(VAR_7, 0, sizeof(t_FmPcdStatsObj));


        VAR_9 = (t_Handle)FUNC_1(VAR_8,
                                                VAR_3,
                                                VAR_4);
        if (!VAR_9)
        {
            FUNC_4(&VAR_6->availableStatsLst, VAR_8);
            FUNC_7(VAR_7);
            FUNC_6(VAR_5, VAR_1,
                         ("MURAM allocation for statistics ADs"));
        }
        FUNC_5(VAR_9, 0, VAR_3);


        VAR_10 = (t_Handle)FUNC_1(
                VAR_8, VAR_6->countersArraySize,
                VAR_4);
        if (!VAR_10)
        {
            FUNC_4(&VAR_6->availableStatsLst, VAR_8);
            FUNC_2(VAR_8, VAR_9);
            FUNC_7(VAR_7);
            FUNC_6(VAR_5, VAR_1,
                         ("MURAM allocation for statistics counters"));
        }
        FUNC_5(VAR_10, 0, VAR_6->countersArraySize);

        VAR_7->h_StatsAd = VAR_9;
        VAR_7->h_StatsCounters = VAR_10;

        FUNC_0(&VAR_6->availableStatsLst, VAR_7);
    }

    return VAR_2;
}
