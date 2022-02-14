
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef size_t uint32_t ;
typedef int uint16_t ;
struct TYPE_11__ {int* frameLengthRanges; TYPE_2__* keyParams; } ;
struct TYPE_12__ {TYPE_3__ keysParams; } ;
typedef TYPE_4__ t_FmPcdCcNodeParams ;
struct TYPE_13__ {int statisticsMode; size_t numOfKeys; } ;
typedef TYPE_5__ t_FmPcdCcNode ;
typedef int t_Error ;
typedef int e_FmPcdCcStatsMode ;
struct TYPE_9__ {int statisticsEn; } ;
struct TYPE_10__ {TYPE_1__ ccNextEngineParams; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,int ,char*) ;
 int FUNC_1 (TYPE_4__*) ;





__attribute__((used)) static t_Error FUNC_2(t_FmPcdCcNode *VAR_5,
                                          t_FmPcdCcNodeParams *VAR_6,
                                          uint32_t *VAR_7,
                                          uint32_t *VAR_8)
{
    e_FmPcdCcStatsMode VAR_9 = VAR_5->statisticsMode;
    uint32_t VAR_10;

    FUNC_1(VAR_6);

    switch (VAR_9)
    {
        case 129:
            for (VAR_10 = 0; VAR_10 < VAR_5->numOfKeys; VAR_10++)
                if (VAR_6->keysParams.keyParams[VAR_10].ccNextEngineParams.statisticsEn)
                    FUNC_0(
                            VAR_4,
                            VAR_0,
                            ("Statistics cannot be enabled for key %d when statistics mode was set to 'NONE'", VAR_10));
            return VAR_1;

        case 130:
        case 131:
            *VAR_7 = 1;
            *VAR_8 = 2 * VAR_2;
            return VAR_1;
        default:
            FUNC_0(VAR_4, VAR_0, ("Statistics mode"));
    }
}
