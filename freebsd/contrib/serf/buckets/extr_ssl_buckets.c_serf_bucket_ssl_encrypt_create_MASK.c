
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_5__ ;
typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


struct TYPE_15__ {TYPE_2__* ssl_ctx; TYPE_4__** our_stream; int * databuf; } ;
typedef TYPE_3__ ssl_context_t ;
typedef int serf_ssl_context_t ;
struct TYPE_16__ {int allocator; TYPE_3__* data; } ;
typedef TYPE_4__ serf_bucket_t ;
typedef int serf_bucket_alloc_t ;
struct TYPE_17__ {struct TYPE_17__* next; TYPE_4__* bucket; } ;
typedef TYPE_5__ bucket_list_t ;
struct TYPE_13__ {TYPE_5__* stream_next; TYPE_4__* stream; int databuf; } ;
struct TYPE_14__ {TYPE_1__ encrypt; int allocator; } ;


 int FUNC_0 (TYPE_4__*,TYPE_4__*) ;
 TYPE_4__* FUNC_1 (int ) ;
 TYPE_5__* FUNC_2 (int ,int) ;
 TYPE_4__* FUNC_3 (int *,int *,int *) ;
 int VAR_0 ;

serf_bucket_t *FUNC_4(
    serf_bucket_t *VAR_1,
    serf_ssl_context_t *VAR_2,
    serf_bucket_alloc_t *VAR_3)
{
    serf_bucket_t *VAR_4;
    ssl_context_t *VAR_5;

    VAR_4 = FUNC_3(VAR_2, VAR_3,
                                 &VAR_0);

    VAR_5 = VAR_4->data;

    VAR_5->databuf = &VAR_5->ssl_ctx->encrypt.databuf;
    VAR_5->our_stream = &VAR_5->ssl_ctx->encrypt.stream;
    if (VAR_5->ssl_ctx->encrypt.stream == ((void*)0)) {
        serf_bucket_t *VAR_6 = FUNC_1(VAR_1->allocator);
        FUNC_0(VAR_6, VAR_1);
        VAR_5->ssl_ctx->encrypt.stream = VAR_6;
    }
    else {
        bucket_list_t *VAR_7;

        VAR_7 = FUNC_2(VAR_5->ssl_ctx->allocator,
                                         sizeof(*VAR_7));
        VAR_7->bucket = VAR_1;
        VAR_7->next = ((void*)0);
        if (VAR_5->ssl_ctx->encrypt.stream_next == ((void*)0)) {
            VAR_5->ssl_ctx->encrypt.stream_next = VAR_7;
        }
        else {
            bucket_list_t *VAR_8 = VAR_5->ssl_ctx->encrypt.stream_next;

            while (VAR_8->next != ((void*)0))
                VAR_8 = VAR_8->next;
            VAR_8->next = VAR_7;
        }
    }

    return VAR_4;
}
