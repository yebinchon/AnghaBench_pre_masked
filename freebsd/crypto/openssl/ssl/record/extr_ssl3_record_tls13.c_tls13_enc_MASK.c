
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_25__ TYPE_9__ ;
typedef struct TYPE_24__ TYPE_8__ ;
typedef struct TYPE_23__ TYPE_7__ ;
typedef struct TYPE_22__ TYPE_6__ ;
typedef struct TYPE_21__ TYPE_5__ ;
typedef struct TYPE_20__ TYPE_4__ ;
typedef struct TYPE_19__ TYPE_3__ ;
typedef struct TYPE_18__ TYPE_2__ ;
typedef struct TYPE_17__ TYPE_1__ ;
typedef struct TYPE_16__ TYPE_11__ ;
typedef struct TYPE_15__ TYPE_10__ ;


typedef int uint32_t ;
typedef int recheader ;
typedef int WPACKET ;
struct TYPE_24__ {TYPE_7__* new_cipher; } ;
struct TYPE_25__ {TYPE_8__ tmp; } ;
struct TYPE_23__ {int algorithm_enc; } ;
struct TYPE_20__ {scalar_t__ max_early_data; } ;
struct TYPE_22__ {TYPE_5__* cipher; TYPE_4__ ext; } ;
struct TYPE_21__ {int algorithm_enc; } ;
struct TYPE_17__ {scalar_t__ max_early_data; } ;
struct TYPE_19__ {TYPE_2__* cipher; TYPE_1__ ext; } ;
struct TYPE_18__ {int algorithm_enc; } ;
struct TYPE_16__ {unsigned char* write_iv; unsigned char* read_iv; scalar_t__ early_data_state; TYPE_9__* s3; TYPE_6__* psksession; TYPE_3__* session; int rlayer; int * enc_read_ctx; int * enc_write_ctx; } ;
struct TYPE_15__ {scalar_t__ type; unsigned char* data; unsigned char* input; size_t length; size_t rec_version; } ;
typedef TYPE_10__ SSL3_RECORD ;
typedef TYPE_11__ SSL ;
typedef int EVP_CIPHER_CTX ;


 int VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 scalar_t__ FUNC_0 (int *,int ,size_t,unsigned char*) ;
 size_t FUNC_1 (int *) ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_2 (int *,unsigned char*,int*) ;
 scalar_t__ FUNC_3 (int *,int *,int *,int *,unsigned char*,int) ;
 scalar_t__ FUNC_4 (int *,unsigned char*,int*,unsigned char*,unsigned int) ;
 size_t VAR_6 ;
 int VAR_7 ;
 unsigned char* FUNC_5 (int *) ;
 unsigned char* FUNC_6 (int *) ;
 size_t VAR_8 ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 scalar_t__ VAR_17 ;
 scalar_t__ VAR_18 ;
 int VAR_19 ;
 int FUNC_7 (TYPE_11__*,int ,int ,int ) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *,size_t*) ;
 int FUNC_11 (int *,unsigned char*,int,int ) ;
 int FUNC_12 (int *,size_t) ;
 int FUNC_13 (int *,scalar_t__) ;
 int FUNC_14 (unsigned char*,unsigned char*,size_t) ;
 int FUNC_15 (unsigned char*,unsigned char*,size_t) ;
 int FUNC_16 (int) ;

