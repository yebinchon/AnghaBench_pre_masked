
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int ZSTD_parameters ;
typedef int ZSTD_CCtx_params ;
struct TYPE_4__ {int requestedParams; } ;
typedef TYPE_1__ ZSTD_CCtx ;


 int FUNC_0 (int,char*,unsigned int) ;
 int VAR_0 ;
 int FUNC_1 (int *,int const) ;
 size_t FUNC_2 (TYPE_1__*,void const*,size_t,int ,int ,int *,int const*,int ,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_3 (int,int ,size_t) ;
 int VAR_3 ;

size_t FUNC_4(ZSTD_CCtx* VAR_4, const void* VAR_5, size_t VAR_6, int VAR_7)
{
    ZSTD_parameters const VAR_8 = FUNC_3(VAR_7, VAR_0, VAR_6);
    ZSTD_CCtx_params const VAR_9 =
            FUNC_1(&VAR_4->requestedParams, VAR_8);
    FUNC_0(4, "ZSTD_compressBegin_usingDict (dictSize=%u)", (unsigned)VAR_6);
    return FUNC_2(VAR_4, VAR_5, VAR_6, VAR_1, VAR_2, ((void*)0),
                                       &VAR_9, VAR_0, VAR_3);
}
