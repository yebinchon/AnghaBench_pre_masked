
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_6__ ;
typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int uint64_t ;
typedef int uint32_t ;
typedef scalar_t__ uint16_t ;
struct TYPE_13__ {int maxReassemblySize; int minFragSize; int autoLearnSetLockTblPtrLow; int liodnSlAndAutoLearnSetLockTblPtrHi; int autoLearnHashTblPtrLow; int liodnAlAndAutoLearnHashTblPtrHi; int autoLearnHashKeyMask; int waysNumAndSetSize; int reassCommonPrmTblPtr; } ;
typedef TYPE_4__ t_ReassTbl ;
struct TYPE_11__ {uintptr_t autoLearnHashTblAddr; uintptr_t autoLearnSetLockTblAddr; int numOfFramesPerHashEntry; scalar_t__ maxRessembledsSize; TYPE_4__* p_ReassTbl; } ;
struct TYPE_10__ {uintptr_t ipv4AutoLearnHashTblAddr; uintptr_t ipv4AutoLearnSetLockTblAddr; int* numOfFramesPerHashEntry; uintptr_t ipv6AutoLearnHashTblAddr; uintptr_t ipv6AutoLearnSetLockTblAddr; scalar_t__* minFragSize; TYPE_4__* p_Ipv6ReassTbl; TYPE_4__* p_Ipv4ReassTbl; } ;
struct TYPE_12__ {int maxNumFramesInProcess; int dataLiodnOffset; int dataMemId; int p_ReassCommonTbl; TYPE_2__ capwap; TYPE_1__ ip; } ;
struct TYPE_14__ {TYPE_3__ reassmParams; TYPE_6__* h_FmPcd; } ;
typedef TYPE_5__ t_FmPcdManip ;
struct TYPE_15__ {int h_FmMuram; scalar_t__ physicalMuramBase; } ;
typedef TYPE_6__ t_FmPcd ;
typedef int t_Error ;
typedef int e_NetHeaderType ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (int ,TYPE_4__*) ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;



 int FUNC_2 (int,int) ;
 int VAR_10 ;
 int FUNC_3 (int ,int ,int) ;
 int FUNC_4 (int,int) ;
 uintptr_t FUNC_5 (int ) ;
 int FUNC_6 (int ,int ,char*) ;
 int FUNC_7 (int,int) ;
 int FUNC_8 (uintptr_t) ;
 int FUNC_9 (int ,scalar_t__) ;
 int FUNC_10 (int ,int) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (int,int ,int) ;
 int FUNC_13 (int ) ;
 int VAR_11 ;
 int FUNC_14 (TYPE_4__*,int ,int) ;

