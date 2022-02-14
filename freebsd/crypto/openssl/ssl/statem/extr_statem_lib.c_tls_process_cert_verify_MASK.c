
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


typedef int X509 ;
struct TYPE_16__ {scalar_t__ version; TYPE_3__* s3; int server; TYPE_1__* session; } ;
struct TYPE_14__ {int cert_req; int peer_sigalg; } ;
struct TYPE_15__ {int * handshake_buffer; TYPE_2__ tmp; } ;
struct TYPE_13__ {int master_key; scalar_t__ master_key_length; int * peer; } ;
typedef TYPE_4__ SSL ;
typedef int PACKET ;
typedef int MSG_PROCESS_RETURN ;
typedef int EVP_PKEY_CTX ;
typedef int EVP_PKEY ;
typedef int EVP_MD_CTX ;
typedef int EVP_MD ;


 int FUNC_0 (int *) ;
 int FUNC_1 (unsigned char*,unsigned char const*,unsigned int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (int *,unsigned char const*,unsigned int,void*,size_t) ;
 scalar_t__ FUNC_3 (int *,unsigned char const*,unsigned int) ;
 scalar_t__ FUNC_4 (int *,int **,int const*,int *,int *) ;
 scalar_t__ FUNC_5 (int *,void*,size_t) ;
 int VAR_4 ;
 int FUNC_6 (int *,int ,int,int ) ;
 int FUNC_7 (int *) ;
 int * FUNC_8 () ;
 char* FUNC_9 (int const*) ;
 scalar_t__ FUNC_10 (int *,int ) ;
 scalar_t__ FUNC_11 (int *,int ) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int *) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_14 (unsigned char*) ;
 unsigned char* FUNC_15 (unsigned int) ;
 int FUNC_16 (int *,unsigned char const**,unsigned int) ;
 int FUNC_17 (int *,unsigned int*) ;
 int FUNC_18 (int *) ;
 int VAR_11 ;
 int VAR_12 ;
 scalar_t__ VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 scalar_t__ FUNC_19 (TYPE_4__*) ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 scalar_t__ FUNC_20 (TYPE_4__*) ;
 scalar_t__ FUNC_21 (TYPE_4__*) ;
 int FUNC_22 (TYPE_4__*,int ,int ,int ) ;
 int VAR_24 ;
 int * FUNC_23 (int *) ;
 int FUNC_24 (int ,char*,char*) ;
 int FUNC_25 (TYPE_4__*,unsigned char*,void**,size_t*) ;
 int * FUNC_26 (int *,int *) ;
 int VAR_25 ;
 scalar_t__ FUNC_27 (TYPE_4__*,unsigned int,int *) ;
 int FUNC_28 (int ,int const**) ;
 int FUNC_29 (TYPE_4__*,int *) ;

