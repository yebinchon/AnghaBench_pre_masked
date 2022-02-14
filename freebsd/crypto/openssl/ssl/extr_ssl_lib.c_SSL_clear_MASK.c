
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_12__ {int mdpth; int pdpth; int * mtlsa; int * mcert; } ;
struct TYPE_15__ {int rlayer; TYPE_3__* method; TYPE_2__* ctx; scalar_t__ shared_sigalgslen; int * shared_sigalgs; int param; TYPE_1__ dane; int * pha_dgst; int key_update; scalar_t__ first_packet; int * init_buf; int rwstate; int version; int client_version; scalar_t__ renegotiate; scalar_t__ shutdown; scalar_t__ hit; scalar_t__ error; scalar_t__ sent_tickets; scalar_t__ hello_retry_request; scalar_t__ psksession_id_len; int * psksession_id; int * psksession; int * session; } ;
struct TYPE_14__ {int (* ssl_clear ) (TYPE_4__*) ;int (* ssl_new ) (TYPE_4__*) ;int (* ssl_free ) (TYPE_4__*) ;int version; } ;
struct TYPE_13__ {TYPE_3__* method; } ;
typedef TYPE_4__ SSL ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (int ,int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (TYPE_4__*) ;
 int FUNC_9 (TYPE_4__*) ;
 scalar_t__ FUNC_10 (TYPE_4__*) ;
 int FUNC_11 (TYPE_4__*) ;
 int FUNC_12 (TYPE_4__*) ;
 int FUNC_13 (TYPE_4__*) ;

int FUNC_14(SSL *VAR_5)
{
    if (VAR_5->method == ((void*)0)) {
        FUNC_5(VAR_1, VAR_4);
        return 0;
    }

    if (FUNC_10(VAR_5)) {
        FUNC_4(VAR_5->session);
        VAR_5->session = ((void*)0);
    }
    FUNC_4(VAR_5->psksession);
    VAR_5->psksession = ((void*)0);
    FUNC_2(VAR_5->psksession_id);
    VAR_5->psksession_id = ((void*)0);
    VAR_5->psksession_id_len = 0;
    VAR_5->hello_retry_request = 0;
    VAR_5->sent_tickets = 0;

    VAR_5->error = 0;
    VAR_5->hit = 0;
    VAR_5->shutdown = 0;

    if (VAR_5->renegotiate) {
        FUNC_5(VAR_1, VAR_0);
        return 0;
    }

    FUNC_9(VAR_5);

    VAR_5->version = VAR_5->method->version;
    VAR_5->client_version = VAR_5->version;
    VAR_5->rwstate = VAR_3;

    FUNC_0(VAR_5->init_buf);
    VAR_5->init_buf = ((void*)0);
    FUNC_8(VAR_5);
    VAR_5->first_packet = 0;

    VAR_5->key_update = VAR_2;

    FUNC_1(VAR_5->pha_dgst);
    VAR_5->pha_dgst = ((void*)0);


    VAR_5->dane.mdpth = -1;
    VAR_5->dane.pdpth = -1;
    FUNC_7(VAR_5->dane.mcert);
    VAR_5->dane.mcert = ((void*)0);
    VAR_5->dane.mtlsa = ((void*)0);


    FUNC_6(VAR_5->param, ((void*)0));


    FUNC_2(VAR_5->shared_sigalgs);
    VAR_5->shared_sigalgs = ((void*)0);
    VAR_5->shared_sigalgslen = 0;





    if (VAR_5->method != VAR_5->ctx->method) {
        VAR_5->method->ssl_free(VAR_5);
        VAR_5->method = VAR_5->ctx->method;
        if (!VAR_5->method->ssl_new(VAR_5))
            return 0;
    } else {
        if (!VAR_5->method->ssl_clear(VAR_5))
            return 0;
    }

    FUNC_3(&VAR_5->rlayer);

    return 1;
}
