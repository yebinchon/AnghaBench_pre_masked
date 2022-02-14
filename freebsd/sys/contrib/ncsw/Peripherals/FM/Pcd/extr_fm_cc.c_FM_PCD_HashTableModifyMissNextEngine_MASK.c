
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_6__ ;
typedef struct TYPE_17__ TYPE_5__ ;
typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


typedef size_t uint8_t ;
typedef TYPE_5__* t_Handle ;
struct TYPE_18__ {size_t numOfKeys; void* statsEnForMiss; scalar_t__ h_MissStatsCounters; TYPE_4__* keyAndNextEngineParams; } ;
typedef TYPE_6__ t_FmPcdCcNode ;
struct TYPE_17__ {void* statisticsEn; } ;
typedef TYPE_5__ t_FmPcdCcNextEngineParams ;
typedef scalar_t__ t_Error ;
struct TYPE_13__ {TYPE_5__* h_CcNode; } ;
struct TYPE_14__ {TYPE_1__ ccParams; } ;
struct TYPE_15__ {TYPE_2__ params; } ;
struct TYPE_16__ {TYPE_3__ nextEngineParams; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 void* VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (TYPE_5__*,TYPE_5__*) ;
 int VAR_6 ;
 char* VAR_7 ;
 int FUNC_1 (int ,scalar_t__,char*) ;
 int FUNC_2 (TYPE_5__*,int ) ;
 void* VAR_8 ;
 int FUNC_3 (scalar_t__,int ,int) ;

t_Error FUNC_4(
        t_Handle VAR_9,
        t_FmPcdCcNextEngineParams *VAR_10)
{
    t_FmPcdCcNode *VAR_11 = (t_FmPcdCcNode *)VAR_9;
    t_Handle VAR_12;
    uint8_t VAR_13;
    bool VAR_14 = VAR_4;
    t_Error VAR_15;

    FUNC_2(VAR_9, VAR_1);
    FUNC_2(VAR_10, VAR_2);

    if ((!VAR_11->h_MissStatsCounters)
            && (VAR_10->statisticsEn))
        FUNC_1(
                VAR_6,
                VAR_0,
                ("Statistics are requested for a key, but statistics mode was set"
                "to 'NONE' upon initialization"));

    if (VAR_11->h_MissStatsCounters)
    {
        if ((!VAR_11->statsEnForMiss)
                && (VAR_10->statisticsEn))
            VAR_14 = VAR_8;

        if ((VAR_11->statsEnForMiss)
                && (!VAR_10->statisticsEn))
        {
            VAR_11->statsEnForMiss = VAR_4;
            VAR_10->statisticsEn = VAR_8;
        }
    }

    for (VAR_13 = 0; VAR_13 < VAR_11->numOfKeys; VAR_13++)
    {
        VAR_12 =
                VAR_11->keyAndNextEngineParams[VAR_13].nextEngineParams.params.ccParams.h_CcNode;

        VAR_15 = FUNC_0(VAR_12,
                                                    VAR_10);
        if (VAR_15)
            FUNC_1(VAR_6, VAR_15, VAR_7);
    }

    if (VAR_14)
    {
        FUNC_3(VAR_11->h_MissStatsCounters, 0,
               (2 * VAR_5));
        FUNC_3(VAR_11->h_MissStatsCounters, 0,
               (2 * VAR_5));
        VAR_11->statsEnForMiss = VAR_8;
    }

    return VAR_3;
}
