
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int contentSizeFlag; } ;
struct TYPE_9__ {TYPE_1__ fParams; } ;
typedef TYPE_2__ ZSTD_parameters ;
typedef int ZSTD_CCtx_params ;
struct TYPE_10__ {int requestedParams; } ;
typedef TYPE_3__ ZSTD_CCtx ;


 int FUNC_0 (int *,TYPE_2__ const) ;
 size_t FUNC_1 (TYPE_3__*,void*,size_t,void const*,size_t,void const*,size_t,int *) ;
 TYPE_2__ FUNC_2 (int,size_t,size_t) ;
 int FUNC_3 (int) ;

size_t FUNC_4(ZSTD_CCtx* VAR_0,
                               void* VAR_1, size_t VAR_2,
                         const void* VAR_3, size_t VAR_4,
                         const void* VAR_5, size_t VAR_6,
                               int VAR_7)
{
    ZSTD_parameters const VAR_8 = FUNC_2(VAR_7, VAR_4 + (!VAR_4), VAR_5 ? VAR_6 : 0);
    ZSTD_CCtx_params VAR_9 = FUNC_0(&VAR_0->requestedParams, VAR_8);
    FUNC_3(VAR_8.fParams.contentSizeFlag == 1);
    return FUNC_1(VAR_0, VAR_1, VAR_2, VAR_3, VAR_4, VAR_5, VAR_6, &VAR_9);
}
