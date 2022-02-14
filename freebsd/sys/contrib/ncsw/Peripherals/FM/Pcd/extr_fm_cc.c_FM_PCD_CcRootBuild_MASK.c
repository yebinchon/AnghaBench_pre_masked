
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_58__ TYPE_9__ ;
typedef struct TYPE_57__ TYPE_8__ ;
typedef struct TYPE_56__ TYPE_7__ ;
typedef struct TYPE_55__ TYPE_6__ ;
typedef struct TYPE_54__ TYPE_5__ ;
typedef struct TYPE_53__ TYPE_4__ ;
typedef struct TYPE_52__ TYPE_3__ ;
typedef struct TYPE_51__ TYPE_2__ ;
typedef struct TYPE_50__ TYPE_1__ ;
typedef struct TYPE_49__ TYPE_18__ ;
typedef struct TYPE_48__ TYPE_15__ ;
typedef struct TYPE_47__ TYPE_13__ ;
typedef struct TYPE_46__ TYPE_10__ ;


typedef int uint8_t ;
typedef int uint32_t ;
struct TYPE_58__ {int numOfDistinctionUnits; int vector; TYPE_18__* unitIds; int netEnvId; } ;
typedef TYPE_9__ t_NetEnvParams ;
typedef TYPE_10__* t_Handle ;
struct TYPE_55__ {scalar_t__ h_CcNode; } ;
struct TYPE_56__ {TYPE_6__ ccParams; } ;
struct TYPE_57__ {scalar_t__ nextEngine; TYPE_7__ params; } ;
struct TYPE_53__ {int h_CcNode; } ;
struct TYPE_54__ {TYPE_4__ ccParams; } ;
struct TYPE_49__ {scalar_t__ nextEngine; scalar_t__ requiredAction; TYPE_8__ nextEngineParams; TYPE_5__ params; scalar_t__ h_Manip; } ;
struct TYPE_50__ {scalar_t__ h_CcNode; } ;
struct TYPE_51__ {TYPE_1__ ccParams; } ;
struct TYPE_46__ {int numOfGrps; scalar_t__ nextEngine; int numOfEntries; int index; int p_Lock; TYPE_18__* keyAndNextEngineParams; int ccTreeBaseAddr; int netEnvId; struct TYPE_46__* h_CcNode; TYPE_18__ nextEngineParams; int requiredAction; scalar_t__ h_Manip; TYPE_3__* fmPcdGroupParam; TYPE_15__* ccGrpParams; int h_NetEnv; TYPE_2__ params; int fmPortsLst; struct TYPE_46__* h_FmPcd; } ;
typedef TYPE_10__ t_FmPcdCcTreeParams ;
typedef TYPE_10__ t_FmPcdCcTree ;
struct TYPE_47__ {int h_Spinlock; int ccTreeIdLst; } ;
typedef TYPE_13__ t_FmPcdCcNode ;
typedef int t_FmPcdCcNextEngineParams ;
typedef TYPE_10__ t_FmPcdCcKeyAndNextEngineParams ;
struct TYPE_48__ {scalar_t__ numOfDistinctionUnits; TYPE_10__* nextEnginePerEntriesInGrp; TYPE_10__ unitIds; } ;
typedef TYPE_15__ t_FmPcdCcGrpParams ;
typedef int t_FmPcd ;
typedef scalar_t__ t_Error ;
typedef TYPE_10__ t_CcNodeInformation ;
struct TYPE_52__ {int baseGroupEntry; int numOfEntriesInGroup; int totalBitsMask; } ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (TYPE_10__*,int *) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_3 (int *,TYPE_10__*,int ) ;
 int FUNC_4 (int ,int ,int ) ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_5 (TYPE_10__*) ;
 int VAR_8 ;
 int VAR_9 ;
 TYPE_10__* FUNC_6 (int *,TYPE_10__*,int ) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (TYPE_10__*) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (TYPE_10__*,int ) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *) ;
 scalar_t__ FUNC_13 () ;
 scalar_t__ FUNC_14 (TYPE_10__*,int *) ;
 int FUNC_15 (int *) ;
 scalar_t__ FUNC_16 (scalar_t__) ;
 int VAR_10 ;
 int FUNC_17 (TYPE_10__*,int ,int ) ;
 char* VAR_11 ;
 int FUNC_18 (TYPE_10__*,int *,TYPE_18__*,int *) ;
 TYPE_10__* FUNC_19 (TYPE_10__*,int) ;
 int FUNC_20 (int ) ;
 scalar_t__ FUNC_21 (int *,TYPE_9__*) ;
 int FUNC_22 (int ,scalar_t__,char*) ;
 int FUNC_23 (TYPE_10__*,int ,int *) ;
 scalar_t__ FUNC_24 (TYPE_10__*,scalar_t__,TYPE_18__*,TYPE_10__*,int,TYPE_10__*) ;
 int VAR_12 ;
 TYPE_10__* FUNC_25 (int ) ;
 int VAR_13 ;
 scalar_t__ FUNC_26 (TYPE_10__*,TYPE_10__*,int ) ;
 int FUNC_27 (TYPE_10__*) ;
 scalar_t__ FUNC_28 (int) ;
 scalar_t__ VAR_14 ;
 int VAR_15 ;
 int FUNC_29 (TYPE_18__*,TYPE_10__*,int) ;
 int FUNC_30 (TYPE_10__*,int ,int) ;

