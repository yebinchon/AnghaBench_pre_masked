
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_28__ TYPE_9__ ;
typedef struct TYPE_27__ TYPE_8__ ;
typedef struct TYPE_26__ TYPE_7__ ;
typedef struct TYPE_25__ TYPE_6__ ;
typedef struct TYPE_24__ TYPE_5__ ;
typedef struct TYPE_23__ TYPE_4__ ;
typedef struct TYPE_22__ TYPE_3__ ;
typedef struct TYPE_21__ TYPE_2__ ;
typedef struct TYPE_20__ TYPE_1__ ;


typedef int WPACKET ;
struct TYPE_28__ {int * psk_identity_hint; int * (* dh_tmp_cb ) (TYPE_7__*,int ,int) ;int * dh_tmp; scalar_t__ dh_tmp_auto; } ;
struct TYPE_27__ {scalar_t__ sig; int sigalg; } ;
struct TYPE_20__ {int * B; int * s; int * g; int * N; } ;
struct TYPE_26__ {TYPE_3__* init_buf; TYPE_6__* s3; TYPE_9__* cert; TYPE_1__ srp_ctx; } ;
struct TYPE_24__ {TYPE_2__* cert; TYPE_4__* new_cipher; int * pkey; TYPE_8__* sigalg; } ;
struct TYPE_25__ {TYPE_5__ tmp; } ;
struct TYPE_23__ {unsigned long algorithm_mkey; int algorithm_auth; } ;
struct TYPE_22__ {scalar_t__ data; } ;
struct TYPE_21__ {int * privatekey; } ;
typedef TYPE_7__ SSL ;
typedef TYPE_8__ SIGALG_LOOKUP ;
typedef int EVP_PKEY_CTX ;
typedef int EVP_PKEY ;
typedef int EVP_MD_CTX ;
typedef int EVP_MD ;
typedef int DH ;
typedef TYPE_9__ CERT ;
typedef int BIGNUM ;


 int FUNC_0 (int const*,unsigned char*) ;
 size_t FUNC_1 (int const*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int const**,int *) ;
 int FUNC_4 (int *,int const**,int *,int const**) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_5 (int *,unsigned char*,size_t*,unsigned char*,size_t) ;
 scalar_t__ FUNC_6 (int *,int **,int const*,int *,int *) ;
 int FUNC_7 (int *) ;
 int * FUNC_8 () ;
 scalar_t__ FUNC_9 (int *,int ) ;
 scalar_t__ FUNC_10 (int *,int ) ;
 scalar_t__ VAR_4 ;
 int FUNC_11 (int *,int *) ;
 int FUNC_12 (int *) ;
 int * FUNC_13 (int *) ;
 size_t FUNC_14 (int *,unsigned char**) ;
 int * FUNC_15 () ;
 int FUNC_16 (int *) ;
 size_t FUNC_17 (int *) ;
 int VAR_5 ;
 int FUNC_18 (unsigned char*) ;
 size_t VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 unsigned long VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 scalar_t__ FUNC_19 (TYPE_7__*) ;
 int VAR_20 ;
 int VAR_21 ;
 unsigned long VAR_22 ;
 unsigned long VAR_23 ;
 unsigned long VAR_24 ;
 unsigned long VAR_25 ;
 unsigned long VAR_26 ;
 unsigned long VAR_27 ;
 unsigned long VAR_28 ;
 int FUNC_20 (TYPE_7__*,int ,int ,int ) ;
 int FUNC_21 (int *,size_t,unsigned char**) ;
 int FUNC_22 (int *) ;
 int FUNC_23 (int *,size_t*) ;
 int FUNC_24 (int *,size_t*) ;
 int FUNC_25 (int *,int ) ;
 int FUNC_26 (int *,int) ;
 int FUNC_27 (int *) ;
 int FUNC_28 (int *) ;
 int FUNC_29 (int *,size_t,unsigned char**) ;
 int FUNC_30 (int *,int *,size_t) ;
 int FUNC_31 (int *,unsigned char*,size_t) ;
 int FUNC_32 (int *,size_t,unsigned char**) ;
 size_t FUNC_33 (TYPE_7__*,unsigned char**,scalar_t__,size_t) ;
 int FUNC_34 (unsigned char*,int ,size_t) ;
 int * FUNC_35 (int *) ;
 int * FUNC_36 (int *) ;
 int * FUNC_37 (TYPE_7__*,int) ;
 int * FUNC_38 (TYPE_7__*) ;
 int FUNC_39 (TYPE_7__*,int ,int ,int ,int *) ;
 size_t FUNC_40 (int *) ;
 int * FUNC_41 (TYPE_7__*,int ,int) ;
 int FUNC_42 (TYPE_8__ const*,int const**) ;
 int FUNC_43 (TYPE_7__*,int) ;

