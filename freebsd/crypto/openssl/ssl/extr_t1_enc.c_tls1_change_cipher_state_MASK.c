
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_7__ ;
typedef struct TYPE_16__ TYPE_6__ ;
typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_11__ {int enc_write_state; } ;
struct TYPE_12__ {scalar_t__ use_etm; } ;
struct TYPE_17__ {TYPE_1__ statem; TYPE_5__* s3; int rlayer; int * compress; int * write_hash; int * enc_write_ctx; int mac_flags; TYPE_2__ ext; int * expand; int * read_hash; int * enc_read_ctx; } ;
struct TYPE_16__ {int method; } ;
struct TYPE_14__ {int new_mac_pkey_type; unsigned char* key_block; size_t new_mac_secret_size; size_t key_block_length; TYPE_3__* new_cipher; TYPE_6__* new_compression; int * new_hash; int * new_sym_enc; } ;
struct TYPE_15__ {unsigned char* read_mac_secret; size_t read_mac_secret_size; unsigned char* write_mac_secret; size_t write_mac_secret_size; TYPE_4__ tmp; int flags; } ;
struct TYPE_13__ {int algorithm2; int algorithm_enc; } ;
typedef TYPE_6__ SSL_COMP ;
typedef TYPE_7__ SSL ;
typedef int EVP_PKEY ;
typedef int EVP_MD_CTX ;
typedef int EVP_MD ;
typedef int EVP_CIPHER_CTX ;
typedef int EVP_CIPHER ;


 int FUNC_0 (int *) ;
 void* FUNC_1 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 size_t VAR_5 ;
 int VAR_6 ;
 int FUNC_2 (int *,int ,int,unsigned char*) ;
 void* FUNC_3 () ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int const*) ;
 size_t FUNC_6 (int const*) ;
 int FUNC_7 (int const*) ;
 scalar_t__ FUNC_8 (int const*) ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_9 (int *,int const*,int *,unsigned char*,unsigned char*,int) ;
 scalar_t__ FUNC_10 (int *,int *,int const*,int *,int *) ;
 size_t VAR_15 ;
 int * FUNC_11 () ;
 int FUNC_12 (int *) ;
 int * FUNC_13 (int,int *,unsigned char*,int) ;
 int FUNC_14 (int *) ;
 int FUNC_15 (int *) ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 scalar_t__ FUNC_16 (TYPE_7__*) ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int FUNC_17 (TYPE_7__*,int ,int ,int ) ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int FUNC_18 (unsigned char*,unsigned char*,size_t) ;
 int FUNC_19 (char*,...) ;
 int * FUNC_20 (int **,int *) ;

