
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_13__ {TYPE_3__* read_baton; int read; } ;
struct TYPE_11__ {TYPE_5__ databuf; void* status; void* pending; int * stream; } ;
struct TYPE_10__ {TYPE_5__ databuf; void* status; void* pending; int * stream_next; int * stream; } ;
struct TYPE_12__ {TYPE_2__ decrypt; TYPE_1__ encrypt; int ctx; int ssl; int bio; int biom; int * server_cert_chain_callback; int * server_cert_callback; int * cert_pw_callback; int * cert_callback; void* fatal_err; void* pending_err; scalar_t__ cached_cert_pw; scalar_t__ cached_cert; int * allocator; int pool; scalar_t__ refcount; } ;
typedef TYPE_3__ serf_ssl_context_t ;
typedef int serf_bucket_alloc_t ;


 void* VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ,int) ;
 int FUNC_5 (int ,int ,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ,TYPE_3__*) ;
 int FUNC_8 (int ,int ,int ) ;
 int FUNC_9 (int ) ;
 int FUNC_10 () ;
 int VAR_5 ;
 int FUNC_11 () ;
 int FUNC_12 (int ,TYPE_3__*) ;
 int FUNC_13 (TYPE_3__*) ;
 int FUNC_14 () ;
 void* FUNC_15 (int *) ;
 int FUNC_16 (int *) ;
 TYPE_3__* FUNC_17 (int *,int) ;
 int FUNC_18 (TYPE_5__*) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;

__attribute__((used)) static serf_ssl_context_t *FUNC_19(serf_bucket_alloc_t *VAR_10)
{
    serf_ssl_context_t *VAR_11;

    FUNC_14();

    VAR_11 = FUNC_17(VAR_10, sizeof(*VAR_11));

    VAR_11->refcount = 0;
    VAR_11->pool = FUNC_16(VAR_10);
    VAR_11->allocator = VAR_10;


    VAR_11->ctx = FUNC_1(FUNC_10());
    FUNC_4(VAR_11->ctx, VAR_2 | VAR_3);

    FUNC_2(VAR_11->ctx, VAR_8);
    VAR_11->cached_cert = 0;
    VAR_11->cached_cert_pw = 0;
    VAR_11->pending_err = VAR_0;
    VAR_11->fatal_err = VAR_0;

    VAR_11->cert_callback = ((void*)0);
    VAR_11->cert_pw_callback = ((void*)0);
    VAR_11->server_cert_callback = ((void*)0);
    VAR_11->server_cert_chain_callback = ((void*)0);

    FUNC_5(VAR_11->ctx, VAR_4,
                       VAR_9);
    FUNC_4(VAR_11->ctx, VAR_1);

    FUNC_13(VAR_11);

    VAR_11->ssl = FUNC_6(VAR_11->ctx);
    VAR_11->biom = FUNC_11();
    VAR_11->bio = FUNC_0(VAR_11->biom);
    FUNC_12(VAR_11->bio, VAR_11);

    FUNC_8(VAR_11->ssl, VAR_11->bio, VAR_11->bio);

    FUNC_9(VAR_11->ssl);

    FUNC_7(VAR_11->ssl, VAR_11);





    VAR_11->encrypt.stream = ((void*)0);
    VAR_11->encrypt.stream_next = ((void*)0);
    VAR_11->encrypt.pending = FUNC_15(VAR_10);
    VAR_11->encrypt.status = VAR_0;
    FUNC_18(&VAR_11->encrypt.databuf);
    VAR_11->encrypt.databuf.read = VAR_7;
    VAR_11->encrypt.databuf.read_baton = VAR_11;

    VAR_11->decrypt.stream = ((void*)0);
    VAR_11->decrypt.pending = FUNC_15(VAR_10);
    VAR_11->decrypt.status = VAR_0;
    FUNC_18(&VAR_11->decrypt.databuf);
    VAR_11->decrypt.databuf.read = VAR_6;
    VAR_11->decrypt.databuf.read_baton = VAR_11;

    return VAR_11;
}
