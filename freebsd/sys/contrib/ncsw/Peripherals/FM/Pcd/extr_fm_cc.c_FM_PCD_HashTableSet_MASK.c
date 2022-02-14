
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_36__ TYPE_8__ ;
typedef struct TYPE_35__ TYPE_7__ ;
typedef struct TYPE_34__ TYPE_6__ ;
typedef struct TYPE_33__ TYPE_5__ ;
typedef struct TYPE_32__ TYPE_4__ ;
typedef struct TYPE_31__ TYPE_3__ ;
typedef struct TYPE_30__ TYPE_2__ ;
typedef struct TYPE_29__ TYPE_1__ ;
typedef struct TYPE_28__ TYPE_12__ ;


typedef int uint16_t ;
typedef TYPE_8__* t_Handle ;
struct TYPE_31__ {scalar_t__ nextEngine; int statisticsEn; } ;
struct TYPE_32__ {int maxNumOfKeys; scalar_t__ statisticsMode; int numOfKeys; int keySize; void* maskSupport; TYPE_12__* keyParams; TYPE_3__ ccNextEngineParamsForMiss; } ;
struct TYPE_29__ {int size; int icIndxMask; scalar_t__ offset; int action; int src; } ;
struct TYPE_30__ {TYPE_1__ extractNonHdr; void* type; } ;
struct TYPE_36__ {int maxNumOfKeys; int hashResMask; scalar_t__ statisticsMode; int matchKeySize; int statsEnForMiss; struct TYPE_36__* h_MissStatsCounters; int kgHashShift; TYPE_4__ keysParams; TYPE_2__ extractCcParams; scalar_t__ hashShift; void* isHashBucket; TYPE_3__ ccNextEngineParamsForMiss; } ;
typedef TYPE_8__ t_FmPcdHashTableParams ;
typedef TYPE_8__ t_FmPcdCcNodeParams ;
typedef TYPE_8__ t_FmPcdCcNode ;
struct TYPE_33__ {TYPE_8__* h_CcNode; } ;
struct TYPE_35__ {TYPE_5__ ccParams; } ;
struct TYPE_34__ {TYPE_7__ params; void* statisticsEn; int nextEngine; } ;
struct TYPE_28__ {TYPE_6__ ccNextEngineParams; } ;
typedef TYPE_12__ t_FmPcdCcKeyParams ;
typedef scalar_t__ t_Error ;


 int FUNC_0 (int ,char*) ;
 scalar_t__ FUNC_1 (int,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 void* VAR_4 ;
 scalar_t__ FUNC_2 (int ,int,int ) ;
 int FUNC_3 (int ,TYPE_8__*) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_4 (TYPE_8__*) ;
 TYPE_8__* FUNC_5 (TYPE_8__*,TYPE_8__*) ;
 int FUNC_6 (TYPE_8__*) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ FUNC_7 (TYPE_8__*,TYPE_8__*,TYPE_8__*) ;
 char* VAR_10 ;
 int FUNC_8 (int ,int ,char*) ;
 int FUNC_9 (TYPE_8__*,int ,int *) ;
 void* VAR_11 ;
 int FUNC_10 (TYPE_8__*) ;
 scalar_t__ FUNC_11 (int) ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 scalar_t__ VAR_15 ;
 scalar_t__ VAR_16 ;
 scalar_t__ VAR_17 ;
 scalar_t__ VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 void* VAR_21 ;
 scalar_t__ VAR_22 ;
 int FUNC_12 (TYPE_8__*,int ,int) ;

t_Handle FUNC_13(t_Handle VAR_23, t_FmPcdHashTableParams *VAR_24)
{
    t_FmPcdCcNode *VAR_25;
    t_FmPcdCcNodeParams *VAR_26, *VAR_27;
    t_FmPcdCcNode *VAR_28;
    t_Handle VAR_29 = ((void*)0);
    t_FmPcdCcKeyParams *VAR_30;
    int VAR_31;
    uint16_t VAR_32, VAR_33, VAR_34, VAR_35 = 0;
    bool VAR_36 = VAR_4;
    t_Error VAR_37;

    FUNC_9(VAR_23, VAR_0, ((void*)0));
    FUNC_9(VAR_24, VAR_3, ((void*)0));

    if (VAR_24->maxNumOfKeys == 0)
    {
        FUNC_8(VAR_9, VAR_1, ("Max number of keys must be higher then 0"));
        return ((void*)0);
    }

    if (VAR_24->hashResMask == 0)
    {
        FUNC_8(VAR_9, VAR_1, ("Hash result mask must differ from 0"));
        return ((void*)0);
    }


    if (VAR_24->ccNextEngineParamsForMiss.nextEngine == VAR_22)
    {
        FUNC_8(VAR_8, VAR_1, ("Next PCD Engine for on-miss entry is invalid. On-miss entry is always required. You can use e_FM_PCD_DONE."));
        return ((void*)0);
    }
    VAR_27 = (t_FmPcdCcNodeParams*)FUNC_11(
            sizeof(t_FmPcdCcNodeParams));
    if (!VAR_27)
    {
        FUNC_8(VAR_8, VAR_2, ("p_ExactMatchCcNodeParam"));
        return ((void*)0);
    }
    FUNC_12(VAR_27, 0, sizeof(t_FmPcdCcNodeParams));

    VAR_26 = (t_FmPcdCcNodeParams*)FUNC_11(
            sizeof(t_FmPcdCcNodeParams));
    if (!VAR_26)
    {
        FUNC_10(VAR_27);
        FUNC_8(VAR_8, VAR_2, ("p_IndxHashCcNodeParam"));
        return ((void*)0);
    }
    FUNC_12(VAR_26, 0, sizeof(t_FmPcdCcNodeParams));


    VAR_34 = (uint16_t)(VAR_24->hashResMask >> 4);
    while (VAR_34)
    {
        VAR_35++;
        VAR_34 = (uint16_t)(VAR_34 >> 1);
    }

    VAR_32 = (uint16_t)(1 << VAR_35);
    VAR_33 = (uint16_t)FUNC_1(VAR_24->maxNumOfKeys, VAR_32);

    if (VAR_24->maxNumOfKeys % VAR_32)
        FUNC_0(VAR_7, ("'maxNumOfKeys' is not a multiple of hash number of ways, so number of ways will be rounded up"));

    if ((VAR_24->statisticsMode == VAR_16)
            || (VAR_24->statisticsMode == VAR_15))
    {


        VAR_29 = (t_Handle)FUNC_2(
                FUNC_6(VAR_23), 2 * VAR_6,
                VAR_5);
        if (!VAR_29)
        {
            FUNC_8(VAR_8, VAR_2, ("MURAM allocation for statistics table for hash miss"));
            FUNC_10(VAR_26);
            FUNC_10(VAR_27);
            return ((void*)0);
        }
        FUNC_12(VAR_29, 0, (2 * VAR_6));




        VAR_36 = VAR_24->ccNextEngineParamsForMiss.statisticsEn;
        VAR_24->ccNextEngineParamsForMiss.statisticsEn = VAR_11;
    }


    VAR_27->extractCcParams.type = VAR_21;

    VAR_27->extractCcParams.extractNonHdr.src =
            VAR_20;
    VAR_27->extractCcParams.extractNonHdr.action =
            VAR_12;
    VAR_27->extractCcParams.extractNonHdr.offset = 0;
    VAR_27->extractCcParams.extractNonHdr.size =
            VAR_24->matchKeySize;

    VAR_27->keysParams.maxNumOfKeys = VAR_33;
    VAR_27->keysParams.maskSupport = VAR_4;
    VAR_27->keysParams.statisticsMode =
            VAR_24->statisticsMode;
    VAR_27->keysParams.numOfKeys = 0;
    VAR_27->keysParams.keySize = VAR_24->matchKeySize;
    VAR_27->keysParams.ccNextEngineParamsForMiss =
            VAR_24->ccNextEngineParamsForMiss;

    VAR_30 = VAR_26->keysParams.keyParams;

    for (VAR_31 = 0; VAR_31 < VAR_32; VAR_31++)
    {



        VAR_28 = (t_FmPcdCcNode *)FUNC_11(sizeof(t_FmPcdCcNode));
        if (!VAR_28)
            break;
        FUNC_12(VAR_28, 0, sizeof(t_FmPcdCcNode));

        VAR_28->isHashBucket = VAR_11;
        VAR_28->h_MissStatsCounters = VAR_29;

        VAR_37 = FUNC_7(VAR_23, VAR_28, VAR_27);
        if (VAR_37)
            break;

        VAR_30[VAR_31].ccNextEngineParams.nextEngine = VAR_14;
        VAR_30[VAR_31].ccNextEngineParams.statisticsEn = VAR_4;
        VAR_30[VAR_31].ccNextEngineParams.params.ccParams.h_CcNode =
                VAR_28;
    }

    if (VAR_31 < VAR_32)
    {
        for (VAR_31 = VAR_31 - 1; VAR_31 >= 0; VAR_31--)
            FUNC_4(
                    VAR_30[VAR_31].ccNextEngineParams.params.ccParams.h_CcNode);

        FUNC_3(FUNC_6(VAR_23), VAR_29);

        FUNC_8(VAR_8, VAR_3, VAR_10);
        FUNC_10(VAR_26);
        FUNC_10(VAR_27);
        return ((void*)0);
    }


    VAR_26->extractCcParams.type = VAR_21;
    VAR_26->extractCcParams.extractNonHdr.src =
            VAR_19;
    VAR_26->extractCcParams.extractNonHdr.action =
            VAR_13;
    VAR_26->extractCcParams.extractNonHdr.icIndxMask =
            VAR_24->hashResMask;
    VAR_26->extractCcParams.extractNonHdr.offset =
            VAR_24->hashShift;
    VAR_26->extractCcParams.extractNonHdr.size = 2;

    VAR_26->keysParams.maxNumOfKeys = VAR_32;
    VAR_26->keysParams.maskSupport = VAR_4;
    VAR_26->keysParams.statisticsMode =
            VAR_17;

    VAR_26->keysParams.numOfKeys = VAR_32;
    VAR_26->keysParams.keySize = 2;

    VAR_25 = FUNC_5(VAR_23, VAR_26);

    if (VAR_25)
    {
        VAR_25->kgHashShift = VAR_24->kgHashShift;



        VAR_25->h_MissStatsCounters = VAR_29;
        VAR_25->statsEnForMiss = VAR_36;
    }

    FUNC_10(VAR_26);
    FUNC_10(VAR_27);

    return VAR_25;
}