int FUNC_17(SSL *VAR_20, SSL3_RECORD *VAR_21, size_t VAR_22, int VAR_23)
{
    EVP_CIPHER_CTX *VAR_24;
    unsigned char VAR_25[VAR_7], VAR_26[VAR_10];
    size_t VAR_27, VAR_28, VAR_29, VAR_30, VAR_31;
    unsigned char *VAR_32;
    unsigned char *VAR_33;
    int VAR_34, VAR_35;
    SSL3_RECORD *VAR_36 = &VAR_21[0];
    uint32_t VAR_37;
    WPACKET VAR_38;

    if (VAR_22 != 1) {


        FUNC_7(VAR_20, VAR_11, VAR_19,
                 VAR_0);
        return -1;
    }

    if (VAR_23) {
        VAR_24 = VAR_20->enc_write_ctx;
        VAR_32 = VAR_20->write_iv;
        VAR_33 = FUNC_6(&VAR_20->rlayer);
    } else {
        VAR_24 = VAR_20->enc_read_ctx;
        VAR_32 = VAR_20->read_iv;
        VAR_33 = FUNC_5(&VAR_20->rlayer);
    }







    if (VAR_24 == ((void*)0) || VAR_36->type == VAR_9) {
        FUNC_15(VAR_36->data, VAR_36->input, VAR_36->length);
        VAR_36->input = VAR_36->data;
        return 1;
    }

    VAR_27 = FUNC_1(VAR_24);

    if (VAR_20->early_data_state == VAR_18
            || VAR_20->early_data_state == VAR_17) {
        if (VAR_20->session != ((void*)0) && VAR_20->session->ext.max_early_data > 0) {
            VAR_37 = VAR_20->session->cipher->algorithm_enc;
        } else {
            if (!FUNC_16(VAR_20->psksession != ((void*)0)
                             && VAR_20->psksession->ext.max_early_data > 0)) {
                FUNC_7(VAR_20, VAR_11, VAR_19,
                         VAR_0);
                return -1;
            }
            VAR_37 = VAR_20->psksession->cipher->algorithm_enc;
        }
    } else {




        if (!FUNC_16(VAR_20->s3->tmp.new_cipher != ((void*)0))) {
            FUNC_7(VAR_20, VAR_11, VAR_19,
                     VAR_0);
            return -1;
        }
        VAR_37 = VAR_20->s3->tmp.new_cipher->algorithm_enc;
    }

    if (VAR_37 & VAR_14) {
        if (VAR_37 & (VAR_12 | VAR_13))
            VAR_28 = VAR_1;
         else
            VAR_28 = VAR_2;
         if (VAR_23 && FUNC_0(VAR_24, VAR_5, VAR_28,
                                         ((void*)0)) <= 0) {
            FUNC_7(VAR_20, VAR_11, VAR_19,
                     VAR_0);
            return -1;
        }
    } else if (VAR_37 & VAR_15) {
        VAR_28 = VAR_6;
    } else if (VAR_37 & VAR_16) {
        VAR_28 = VAR_3;
    } else {
        FUNC_7(VAR_20, VAR_11, VAR_19,
                 VAR_0);
        return -1;
    }

    if (!VAR_23) {




        if (VAR_36->length < VAR_28 + 1)
            return 0;
        VAR_36->length -= VAR_28;
    }


    if (VAR_27 < VAR_8) {

        FUNC_7(VAR_20, VAR_11, VAR_19,
                 VAR_0);
        return -1;
    }
    VAR_29 = VAR_27 - VAR_8;
    FUNC_14(VAR_25, VAR_32, VAR_29);
    for (VAR_30 = 0; VAR_30 < VAR_8; VAR_30++)
        VAR_25[VAR_29 + VAR_30] = VAR_32[VAR_29 + VAR_30] ^ VAR_33[VAR_30];


    for (VAR_30 = VAR_8; VAR_30 > 0; VAR_30--) {
        ++VAR_33[VAR_30 - 1];
        if (VAR_33[VAR_30 - 1] != 0)
            break;
    }
    if (VAR_30 == 0) {

        return -1;
    }


    if (FUNC_3(VAR_24, ((void*)0), ((void*)0), ((void*)0), VAR_25, VAR_23) <= 0
            || (!VAR_23 && FUNC_0(VAR_24, VAR_5,
                                             VAR_28,
                                             VAR_36->data + VAR_36->length) <= 0)) {
        return -1;
    }


    if (!FUNC_11(&VAR_38, VAR_26, sizeof(VAR_26), 0)
            || !FUNC_13(&VAR_38, VAR_36->type)
            || !FUNC_12(&VAR_38, VAR_36->rec_version)
            || !FUNC_12(&VAR_38, VAR_36->length + VAR_28)
            || !FUNC_10(&VAR_38, &VAR_31)
            || VAR_31 != VAR_10
            || !FUNC_9(&VAR_38)) {
        FUNC_8(&VAR_38);
        return -1;
    }





    if (((VAR_37 & VAR_14) != 0
                 && FUNC_4(VAR_24, ((void*)0), &VAR_34, ((void*)0),
                                     (unsigned int)VAR_36->length) <= 0)
            || FUNC_4(VAR_24, ((void*)0), &VAR_34, VAR_26,
                                sizeof(VAR_26)) <= 0
            || FUNC_4(VAR_24, VAR_36->data, &VAR_34, VAR_36->input,
                                (unsigned int)VAR_36->length) <= 0
            || FUNC_2(VAR_24, VAR_36->data + VAR_34, &VAR_35) <= 0
            || (size_t)(VAR_34 + VAR_35) != VAR_36->length) {
        return -1;
    }
    if (VAR_23) {

        if (FUNC_0(VAR_24, VAR_4, VAR_28,
                                VAR_36->data + VAR_36->length) <= 0) {
            FUNC_7(VAR_20, VAR_11, VAR_19,
                     VAR_0);
            return -1;
        }
        VAR_36->length += VAR_28;
    }

    return 1;
}