MSG_PROCESS_RETURN FUNC_30(SSL *VAR_26, PACKET *VAR_27)
{
    EVP_PKEY *VAR_28 = ((void*)0);
    const unsigned char *VAR_29;

    unsigned char *VAR_30 = ((void*)0);

    MSG_PROCESS_RETURN VAR_31 = VAR_7;
    int VAR_32;
    unsigned int VAR_33;
    X509 *VAR_34;
    const EVP_MD *VAR_35 = ((void*)0);
    size_t VAR_36 = 0;
    void *VAR_37;
    unsigned char VAR_38[VAR_24 + VAR_4];
    EVP_MD_CTX *VAR_39 = FUNC_8();
    EVP_PKEY_CTX *VAR_40 = ((void*)0);

    if (VAR_39 == ((void*)0)) {
        FUNC_22(VAR_26, VAR_17, VAR_18,
                 VAR_2);
        goto err;
    }

    VAR_34 = VAR_26->session->peer;
    VAR_28 = FUNC_23(VAR_34);
    if (VAR_28 == ((void*)0)) {
        FUNC_22(VAR_26, VAR_17, VAR_18,
                 VAR_1);
        goto err;
    }

    if (FUNC_26(VAR_28, ((void*)0)) == ((void*)0)) {
        FUNC_22(VAR_26, VAR_16, VAR_18,
                 VAR_22);
        goto err;
    }

    if (FUNC_21(VAR_26)) {
        unsigned int VAR_41;

        if (!FUNC_17(VAR_27, &VAR_41)) {
            FUNC_22(VAR_26, VAR_14, VAR_18,
                     VAR_19);
            goto err;
        }
        if (FUNC_27(VAR_26, VAR_41, VAR_28) <= 0) {

            goto err;
        }
    } else if (!FUNC_29(VAR_26, VAR_28)) {
            FUNC_22(VAR_26, VAR_17, VAR_18,
                     VAR_1);
            goto err;
    }

    if (!FUNC_28(VAR_26->s3->tmp.peer_sigalg, &VAR_35)) {
        FUNC_22(VAR_26, VAR_17, VAR_18,
                 VAR_1);
        goto err;
    }
    if (!FUNC_21(VAR_26)
        && ((FUNC_18(VAR_27) == 64
             && (FUNC_12(VAR_28) == VAR_8
                 || FUNC_12(VAR_28) == VAR_9))
            || (FUNC_18(VAR_27) == 128
                && FUNC_12(VAR_28) == VAR_10))) {
        VAR_33 = FUNC_18(VAR_27);
    } else

    if (!FUNC_17(VAR_27, &VAR_33)) {
        FUNC_22(VAR_26, VAR_14, VAR_18,
                 VAR_21);
        goto err;
    }

    VAR_32 = FUNC_13(VAR_28);
    if (((int)VAR_33 > VAR_32) || ((int)FUNC_18(VAR_27) > VAR_32)
        || (FUNC_18(VAR_27) == 0)) {
        FUNC_22(VAR_26, VAR_14, VAR_18,
                 VAR_23);
        goto err;
    }
    if (!FUNC_16(VAR_27, &VAR_29, VAR_33)) {
        FUNC_22(VAR_26, VAR_14, VAR_18,
                 VAR_21);
        goto err;
    }

    if (!FUNC_25(VAR_26, VAR_38, &VAR_37, &VAR_36)) {

        goto err;
    }





    if (FUNC_4(VAR_39, &VAR_40, VAR_35, ((void*)0), VAR_28) <= 0) {
        FUNC_22(VAR_26, VAR_17, VAR_18,
                 VAR_0);
        goto err;
    }

    {
        int VAR_42 = FUNC_12(VAR_28);
        if (VAR_42 == VAR_8
            || VAR_42 == VAR_9
            || VAR_42 == VAR_10) {
            if ((VAR_30 = FUNC_15(VAR_33)) == ((void*)0)) {
                FUNC_22(VAR_26, VAR_17,
                         VAR_18, VAR_2);
                goto err;
            }
            FUNC_1(VAR_30, VAR_29, VAR_33);
            VAR_29 = VAR_30;
        }
    }


    if (FUNC_20(VAR_26)) {
        if (FUNC_10(VAR_40, VAR_11) <= 0
            || FUNC_11(VAR_40,
                                                VAR_12) <= 0) {
            FUNC_22(VAR_26, VAR_17, VAR_18,
                     VAR_0);
            goto err;
        }
    }
    if (VAR_26->version == VAR_13) {
        if (FUNC_5(VAR_39, VAR_37, VAR_36) <= 0
                || !FUNC_6(VAR_39, VAR_3,
                                    (int)VAR_26->session->master_key_length,
                                    VAR_26->session->master_key)) {
            FUNC_22(VAR_26, VAR_17, VAR_18,
                     VAR_0);
            goto err;
        }
        if (FUNC_3(VAR_39, VAR_29, VAR_33) <= 0) {
            FUNC_22(VAR_26, VAR_15, VAR_18,
                     VAR_20);
            goto err;
        }
    } else {
        VAR_32 = FUNC_2(VAR_39, VAR_29, VAR_33, VAR_37, VAR_36);
        if (VAR_32 <= 0) {
            FUNC_22(VAR_26, VAR_15, VAR_18,
                     VAR_20);
            goto err;
        }
    }
    if (!VAR_26->server && FUNC_19(VAR_26) && VAR_26->s3->tmp.cert_req == 1)
        VAR_31 = VAR_5;
    else
        VAR_31 = VAR_6;
 err:
    FUNC_0(VAR_26->s3->handshake_buffer);
    VAR_26->s3->handshake_buffer = ((void*)0);
    FUNC_7(VAR_39);

    FUNC_14(VAR_30);

    return VAR_31;
}
