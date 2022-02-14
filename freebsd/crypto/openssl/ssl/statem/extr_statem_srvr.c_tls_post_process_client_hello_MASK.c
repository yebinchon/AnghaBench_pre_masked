
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_27__ TYPE_7__ ;
typedef struct TYPE_26__ TYPE_6__ ;
typedef struct TYPE_25__ TYPE_5__ ;
typedef struct TYPE_24__ TYPE_4__ ;
typedef struct TYPE_23__ TYPE_3__ ;
typedef struct TYPE_22__ TYPE_2__ ;
typedef struct TYPE_21__ TYPE_1__ ;


typedef scalar_t__ WORK_STATE ;
struct TYPE_22__ {scalar_t__ ticket_expected; } ;
struct TYPE_27__ {void* rwstate; TYPE_5__* session; TYPE_4__* s3; TYPE_2__ ext; scalar_t__ (* not_resumable_session_cb ) (TYPE_7__*,int) ;int hit; int peer_ciphers; TYPE_1__* cert; } ;
struct TYPE_26__ {int algorithm_mkey; } ;
struct TYPE_25__ {TYPE_6__ const* cipher; scalar_t__ not_resumable; } ;
struct TYPE_23__ {TYPE_6__ const* new_cipher; } ;
struct TYPE_24__ {TYPE_3__ tmp; } ;
struct TYPE_21__ {int (* cert_cb ) (TYPE_7__*,int ) ;int cert_cb_arg; } ;
typedef TYPE_6__ SSL_CIPHER ;
typedef TYPE_7__ SSL ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (TYPE_7__*) ;
 void* VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 void* VAR_6 ;
 int FUNC_1 (TYPE_7__*) ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_2 (TYPE_7__*,int ,int ,int ) ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 TYPE_6__* FUNC_3 (TYPE_7__*,int ,int ) ;
 int FUNC_4 (TYPE_7__*) ;
 int FUNC_5 (TYPE_7__*,int ) ;
 scalar_t__ FUNC_6 (TYPE_7__*,int) ;
 int FUNC_7 (TYPE_7__*,int) ;
 int FUNC_8 (TYPE_7__*) ;
 int FUNC_9 (TYPE_7__*) ;
 int FUNC_10 (TYPE_7__*) ;

WORK_STATE FUNC_11(SSL *VAR_14, WORK_STATE VAR_15)
{
    const SSL_CIPHER *VAR_16;

    if (VAR_15 == VAR_11) {
        int VAR_17 = FUNC_8(VAR_14);
        if (VAR_17 == 0) {

            goto err;
        }
        if (VAR_17 < 0)
            return VAR_11;
        VAR_15 = VAR_12;
    }
    if (VAR_15 == VAR_12) {
        if (!VAR_14->hit || FUNC_0(VAR_14)) {

            if (!VAR_14->hit && VAR_14->cert->cert_cb != ((void*)0)) {
                int VAR_18 = VAR_14->cert->cert_cb(VAR_14, VAR_14->cert->cert_cb_arg);
                if (VAR_18 == 0) {
                    FUNC_2(VAR_14, VAR_1,
                             VAR_2,
                             VAR_4);
                    goto err;
                }
                if (VAR_18 < 0) {
                    VAR_14->rwstate = VAR_6;
                    return VAR_12;
                }
                VAR_14->rwstate = VAR_3;
            }


            if (!FUNC_0(VAR_14)) {
                VAR_16 =
                    FUNC_3(VAR_14, VAR_14->peer_ciphers, FUNC_1(VAR_14));

                if (VAR_16 == ((void*)0)) {
                    FUNC_2(VAR_14, VAR_0,
                             VAR_2,
                             VAR_5);
                    goto err;
                }
                VAR_14->s3->tmp.new_cipher = VAR_16;
            }
            if (!VAR_14->hit) {
                if (!FUNC_7(VAR_14, 1)) {

                    goto err;
                }

                if (VAR_14->not_resumable_session_cb != ((void*)0))
                    VAR_14->session->not_resumable =
                        VAR_14->not_resumable_session_cb(VAR_14,
                            ((VAR_14->s3->tmp.new_cipher->algorithm_mkey
                              & (VAR_7 | VAR_8)) != 0));
                if (VAR_14->session->not_resumable)

                    VAR_14->ext.ticket_expected = 0;
            }
        } else {

            VAR_14->s3->tmp.new_cipher = VAR_14->session->cipher;
        }
        if (!FUNC_10(VAR_14)) {

            goto err;
        }






        if (!FUNC_0(VAR_14) && !FUNC_9(VAR_14)) {

            goto err;
        }

        VAR_15 = VAR_13;
    }

    if (VAR_15 == VAR_13) {
        int VAR_19;
        if ((VAR_19 = FUNC_4(VAR_14)) == 0) {



            VAR_14->rwstate = VAR_6;
            return VAR_13;
        }
        if (VAR_19 < 0) {

            goto err;
        }
    }


    return VAR_10;
 err:
    return VAR_9;
}
