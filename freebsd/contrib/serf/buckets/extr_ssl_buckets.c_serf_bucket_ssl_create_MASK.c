
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {TYPE_2__* ssl_ctx; } ;
typedef TYPE_1__ ssl_context_t ;
struct TYPE_8__ {int refcount; } ;
typedef TYPE_2__ serf_ssl_context_t ;
typedef int serf_bucket_type_t ;
typedef int serf_bucket_t ;
typedef int serf_bucket_alloc_t ;


 int * FUNC_0 (int const*,int *,TYPE_1__*) ;
 TYPE_1__* FUNC_1 (int *,int) ;
 TYPE_2__* FUNC_2 (int *) ;

__attribute__((used)) static serf_bucket_t * FUNC_3(
    serf_ssl_context_t *VAR_0,
    serf_bucket_alloc_t *VAR_1,
    const serf_bucket_type_t *VAR_2)
{
    ssl_context_t *VAR_3;

    VAR_3 = FUNC_1(VAR_1, sizeof(*VAR_3));
    if (!VAR_0) {
        VAR_3->ssl_ctx = FUNC_2(VAR_1);
    }
    else {
        VAR_3->ssl_ctx = VAR_0;
    }
    VAR_3->ssl_ctx->refcount++;

    return FUNC_0(VAR_2, VAR_1, VAR_3);
}
