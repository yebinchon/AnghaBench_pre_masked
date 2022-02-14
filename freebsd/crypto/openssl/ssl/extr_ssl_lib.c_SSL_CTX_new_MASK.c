
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_21__ TYPE_4__ ;
typedef struct TYPE_20__ TYPE_3__ ;
typedef struct TYPE_19__ TYPE_2__ ;
typedef struct TYPE_18__ TYPE_1__ ;
typedef struct TYPE_17__ TYPE_14__ ;


struct TYPE_19__ {int status_type; int cookie_hmac_key; TYPE_14__* secure; int tick_key_name; } ;
struct TYPE_21__ {int references; int options; int num_tickets; void* recv_max_early_data; scalar_t__ max_early_data; TYPE_2__ ext; void* split_send_fragment; void* max_send_fragment; int comp_methods; int ex_data; int * client_ca_names; int * ca_names; int * sha1; int * md5; int * param; int cipher_list; int * cert; int cipher_list_by_id; int tls13_ciphersuites; TYPE_3__ const* method; int * ctlog_store; int * cert_store; int * sessions; int verify_mode; int max_cert_list; int * lock; int session_timeout; int session_cache_size; int session_cache_mode; int mode; scalar_t__ max_proto_version; scalar_t__ min_proto_version; } ;
struct TYPE_20__ {TYPE_1__* ssl3_enc; int (* get_timeout ) () ;} ;
struct TYPE_18__ {int enc_flags; } ;
struct TYPE_17__ {int tick_aes_key; int tick_hmac_key; } ;
typedef TYPE_3__ SSL_METHOD ;
typedef TYPE_4__ SSL_CTX ;
typedef int ENGINE ;


 int VAR_0 ;
 int * FUNC_0 () ;
 int FUNC_1 (int ,TYPE_4__*,int *) ;
 int * FUNC_2 () ;
 int * FUNC_3 (int ) ;
 int FUNC_4 () ;
 int VAR_1 ;
 int FUNC_5 () ;
 void* FUNC_6 (char*) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_7 (TYPE_4__*) ;
 int FUNC_8 (int ,int *) ;
 TYPE_14__* FUNC_9 (int) ;
 TYPE_4__* FUNC_10 (int) ;
 scalar_t__ FUNC_11 (int ,int) ;
 scalar_t__ FUNC_12 (int ,int) ;
 void* VAR_4 ;
 int FUNC_13 () ;
 int FUNC_14 (TYPE_4__*) ;
 int FUNC_15 (TYPE_4__*) ;
 int FUNC_16 (TYPE_4__*,int ) ;
 int FUNC_17 (TYPE_4__*,int *) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 scalar_t__ FUNC_18 () ;
 int FUNC_19 (int ,int ) ;
 int VAR_22 ;
 int VAR_23 ;
 int * FUNC_20 () ;
 int * FUNC_21 () ;
 int FUNC_22 (int ) ;
 int * FUNC_23 (int ,int ) ;
 scalar_t__ FUNC_24 (int ) ;
 void* FUNC_25 () ;
 int * FUNC_26 () ;
 int FUNC_27 (TYPE_3__ const*,int ,int *,int *,int ,int *) ;
 int FUNC_28 (TYPE_4__*) ;
 int VAR_24 ;
 int VAR_25 ;
 int FUNC_29 () ;

