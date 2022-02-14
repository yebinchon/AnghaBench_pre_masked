
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_26__ TYPE_8__ ;
typedef struct TYPE_25__ TYPE_7__ ;
typedef struct TYPE_24__ TYPE_6__ ;
typedef struct TYPE_23__ TYPE_5__ ;
typedef struct TYPE_22__ TYPE_4__ ;
typedef struct TYPE_21__ TYPE_3__ ;
typedef struct TYPE_20__ TYPE_2__ ;
typedef struct TYPE_19__ TYPE_1__ ;
typedef struct TYPE_18__ TYPE_13__ ;


typedef int seqDef ;
typedef int rawSeq ;
typedef int ldmEntry_t ;
typedef int ZSTD_indexResetPolicy_e ;
typedef int ZSTD_cwksp ;
typedef int ZSTD_compressedBlockState_t ;
typedef int ZSTD_compResetPolicy_e ;
typedef scalar_t__ ZSTD_buffered_policy_e ;
struct TYPE_18__ {size_t hashLog; size_t bucketSizeLog; int hashRateLog; scalar_t__ enableLdm; int minMatchLength; } ;
struct TYPE_25__ {scalar_t__ windowLog; int minMatch; } ;
struct TYPE_19__ {int contentSizeFlag; } ;
struct TYPE_23__ {TYPE_13__ ldmParams; TYPE_7__ cParams; TYPE_1__ fParams; } ;
typedef TYPE_5__ ZSTD_CCtx_params ;
struct TYPE_21__ {int window; int * hashTable; int * bucketOffsets; int hashPower; } ;
struct TYPE_26__ {TYPE_7__ cParams; int window; } ;
struct TYPE_22__ {TYPE_8__ matchState; int * prevCBlock; int * nextCBlock; } ;
struct TYPE_20__ {size_t maxNbLit; size_t maxNbSeq; int * sequencesStart; void* ofCode; void* mlCode; void* llCode; void* litStart; } ;
struct TYPE_24__ {int isFirstBlock; size_t* entropyWorkspace; scalar_t__ pledgedSrcSizePlusOne; size_t blockSize; size_t inBuffSize; char* inBuff; size_t outBuffSize; char* outBuff; size_t maxNbLdmSequences; TYPE_3__ ldmState; int * ldmSequences; TYPE_4__ blockState; TYPE_2__ seqStore; scalar_t__ dictID; int stage; int xxhState; TYPE_5__ appliedParams; scalar_t__ producedCSize; scalar_t__ consumedSrcSize; int customMem; scalar_t__ staticSize; int workspace; } ;
typedef TYPE_6__ ZSTD_CCtx ;
typedef scalar_t__ U64 ;
typedef size_t U32 ;
typedef int BYTE ;


 int FUNC_0 (int,char*,...) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 size_t FUNC_2 (int,size_t) ;
 size_t FUNC_3 (scalar_t__,size_t const) ;
 int FUNC_4 (scalar_t__,int ,char*) ;
 size_t const VAR_1 ;
 int FUNC_5 (int *,int ) ;
 scalar_t__ VAR_2 ;
 scalar_t__ const VAR_3 ;
 int FUNC_6 (TYPE_7__) ;
 int FUNC_7 (size_t const) ;
 int FUNC_8 (size_t const) ;
 int FUNC_9 (int * const) ;
 int FUNC_10 (int * const,int ) ;
 int FUNC_11 (int * const,int) ;
 int FUNC_12 (int * const,size_t const) ;
 int FUNC_13 (int * const) ;
 int FUNC_14 (int * const,size_t const,int ) ;
 int FUNC_15 (int * const,int ) ;
 scalar_t__ FUNC_16 (int * const,size_t const) ;
 void* FUNC_17 (int * const,size_t const) ;
 scalar_t__ FUNC_18 (int * const,int) ;
 int FUNC_19 (int * const) ;
 scalar_t__ FUNC_20 (int ) ;
 int FUNC_21 (int ) ;
 int FUNC_22 (TYPE_13__*,TYPE_7__*) ;
 size_t FUNC_23 (TYPE_13__,size_t const) ;
 size_t FUNC_24 (TYPE_13__) ;
 int FUNC_25 (TYPE_6__*,int *,int ) ;
 int VAR_4 ;
 int FUNC_26 (int *) ;
 int FUNC_27 (TYPE_8__*,int * const,TYPE_7__*,int const,int ,int ) ;
 int FUNC_28 (int ) ;
 size_t FUNC_29 (TYPE_7__*,int) ;
 int FUNC_30 (int *) ;
 scalar_t__ const VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_31 (int) ;
 int VAR_9 ;
 int FUNC_32 (int *,int ,size_t const) ;

