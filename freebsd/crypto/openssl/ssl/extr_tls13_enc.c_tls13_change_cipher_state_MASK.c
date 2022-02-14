
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_25__ TYPE_6__ ;
typedef struct TYPE_24__ TYPE_5__ ;
typedef struct TYPE_23__ TYPE_4__ ;
typedef struct TYPE_22__ TYPE_3__ ;
typedef struct TYPE_21__ TYPE_2__ ;
typedef struct TYPE_20__ TYPE_1__ ;
typedef struct TYPE_19__ TYPE_17__ ;


typedef int server_handshake_traffic ;
typedef int server_application_traffic ;
typedef int secret ;
typedef int resumption_master_secret ;
typedef int hashval ;
typedef int exporter_master_secret ;
typedef int early_exporter_master_secret ;
typedef int client_handshake_traffic ;
typedef int client_early_traffic ;
typedef int client_application_traffic ;
struct TYPE_22__ {int enc_write_state; } ;
struct TYPE_25__ {unsigned char* read_iv; unsigned char* write_iv; unsigned char* early_secret; scalar_t__ early_data_state; scalar_t__ max_early_data; unsigned char* early_exporter_master_secret; unsigned char* handshake_secret; unsigned char* client_finished_secret; unsigned char* handshake_traffic_hash; unsigned char* master_secret; unsigned char* server_finished_hash; unsigned char* server_finished_secret; unsigned char* resumption_master_secret; unsigned char* server_app_traffic_secret; unsigned char* exporter_master_secret; unsigned char* client_app_traffic_secret; TYPE_3__ statem; int server; TYPE_4__* s3; TYPE_17__* psksession; TYPE_17__* session; int rlayer; int * enc_write_ctx; int * enc_read_ctx; } ;
struct TYPE_24__ {int algorithm2; } ;
struct TYPE_21__ {int * new_sym_enc; } ;
struct TYPE_23__ {TYPE_2__ tmp; int handshake_buffer; } ;
struct TYPE_20__ {scalar_t__ max_early_data; } ;
struct TYPE_19__ {TYPE_1__ ext; } ;
typedef TYPE_5__ SSL_CIPHER ;
typedef TYPE_6__ SSL ;
typedef int EVP_MD_CTX ;
typedef int EVP_MD ;
typedef int EVP_CIPHER_CTX ;
typedef int EVP_CIPHER ;


 long FUNC_0 (int ,void**) ;
 char* VAR_0 ;
 char* VAR_1 ;
 char* VAR_2 ;
 char const* VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 void* FUNC_1 () ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,unsigned char*,unsigned int*) ;
 int FUNC_4 (int *,int const*,int *) ;
 int FUNC_5 (int *,void*,long) ;
 int VAR_9 ;
 int FUNC_6 (int *) ;
 int * FUNC_7 () ;
 size_t FUNC_8 (int const*) ;
 int * FUNC_9 (int ) ;
 char const* VAR_10 ;
 int FUNC_10 (unsigned char*,int) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *) ;
 char* VAR_11 ;
 char* VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int FUNC_13 (TYPE_5__ const*) ;
 scalar_t__ VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 TYPE_5__* FUNC_14 (TYPE_17__*) ;
 int FUNC_15 (TYPE_6__*,int ,int ,int ) ;
 int FUNC_16 (TYPE_6__*,int,int const*,int const*,unsigned char*,unsigned char*,unsigned char const*,size_t,unsigned char*,unsigned char*,int *) ;
 int FUNC_17 (unsigned char*,unsigned char*,size_t) ;
 int FUNC_18 (int) ;
 int FUNC_19 (TYPE_6__*,int) ;
 int FUNC_20 (TYPE_6__*,unsigned char*,int,size_t*) ;
 int const* FUNC_21 (TYPE_6__*) ;
 int FUNC_22 (TYPE_6__*,char const*,unsigned char*,size_t) ;
 int * FUNC_23 (int ) ;
 int FUNC_24 (TYPE_6__*,int const*,unsigned char*,unsigned char*,size_t) ;
 int FUNC_25 (TYPE_6__*,int const*,unsigned char*,unsigned char const*,int,unsigned char*,size_t,unsigned char*,size_t,int) ;