t_Handle FUNC_31(t_Handle VAR_16,
                            t_FmPcdCcTreeParams *VAR_17)
{
    t_FmPcd *VAR_18 = (t_FmPcd *)VAR_16;
    t_Error VAR_19 = VAR_5;
    int VAR_20 = 0, VAR_21 = 0, VAR_22 = 0;
    t_FmPcdCcTree *VAR_23;
    uint8_t VAR_24;
    t_Handle VAR_25;
    t_FmPcdCcGrpParams *VAR_26;
    t_FmPcdCcKeyAndNextEngineParams *VAR_27, *VAR_28;
    t_NetEnvParams VAR_29;
    uint8_t VAR_30 = 0;
    uint32_t VAR_31 = 0;
    t_FmPcdCcNode *VAR_32;
    t_CcNodeInformation VAR_33, *VAR_34;

    FUNC_23(VAR_16, VAR_1, ((void*)0));
    FUNC_23(VAR_17, VAR_1, ((void*)0));

    if (VAR_17->numOfGrps > VAR_8)
    {
        FUNC_22(VAR_10, VAR_3, ("numOfGrps should not exceed %d", VAR_8));
        return ((void*)0);
    }

    VAR_23 = (t_FmPcdCcTree*)FUNC_28(sizeof(t_FmPcdCcTree));
    if (!VAR_23)
    {
        FUNC_22(VAR_10, VAR_4, ("PCD tree structure"));
        return ((void*)0);
    }
    FUNC_30(VAR_23, 0, sizeof(t_FmPcdCcTree));
    VAR_23->h_FmPcd = VAR_16;

    VAR_27 = (t_FmPcdCcKeyAndNextEngineParams*)FUNC_28(
            VAR_8
                    * sizeof(t_FmPcdCcKeyAndNextEngineParams));
    FUNC_30(VAR_27,
           0,
           VAR_8
                   * sizeof(t_FmPcdCcKeyAndNextEngineParams));

    FUNC_15(&VAR_23->fmPortsLst);
    VAR_24 = 0;
    VAR_23->netEnvId = FUNC_9(VAR_17->h_NetEnv);

    for (VAR_20 = 0; VAR_20 < VAR_17->numOfGrps; VAR_20++)
    {
        VAR_26 = &VAR_17->ccGrpParams[VAR_20];

        if (VAR_26->numOfDistinctionUnits
                > VAR_9)
        {
            FUNC_2(VAR_23, VAR_18);
            FUNC_27(VAR_27);
            FUNC_22(VAR_10, VAR_3,
                    ("numOfDistinctionUnits (group %d) should not exceed %d", VAR_20, VAR_9));
            return ((void*)0);
        }

        VAR_23->fmPcdGroupParam[VAR_20].baseGroupEntry = VAR_24;
        VAR_23->fmPcdGroupParam[VAR_20].numOfEntriesInGroup = (uint8_t)(0x01
                << VAR_26->numOfDistinctionUnits);
        VAR_24 += VAR_23->fmPcdGroupParam[VAR_20].numOfEntriesInGroup;
        if (VAR_24 > VAR_8)
        {
            FUNC_2(VAR_23, VAR_18);
            FUNC_27(VAR_27);
            FUNC_22(VAR_10, VAR_3, ("numOfEntries can not be larger than %d", VAR_8));
            return ((void*)0);
        }

        if (VAR_30)
        {
            if (VAR_23->fmPcdGroupParam[VAR_20].numOfEntriesInGroup > VAR_30)
            {
                FUNC_2(VAR_23, VAR_18);
                FUNC_27(VAR_27);
                FUNC_22(VAR_10, VAR_0, ("numOfEntries per group must be set in descending order"));
                return ((void*)0);
            }
        }

        VAR_30 = VAR_23->fmPcdGroupParam[VAR_20].numOfEntriesInGroup;

        VAR_29.netEnvId = VAR_23->netEnvId;
        VAR_29.numOfDistinctionUnits =
                VAR_26->numOfDistinctionUnits;

        FUNC_29(VAR_29.unitIds, &VAR_26->unitIds,
               (sizeof(uint8_t)) * VAR_26->numOfDistinctionUnits);

        VAR_19 = FUNC_21(VAR_18, &VAR_29);
        if (VAR_19)
        {
            FUNC_2(VAR_23, VAR_18);
            FUNC_27(VAR_27);
            FUNC_22(VAR_10, VAR_19, VAR_11);
            return ((void*)0);
        }

        VAR_23->fmPcdGroupParam[VAR_20].totalBitsMask = VAR_29.vector;
        for (VAR_21 = 0; VAR_21 < VAR_23->fmPcdGroupParam[VAR_20].numOfEntriesInGroup;
                VAR_21++)
        {
            VAR_19 = FUNC_26(
                    VAR_16,
                    &VAR_26->nextEnginePerEntriesInGrp[VAR_21],
                    VAR_15);
            if (VAR_19)
            {
                FUNC_2(VAR_23, VAR_18);
                FUNC_27(VAR_27);
                FUNC_22(VAR_10, VAR_19, (VAR_11));
                return ((void*)0);
            }

            if (VAR_26->nextEnginePerEntriesInGrp[VAR_21].h_Manip)
            {
                VAR_19 = FUNC_14(
                        &VAR_26->nextEnginePerEntriesInGrp[VAR_21],
                        &VAR_31);
                if (VAR_19)
                {
                    FUNC_2(VAR_23, VAR_18);
                    FUNC_27(VAR_27);
                    FUNC_22(VAR_10, VAR_2, VAR_11);
                    return ((void*)0);
                }
            }
            VAR_28 = VAR_27 + VAR_22;

            FUNC_29(&VAR_28->nextEngineParams,
                   &VAR_26->nextEnginePerEntriesInGrp[VAR_21],
                   sizeof(t_FmPcdCcNextEngineParams));

            if ((VAR_28->nextEngineParams.nextEngine
                    == VAR_14)
                    && VAR_28->nextEngineParams.h_Manip)
            {
                VAR_19 =
                        FUNC_0(
                                VAR_28->nextEngineParams.params.ccParams.h_CcNode);
                if (VAR_19)
                {
                    FUNC_2(VAR_23, VAR_18);
                    FUNC_27(VAR_27);
                    FUNC_22(VAR_10, VAR_4, ("MURAM allocation for CC Tree"));
                    return ((void*)0);
                }
            }

            VAR_31 |= VAR_13;
            VAR_28->requiredAction = VAR_31;

            VAR_22++;
        }
    }

    VAR_23->numOfEntries = (uint8_t)VAR_22;
    VAR_23->numOfGrps = VAR_17->numOfGrps;

    VAR_23->ccTreeBaseAddr =
            FUNC_20(FUNC_4(FUNC_8(VAR_16),
                            (uint32_t)( VAR_8 * VAR_6),
                            VAR_7));
    if (!VAR_23->ccTreeBaseAddr)
    {
        FUNC_2(VAR_23, VAR_18);
        FUNC_27(VAR_27);
        FUNC_22(VAR_10, VAR_4, ("MURAM allocation for CC Tree"));
        return ((void*)0);
    }
    FUNC_17(
            FUNC_25(VAR_23->ccTreeBaseAddr), 0,
            (uint32_t)(VAR_8 * VAR_6));

    VAR_25 = FUNC_25(VAR_23->ccTreeBaseAddr);

    for (VAR_20 = 0; VAR_20 < VAR_24; VAR_20++)
    {
        VAR_28 = VAR_27 + VAR_20;

        FUNC_18(VAR_25, ((void*)0),
                   &VAR_28->nextEngineParams, VAR_18);

        VAR_25 = FUNC_19(VAR_25, VAR_6);

        FUNC_29(&VAR_23->keyAndNextEngineParams[VAR_20],
               VAR_28,
               sizeof(t_FmPcdCcKeyAndNextEngineParams));

        if (VAR_23->keyAndNextEngineParams[VAR_20].nextEngineParams.nextEngine
                == VAR_14)
        {
            VAR_32 =
                    (t_FmPcdCcNode*)VAR_23->keyAndNextEngineParams[VAR_20].nextEngineParams.params.ccParams.h_CcNode;
            VAR_34 = FUNC_6(
                    &VAR_32->ccTreeIdLst, (t_Handle)VAR_23,
                    VAR_32->h_Spinlock);

            if (!VAR_34)
            {
                FUNC_30(&VAR_33, 0, sizeof(t_CcNodeInformation));
                VAR_33.h_CcNode = (t_Handle)VAR_23;
                VAR_33.index = 1;
                FUNC_3(&VAR_32->ccTreeIdLst,
                                             &VAR_33,
                                             VAR_32->h_Spinlock);
            }
            else
                VAR_34->index++;
        }
    }

    FUNC_10(VAR_16, VAR_23->netEnvId);
    VAR_25 = FUNC_25(VAR_23->ccTreeBaseAddr);

    if (!FUNC_11(VAR_18))
    {
        FUNC_5(VAR_23);
        FUNC_27(VAR_27);
        FUNC_1(VAR_12, ("FmPcdLockTryLockAll failed"));
        return ((void*)0);
    }

    for (VAR_20 = 0; VAR_20 < VAR_24; VAR_20++)
    {
        if (VAR_23->keyAndNextEngineParams[VAR_20].requiredAction)
        {
            VAR_19 = FUNC_24(
                    VAR_16,
                    VAR_23->keyAndNextEngineParams[VAR_20].requiredAction,
                    &VAR_23->keyAndNextEngineParams[VAR_20], VAR_25, 1,
                    VAR_23);
            if (VAR_19)
            {
                FUNC_12(VAR_18);
                FUNC_5(VAR_23);
                FUNC_27(VAR_27);
                FUNC_22(VAR_10, VAR_4, ("No memory"));
                return ((void*)0);
            }
            VAR_25 = FUNC_19(VAR_25, VAR_6);
        }
    }

    FUNC_12(VAR_18);
    VAR_23->p_Lock = FUNC_7(VAR_18);
    if (!VAR_23->p_Lock)
    {
        FUNC_5(VAR_23);
        FUNC_27(VAR_27);
        FUNC_22(VAR_10, VAR_4, ("FM CC lock"));
        return ((void*)0);
    }

    FUNC_27(VAR_27);

    return VAR_23;
}
