
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint32_t ;
typedef size_t uint16_t ;
typedef scalar_t__ t_Handle ;
struct TYPE_7__ {scalar_t__ statisticsMode; size_t numOfKeys; int h_Spinlock; TYPE_2__* keyAndNextEngineParams; } ;
typedef TYPE_3__ t_FmPcdCcNode ;
struct TYPE_6__ {TYPE_1__* p_StatsObj; } ;
struct TYPE_5__ {int * h_StatsCounters; } ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ) ;
 int VAR_3 ;
 scalar_t__ FUNC_2 (int *,int ) ;
 int FUNC_3 (int ,int ,char*) ;
 int FUNC_4 (TYPE_3__*,int ,int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ,int ) ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;

uint32_t FUNC_7(t_Handle VAR_7, uint16_t VAR_8)
{
    t_FmPcdCcNode *VAR_9 = (t_FmPcdCcNode *)VAR_7;
    uint32_t *VAR_10, VAR_11;
    uint32_t VAR_12;

    FUNC_4(VAR_9, VAR_0, 0);

    if (VAR_9->statisticsMode == VAR_6)
    {
        FUNC_3(VAR_3, VAR_1, ("Statistics were not enabled for this match table"));
        return 0;
    }

    if ((VAR_9->statisticsMode != VAR_5)
            && (VAR_9->statisticsMode
                    != VAR_4))
    {
        FUNC_3(VAR_3, VAR_1, ("Frame count is not supported in the statistics mode of this match table"));
        return 0;
    }

    VAR_12 = FUNC_5(VAR_9->h_Spinlock);

    if (VAR_8 >= VAR_9->numOfKeys)
    {
        FUNC_6(VAR_9->h_Spinlock, VAR_12);
        FUNC_3(VAR_3, VAR_1, ("The provided keyIndex exceeds the number of keys in this match table"));
        return 0;
    }

    if (!VAR_9->keyAndNextEngineParams[VAR_8].p_StatsObj)
    {
        FUNC_6(VAR_9->h_Spinlock, VAR_12);
        FUNC_3(VAR_3, VAR_1, ("Statistics were not enabled for this key"));
        return 0;
    }

    VAR_10 =
            VAR_9->keyAndNextEngineParams[VAR_8].p_StatsObj->h_StatsCounters;
    FUNC_0(VAR_10);


    VAR_11 = FUNC_1(*(uint32_t *)(FUNC_2(VAR_10,
                            VAR_2)));

    FUNC_6(VAR_9->h_Spinlock, VAR_12);

    return VAR_11;
}
