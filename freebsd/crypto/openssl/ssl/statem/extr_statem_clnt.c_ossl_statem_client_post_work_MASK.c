
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_29__ TYPE_8__ ;
typedef struct TYPE_28__ TYPE_7__ ;
typedef struct TYPE_27__ TYPE_6__ ;
typedef struct TYPE_26__ TYPE_5__ ;
typedef struct TYPE_25__ TYPE_4__ ;
typedef struct TYPE_24__ TYPE_3__ ;
typedef struct TYPE_23__ TYPE_2__ ;
typedef struct TYPE_22__ TYPE_1__ ;


typedef int WORK_STATE ;
struct TYPE_29__ {int hand_state; } ;
struct TYPE_28__ {int options; int first_packet; TYPE_6__* method; int post_handshake_auth; int hit; TYPE_4__* s3; TYPE_1__* session; int max_early_data; int early_data_state; int hello_retry_request; int * enc_write_ctx; scalar_t__ init_num; TYPE_8__ statem; } ;
struct TYPE_27__ {TYPE_5__* ssl3_enc; } ;
struct TYPE_26__ {int (* change_cipher_state ) (TYPE_7__*,int) ;int (* setup_key_block ) (TYPE_7__*) ;} ;
struct TYPE_24__ {TYPE_2__* new_compression; int new_cipher; } ;
struct TYPE_25__ {TYPE_3__ tmp; } ;
struct TYPE_23__ {int id; } ;
struct TYPE_22__ {int compress_meth; int cipher; } ;
typedef TYPE_7__ SSL ;
typedef TYPE_8__ OSSL_STATEM ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int ,int *) ;
 int FUNC_1 (int *) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_2 (TYPE_7__*) ;
 int FUNC_3 (TYPE_7__*) ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_4 (TYPE_7__*) ;






 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_5 (TYPE_7__*,int ) ;
 int FUNC_6 (TYPE_7__*) ;
 int FUNC_7 (TYPE_7__*) ;
 int FUNC_8 (TYPE_7__*,int) ;
 int FUNC_9 (TYPE_7__*,int) ;
 int FUNC_10 (TYPE_7__*,int) ;
 int FUNC_11 (TYPE_7__*) ;
 int FUNC_12 (TYPE_7__*,int) ;
 int FUNC_13 (TYPE_7__*) ;

WORK_STATE FUNC_14(SSL *VAR_13, WORK_STATE VAR_14)
{
    OSSL_STATEM *VAR_15 = &VAR_13->statem;

    VAR_13->init_num = 0;

    switch (VAR_15->hand_state) {
    default:

        break;

    case 132:
        if (VAR_13->early_data_state == VAR_5
                && VAR_13->max_early_data > 0) {





            if ((VAR_13->options & VAR_7) == 0) {
                if (!FUNC_10(VAR_13,
                            VAR_2 | VAR_4)) {

                    return VAR_9;
                }
            }

        } else if (!FUNC_6(VAR_13)) {
            return VAR_11;
        }

        if (FUNC_2(VAR_13)) {

            VAR_13->first_packet = 1;
        }
        break;

    case 131:




        FUNC_1(VAR_13->enc_write_ctx);
        VAR_13->enc_write_ctx = ((void*)0);
        break;

    case 129:
        if (FUNC_13(VAR_13) == 0) {

            return VAR_9;
        }
        break;

    case 133:
        if (FUNC_3(VAR_13) || VAR_13->hello_retry_request == VAR_6)
            break;
        if (VAR_13->early_data_state == VAR_5
                    && VAR_13->max_early_data > 0) {





            if (!FUNC_10(VAR_13,
                        VAR_2 | VAR_4))
                return VAR_9;
            break;
        }
        VAR_13->session->cipher = VAR_13->s3->tmp.new_cipher;



        if (VAR_13->s3->tmp.new_compression == ((void*)0))
            VAR_13->session->compress_meth = 0;
        else
            VAR_13->session->compress_meth = VAR_13->s3->tmp.new_compression->id;

        if (!VAR_13->method->ssl3_enc->setup_key_block(VAR_13)) {

            return VAR_9;
        }

        if (!VAR_13->method->ssl3_enc->change_cipher_state(VAR_13,
                                          VAR_4)) {

            return VAR_9;
        }

        if (FUNC_2(VAR_13)) {

            if (VAR_13->hit) {




                FUNC_0(FUNC_4(VAR_13), VAR_0,
                         0, ((void*)0));
            }


            FUNC_5(VAR_13, VAR_3);
        }
        break;

    case 130:

        if (VAR_14 == VAR_11 && FUNC_2(VAR_13) && VAR_13->hit == 0) {




            FUNC_0(FUNC_4(VAR_13), VAR_0,
                     0, ((void*)0));
        }

        if (FUNC_6(VAR_13) != 1)
            return VAR_12;

        if (FUNC_3(VAR_13)) {
            if (!FUNC_11(VAR_13)) {

                return VAR_9;
            }
            if (VAR_13->post_handshake_auth != VAR_8) {
                if (!VAR_13->method->ssl3_enc->change_cipher_state(VAR_13,
                        VAR_1 | VAR_4)) {

                    return VAR_9;
                }
            }
        }
        break;

    case 128:
        if (FUNC_6(VAR_13) != 1)
            return VAR_11;
        if (!FUNC_12(VAR_13, 1)) {

            return VAR_9;
        }
        break;
    }

    return VAR_10;
}
