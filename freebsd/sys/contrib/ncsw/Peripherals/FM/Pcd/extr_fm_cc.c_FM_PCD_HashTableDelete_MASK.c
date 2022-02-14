
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_5__ ;
typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


typedef int uint16_t ;
typedef TYPE_5__* t_Handle ;
struct TYPE_17__ {int numOfKeys; struct TYPE_17__* h_MissStatsCounters; struct TYPE_17__* h_FmPcd; TYPE_4__* keyAndNextEngineParams; } ;
typedef TYPE_5__ t_FmPcdCcNode ;
typedef int t_Error ;
struct TYPE_13__ {TYPE_5__* h_CcNode; } ;
struct TYPE_14__ {TYPE_1__ ccParams; } ;
struct TYPE_15__ {TYPE_2__ params; } ;
struct TYPE_16__ {TYPE_3__ nextEngineParams; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,TYPE_5__*) ;
 int FUNC_1 (TYPE_5__*) ;
 int FUNC_2 (TYPE_5__*) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_3 (int ,int,int ) ;
 int FUNC_4 (TYPE_5__*,int ) ;
 int FUNC_5 (TYPE_5__**) ;
 scalar_t__ FUNC_6 (int) ;

t_Error FUNC_7(t_Handle VAR_5)
{
    t_FmPcdCcNode *VAR_6 = (t_FmPcdCcNode *)VAR_5;
    t_Handle VAR_7;
    t_Handle *VAR_8, VAR_9;
    uint16_t VAR_10, VAR_11;
    t_Error VAR_12;

    FUNC_4(VAR_6, VAR_0);


    VAR_11 = VAR_6->numOfKeys;

    VAR_8 = (t_Handle *)FUNC_6(VAR_11 * sizeof(t_Handle));
    if (!VAR_8)
        FUNC_3(VAR_3, VAR_1, VAR_4);

    for (VAR_10 = 0; VAR_10 < VAR_11; VAR_10++)
        VAR_8[VAR_10] =
                VAR_6->keyAndNextEngineParams[VAR_10].nextEngineParams.params.ccParams.h_CcNode;

    VAR_7 = VAR_6->h_FmPcd;
    VAR_9 = VAR_6->h_MissStatsCounters;


    VAR_12 = FUNC_1(VAR_6);


    for (VAR_10 = 0; VAR_10 < VAR_11; VAR_10++)
        VAR_12 |= FUNC_1(VAR_8[VAR_10]);

    FUNC_5(VAR_8);


    if (VAR_9)
        FUNC_0(FUNC_2(VAR_7), VAR_9);

    if (VAR_12)
        FUNC_3(VAR_3, VAR_12, VAR_4);

    return VAR_2;
}
