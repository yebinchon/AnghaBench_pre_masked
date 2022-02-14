
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_5__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int uint32_t ;
typedef int t_Handle ;
struct TYPE_8__ {scalar_t__ statisticsMode; size_t numOfKeys; int ccTreesLst; int ccTreeIdLst; int ccPrevNodesLst; int availableStatsLst; int h_FmPcd; TYPE_1__* keyAndNextEngineParams; int h_PrivMissStatsCounters; scalar_t__ isHashBucket; int * h_Spinlock; int * h_StatsFLRs; int * h_TmpAd; int * h_Ad; int * h_AdTable; int * h_KeysMatchTable; struct TYPE_8__* p_GlblMask; } ;
typedef TYPE_2__ t_FmPcdCcNode ;
struct TYPE_9__ {int h_StatsCounters; } ;
struct TYPE_7__ {TYPE_5__* p_StatsObj; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (TYPE_2__*,TYPE_5__*) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (TYPE_2__*) ;
 int FUNC_9 (int *) ;
 scalar_t__ VAR_0 ;

__attribute__((used)) static void FUNC_10(t_FmPcdCcNode *VAR_1)
{
    uint32_t VAR_2;

    if (!VAR_1)
        return;

    if (VAR_1->p_GlblMask)
    {
        FUNC_8(VAR_1->p_GlblMask);
        VAR_1->p_GlblMask = ((void*)0);
    }

    if (VAR_1->h_KeysMatchTable)
    {
        FUNC_1(FUNC_2(VAR_1->h_FmPcd),
                         VAR_1->h_KeysMatchTable);
        VAR_1->h_KeysMatchTable = ((void*)0);
    }

    if (VAR_1->h_AdTable)
    {
        FUNC_1(FUNC_2(VAR_1->h_FmPcd),
                         VAR_1->h_AdTable);
        VAR_1->h_AdTable = ((void*)0);
    }

    if (VAR_1->h_Ad)
    {
        FUNC_1(FUNC_2(VAR_1->h_FmPcd),
                         VAR_1->h_Ad);
        VAR_1->h_Ad = ((void*)0);
        VAR_1->h_TmpAd = ((void*)0);
    }

    if (VAR_1->h_StatsFLRs)
    {
        FUNC_1(FUNC_2(VAR_1->h_FmPcd),
                         VAR_1->h_StatsFLRs);
        VAR_1->h_StatsFLRs = ((void*)0);
    }

    if (VAR_1->h_Spinlock)
    {
        FUNC_9(VAR_1->h_Spinlock);
        VAR_1->h_Spinlock = ((void*)0);
    }


    if (VAR_1->isHashBucket
            && (VAR_1->statisticsMode != VAR_0))
        VAR_1->keyAndNextEngineParams[VAR_1->numOfKeys].p_StatsObj->h_StatsCounters =
                VAR_1->h_PrivMissStatsCounters;


    for (VAR_2 = 0; VAR_2 < VAR_1->numOfKeys + 1; VAR_2++)
        if (VAR_1->keyAndNextEngineParams[VAR_2].p_StatsObj)
            FUNC_6(VAR_1,
                        VAR_1->keyAndNextEngineParams[VAR_2].p_StatsObj);

    if (!FUNC_5(&VAR_1->availableStatsLst))
    {
        t_Handle VAR_3 = FUNC_2(VAR_1->h_FmPcd);
        FUNC_0(VAR_3);

        FUNC_3(&VAR_1->availableStatsLst, VAR_3);
    }

    FUNC_4(&VAR_1->availableStatsLst);

    FUNC_7(&VAR_1->ccPrevNodesLst);
    FUNC_7(&VAR_1->ccTreeIdLst);
    FUNC_7(&VAR_1->ccTreesLst);

    FUNC_8(VAR_1);
}
