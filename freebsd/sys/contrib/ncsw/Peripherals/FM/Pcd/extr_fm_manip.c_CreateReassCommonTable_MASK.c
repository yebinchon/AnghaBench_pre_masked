
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


typedef int uint64_t ;
typedef int uint32_t ;
typedef int uint16_t ;
struct TYPE_14__ {int expirationDelay; int timeOutTblPtr; int reassFrmDescPoolPtrLow; int liodnAndReassFrmDescPoolPtrHi; int reassFrmDescIndexPoolTblPtr; int timeoutModeAndFqid; } ;
typedef TYPE_2__ t_ReassCommonTbl ;
struct TYPE_13__ {scalar_t__ timeOutMode; int fqidForTimeOutFrames; int maxNumFramesInProcess; int dataLiodnOffset; int timeoutThresholdForReassmProcess; TYPE_2__* p_ReassCommonTbl; void* timeOutTblAddr; void* reassFrmDescrPoolTblAddr; int dataMemId; void* reassFrmDescrIndxPoolTblAddr; } ;
struct TYPE_15__ {TYPE_1__ reassmParams; scalar_t__ h_FmPcd; } ;
typedef TYPE_3__ t_FmPcdManip ;
struct TYPE_16__ {int h_FmMuram; scalar_t__ physicalMuramBase; int h_Fm; } ;
typedef TYPE_4__ t_FmPcd ;
typedef scalar_t__ t_Error ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 (int ,int,int) ;
 int FUNC_1 (int ,TYPE_2__*) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (TYPE_4__*,TYPE_2__*) ;
 int VAR_10 ;
 int FUNC_4 (TYPE_2__*,int ,int) ;
 scalar_t__ FUNC_5 (TYPE_2__*,int) ;
 void* FUNC_6 (scalar_t__) ;
 int FUNC_7 (int ,scalar_t__,char*) ;
 TYPE_2__* FUNC_8 (void*) ;
 int FUNC_9 (int,int) ;
 int FUNC_10 (int ,int) ;
 scalar_t__ FUNC_11 (int,int ,int) ;
 scalar_t__ FUNC_12 (TYPE_2__*) ;
 scalar_t__ VAR_11 ;

