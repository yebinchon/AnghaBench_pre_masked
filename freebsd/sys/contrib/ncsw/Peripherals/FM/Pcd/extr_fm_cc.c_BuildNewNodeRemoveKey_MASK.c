
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_7__ ;
typedef struct TYPE_17__ TYPE_6__ ;
typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint16_t ;
typedef int t_Handle ;
struct TYPE_17__ {int numOfKeys; scalar_t__ h_FrmReplicForRmv; scalar_t__ p_StatsObjForRmv; scalar_t__ h_ManipForRmv; int h_NodeForRmv; int p_AdTableOld; int p_AdTableNew; int p_KeysMatchTableNew; int p_KeysMatchTableOld; } ;
typedef TYPE_6__ t_FmPcdModifyCcKeyAdditionalParams ;
struct TYPE_18__ {int numOfKeys; TYPE_5__* keyAndNextEngineParams; } ;
typedef TYPE_7__ t_FmPcdCcNode ;
typedef scalar_t__ t_Error ;
struct TYPE_13__ {scalar_t__ h_FrmReplic; } ;
struct TYPE_12__ {int h_CcNode; } ;
struct TYPE_14__ {TYPE_2__ frParams; TYPE_1__ ccParams; } ;
struct TYPE_15__ {scalar_t__ nextEngine; TYPE_3__ params; scalar_t__ h_Manip; } ;
struct TYPE_16__ {TYPE_4__ nextEngineParams; scalar_t__ p_StatsObj; } ;


 scalar_t__ FUNC_0 (TYPE_7__*,int*,TYPE_6__*) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ,int ,int) ;
 int VAR_3 ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (int ,scalar_t__,int ) ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;

__attribute__((used)) static t_Error FUNC_4(
        t_FmPcdCcNode *VAR_6, uint16_t VAR_7,
        t_FmPcdModifyCcKeyAdditionalParams *VAR_8)
{
    int VAR_9 = 0, VAR_10 = 0;
    t_Handle VAR_11, VAR_12;
    t_Handle VAR_13, VAR_14;
    int VAR_15;
    t_Error VAR_16 = VAR_0;


    VAR_8->numOfKeys = (uint16_t)(VAR_6->numOfKeys - 1);


    VAR_16 = FUNC_0(VAR_6, &VAR_15, VAR_8);
    if (VAR_16)
        FUNC_3(VAR_2, VAR_16, VAR_3);


    for (VAR_9 = 0, VAR_10 = 0; VAR_10 < VAR_6->numOfKeys; VAR_9++, VAR_10++)
    {
        if (VAR_10 == VAR_7)
            VAR_10++;

        if (VAR_10 == VAR_6->numOfKeys)
            break;
        VAR_11 =
                FUNC_2(VAR_8->p_AdTableNew, VAR_9 * VAR_1);
        VAR_14 =
                FUNC_2(VAR_8->p_AdTableOld, VAR_10 * VAR_1);
        FUNC_1(VAR_11, VAR_14, VAR_1);

        VAR_13 =
                FUNC_2(VAR_8->p_KeysMatchTableOld, VAR_10 * VAR_15 * sizeof(uint8_t));
        VAR_12 =
                FUNC_2(VAR_8->p_KeysMatchTableNew, VAR_9 * VAR_15 * sizeof(uint8_t));
        FUNC_1(VAR_12, VAR_13,
                   VAR_15 * sizeof(uint8_t));
    }

    VAR_11 =
            FUNC_2(VAR_8->p_AdTableNew, VAR_9 * VAR_1);
    VAR_14 =
            FUNC_2(VAR_8->p_AdTableOld, VAR_10 * VAR_1);
    FUNC_1(VAR_11, VAR_14, VAR_1);

    if (VAR_6->keyAndNextEngineParams[VAR_7].nextEngineParams.nextEngine
            == VAR_4)
        VAR_8->h_NodeForRmv =
                VAR_6->keyAndNextEngineParams[VAR_7].nextEngineParams.params.ccParams.h_CcNode;

    if (VAR_6->keyAndNextEngineParams[VAR_7].nextEngineParams.h_Manip)
        VAR_8->h_ManipForRmv =
                VAR_6->keyAndNextEngineParams[VAR_7].nextEngineParams.h_Manip;


    if (VAR_6->keyAndNextEngineParams[VAR_7].p_StatsObj)
    {
        VAR_8->p_StatsObjForRmv =
                VAR_6->keyAndNextEngineParams[VAR_7].p_StatsObj;
    }
    return VAR_0;
}
