
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_4__ ;
typedef struct TYPE_18__ TYPE_3__ ;
typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;
typedef struct TYPE_15__ TYPE_14__ ;


typedef int ZSTD_dictTableLoadMethod_e ;
typedef int ZSTD_dictContentType_e ;
typedef int ZSTD_buffered_policy_e ;
struct TYPE_17__ {int dictContentSize; scalar_t__ compressionLevel; void const* dictContent; } ;
typedef TYPE_2__ ZSTD_CDict ;
struct TYPE_15__ {int windowLog; } ;
struct TYPE_18__ {scalar_t__ attachDictPref; TYPE_14__ cParams; } ;
typedef TYPE_3__ ZSTD_CCtx_params ;
struct TYPE_16__ {int matchState; int prevCBlock; } ;
struct TYPE_19__ {scalar_t__ dictID; int entropyWorkspace; int workspace; TYPE_1__ blockState; } ;
typedef TYPE_4__ ZSTD_CCtx ;
typedef int U64 ;
typedef scalar_t__ U32 ;


 int FUNC_0 (int,char*,int ) ;
 int FUNC_1 (size_t const) ;
 size_t const VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (TYPE_14__) ;
 size_t FUNC_3 (int ,int *,int *,TYPE_3__ const*,void const*,size_t,int ,int ,int ) ;
 scalar_t__ VAR_4 ;
 int FUNC_4 (int ) ;
 size_t const FUNC_5 (TYPE_4__*,TYPE_3__ const,int,int ,int ) ;
 size_t FUNC_6 (TYPE_4__*,TYPE_2__ const*,TYPE_3__ const*,int,int ) ;
 int VAR_5 ;
 int FUNC_7 (int) ;

__attribute__((used)) static size_t FUNC_8(ZSTD_CCtx* VAR_6,
                                    const void* VAR_7, size_t VAR_8,
                                    ZSTD_dictContentType_e VAR_9,
                                    ZSTD_dictTableLoadMethod_e VAR_10,
                                    const ZSTD_CDict* VAR_11,
                                    const ZSTD_CCtx_params* VAR_12, U64 VAR_13,
                                    ZSTD_buffered_policy_e VAR_14)
{
    FUNC_0(4, "ZSTD_compressBegin_internal: wlog=%u", VAR_12->cParams.windowLog);

    FUNC_7(!FUNC_4(FUNC_2(VAR_12->cParams)));
    FUNC_7(!((VAR_7) && (VAR_11)));
    if ( (VAR_11)
      && (VAR_11->dictContentSize > 0)
      && ( VAR_13 < VAR_3
        || VAR_13 < VAR_11->dictContentSize * VAR_2
        || VAR_13 == VAR_1
        || VAR_11->compressionLevel == 0)
      && (VAR_12->attachDictPref != VAR_4) ) {
        return FUNC_6(VAR_6, VAR_11, VAR_12, VAR_13, VAR_14);
    }

    FUNC_1( FUNC_5(VAR_6, *VAR_12, VAR_13,
                                     VAR_5, VAR_14) );
    { size_t const VAR_15 = VAR_11 ?
                FUNC_3(
                        VAR_6->blockState.prevCBlock, &VAR_6->blockState.matchState,
                        &VAR_6->workspace, VAR_12, VAR_11->dictContent, VAR_11->dictContentSize,
                        VAR_9, VAR_10, VAR_6->entropyWorkspace)
              : FUNC_3(
                        VAR_6->blockState.prevCBlock, &VAR_6->blockState.matchState,
                        &VAR_6->workspace, VAR_12, VAR_7, VAR_8,
                        VAR_9, VAR_10, VAR_6->entropyWorkspace);
        FUNC_1(VAR_15);
        FUNC_7(VAR_15 <= VAR_0);
        VAR_6->dictID = (U32)VAR_15;
    }
    return 0;
}
