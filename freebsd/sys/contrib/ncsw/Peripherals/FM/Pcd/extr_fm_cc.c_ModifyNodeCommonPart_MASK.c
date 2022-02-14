
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint16_t ;
typedef scalar_t__ t_Handle ;
struct TYPE_6__ {int savedKeyIndex; int * keyAndNextEngineParams; scalar_t__ h_CurrentNode; } ;
typedef TYPE_1__ t_FmPcdModifyCcKeyAdditionalParams ;
struct TYPE_7__ {int numOfEntries; int * keyAndNextEngineParams; } ;
typedef TYPE_2__ t_FmPcdCcTree ;
struct TYPE_8__ {int numOfKeys; scalar_t__ parseCode; int * keyAndNextEngineParams; } ;
typedef TYPE_3__ t_FmPcdCcNode ;
typedef int t_FmPcdCcKeyAndNextEngineParams ;
typedef scalar_t__ e_ModifyState ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int ,int ,char*) ;
 int FUNC_1 (scalar_t__,int ,int *) ;
 int VAR_9 ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int) ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 int FUNC_4 (int *,int *,int) ;
 int FUNC_5 (TYPE_1__*,int ,int) ;

__attribute__((used)) static t_FmPcdModifyCcKeyAdditionalParams * FUNC_6(
        t_Handle VAR_12, uint16_t VAR_13,
        e_ModifyState VAR_14, bool VAR_15, bool VAR_16, bool VAR_17)
{
    t_FmPcdModifyCcKeyAdditionalParams *VAR_18;
    int VAR_19 = 0, VAR_20 = 0;
    bool VAR_21 = VAR_6;
    t_FmPcdCcNode *VAR_22 = ((void*)0);
    t_FmPcdCcTree *VAR_23;
    uint16_t VAR_24;
    t_FmPcdCcKeyAndNextEngineParams *VAR_25;

    FUNC_1(VAR_12, VAR_3, ((void*)0));

    if (!VAR_17)
    {
        VAR_22 = (t_FmPcdCcNode *)VAR_12;
        VAR_24 = VAR_22->numOfKeys;



        VAR_25 = (t_FmPcdCcKeyAndNextEngineParams *)FUNC_3(
                sizeof(t_FmPcdCcKeyAndNextEngineParams) * (VAR_24 + 1));
        if (!VAR_25)
        {
            FUNC_0(VAR_8, VAR_5, ("Next engine and required action structure"));
            return ((void*)0);
        }
        FUNC_4(VAR_25, VAR_22->keyAndNextEngineParams,
               (VAR_24 + 1) * sizeof(t_FmPcdCcKeyAndNextEngineParams));

        if (VAR_15)
        {
            if ((VAR_22->parseCode == VAR_0)
                    || (VAR_22->parseCode == VAR_1))
            {
                FUNC_2(VAR_25);
                FUNC_0(VAR_8, VAR_4, ("nodeId of CC_PC_FF_IPV4TTL or CC_PC_FF_IPV6HOP_LIMIT can not be used for this operation"));
                return ((void*)0);
            }
        }

        if (VAR_16)
        {
            if (VAR_22->parseCode == VAR_2)
            {
                FUNC_2(VAR_25);
                FUNC_0(VAR_8, VAR_4, ("nodeId of CC_PC_GENERIC_IC_HASH_INDEXED can not be used for this operation"));
                return ((void*)0);
            }
        }
    }
    else
    {
        VAR_23 = (t_FmPcdCcTree *)VAR_12;
        VAR_24 = VAR_23->numOfEntries;

        VAR_25 = (t_FmPcdCcKeyAndNextEngineParams *)FUNC_3(
                sizeof(t_FmPcdCcKeyAndNextEngineParams)
                        * VAR_7);
        if (!VAR_25)
        {
            FUNC_0(VAR_8, VAR_5, ("Next engine and required action structure"));
            return ((void*)0);
        }
        FUNC_4(VAR_25,
               VAR_23->keyAndNextEngineParams,
               VAR_7
                       * sizeof(t_FmPcdCcKeyAndNextEngineParams));
    }

    VAR_18 =
            (t_FmPcdModifyCcKeyAdditionalParams *)FUNC_3(
                    sizeof(t_FmPcdModifyCcKeyAdditionalParams));
    if (!VAR_18)
    {
        FUNC_2(VAR_25);
        FUNC_0(VAR_8, VAR_5, ("Allocation of internal data structure FAILED"));
        return ((void*)0);
    }
    FUNC_5(VAR_18, 0,
           sizeof(t_FmPcdModifyCcKeyAdditionalParams));

    VAR_18->h_CurrentNode = VAR_12;
    VAR_18->savedKeyIndex = VAR_13;

    while (VAR_19 < VAR_24)
    {
        if ((VAR_20 == VAR_13) && !VAR_21)
        {
            if (VAR_14 == VAR_10)
                VAR_20++;
            else
                if (VAR_14 == VAR_11)
                    VAR_19++;
            VAR_21 = VAR_9;
        }
        else
        {
            FUNC_4(&VAR_18->keyAndNextEngineParams[VAR_20],
                   VAR_25 + VAR_19,
                   sizeof(t_FmPcdCcKeyAndNextEngineParams));
            VAR_19++;
            VAR_20++;
        }
    }

    if (VAR_13 == VAR_24)
    {
        if (VAR_14 == VAR_10)
            VAR_20++;
    }

    FUNC_4(&VAR_18->keyAndNextEngineParams[VAR_20],
           VAR_25 + VAR_24,
           sizeof(t_FmPcdCcKeyAndNextEngineParams));

    FUNC_2(VAR_25);

    return VAR_18;
}
