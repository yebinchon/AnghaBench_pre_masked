
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_10__ {TYPE_2__* ssl_ctx; TYPE_4__** our_stream; int * databuf; } ;
typedef TYPE_3__ ssl_context_t ;
typedef int serf_ssl_context_t ;
struct TYPE_11__ {TYPE_3__* data; } ;
typedef TYPE_4__ serf_bucket_t ;
typedef int serf_bucket_alloc_t ;
struct TYPE_8__ {TYPE_4__* stream; int databuf; } ;
struct TYPE_9__ {TYPE_1__ decrypt; } ;


 TYPE_4__* FUNC_0 (int *,int *,int *) ;
 int VAR_0 ;

serf_bucket_t *FUNC_1(
    serf_bucket_t *VAR_1,
    serf_ssl_context_t *VAR_2,
    serf_bucket_alloc_t *VAR_3)
{
    serf_bucket_t *VAR_4;
    ssl_context_t *VAR_5;

    VAR_4 = FUNC_0(VAR_2, VAR_3,
                                 &VAR_0);

    VAR_5 = VAR_4->data;

    VAR_5->databuf = &VAR_5->ssl_ctx->decrypt.databuf;
    if (VAR_5->ssl_ctx->decrypt.stream != ((void*)0)) {
        return ((void*)0);
    }
    VAR_5->ssl_ctx->decrypt.stream = VAR_1;
    VAR_5->our_stream = &VAR_5->ssl_ctx->decrypt.stream;

    return VAR_4;
}