int FUNC_44(SSL *VAR_29, WPACKET *VAR_30)
{

    EVP_PKEY *VAR_31 = ((void*)0);


    unsigned char *VAR_32 = ((void*)0);
    size_t VAR_33 = 0;
    int VAR_34 = 0;

    const SIGALG_LOOKUP *VAR_35 = VAR_29->s3->tmp.sigalg;
    int VAR_36;
    unsigned long VAR_37;
    const BIGNUM *VAR_38[4];
    EVP_MD_CTX *VAR_39 = FUNC_8();
    EVP_PKEY_CTX *VAR_40 = ((void*)0);
    size_t VAR_41, VAR_42;

    if (!FUNC_24(VAR_30, &VAR_42)) {
        FUNC_20(VAR_29, VAR_11,
                 VAR_12, VAR_2);
        goto err;
    }

    if (VAR_39 == ((void*)0)) {
        FUNC_20(VAR_29, VAR_11,
                 VAR_12, VAR_3);
        goto err;
    }

    VAR_37 = VAR_29->s3->tmp.new_cipher->algorithm_mkey;

    VAR_38[0] = VAR_38[1] = VAR_38[2] = VAR_38[3] = ((void*)0);


    if (VAR_37 & (VAR_26 | VAR_27)) {
    } else


    if (VAR_37 & (VAR_22 | VAR_23)) {
        CERT *VAR_43 = VAR_29->cert;

        EVP_PKEY *VAR_44 = ((void*)0);
        DH *VAR_45;

        if (VAR_29->cert->dh_tmp_auto) {
            DH *VAR_46 = FUNC_38(VAR_29);
            VAR_31 = FUNC_15();
            if (VAR_31 == ((void*)0) || VAR_46 == ((void*)0)) {
                FUNC_2(VAR_46);
                FUNC_20(VAR_29, VAR_11,
                         VAR_12,
                         VAR_2);
                goto err;
            }
            FUNC_11(VAR_31, VAR_46);
            VAR_44 = VAR_31;
        } else {
            VAR_44 = VAR_43->dh_tmp;
        }
        if ((VAR_44 == ((void*)0)) && (VAR_29->cert->dh_tmp_cb != ((void*)0))) {
            DH *VAR_47 = VAR_29->cert->dh_tmp_cb(VAR_29, 0, 1024);
            VAR_31 = FUNC_35(VAR_47);
            if (VAR_31 == ((void*)0)) {
                FUNC_20(VAR_29, VAR_11,
                         VAR_12,
                         VAR_2);
                goto err;
            }
            VAR_44 = VAR_31;
        }
        if (VAR_44 == ((void*)0)) {
            FUNC_20(VAR_29, VAR_11,
                     VAR_12,
                     VAR_16);
            goto err;
        }
        if (!FUNC_39(VAR_29, VAR_19,
                          FUNC_16(VAR_44), 0, VAR_44)) {
            FUNC_20(VAR_29, VAR_10,
                     VAR_12,
                     VAR_14);
            goto err;
        }
        if (VAR_29->s3->tmp.pkey != ((void*)0)) {
            FUNC_20(VAR_29, VAR_11,
                     VAR_12,
                     VAR_2);
            goto err;
        }

        VAR_29->s3->tmp.pkey = FUNC_36(VAR_44);
        if (VAR_29->s3->tmp.pkey == ((void*)0)) {

            goto err;
        }

        VAR_45 = FUNC_13(VAR_29->s3->tmp.pkey);
        if (VAR_45 == ((void*)0)) {
            FUNC_20(VAR_29, VAR_11,
                     VAR_12,
                     VAR_2);
            goto err;
        }

        FUNC_12(VAR_31);
        VAR_31 = ((void*)0);

        FUNC_4(VAR_45, &VAR_38[0], ((void*)0), &VAR_38[1]);
        FUNC_3(VAR_45, &VAR_38[2], ((void*)0));
    } else


    if (VAR_37 & (VAR_24 | VAR_25)) {

        if (VAR_29->s3->tmp.pkey != ((void*)0)) {
            FUNC_20(VAR_29, VAR_11,
                     VAR_12,
                     VAR_2);
            goto err;
        }


        VAR_34 = FUNC_43(VAR_29, -2);
        if (VAR_34 == 0) {
            FUNC_20(VAR_29, VAR_10,
                     VAR_12,
                     VAR_18);
            goto err;
        }
        VAR_29->s3->tmp.pkey = FUNC_37(VAR_29, VAR_34);

        if (VAR_29->s3->tmp.pkey == ((void*)0)) {

            goto err;
        }


        VAR_33 = FUNC_14(VAR_29->s3->tmp.pkey,
                                                    &VAR_32);
        if (VAR_33 == 0) {
            FUNC_20(VAR_29, VAR_11,
                     VAR_12, VAR_0);
            goto err;
        }





        VAR_38[0] = ((void*)0);
        VAR_38[1] = ((void*)0);
        VAR_38[2] = ((void*)0);
        VAR_38[3] = ((void*)0);
    } else


    if (VAR_37 & VAR_28) {
        if ((VAR_29->srp_ctx.N == ((void*)0)) ||
            (VAR_29->srp_ctx.g == ((void*)0)) ||
            (VAR_29->srp_ctx.s == ((void*)0)) || (VAR_29->srp_ctx.B == ((void*)0))) {
            FUNC_20(VAR_29, VAR_11,
                     VAR_12,
                     VAR_15);
            goto err;
        }
        VAR_38[0] = VAR_29->srp_ctx.N;
        VAR_38[1] = VAR_29->srp_ctx.g;
        VAR_38[2] = VAR_29->srp_ctx.s;
        VAR_38[3] = VAR_29->srp_ctx.B;
    } else

    {
        FUNC_20(VAR_29, VAR_11,
                 VAR_12,
                 VAR_17);
        goto err;
    }

    if (((VAR_29->s3->tmp.new_cipher->algorithm_auth & (VAR_20 | VAR_21)) != 0)
        || ((VAR_29->s3->tmp.new_cipher->algorithm_mkey & VAR_13)) != 0) {
        VAR_35 = ((void*)0);
    } else if (VAR_35 == ((void*)0)) {
        FUNC_20(VAR_29, VAR_9,
                 VAR_12, VAR_2);
        goto err;
    }


    if (VAR_37 & VAR_13) {
        size_t VAR_48 = (VAR_29->cert->psk_identity_hint == ((void*)0))
                        ? 0 : FUNC_40(VAR_29->cert->psk_identity_hint);





        if (VAR_48 > VAR_6
                || !FUNC_30(VAR_30, VAR_29->cert->psk_identity_hint,
                                           VAR_48)) {
            FUNC_20(VAR_29, VAR_11,
                     VAR_12,
                     VAR_2);
            goto err;
        }
    }


    for (VAR_36 = 0; VAR_36 < 4 && VAR_38[VAR_36] != ((void*)0); VAR_36++) {
        unsigned char *VAR_49;
        int VAR_50;


        if ((VAR_36 == 2) && (VAR_37 & VAR_28)) {
            VAR_50 = FUNC_28(VAR_30);
        } else

            VAR_50 = FUNC_27(VAR_30);

        if (!VAR_50) {
            FUNC_20(VAR_29, VAR_11,
                     VAR_12,
                     VAR_2);
            goto err;
        }







        if ((VAR_36 == 2) && (VAR_37 & (VAR_22 | VAR_23))) {
            size_t VAR_51 = FUNC_1(VAR_38[0]) - FUNC_1(VAR_38[2]);

            if (VAR_51 > 0) {
                if (!FUNC_21(VAR_30, VAR_51, &VAR_49)) {
                    FUNC_20(VAR_29, VAR_11,
                             VAR_12,
                             VAR_2);
                    goto err;
                }
                FUNC_34(VAR_49, 0, VAR_51);
            }
        }

        if (!FUNC_21(VAR_30, FUNC_1(VAR_38[VAR_36]), &VAR_49)
                || !FUNC_22(VAR_30)) {
            FUNC_20(VAR_29, VAR_11,
                     VAR_12,
                     VAR_2);
            goto err;
        }

        FUNC_0(VAR_38[VAR_36], VAR_49);
    }


    if (VAR_37 & (VAR_24 | VAR_25)) {






        if (!FUNC_26(VAR_30, VAR_5)
                || !FUNC_26(VAR_30, 0)
                || !FUNC_26(VAR_30, VAR_34)
                || !FUNC_31(VAR_30, VAR_32, VAR_33)) {
            FUNC_20(VAR_29, VAR_11,
                     VAR_12,
                     VAR_2);
            goto err;
        }
        FUNC_18(VAR_32);
        VAR_32 = ((void*)0);
    }



    if (VAR_35 != ((void*)0)) {
        EVP_PKEY *VAR_52 = VAR_29->s3->tmp.cert->privatekey;
        const EVP_MD *VAR_53;
        unsigned char *VAR_54, *VAR_55, *VAR_56;
        size_t VAR_57, VAR_58;
        int VAR_59;

        if (VAR_52 == ((void*)0) || !FUNC_42(VAR_35, &VAR_53)) {

            FUNC_20(VAR_29, VAR_11,
                     VAR_12,
                     VAR_2);
            goto err;
        }

        if (!FUNC_23(VAR_30, &VAR_41)) {
            FUNC_20(VAR_29, VAR_11,
                     VAR_12,
                     VAR_2);
            goto err;
        }

        if (FUNC_19(VAR_29) && !FUNC_25(VAR_30, VAR_35->sigalg)) {
            FUNC_20(VAR_29, VAR_11,
                     VAR_12,
                     VAR_2);
            goto err;
        }






        VAR_57 = FUNC_17(VAR_52);
        if (!FUNC_32(VAR_30, VAR_57, &VAR_54)
            || FUNC_6(VAR_39, &VAR_40, VAR_53, ((void*)0), VAR_52) <= 0) {
            FUNC_20(VAR_29, VAR_11,
                     VAR_12,
                     VAR_2);
            goto err;
        }
        if (VAR_35->sig == VAR_4) {
            if (FUNC_9(VAR_40, VAR_7) <= 0
                || FUNC_10(VAR_40, VAR_8) <= 0) {
                FUNC_20(VAR_29, VAR_11,
                         VAR_12,
                        VAR_1);
                goto err;
            }
        }
        VAR_58 = FUNC_33(VAR_29, &VAR_56,
                                            VAR_29->init_buf->data + VAR_42,
                                            VAR_41);
        if (VAR_58 == 0) {

            goto err;
        }
        VAR_59 = FUNC_5(VAR_39, VAR_54, &VAR_57, VAR_56, VAR_58);
        FUNC_18(VAR_56);
        if (VAR_59 <= 0 || !FUNC_29(VAR_30, VAR_57, &VAR_55)
            || VAR_54 != VAR_55) {
            FUNC_20(VAR_29, VAR_11,
                     VAR_12,
                     VAR_2);
            goto err;
        }
    }

    FUNC_7(VAR_39);
    return 1;
 err:

    FUNC_12(VAR_31);


    FUNC_18(VAR_32);

    FUNC_7(VAR_39);
    return 0;
}