__attribute__((used)) static size_t FUNC_33(ZSTD_CCtx* VAR_10,
                                      ZSTD_CCtx_params VAR_11,
                                      U64 const VAR_12,
                                      ZSTD_compResetPolicy_e const VAR_13,
                                      ZSTD_buffered_policy_e const VAR_14)
{
    ZSTD_cwksp* const VAR_15 = &VAR_10->workspace;
    FUNC_0(4, "ZSTD_resetCCtx_internal: pledgedSrcSize=%u, wlog=%u",
                (U32)VAR_12, VAR_11.cParams.windowLog);
    FUNC_31(!FUNC_21(FUNC_6(VAR_11.cParams)));

    VAR_10->isFirstBlock = 1;

    if (VAR_11.ldmParams.enableLdm) {

        FUNC_22(&VAR_11.ldmParams, &VAR_11.cParams);
        FUNC_31(VAR_11.ldmParams.hashLog >= VAR_11.ldmParams.bucketSizeLog);
        FUNC_31(VAR_11.ldmParams.hashRateLog < 32);
        VAR_10->ldmState.hashPower = FUNC_28(VAR_11.ldmParams.minMatchLength);
    }

    { size_t const VAR_16 = FUNC_2(1, (size_t)FUNC_3(((U64)1 << VAR_11.cParams.windowLog), VAR_12));
        size_t const VAR_17 = FUNC_3(VAR_2, VAR_16);
        U32 const VAR_18 = (VAR_11.cParams.minMatch==3) ? 3 : 4;
        size_t const VAR_19 = VAR_17 / VAR_18;
        size_t const VAR_20 = FUNC_8(VAR_1 + VAR_17)
                                + FUNC_8(VAR_19 * sizeof(seqDef))
                                + 3 * FUNC_8(VAR_19 * sizeof(BYTE));
        size_t const VAR_21 = (VAR_14==VAR_5) ? FUNC_7(VAR_17)+1 : 0;
        size_t const VAR_22 = (VAR_14==VAR_5) ? VAR_16 + VAR_17 : 0;
        size_t const VAR_23 = FUNC_29(&VAR_11.cParams, 1);
        size_t const VAR_24 = FUNC_23(VAR_11.ldmParams, VAR_17);

        ZSTD_indexResetPolicy_e VAR_25 = VAR_7;

        if (FUNC_20(VAR_10->blockState.matchState.window)) {
            VAR_25 = VAR_8;
        }

        FUNC_10(VAR_15, 0);


        { size_t const VAR_26 = VAR_10->staticSize ? FUNC_8(sizeof(ZSTD_CCtx)) : 0;
            size_t const VAR_27 = FUNC_8(VAR_0);
            size_t const VAR_28 = 2 * FUNC_8(sizeof(ZSTD_compressedBlockState_t));
            size_t const VAR_29 = FUNC_8(VAR_22) + FUNC_8(VAR_21);
            size_t const VAR_30 = FUNC_24(VAR_11.ldmParams);
            size_t const VAR_31 = FUNC_8(VAR_24 * sizeof(rawSeq));

            size_t const VAR_32 =
                VAR_26 +
                VAR_27 +
                VAR_28 +
                VAR_30 +
                VAR_31 +
                VAR_23 +
                VAR_20 +
                VAR_29;

            int const VAR_33 = FUNC_19(VAR_15) < VAR_32;
            int const VAR_34 = FUNC_12(VAR_15, VAR_32);

            FUNC_0(4, "Need %zuKB workspace, including %zuKB for match state, and %zuKB for buffers",
                        VAR_32>>10, VAR_23>>10, VAR_29>>10);
            FUNC_0(4, "windowSize: %zu - blockSize: %zu", VAR_16, VAR_17);

            if (VAR_33 || VAR_34) {
                FUNC_0(4, "Resize workspaceSize from %zuKB to %zuKB",
                            FUNC_19(VAR_15) >> 10,
                            VAR_32 >> 10);

                FUNC_4(VAR_10->staticSize, VAR_9, "static cctx : no resize");

                VAR_25 = VAR_8;

                FUNC_15(VAR_15, VAR_10->customMem);
                FUNC_1(FUNC_14(VAR_15, VAR_32, VAR_10->customMem));

                FUNC_0(5, "reserving object space");



                FUNC_31(FUNC_11(VAR_15, 2 * sizeof(ZSTD_compressedBlockState_t)));
                VAR_10->blockState.prevCBlock = (ZSTD_compressedBlockState_t*) FUNC_18(VAR_15, sizeof(ZSTD_compressedBlockState_t));
                FUNC_4(VAR_10->blockState.prevCBlock == ((void*)0), VAR_9, "couldn't allocate prevCBlock");
                VAR_10->blockState.nextCBlock = (ZSTD_compressedBlockState_t*) FUNC_18(VAR_15, sizeof(ZSTD_compressedBlockState_t));
                FUNC_4(VAR_10->blockState.nextCBlock == ((void*)0), VAR_9, "couldn't allocate nextCBlock");
                VAR_10->entropyWorkspace = (U32*) FUNC_18(VAR_15, VAR_0);
                FUNC_4(VAR_10->blockState.nextCBlock == ((void*)0), VAR_9, "couldn't allocate entropyWorkspace");
        } }

        FUNC_13(VAR_15);


        VAR_10->appliedParams = VAR_11;
        VAR_10->blockState.matchState.cParams = VAR_11.cParams;
        VAR_10->pledgedSrcSizePlusOne = VAR_12+1;
        VAR_10->consumedSrcSize = 0;
        VAR_10->producedCSize = 0;
        if (VAR_12 == VAR_3)
            VAR_10->appliedParams.fParams.contentSizeFlag = 0;
        FUNC_0(4, "pledged content size : %u ; flag : %u",
            (unsigned)VAR_12, VAR_10->appliedParams.fParams.contentSizeFlag);
        VAR_10->blockSize = VAR_17;

        FUNC_5(&VAR_10->xxhState, 0);
        VAR_10->stage = VAR_6;
        VAR_10->dictID = 0;

        FUNC_26(VAR_10->blockState.prevCBlock);




        VAR_10->seqStore.litStart = FUNC_17(VAR_15, VAR_17 + VAR_1);
        VAR_10->seqStore.maxNbLit = VAR_17;


        VAR_10->inBuffSize = VAR_22;
        VAR_10->inBuff = (char*)FUNC_17(VAR_15, VAR_22);
        VAR_10->outBuffSize = VAR_21;
        VAR_10->outBuff = (char*)FUNC_17(VAR_15, VAR_21);


        if (VAR_11.ldmParams.enableLdm) {

            size_t const VAR_35 =
                  ((size_t)1) << (VAR_11.ldmParams.hashLog -
                                  VAR_11.ldmParams.bucketSizeLog);
            VAR_10->ldmState.bucketOffsets = FUNC_17(VAR_15, VAR_35);
            FUNC_32(VAR_10->ldmState.bucketOffsets, 0, VAR_35);
        }


        FUNC_25(VAR_10, ((void*)0), 0);
        VAR_10->seqStore.maxNbSeq = VAR_19;
        VAR_10->seqStore.llCode = FUNC_17(VAR_15, VAR_19 * sizeof(BYTE));
        VAR_10->seqStore.mlCode = FUNC_17(VAR_15, VAR_19 * sizeof(BYTE));
        VAR_10->seqStore.ofCode = FUNC_17(VAR_15, VAR_19 * sizeof(BYTE));
        VAR_10->seqStore.sequencesStart = (seqDef*)FUNC_16(VAR_15, VAR_19 * sizeof(seqDef));

        FUNC_1(FUNC_27(
            &VAR_10->blockState.matchState,
            VAR_15,
            &VAR_11.cParams,
            VAR_13,
            VAR_25,
            VAR_4));


        if (VAR_11.ldmParams.enableLdm) {

            size_t const VAR_36 = ((size_t)1) << VAR_11.ldmParams.hashLog;
            VAR_10->ldmState.hashTable = (ldmEntry_t*)FUNC_16(VAR_15, VAR_36 * sizeof(ldmEntry_t));
            FUNC_32(VAR_10->ldmState.hashTable, 0, VAR_36 * sizeof(ldmEntry_t));
            VAR_10->ldmSequences = (rawSeq*)FUNC_16(VAR_15, VAR_24 * sizeof(rawSeq));
            VAR_10->maxNbLdmSequences = VAR_24;

            FUNC_32(&VAR_10->ldmState.window, 0, sizeof(VAR_10->ldmState.window));
            FUNC_30(&VAR_10->ldmState.window);
        }

        FUNC_0(3, "wksp: finished allocating, %zd bytes remain available", FUNC_9(VAR_15));

        return 0;
    }
}
