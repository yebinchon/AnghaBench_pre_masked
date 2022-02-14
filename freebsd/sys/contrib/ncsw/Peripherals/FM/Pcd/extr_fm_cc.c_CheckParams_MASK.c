
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_26__ TYPE_9__ ;
typedef struct TYPE_25__ TYPE_8__ ;
typedef struct TYPE_24__ TYPE_7__ ;
typedef struct TYPE_23__ TYPE_6__ ;
typedef struct TYPE_22__ TYPE_5__ ;
typedef struct TYPE_21__ TYPE_4__ ;
typedef struct TYPE_20__ TYPE_3__ ;
typedef struct TYPE_19__ TYPE_2__ ;
typedef struct TYPE_18__ TYPE_1__ ;


typedef void* uint32_t ;
typedef int t_Handle ;
struct TYPE_26__ {scalar_t__ h_Manip; } ;
struct TYPE_18__ {int keySize; TYPE_7__* keyParams; TYPE_9__ ccNextEngineParamsForMiss; } ;
struct TYPE_22__ {TYPE_1__ keysParams; } ;
typedef TYPE_5__ t_FmPcdCcNodeParams ;
struct TYPE_23__ {size_t numOfKeys; int maxNumOfKeys; TYPE_4__* keyAndNextEngineParams; int statisticsMode; int countersArraySize; int numOfStatsFLRs; } ;
typedef TYPE_6__ t_FmPcdCcNode ;
typedef int t_FmPcdCcNextEngineParams ;
struct TYPE_24__ {TYPE_9__ ccNextEngineParams; TYPE_9__* p_Mask; TYPE_9__* p_Key; } ;
typedef TYPE_7__ t_FmPcdCcKeyParams ;
typedef scalar_t__ t_Error ;
struct TYPE_19__ {int h_CcNode; } ;
struct TYPE_20__ {TYPE_2__ ccParams; } ;
struct TYPE_25__ {scalar_t__ nextEngine; TYPE_3__ params; scalar_t__ h_Manip; } ;
struct TYPE_21__ {TYPE_8__ nextEngineParams; void* requiredAction; TYPE_8__* mask; TYPE_8__* key; } ;


 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_1 (TYPE_9__*,void**) ;
 int VAR_2 ;
 char* VAR_3 ;
 int FUNC_2 (int ,scalar_t__,char*) ;
 int VAR_4 ;
 scalar_t__ FUNC_3 (TYPE_6__*,int,TYPE_9__*) ;
 scalar_t__ FUNC_4 (TYPE_6__*,TYPE_5__*,int *,int *) ;
 scalar_t__ FUNC_5 (int ,TYPE_9__*,int ) ;
 scalar_t__ VAR_5 ;
 int FUNC_6 (TYPE_8__*,TYPE_9__*,int) ;
 int FUNC_7 (void*,int,int) ;