__attribute__((used)) static t_Error FUNC_15(t_FmPcdManip *VAR_12, e_NetHeaderType VAR_13)
{
    t_FmPcd *VAR_14 = VAR_12->h_FmPcd;
    uint32_t VAR_15, VAR_16;
    uint32_t VAR_17, VAR_18, VAR_19, VAR_20;
    uint32_t VAR_21, VAR_22, VAR_23;
    uint64_t VAR_24;
    uint16_t VAR_25;
    uint16_t VAR_26;
    uintptr_t *VAR_27, *VAR_28;
    t_ReassTbl **VAR_29;

    switch (VAR_13)
    {
        case 129:
            VAR_29 = &VAR_12->reassmParams.ip.p_Ipv4ReassTbl;
            VAR_27 =
                    &VAR_12->reassmParams.ip.ipv4AutoLearnHashTblAddr;
            VAR_28 =
                    &VAR_12->reassmParams.ip.ipv4AutoLearnSetLockTblAddr;
            VAR_25 = VAR_12->reassmParams.ip.minFragSize[0];
            VAR_26 = 0;
            VAR_17 = VAR_12->reassmParams.ip.numOfFramesPerHashEntry[0];
            VAR_20 = 4 + 4 + 1 + 2;
            break;
        case 128:
            VAR_29 = &VAR_12->reassmParams.ip.p_Ipv6ReassTbl;
            VAR_27 =
                    &VAR_12->reassmParams.ip.ipv6AutoLearnHashTblAddr;
            VAR_28 =
                    &VAR_12->reassmParams.ip.ipv6AutoLearnSetLockTblAddr;
            VAR_25 = VAR_12->reassmParams.ip.minFragSize[1];
            VAR_26 = 0;
            VAR_17 = VAR_12->reassmParams.ip.numOfFramesPerHashEntry[1];
            VAR_20 = 16 + 16 + 4;
            if (VAR_17 > VAR_11)
                FUNC_6(VAR_10, VAR_0, ("num of ways"));
            break;
        case 130:
            VAR_29 = &VAR_12->reassmParams.capwap.p_ReassTbl;
            VAR_27 =
                    &VAR_12->reassmParams.capwap.autoLearnHashTblAddr;
            VAR_28 =
                    &VAR_12->reassmParams.capwap.autoLearnSetLockTblAddr;
            VAR_25 = 0;
            VAR_26 = VAR_12->reassmParams.capwap.maxRessembledsSize;
            VAR_17 = VAR_12->reassmParams.capwap.numOfFramesPerHashEntry;
            VAR_20 = 4;
            break;
        default:
            FUNC_6(VAR_10, VAR_1, ("header type"));
    }
    VAR_20 += 2;



    VAR_21 = FUNC_7(VAR_20, 8);


    *VAR_29 = (t_ReassTbl *)FUNC_0(
            VAR_14->h_FmMuram, VAR_9,
            VAR_8);
    if (!*VAR_29)
        FUNC_6( VAR_10, VAR_2,
                     ("MURAM alloc for Reassembly specific parameters table"));
    FUNC_14(*VAR_29, 0, sizeof(t_ReassTbl));


    VAR_15 = (uint32_t)(FUNC_13(VAR_12->reassmParams.p_ReassCommonTbl)
            - VAR_14->physicalMuramBase);
    FUNC_10((*VAR_29)->reassCommonPrmTblPtr, VAR_15);


    FUNC_4(VAR_17 * VAR_21, VAR_18);


    FUNC_2(VAR_18, VAR_19);


    FUNC_9((*VAR_29)->waysNumAndSetSize,
                 (uint16_t)((VAR_17 << 8) | VAR_19));




    VAR_23 = (uint32_t)(VAR_12->reassmParams.maxNumFramesInProcess * 2);


    VAR_22 = VAR_23 / VAR_17;


    FUNC_4(VAR_22, VAR_22);

    FUNC_9((*VAR_29)->autoLearnHashKeyMask,
                 (uint16_t)(VAR_22 - 1));





    VAR_16 = VAR_22 * VAR_18;

    *VAR_27 =
            FUNC_5(FUNC_12(VAR_16, VAR_12->reassmParams.dataMemId, VAR_18));
    if (!*VAR_27)
    {
        FUNC_1(VAR_14->h_FmMuram, *VAR_29);
        *VAR_29 = ((void*)0);
        FUNC_6(VAR_10, VAR_2, ("Memory allocation FAILED"));
    }
    FUNC_3(FUNC_8(*VAR_27), 0, VAR_16);


    VAR_24 = ((uint64_t)(VAR_12->reassmParams.dataLiodnOffset
            & VAR_6)
            << (uint64_t)VAR_7);
    VAR_24 |= ((uint64_t)(VAR_12->reassmParams.dataLiodnOffset
            & VAR_4)
            << (uint64_t)VAR_5);
    VAR_24 |= FUNC_13(FUNC_8(*VAR_27));
    FUNC_10( (*VAR_29)->liodnAlAndAutoLearnHashTblPtrHi,
                 (uint32_t)(VAR_24 >> 32));
    FUNC_10((*VAR_29)->autoLearnHashTblPtrLow, (uint32_t)VAR_24);




    *VAR_28 =
            FUNC_5(FUNC_12((uint32_t)(VAR_22 * 4), VAR_12->reassmParams.dataMemId, 4));
    if (!*VAR_28)
    {
        FUNC_1(VAR_14->h_FmMuram, *VAR_29);
        *VAR_29 = ((void*)0);
        FUNC_11(FUNC_8(*VAR_27));
        *VAR_27 = 0;
        FUNC_6(VAR_10, VAR_2, ("Memory allocation FAILED"));
    }
    FUNC_3(FUNC_8(*VAR_28), 0, (VAR_22 * 4));


    VAR_24 = ((uint64_t)(VAR_12->reassmParams.dataLiodnOffset
            & VAR_6)
            << (uint64_t)VAR_7);
    VAR_24 |= ((uint64_t)(VAR_12->reassmParams.dataLiodnOffset
            & VAR_4)
            << (uint64_t)VAR_5);
    VAR_24 |= FUNC_13(FUNC_8(*VAR_28));
    FUNC_10( (*VAR_29)->liodnSlAndAutoLearnSetLockTblPtrHi,
                 (uint32_t)(VAR_24 >> 32));
    FUNC_10((*VAR_29)->autoLearnSetLockTblPtrLow, (uint32_t)VAR_24);


    FUNC_9((*VAR_29)->minFragSize, VAR_25);

    FUNC_9((*VAR_29)->maxReassemblySize, VAR_26);

    return VAR_3;
}
