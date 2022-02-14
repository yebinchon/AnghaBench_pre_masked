
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_13__ {scalar_t__ nid; int flags; int block_size; int (* init ) (TYPE_1__*,unsigned char const*,unsigned char const*,int) ;int key_len; scalar_t__ ctx_size; } ;
struct TYPE_12__ {int encrypt; unsigned long flags; unsigned char const* oiv; unsigned char const* iv; int block_mask; TYPE_2__ const* cipher; scalar_t__ final_used; scalar_t__ buf_len; int num; int key_len; int * cipher_data; int * engine; } ;
typedef TYPE_1__ EVP_CIPHER_CTX ;
typedef TYPE_2__ EVP_CIPHER ;
typedef int ENGINE ;


 TYPE_2__* FUNC_0 (int *,scalar_t__) ;
 int * FUNC_1 (scalar_t__) ;
 int FUNC_2 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*,int ,int ,int *) ;
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (TYPE_1__*) ;
 int FUNC_7 (TYPE_1__*) ;
 int FUNC_8 (int ) ;
 int VAR_2 ;


 int VAR_3 ;

 int VAR_4 ;



 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_9 (int ,int ) ;
 int FUNC_10 (int) ;
 int * FUNC_11 (scalar_t__) ;
 int FUNC_12 (unsigned char const*,unsigned char const*,int) ;
 int FUNC_13 (TYPE_1__*,unsigned char const*,unsigned char const*,int) ;

int FUNC_14(EVP_CIPHER_CTX *VAR_11, const EVP_CIPHER *VAR_12,
                      ENGINE *VAR_13, const unsigned char *VAR_14,
                      const unsigned char *VAR_15, int VAR_16)
{
    if (VAR_16 == -1)
        VAR_16 = VAR_11->encrypt;
    else {
        if (VAR_16)
            VAR_16 = 1;
        VAR_11->encrypt = VAR_16;
    }







    if (VAR_11->engine && VAR_11->cipher
        && (VAR_12 == ((void*)0) || VAR_12->nid == VAR_11->cipher->nid))
        goto skip_to_init;

    if (VAR_12) {





        if (VAR_11->cipher) {
            unsigned long VAR_17 = VAR_11->flags;
            FUNC_7(VAR_11);

            VAR_11->encrypt = VAR_16;
            VAR_11->flags = VAR_17;
        }

        if (VAR_13) {
            if (!FUNC_2(VAR_13)) {
                FUNC_9(VAR_7, VAR_8);
                return 0;
            }
        } else

            VAR_13 = FUNC_1(VAR_12->nid);
        if (VAR_13) {

            const EVP_CIPHER *VAR_18 = FUNC_0(VAR_13, VAR_12->nid);
            if (!VAR_18) {





                FUNC_9(VAR_7, VAR_8);
                return 0;
            }

            VAR_12 = VAR_18;




            VAR_11->engine = VAR_13;
        } else
            VAR_11->engine = ((void*)0);


        VAR_11->cipher = VAR_12;
        if (VAR_11->cipher->ctx_size) {
            VAR_11->cipher_data = FUNC_11(VAR_11->cipher->ctx_size);
            if (VAR_11->cipher_data == ((void*)0)) {
                VAR_11->cipher = ((void*)0);
                FUNC_9(VAR_7, VAR_0);
                return 0;
            }
        } else {
            VAR_11->cipher_data = ((void*)0);
        }
        VAR_11->key_len = VAR_12->key_len;

        VAR_11->flags &= VAR_1;
        if (VAR_11->cipher->flags & VAR_3) {
            if (!FUNC_4(VAR_11, VAR_6, 0, ((void*)0))) {
                VAR_11->cipher = ((void*)0);
                FUNC_9(VAR_7, VAR_8);
                return 0;
            }
        }
    } else if (!VAR_11->cipher) {
        FUNC_9(VAR_7, VAR_9);
        return 0;
    }

 skip_to_init:


    FUNC_10(VAR_11->cipher->block_size == 1
                   || VAR_11->cipher->block_size == 8
                   || VAR_11->cipher->block_size == 16);

    if (!(VAR_11->flags & VAR_1)
        && FUNC_6(VAR_11) == VAR_5) {
        FUNC_9(VAR_7, VAR_10);
        return 0;
    }

    if (!(FUNC_8(FUNC_3(VAR_11)) & VAR_4)) {
        switch (FUNC_6(VAR_11)) {

        case 128:
        case 130:
            break;

        case 132:
        case 129:

            VAR_11->num = 0;


        case 133:

            FUNC_10(FUNC_5(VAR_11) <=
                           (int)sizeof(VAR_11->iv));
            if (VAR_15)
                FUNC_12(VAR_11->oiv, VAR_15, FUNC_5(VAR_11));
            FUNC_12(VAR_11->iv, VAR_11->oiv, FUNC_5(VAR_11));
            break;

        case 131:
            VAR_11->num = 0;

            if (VAR_15)
                FUNC_12(VAR_11->iv, VAR_15, FUNC_5(VAR_11));
            break;

        default:
            return 0;
        }
    }

    if (VAR_14 || (VAR_11->cipher->flags & VAR_2)) {
        if (!VAR_11->cipher->init(VAR_11, VAR_14, VAR_15, VAR_16))
            return 0;
    }
    VAR_11->buf_len = 0;
    VAR_11->final_used = 0;
    VAR_11->block_mask = VAR_11->cipher->block_size - 1;
    return 1;
}