__attribute__((used)) static t_Error FUNC_8(t_Handle VAR_6, t_FmPcdCcNodeParams *VAR_7,
                           t_FmPcdCcNode *VAR_8, bool *VAR_9)
{
    int VAR_10 = 0;
    t_FmPcdCcKeyParams *VAR_11;
    t_Error VAR_12;
    uint32_t VAR_13 = 0;


    VAR_12 = FUNC_4(VAR_8, VAR_7,
                                     &(VAR_8->numOfStatsFLRs),
                                     &(VAR_8->countersArraySize));
    if (VAR_12)
        FUNC_2(VAR_2, VAR_12, ("Invalid statistics parameters"));


    VAR_12 = FUNC_5(
            VAR_6, &VAR_7->keysParams.ccNextEngineParamsForMiss,
            VAR_8->statisticsMode);
    if (VAR_12)
        FUNC_2(VAR_2, VAR_12,
                     ("For this node MissNextEngineParams are not valid"));

    if (VAR_7->keysParams.ccNextEngineParamsForMiss.h_Manip)
    {
        VAR_12 = FUNC_1(
                &VAR_7->keysParams.ccNextEngineParamsForMiss,
                &VAR_13);
        if (VAR_12)
            FUNC_2(VAR_2, VAR_12, (VAR_3));
    }

    FUNC_6(&VAR_8->keyAndNextEngineParams[VAR_8->numOfKeys].nextEngineParams,
           &VAR_7->keysParams.ccNextEngineParamsForMiss,
           sizeof(t_FmPcdCcNextEngineParams));

    VAR_8->keyAndNextEngineParams[VAR_8->numOfKeys].requiredAction =
            VAR_13;

    if ((VAR_8->keyAndNextEngineParams[VAR_8->numOfKeys].nextEngineParams.nextEngine
            == VAR_5)
            && VAR_8->keyAndNextEngineParams[VAR_8->numOfKeys].nextEngineParams.h_Manip)
    {
        VAR_12 =
                FUNC_0(
                        VAR_8->keyAndNextEngineParams[VAR_8->numOfKeys].nextEngineParams.params.ccParams.h_CcNode);
        if (VAR_12)
            FUNC_2(VAR_2, VAR_12, (VAR_3));
    }

    for (VAR_10 = 0; VAR_10 < VAR_8->numOfKeys; VAR_10++)
    {
        VAR_11 = &VAR_7->keysParams.keyParams[VAR_10];

        if (!VAR_11->p_Key)
            FUNC_2(VAR_2, VAR_0, ("p_Key is not initialized"));

        VAR_12 = FUNC_5(VAR_6,
                                       &VAR_11->ccNextEngineParams,
                                       VAR_8->statisticsMode);
        if (VAR_12)
            FUNC_2(VAR_2, VAR_12, (VAR_3));

        VAR_12 = FUNC_3(VAR_8, VAR_7->keysParams.keySize,
                            VAR_11->p_Mask);
        if (VAR_12)
            FUNC_2(VAR_2, VAR_12, (VAR_3));

        if (VAR_11->ccNextEngineParams.h_Manip)
        {
            VAR_12 = FUNC_1(
                    &VAR_11->ccNextEngineParams, &VAR_13);
            if (VAR_12)
                FUNC_2(VAR_2, VAR_12, (VAR_3));
        }


        FUNC_6(VAR_8->keyAndNextEngineParams[VAR_10].key, VAR_11->p_Key,
               VAR_7->keysParams.keySize);

        if (VAR_11->p_Mask)
            FUNC_6(VAR_8->keyAndNextEngineParams[VAR_10].mask,
                   VAR_11->p_Mask, VAR_7->keysParams.keySize);
        else
            FUNC_7((void *)(VAR_8->keyAndNextEngineParams[VAR_10].mask), 0xFF,
                   VAR_7->keysParams.keySize);


        FUNC_6(&VAR_8->keyAndNextEngineParams[VAR_10].nextEngineParams,
               &VAR_11->ccNextEngineParams,
               sizeof(t_FmPcdCcNextEngineParams));

        VAR_8->keyAndNextEngineParams[VAR_10].requiredAction = VAR_13;

        if ((VAR_8->keyAndNextEngineParams[VAR_10].nextEngineParams.nextEngine
                == VAR_5)
                && VAR_8->keyAndNextEngineParams[VAR_10].nextEngineParams.h_Manip)
        {
            VAR_12 =
                    FUNC_0(
                            VAR_8->keyAndNextEngineParams[VAR_10].nextEngineParams.params.ccParams.h_CcNode);
            if (VAR_12)
                FUNC_2(VAR_2, VAR_12, (VAR_3));
        }
    }

    if (VAR_8->maxNumOfKeys)
    {
        if (VAR_8->maxNumOfKeys < VAR_8->numOfKeys)
            FUNC_2(
                    VAR_2,
                    VAR_0,
                    ("Number of keys exceed the provided maximal number of keys"));
    }

    *VAR_9 = VAR_4;

    return VAR_1;
}