SSL_CTX *FUNC_30(const SSL_METHOD *VAR_26)
{
    SSL_CTX *VAR_27 = ((void*)0);

    if (VAR_26 == ((void*)0)) {
        FUNC_19(VAR_7, VAR_15);
        return ((void*)0);
    }

    if (!FUNC_8(VAR_2, ((void*)0)))
        return ((void*)0);

    if (FUNC_18() < 0) {
        FUNC_19(VAR_7, VAR_18);
        goto err;
    }
    VAR_27 = FUNC_10(sizeof(*VAR_27));
    if (VAR_27 == ((void*)0))
        goto err;

    VAR_27->method = VAR_26;
    VAR_27->min_proto_version = 0;
    VAR_27->max_proto_version = 0;
    VAR_27->mode = VAR_9;
    VAR_27->session_cache_mode = VAR_20;
    VAR_27->session_cache_size = VAR_19;

    VAR_27->session_timeout = VAR_26->get_timeout();
    VAR_27->references = 1;
    VAR_27->lock = FUNC_0();
    if (VAR_27->lock == ((void*)0)) {
        FUNC_19(VAR_7, VAR_1);
        FUNC_7(VAR_27);
        return ((void*)0);
    }
    VAR_27->max_cert_list = VAR_8;
    VAR_27->verify_mode = VAR_21;
    if ((VAR_27->cert = FUNC_26()) == ((void*)0))
        goto err;

    VAR_27->sessions = FUNC_23(VAR_25, VAR_24);
    if (VAR_27->sessions == ((void*)0))
        goto err;
    VAR_27->cert_store = FUNC_20();
    if (VAR_27->cert_store == ((void*)0))
        goto err;

    VAR_27->ctlog_store = FUNC_2();
    if (VAR_27->ctlog_store == ((void*)0))
        goto err;


    if (!FUNC_16(VAR_27, VAR_23))
        goto err;

    if (!FUNC_27(VAR_27->method,
                                VAR_27->tls13_ciphersuites,
                                &VAR_27->cipher_list, &VAR_27->cipher_list_by_id,
                                VAR_5, VAR_27->cert)
        || FUNC_24(VAR_27->cipher_list) <= 0) {
        FUNC_19(VAR_7, VAR_14);
        goto err2;
    }

    VAR_27->param = FUNC_21();
    if (VAR_27->param == ((void*)0))
        goto err;

    if ((VAR_27->md5 = FUNC_6("ssl3-md5")) == ((void*)0)) {
        FUNC_19(VAR_7, VAR_16);
        goto err2;
    }
    if ((VAR_27->sha1 = FUNC_6("ssl3-sha1")) == ((void*)0)) {
        FUNC_19(VAR_7, VAR_17);
        goto err2;
    }

    if ((VAR_27->ca_names = FUNC_25()) == ((void*)0))
        goto err;

    if ((VAR_27->client_ca_names = FUNC_25()) == ((void*)0))
        goto err;

    if (!FUNC_1(VAR_0, VAR_27, &VAR_27->ex_data))
        goto err;

    if ((VAR_27->ext.secure = FUNC_9(sizeof(*VAR_27->ext.secure))) == ((void*)0))
        goto err;


    if (!(VAR_26->ssl3_enc->enc_flags & VAR_6))
        VAR_27->comp_methods = FUNC_13();

    VAR_27->max_send_fragment = VAR_4;
    VAR_27->split_send_fragment = VAR_4;


    if ((FUNC_11(VAR_27->ext.tick_key_name,
                    sizeof(VAR_27->ext.tick_key_name)) <= 0)
        || (FUNC_12(VAR_27->ext.secure->tick_hmac_key,
                       sizeof(VAR_27->ext.secure->tick_hmac_key)) <= 0)
        || (FUNC_12(VAR_27->ext.secure->tick_aes_key,
                       sizeof(VAR_27->ext.secure->tick_aes_key)) <= 0))
        VAR_27->options |= VAR_13;

    if (FUNC_12(VAR_27->ext.cookie_hmac_key,
                   sizeof(VAR_27->ext.cookie_hmac_key)) <= 0)
        goto err;


    if (!FUNC_14(VAR_27))
        goto err;
    VAR_27->options |= VAR_11;
    VAR_27->options |= VAR_12 | VAR_10;

    VAR_27->ext.status_type = VAR_22;
    VAR_27->max_early_data = 0;
    VAR_27->recv_max_early_data = VAR_4;


    VAR_27->num_tickets = 2;

    FUNC_28(VAR_27);

    return VAR_27;
 err:
    FUNC_19(VAR_7, VAR_1);
 err2:
    FUNC_15(VAR_27);
    return ((void*)0);
}
