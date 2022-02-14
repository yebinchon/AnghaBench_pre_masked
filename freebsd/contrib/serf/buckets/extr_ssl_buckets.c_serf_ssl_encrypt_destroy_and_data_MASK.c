
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_6__ ;
typedef struct TYPE_17__ TYPE_5__ ;
typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;
typedef struct TYPE_12__ TYPE_10__ ;


struct TYPE_15__ {TYPE_10__** our_stream; TYPE_4__* ssl_ctx; } ;
typedef TYPE_3__ ssl_context_t ;
struct TYPE_13__ {void* status; } ;
struct TYPE_14__ {TYPE_6__* stream_next; TYPE_10__* pending; TYPE_10__* stream; TYPE_1__ databuf; void* status; } ;
struct TYPE_16__ {int allocator; TYPE_2__ encrypt; } ;
typedef TYPE_4__ serf_ssl_context_t ;
struct TYPE_17__ {TYPE_3__* data; } ;
typedef TYPE_5__ serf_bucket_t ;
struct TYPE_18__ {struct TYPE_18__* next; TYPE_10__* bucket; } ;
typedef TYPE_6__ bucket_list_t ;
struct TYPE_12__ {int allocator; } ;


 void* VAR_0 ;
 TYPE_10__* FUNC_0 (int ) ;
 int FUNC_1 (TYPE_10__*) ;
 int FUNC_2 (int ,TYPE_6__*) ;
 int FUNC_3 (TYPE_5__*) ;

__attribute__((used)) static void FUNC_4(serf_bucket_t *VAR_1)
{
    ssl_context_t *VAR_2 = VAR_1->data;
    serf_ssl_context_t *VAR_3 = VAR_2->ssl_ctx;

    if (VAR_3->encrypt.stream == *VAR_2->our_stream) {
        FUNC_1(*VAR_2->our_stream);
        FUNC_1(VAR_3->encrypt.pending);


        VAR_3->encrypt.status = VAR_0;
        VAR_3->encrypt.databuf.status = VAR_0;


        if (VAR_3->encrypt.stream_next == ((void*)0)) {
            VAR_3->encrypt.stream = ((void*)0);
            VAR_3->encrypt.pending = ((void*)0);
        }
        else {
            bucket_list_t *VAR_4;

            VAR_4 = VAR_3->encrypt.stream_next;
            VAR_3->encrypt.stream = VAR_4->bucket;
            VAR_3->encrypt.pending =
                FUNC_0(VAR_4->bucket->allocator);
            VAR_3->encrypt.stream_next = VAR_4->next;
            FUNC_2(VAR_3->allocator, VAR_4);
        }
    }
    else {

        return;
    }
    FUNC_3(VAR_1);
}
