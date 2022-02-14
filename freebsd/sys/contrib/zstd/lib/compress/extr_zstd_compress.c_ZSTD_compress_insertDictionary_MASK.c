
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ZSTD_matchState_t ;
typedef int ZSTD_dictTableLoadMethod_e ;
typedef scalar_t__ ZSTD_dictContentType_e ;
typedef int ZSTD_cwksp ;
typedef int ZSTD_compressedBlockState_t ;
typedef int ZSTD_CCtx_params ;
typedef int U32 ;


 int FUNC_0 (int,char*,...) ;
 scalar_t__ FUNC_1 (void const*) ;
 int FUNC_2 (int,int ) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 size_t FUNC_3 (int *,int *,int const*,void const*,size_t,int ) ;
 size_t FUNC_4 (int *,int *,int *,int const*,void const*,size_t,int ,void*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int ) ;
 int VAR_4 ;

__attribute__((used)) static size_t
FUNC_7(ZSTD_compressedBlockState_t* VAR_5,
                               ZSTD_matchState_t* VAR_6,
                               ZSTD_cwksp* VAR_7,
                         const ZSTD_CCtx_params* VAR_8,
                         const void* VAR_9, size_t VAR_10,
                               ZSTD_dictContentType_e VAR_11,
                               ZSTD_dictTableLoadMethod_e VAR_12,
                               void* VAR_13)
{
    FUNC_0(4, "ZSTD_compress_insertDictionary (dictSize=%u)", (U32)VAR_10);
    if ((VAR_9==((void*)0)) || (VAR_10<8)) {
        FUNC_2(VAR_11 == VAR_2, VAR_4);
        return 0;
    }

    FUNC_5(VAR_5);


    if (VAR_11 == VAR_3)
        return FUNC_3(VAR_6, VAR_7, VAR_8, VAR_9, VAR_10, VAR_12);

    if (FUNC_1(VAR_9) != VAR_0) {
        if (VAR_11 == VAR_1) {
            FUNC_0(4, "raw content dictionary detected");
            return FUNC_3(
                VAR_6, VAR_7, VAR_8, VAR_9, VAR_10, VAR_12);
        }
        FUNC_2(VAR_11 == VAR_2, VAR_4);
        FUNC_6(0);
    }


    return FUNC_4(
        VAR_5, VAR_6, VAR_7, VAR_8, VAR_9, VAR_10, VAR_12, VAR_13);
}
