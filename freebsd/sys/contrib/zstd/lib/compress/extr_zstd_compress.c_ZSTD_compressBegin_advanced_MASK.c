
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int ZSTD_parameters ;
typedef int ZSTD_CCtx_params ;
struct TYPE_4__ {int requestedParams; } ;
typedef TYPE_1__ ZSTD_CCtx ;


 int FUNC_0 (int *,int ) ;
 size_t FUNC_1 (TYPE_1__*,void const*,size_t,int ,int ,int *,int const*,unsigned long long) ;
 int VAR_0 ;
 int VAR_1 ;

size_t FUNC_2(ZSTD_CCtx* VAR_2,
                             const void* VAR_3, size_t VAR_4,
                                   ZSTD_parameters VAR_5, unsigned long long VAR_6)
{
    ZSTD_CCtx_params const VAR_7 =
            FUNC_0(&VAR_2->requestedParams, VAR_5);
    return FUNC_1(VAR_2,
                                            VAR_3, VAR_4, VAR_0, VAR_1,
                                            ((void*)0) ,
                                            &VAR_7, VAR_6);
}