int FUNC_21(SSL *VAR_30, int VAR_31)
{
    unsigned char *VAR_32, *VAR_33;
    unsigned char *VAR_34, *VAR_35, *VAR_36;
    EVP_CIPHER_CTX *VAR_37;
    const EVP_CIPHER *VAR_38;

    const SSL_COMP *VAR_39;

    const EVP_MD *VAR_40;
    int VAR_41;
    size_t *VAR_42;
    EVP_MD_CTX *VAR_43;
    EVP_PKEY *VAR_44;
    size_t VAR_45, VAR_46, VAR_47, VAR_48, VAR_49;
    int VAR_50 = 0;

    VAR_38 = VAR_30->s3->tmp.new_sym_enc;
    VAR_40 = VAR_30->s3->tmp.new_hash;
    VAR_41 = VAR_30->s3->tmp.new_mac_pkey_type;

    VAR_39 = VAR_30->s3->tmp.new_compression;


    if (VAR_31 & VAR_16) {
        if (VAR_30->ext.use_etm)
            VAR_30->s3->flags |= VAR_27;
        else
            VAR_30->s3->flags &= ~VAR_27;

        if (VAR_30->s3->tmp.new_cipher->algorithm2 & VAR_29)
            VAR_30->mac_flags |= VAR_24;
        else
            VAR_30->mac_flags &= ~VAR_24;

        if (VAR_30->enc_read_ctx != ((void*)0)) {
            VAR_50 = 1;
        } else if ((VAR_30->enc_read_ctx = FUNC_3()) == ((void*)0)) {
            FUNC_17(VAR_30, VAR_20, VAR_23,
                     VAR_3);
            goto err;
        } else {



            FUNC_4(VAR_30->enc_read_ctx);
        }
        VAR_37 = VAR_30->enc_read_ctx;
        VAR_43 = FUNC_20(&VAR_30->read_hash, ((void*)0));
        if (VAR_43 == ((void*)0))
            goto err;

        FUNC_0(VAR_30->expand);
        VAR_30->expand = ((void*)0);
        if (VAR_39 != ((void*)0)) {
            VAR_30->expand = FUNC_1(VAR_39->method);
            if (VAR_30->expand == ((void*)0)) {
                FUNC_17(VAR_30, VAR_20,
                         VAR_23,
                         VAR_26);
                goto err;
            }
        }




        if (!FUNC_16(VAR_30))
            FUNC_14(&VAR_30->rlayer);
        VAR_33 = &(VAR_30->s3->read_mac_secret[0]);
        VAR_42 = &(VAR_30->s3->read_mac_secret_size);
    } else {
        VAR_30->statem.enc_write_state = VAR_0;
        if (VAR_30->ext.use_etm)
            VAR_30->s3->flags |= VAR_28;
        else
            VAR_30->s3->flags &= ~VAR_28;

        if (VAR_30->s3->tmp.new_cipher->algorithm2 & VAR_29)
            VAR_30->mac_flags |= VAR_25;
        else
            VAR_30->mac_flags &= ~VAR_25;
        if (VAR_30->enc_write_ctx != ((void*)0) && !FUNC_16(VAR_30)) {
            VAR_50 = 1;
        } else if ((VAR_30->enc_write_ctx = FUNC_3()) == ((void*)0)) {
            FUNC_17(VAR_30, VAR_20, VAR_23,
                     VAR_3);
            goto err;
        }
        VAR_37 = VAR_30->enc_write_ctx;
        if (FUNC_16(VAR_30)) {
            VAR_43 = FUNC_11();
            if (VAR_43 == ((void*)0)) {
                FUNC_17(VAR_30, VAR_20,
                         VAR_23,
                         VAR_3);
                goto err;
            }
            VAR_30->write_hash = VAR_43;
        } else {
            VAR_43 = FUNC_20(&VAR_30->write_hash, ((void*)0));
            if (VAR_43 == ((void*)0)) {
                FUNC_17(VAR_30, VAR_20,
                         VAR_23,
                         VAR_3);
                goto err;
            }
        }

        FUNC_0(VAR_30->compress);
        VAR_30->compress = ((void*)0);
        if (VAR_39 != ((void*)0)) {
            VAR_30->compress = FUNC_1(VAR_39->method);
            if (VAR_30->compress == ((void*)0)) {
                FUNC_17(VAR_30, VAR_20,
                         VAR_23,
                        VAR_26);
                goto err;
            }
        }




        if (!FUNC_16(VAR_30))
            FUNC_15(&VAR_30->rlayer);
        VAR_33 = &(VAR_30->s3->write_mac_secret[0]);
        VAR_42 = &(VAR_30->s3->write_mac_secret_size);
    }

    if (VAR_50)
        FUNC_4(VAR_37);

    VAR_32 = VAR_30->s3->tmp.key_block;
    VAR_46 = *VAR_42 = VAR_30->s3->tmp.new_mac_secret_size;


    VAR_49 = FUNC_7(VAR_38);
    VAR_47 = VAR_49;


    if (FUNC_8(VAR_38) == VAR_9)
        VAR_48 = VAR_15;
    else if (FUNC_8(VAR_38) == VAR_7)
        VAR_48 = VAR_5;
    else
        VAR_48 = FUNC_6(VAR_38);
    if ((VAR_31 == VAR_18) ||
        (VAR_31 == VAR_19)) {
        VAR_34 = &(VAR_32[0]);
        VAR_45 = VAR_46 + VAR_46;
        VAR_35 = &(VAR_32[VAR_45]);
        VAR_45 += VAR_47 + VAR_47;
        VAR_36 = &(VAR_32[VAR_45]);
        VAR_45 += VAR_48 + VAR_48;
    } else {
        VAR_45 = VAR_46;
        VAR_34 = &(VAR_32[VAR_45]);
        VAR_45 += VAR_46 + VAR_47;
        VAR_35 = &(VAR_32[VAR_45]);
        VAR_45 += VAR_47 + VAR_48;
        VAR_36 = &(VAR_32[VAR_45]);
        VAR_45 += VAR_48;
    }

    if (VAR_45 > VAR_30->s3->tmp.key_block_length) {
        FUNC_17(VAR_30, VAR_20, VAR_23,
                 VAR_2);
        goto err;
    }

    FUNC_18(VAR_33, VAR_34, VAR_46);

    if (!(FUNC_5(VAR_38) & VAR_8)) {

        VAR_44 = FUNC_13(VAR_41, ((void*)0), VAR_33,
                                               (int)*VAR_42);
        if (VAR_44 == ((void*)0)
            || FUNC_10(VAR_43, ((void*)0), VAR_40, ((void*)0), VAR_44) <= 0) {
            FUNC_12(VAR_44);
            FUNC_17(VAR_30, VAR_20, VAR_23,
                     VAR_2);
            goto err;
        }
        FUNC_12(VAR_44);
    }
    if (FUNC_8(VAR_38) == VAR_9) {
        if (!FUNC_9(VAR_37, VAR_38, ((void*)0), VAR_35, ((void*)0), (VAR_31 & VAR_17))
            || !FUNC_2(VAR_37, VAR_14, (int)VAR_48,
                                    VAR_36)) {
            FUNC_17(VAR_30, VAR_20, VAR_23,
                     VAR_2);
            goto err;
        }
    } else if (FUNC_8(VAR_38) == VAR_7) {
        int VAR_51;
        if (VAR_30->s3->tmp.
            new_cipher->algorithm_enc & (VAR_21 | VAR_22))
            VAR_51 = VAR_4;
        else
            VAR_51 = VAR_6;
        if (!FUNC_9(VAR_37, VAR_38, ((void*)0), ((void*)0), ((void*)0), (VAR_31 & VAR_17))
            || !FUNC_2(VAR_37, VAR_10, 12, ((void*)0))
            || !FUNC_2(VAR_37, VAR_12, VAR_51, ((void*)0))
            || !FUNC_2(VAR_37, VAR_13, (int)VAR_48, VAR_36)
            || !FUNC_9(VAR_37, ((void*)0), ((void*)0), VAR_35, ((void*)0), -1)) {
            FUNC_17(VAR_30, VAR_20, VAR_23,
                     VAR_2);
            goto err;
        }
    } else {
        if (!FUNC_9(VAR_37, VAR_38, ((void*)0), VAR_35, VAR_36, (VAR_31 & VAR_17))) {
            FUNC_17(VAR_30, VAR_20, VAR_23,
                     VAR_2);
            goto err;
        }
    }

    if ((FUNC_5(VAR_38) & VAR_8) && *VAR_42
        && !FUNC_2(VAR_37, VAR_11,
                                (int)*VAR_42, VAR_33)) {
        FUNC_17(VAR_30, VAR_20, VAR_23,
                 VAR_2);
        goto err;
    }
    VAR_30->statem.enc_write_state = VAR_1;
    return 1;
 err:
    return 0;
}
