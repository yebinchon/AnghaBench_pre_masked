
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ZSTD_CCtx_params ;
typedef int ZSTD_CCtx ;


 int FUNC_0 (int,char*,unsigned int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *,void const*,size_t,int ,int ,int *,int const*,size_t,int ) ;
 size_t FUNC_3 (int *,void*,size_t,void const*,size_t) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

size_t FUNC_4(
        ZSTD_CCtx* VAR_3,
        void* VAR_4, size_t VAR_5,
        const void* VAR_6, size_t VAR_7,
        const void* VAR_8,size_t VAR_9,
        const ZSTD_CCtx_params* VAR_10)
{
    FUNC_0(4, "ZSTD_compress_advanced_internal (srcSize:%u)", (unsigned)VAR_7);
    FUNC_1( FUNC_2(VAR_3,
                         VAR_8, VAR_9, VAR_0, VAR_1, ((void*)0),
                         VAR_10, VAR_7, VAR_2) );
    return FUNC_3(VAR_3, VAR_4, VAR_5, VAR_6, VAR_7);
}