__attribute__((used)) static t_Error FUNC_13(t_FmPcdManip *VAR_12)
{
    uint32_t VAR_13 = 0, VAR_14, VAR_15;
    uint64_t VAR_16, VAR_17;
    t_FmPcd *VAR_18 = (t_FmPcd *)VAR_12->h_FmPcd;
    t_Error VAR_19 = VAR_2;

    VAR_15 = FUNC_2(VAR_18->h_Fm);
    if (VAR_15 == 0)
        FUNC_7(VAR_10, VAR_0, ("Timestamp scale"));



    VAR_12->reassmParams.p_ReassCommonTbl =
            (t_ReassCommonTbl *)FUNC_0(
                    VAR_18->h_FmMuram,
                    VAR_4,
                    VAR_3);

    if (!VAR_12->reassmParams.p_ReassCommonTbl)
        FUNC_7(VAR_10, VAR_1,
                     ("MURAM alloc for Reassembly common parameters table"));

    FUNC_4(VAR_12->reassmParams.p_ReassCommonTbl, 0,
               VAR_4);


    VAR_13 = 0;
    if (VAR_12->reassmParams.timeOutMode
            == VAR_11)
        VAR_13 |= VAR_9;



    VAR_13 |= VAR_12->reassmParams.fqidForTimeOutFrames;
    FUNC_10(VAR_12->reassmParams.p_ReassCommonTbl->timeoutModeAndFqid,
                 VAR_13);


    VAR_17 = VAR_12->reassmParams.maxNumFramesInProcess + 129;


    VAR_12->reassmParams.reassFrmDescrIndxPoolTblAddr =
            FUNC_6(FUNC_0(VAR_18->h_FmMuram,
                            (uint32_t)(VAR_17 * 2),
                            256));
    if (!VAR_12->reassmParams.reassFrmDescrIndxPoolTblAddr)
        FUNC_7(
                VAR_10, VAR_1,
                ("MURAM alloc for Reassembly frame descriptor indexes pool"));

    FUNC_4(FUNC_8(VAR_12->reassmParams.reassFrmDescrIndxPoolTblAddr),
               0, (uint32_t)(VAR_17 * 2));




    for (VAR_14 = 0; VAR_14 < (VAR_17 - 1); VAR_14++)
        FUNC_9(
                *(uint16_t *)FUNC_5(FUNC_8(VAR_12->reassmParams.reassFrmDescrIndxPoolTblAddr), (VAR_14<<1)),
                (uint16_t)(VAR_14+1));


    VAR_13 = (uint32_t)(FUNC_12(
            FUNC_8(VAR_12->reassmParams.reassFrmDescrIndxPoolTblAddr))
            - VAR_18->physicalMuramBase);
    FUNC_10(
            VAR_12->reassmParams.p_ReassCommonTbl->reassFrmDescIndexPoolTblPtr,
            VAR_13);



    VAR_12->reassmParams.reassFrmDescrPoolTblAddr =
            FUNC_6(FUNC_11((uint32_t)(VAR_17 * 64), VAR_12->reassmParams.dataMemId, 64));

    if (!VAR_12->reassmParams.reassFrmDescrPoolTblAddr)
        FUNC_7(VAR_10, VAR_1, ("Memory allocation FAILED"));

    FUNC_4(FUNC_8(VAR_12->reassmParams.reassFrmDescrPoolTblAddr), 0,
               (uint32_t)(VAR_17 * 64));


    VAR_16 = (uint64_t)(FUNC_12(
            FUNC_8(VAR_12->reassmParams.reassFrmDescrPoolTblAddr)));
    VAR_16 |= ((uint64_t)(VAR_12->reassmParams.dataLiodnOffset
            & VAR_7)
            << (uint64_t)VAR_8);
    VAR_16 |= ((uint64_t)(VAR_12->reassmParams.dataLiodnOffset
            & VAR_5)
            << (uint64_t)VAR_6);
    FUNC_10(
            VAR_12->reassmParams.p_ReassCommonTbl->liodnAndReassFrmDescPoolPtrHi,
            (uint32_t)(VAR_16 >> 32));
    FUNC_10(
            VAR_12->reassmParams.p_ReassCommonTbl->reassFrmDescPoolPtrLow,
            (uint32_t)VAR_16);



    VAR_12->reassmParams.timeOutTblAddr =
            FUNC_6(FUNC_0(VAR_18->h_FmMuram, (uint32_t)(VAR_17 * 8),8));

    if (!VAR_12->reassmParams.timeOutTblAddr)
        FUNC_7(VAR_10, VAR_1,
                     ("MURAM alloc for Reassembly timeout table"));

    FUNC_4(FUNC_8(VAR_12->reassmParams.timeOutTblAddr), 0,
               (uint16_t)(VAR_17 * 8));


    VAR_13 = (uint32_t)(FUNC_12(
            FUNC_8(VAR_12->reassmParams.timeOutTblAddr))
            - VAR_18->physicalMuramBase);
    FUNC_10(VAR_12->reassmParams.p_ReassCommonTbl->timeOutTblPtr,
                 VAR_13);


    VAR_13 = 0;
    VAR_13 |= (((uint32_t)(1 << VAR_15))
            * VAR_12->reassmParams.timeoutThresholdForReassmProcess);
    FUNC_10(VAR_12->reassmParams.p_ReassCommonTbl->expirationDelay,
                 VAR_13);

    VAR_19 = FUNC_3(VAR_18,
                                  VAR_12->reassmParams.p_ReassCommonTbl);
    if (VAR_19 != VAR_2)
    {
        FUNC_1(VAR_18->h_FmMuram,
                         VAR_12->reassmParams.p_ReassCommonTbl);
        FUNC_7(VAR_10, VAR_19, ("port registration"));
    }

    return VAR_19;
}
