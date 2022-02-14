
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {TYPE_3__* ssl_ctx; } ;
typedef TYPE_1__ ssl_context_t ;
struct TYPE_7__ {TYPE_1__* data; } ;
typedef TYPE_2__ serf_bucket_t ;
struct TYPE_8__ {int refcount; } ;


 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (TYPE_3__*) ;

__attribute__((used)) static void FUNC_2(serf_bucket_t *VAR_0)
{
    ssl_context_t *VAR_1 = VAR_0->data;

    if (!--VAR_1->ssl_ctx->refcount) {
        FUNC_1(VAR_1->ssl_ctx);
    }

    FUNC_0(VAR_0);
}