int FUNC_26(SSL *VAR_24, int VAR_25)
{
    static const unsigned char VAR_26[] = "c e traffic";
    static const unsigned char VAR_27[] = "c hs traffic";
    static const unsigned char VAR_28[] = "c ap traffic";
    static const unsigned char VAR_29[] = "s hs traffic";
    static const unsigned char VAR_30[] = "s ap traffic";
    static const unsigned char VAR_31[] = "exp master";
    static const unsigned char VAR_32[] = "res master";
    static const unsigned char VAR_33[] = "e exp master";

    unsigned char *VAR_34;
    unsigned char VAR_35[VAR_9];
    unsigned char VAR_36[VAR_9];
    unsigned char *VAR_37 = VAR_36;
    unsigned char *VAR_38;
    unsigned char *VAR_39 = ((void*)0);
    const char *VAR_40 = ((void*)0);
    EVP_CIPHER_CTX *VAR_41;
    size_t VAR_42 = 0;
    const unsigned char *VAR_43;
    size_t VAR_44, VAR_45 = 0;
    int VAR_46 = 0;
    const EVP_MD *VAR_47 = ((void*)0);
    const EVP_CIPHER *VAR_48 = ((void*)0);

    if (VAR_25 & VAR_16) {
        if (VAR_24->enc_read_ctx != ((void*)0)) {
            FUNC_2(VAR_24->enc_read_ctx);
        } else {
            VAR_24->enc_read_ctx = FUNC_1();
            if (VAR_24->enc_read_ctx == ((void*)0)) {
                FUNC_15(VAR_24, VAR_19,
                         VAR_21, VAR_8);
                goto err;
            }
        }
        VAR_41 = VAR_24->enc_read_ctx;
        VAR_34 = VAR_24->read_iv;

        FUNC_11(&VAR_24->rlayer);
    } else {
        VAR_24->statem.enc_write_state = VAR_4;
        if (VAR_24->enc_write_ctx != ((void*)0)) {
            FUNC_2(VAR_24->enc_write_ctx);
        } else {
            VAR_24->enc_write_ctx = FUNC_1();
            if (VAR_24->enc_write_ctx == ((void*)0)) {
                FUNC_15(VAR_24, VAR_19,
                         VAR_21, VAR_8);
                goto err;
            }
        }
        VAR_41 = VAR_24->enc_write_ctx;
        VAR_34 = VAR_24->write_iv;

        FUNC_12(&VAR_24->rlayer);
    }

    if (((VAR_25 & VAR_13) && (VAR_25 & VAR_18))
            || ((VAR_25 & VAR_17) && (VAR_25 & VAR_16))) {
        if (VAR_25 & VAR_14) {
            EVP_MD_CTX *VAR_49 = ((void*)0);
            long VAR_50;
            void *VAR_51;
            unsigned int VAR_52;
            const SSL_CIPHER *VAR_53 = FUNC_14(VAR_24->session);

            VAR_38 = VAR_24->early_secret;
            VAR_43 = VAR_26;
            VAR_44 = sizeof(VAR_26) - 1;
            VAR_40 = VAR_1;

            VAR_50 = FUNC_0(VAR_24->s3->handshake_buffer, &VAR_51);
            if (VAR_50 <= 0) {
                FUNC_15(VAR_24, VAR_19,
                         VAR_21,
                         VAR_22);
                goto err;
            }

            if (VAR_24->early_data_state == VAR_20
                    && VAR_24->max_early_data > 0
                    && VAR_24->session->ext.max_early_data == 0) {





                if (!FUNC_18(VAR_24->psksession != ((void*)0)
                        && VAR_24->max_early_data ==
                           VAR_24->psksession->ext.max_early_data)) {
                    FUNC_15(VAR_24, VAR_19,
                             VAR_21,
                             VAR_7);
                    goto err;
                }
                VAR_53 = FUNC_14(VAR_24->psksession);
            }
            if (VAR_53 == ((void*)0)) {
                FUNC_15(VAR_24, VAR_19,
                         VAR_21, VAR_23);
                goto err;
            }






            VAR_49 = FUNC_7();
            if (VAR_49 == ((void*)0)) {
                FUNC_15(VAR_24, VAR_19,
                         VAR_21, VAR_8);
                goto err;
            }
            VAR_48 = FUNC_9(FUNC_13(VAR_53));
            VAR_47 = FUNC_23(VAR_53->algorithm2);
            if (VAR_47 == ((void*)0) || !FUNC_4(VAR_49, VAR_47, ((void*)0))
                    || !FUNC_5(VAR_49, VAR_51, VAR_50)
                    || !FUNC_3(VAR_49, VAR_36, &VAR_52)) {
                FUNC_15(VAR_24, VAR_19,
                         VAR_21, VAR_7);
                FUNC_6(VAR_49);
                goto err;
            }
            VAR_45 = VAR_52;
            FUNC_6(VAR_49);

            if (!FUNC_25(VAR_24, VAR_47, VAR_38,
                                   VAR_33,
                                   sizeof(VAR_33) - 1,
                                   VAR_36, VAR_45,
                                   VAR_24->early_exporter_master_secret, VAR_45,
                                   1)) {
                FUNC_15(VAR_24, VAR_19,
                         VAR_21, VAR_7);
                goto err;
            }

            if (!FUNC_22(VAR_24, VAR_3,
                                VAR_24->early_exporter_master_secret, VAR_45)) {

                goto err;
            }
        } else if (VAR_25 & VAR_15) {
            VAR_38 = VAR_24->handshake_secret;
            VAR_39 = VAR_24->client_finished_secret;
            VAR_42 = FUNC_8(FUNC_21(VAR_24));
            VAR_43 = VAR_27;
            VAR_44 = sizeof(VAR_27) - 1;
            VAR_40 = VAR_2;
            VAR_37 = VAR_24->handshake_traffic_hash;
        } else {
            VAR_38 = VAR_24->master_secret;
            VAR_43 = VAR_28;
            VAR_44 = sizeof(VAR_28) - 1;
            VAR_40 = VAR_0;






            VAR_37 = VAR_24->server_finished_hash;
        }
    } else {

        if (VAR_25 & VAR_15) {
            VAR_38 = VAR_24->handshake_secret;
            VAR_39 = VAR_24->server_finished_secret;
            VAR_42 = FUNC_8(FUNC_21(VAR_24));
            VAR_43 = VAR_29;
            VAR_44 = sizeof(VAR_29) - 1;
            VAR_40 = VAR_12;
        } else {
            VAR_38 = VAR_24->master_secret;
            VAR_43 = VAR_30;
            VAR_44 = sizeof(VAR_30) - 1;
            VAR_40 = VAR_11;
        }
    }

    if (!(VAR_25 & VAR_14)) {
        VAR_47 = FUNC_21(VAR_24);
        VAR_48 = VAR_24->s3->tmp.new_sym_enc;
        if (!FUNC_19(VAR_24, 1)
                || !FUNC_20(VAR_24, VAR_36, sizeof(VAR_36), &VAR_45)) {
                                           ;
            goto err;
        }
    }





    if (VAR_43 == VAR_30)
        FUNC_17(VAR_24->server_finished_hash, VAR_36, VAR_45);

    if (VAR_43 == VAR_29)
        FUNC_17(VAR_24->handshake_traffic_hash, VAR_36, VAR_45);

    if (VAR_43 == VAR_28) {




        if (!FUNC_25(VAR_24, FUNC_21(VAR_24), VAR_38,
                               VAR_32,
                               sizeof(VAR_32) - 1,
                               VAR_36, VAR_45, VAR_24->resumption_master_secret,
                               VAR_45, 1)) {

            goto err;
        }
    }

    if (!FUNC_16(VAR_24, VAR_25 & VAR_18, VAR_47, VAR_48,
                                  VAR_38, VAR_37, VAR_43, VAR_44, VAR_35, VAR_34,
                                  VAR_41)) {

        goto err;
    }

    if (VAR_43 == VAR_30) {
        FUNC_17(VAR_24->server_app_traffic_secret, VAR_35, VAR_45);

        if (!FUNC_25(VAR_24, FUNC_21(VAR_24), VAR_38,
                               VAR_31,
                               sizeof(VAR_31) - 1,
                               VAR_37, VAR_45, VAR_24->exporter_master_secret,
                               VAR_45, 1)) {

            goto err;
        }

        if (!FUNC_22(VAR_24, VAR_10, VAR_24->exporter_master_secret,
                            VAR_45)) {

            goto err;
        }
    } else if (VAR_43 == VAR_28)
        FUNC_17(VAR_24->client_app_traffic_secret, VAR_35, VAR_45);

    if (!FUNC_22(VAR_24, VAR_40, VAR_35, VAR_45)) {

        goto err;
    }

    if (VAR_39 != ((void*)0)
            && !FUNC_24(VAR_24, FUNC_21(VAR_24), VAR_35,
                                         VAR_39, VAR_42)) {

        goto err;
    }

    if (!VAR_24->server && VAR_43 == VAR_26)
        VAR_24->statem.enc_write_state = VAR_6;
    else
        VAR_24->statem.enc_write_state = VAR_5;
    VAR_46 = 1;
 err:
    FUNC_10(VAR_35, sizeof(VAR_35));
    return VAR_46;
}
