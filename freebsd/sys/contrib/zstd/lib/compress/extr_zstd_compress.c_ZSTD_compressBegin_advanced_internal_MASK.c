
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_4__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int ZSTD_dictTableLoadMethod_e ;
typedef int ZSTD_dictContentType_e ;
typedef int ZSTD_CDict ;
struct TYPE_6__ {int windowLog; } ;
struct TYPE_5__ {TYPE_4__ cParams; } ;
typedef TYPE_1__ ZSTD_CCtx_params ;
typedef int ZSTD_CCtx ;


 int FUNC_0 (int,char*,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_4__) ;
 size_t FUNC_3 (int *,void const*,size_t,int ,int ,int const*,TYPE_1__ const*,unsigned long long,int ) ;
 int VAR_0 ;

size_t FUNC_4(ZSTD_CCtx* VAR_1,
                                    const void* VAR_2, size_t VAR_3,
                                    ZSTD_dictContentType_e VAR_4,
                                    ZSTD_dictTableLoadMethod_e VAR_5,
                                    const ZSTD_CDict* VAR_6,
                                    const ZSTD_CCtx_params* VAR_7,
                                    unsigned long long VAR_8)
{
    FUNC_0(4, "ZSTD_compressBegin_advanced_internal: wlog=%u", VAR_7->cParams.windowLog);

    FUNC_1( FUNC_2(VAR_7->cParams) );
    return FUNC_3(VAR_1,
                                       VAR_2, VAR_3, VAR_4, VAR_5,
                                       VAR_6,
                                       VAR_7, VAR_8,
                                       VAR_0);
}
