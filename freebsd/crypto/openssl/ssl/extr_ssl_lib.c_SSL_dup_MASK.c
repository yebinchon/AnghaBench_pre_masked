
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_28__ TYPE_1__ ;


struct TYPE_28__ {int client_ca_names; int ca_names; int * cipher_list_by_id; int * cipher_list; int param; int default_passwd_callback_userdata; int default_passwd_callback; int hit; int shutdown; scalar_t__ server; scalar_t__ handshake_func; int * rbio; int * wbio; int ex_data; int generate_session_id; int msg_callback_arg; int msg_callback; int mode; int options; int version; scalar_t__ sid_ctx_length; int sid_ctx; int * cert; int method; int * session; int lock; int references; } ;
typedef TYPE_1__ SSL ;


 int FUNC_0 (int *,char*) ;
 int FUNC_1 (int *) ;
 int VAR_0 ;
 int FUNC_2 (int *,int*,int ) ;
 int FUNC_3 (int ,int *,int *) ;
 int FUNC_4 (TYPE_1__*,TYPE_1__*) ;
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (TYPE_1__*) ;
 int FUNC_7 (TYPE_1__*) ;
 int FUNC_8 (TYPE_1__*) ;
 int FUNC_9 (TYPE_1__*) ;
 int FUNC_10 (TYPE_1__*) ;
 int FUNC_11 (TYPE_1__*) ;
 int FUNC_12 (TYPE_1__*) ;
 int FUNC_13 (TYPE_1__*) ;
 int FUNC_14 (TYPE_1__*) ;
 TYPE_1__* FUNC_15 (int ) ;
 int FUNC_16 (TYPE_1__*) ;
 int FUNC_17 (TYPE_1__*) ;
 int FUNC_18 (TYPE_1__*,int ) ;
 int FUNC_19 (TYPE_1__*,int ) ;
 int FUNC_20 (TYPE_1__*,int ) ;
 int FUNC_21 (TYPE_1__*,int ,int) ;
 int FUNC_22 (TYPE_1__*,int ) ;
 int FUNC_23 (TYPE_1__*,int ,int ) ;
 int FUNC_24 (TYPE_1__*,int ) ;
 int FUNC_25 (int ,int ) ;
 int FUNC_26 (int *,int ) ;
 void* FUNC_27 (int *) ;
 int * FUNC_28 (int *) ;
 int FUNC_29 (int *) ;
 int FUNC_30 (TYPE_1__*,TYPE_1__*) ;

SSL *FUNC_31(SSL *VAR_1)
{
    SSL *VAR_2;
    int VAR_3;


    if (!FUNC_14(VAR_1) || !FUNC_13(VAR_1)) {
        FUNC_2(&VAR_1->references, &VAR_3, VAR_1->lock);
        return VAR_1;
    }




    if ((VAR_2 = FUNC_15(FUNC_6(VAR_1))) == ((void*)0))
        return ((void*)0);

    if (VAR_1->session != ((void*)0)) {




        if (!FUNC_4(VAR_2, VAR_1))
            goto err;
    } else {






        if (!FUNC_22(VAR_2, VAR_1->method))
            goto err;

        if (VAR_1->cert != ((void*)0)) {
            FUNC_29(VAR_2->cert);
            VAR_2->cert = FUNC_28(VAR_1->cert);
            if (VAR_2->cert == ((void*)0))
                goto err;
        }

        if (!FUNC_21(VAR_2, VAR_1->sid_ctx,
                                        (int)VAR_1->sid_ctx_length))
            goto err;
    }

    if (!FUNC_30(VAR_2, VAR_1))
        goto err;
    VAR_2->version = VAR_1->version;
    VAR_2->options = VAR_1->options;
    VAR_2->mode = VAR_1->mode;
    FUNC_19(VAR_2, FUNC_8(VAR_1));
    FUNC_20(VAR_2, FUNC_9(VAR_1));
    VAR_2->msg_callback = VAR_1->msg_callback;
    VAR_2->msg_callback_arg = VAR_1->msg_callback_arg;
    FUNC_23(VAR_2, FUNC_12(VAR_1), FUNC_10(VAR_1));
    FUNC_24(VAR_2, FUNC_11(VAR_1));
    VAR_2->generate_session_id = VAR_1->generate_session_id;

    FUNC_18(VAR_2, FUNC_7(VAR_1));


    if (!FUNC_3(VAR_0, &VAR_2->ex_data, &VAR_1->ex_data))
        goto err;


    if (VAR_1->rbio != ((void*)0)) {
        if (!FUNC_0(VAR_1->rbio, (char *)&VAR_2->rbio))
            goto err;
    }
    if (VAR_1->wbio != ((void*)0)) {
        if (VAR_1->wbio != VAR_1->rbio) {
            if (!FUNC_0(VAR_1->wbio, (char *)&VAR_2->wbio))
                goto err;
        } else {
            FUNC_1(VAR_2->rbio);
            VAR_2->wbio = VAR_2->rbio;
        }
    }

    VAR_2->server = VAR_1->server;
    if (VAR_1->handshake_func) {
        if (VAR_1->server)
            FUNC_16(VAR_2);
        else
            FUNC_17(VAR_2);
    }
    VAR_2->shutdown = VAR_1->shutdown;
    VAR_2->hit = VAR_1->hit;

    VAR_2->default_passwd_callback = VAR_1->default_passwd_callback;
    VAR_2->default_passwd_callback_userdata = VAR_1->default_passwd_callback_userdata;

    FUNC_25(VAR_2->param, VAR_1->param);


    if (VAR_1->cipher_list != ((void*)0)) {
        if ((VAR_2->cipher_list = FUNC_27(VAR_1->cipher_list)) == ((void*)0))
            goto err;
    }
    if (VAR_1->cipher_list_by_id != ((void*)0))
        if ((VAR_2->cipher_list_by_id = FUNC_27(VAR_1->cipher_list_by_id))
            == ((void*)0))
            goto err;


    if (!FUNC_26(&VAR_2->ca_names, VAR_1->ca_names)
            || !FUNC_26(&VAR_2->client_ca_names, VAR_1->client_ca_names))
        goto err;

    return VAR_2;

 err:
    FUNC_5(VAR_2);
    return ((void*)0);
}
