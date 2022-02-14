
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_6__ ;
typedef struct TYPE_17__ TYPE_5__ ;
typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


typedef int resumption_label ;
typedef int finishedkey ;
typedef int external_label ;
typedef int binderkey ;
struct TYPE_18__ {scalar_t__ early_data_state; scalar_t__ hello_retry_request; scalar_t__ server; TYPE_4__* s3; scalar_t__ early_secret; TYPE_2__* session; } ;
struct TYPE_15__ {scalar_t__ max_early_data; } ;
struct TYPE_17__ {int master_key_length; int master_key; scalar_t__ early_secret; TYPE_3__ ext; } ;
struct TYPE_16__ {int handshake_buffer; } ;
struct TYPE_13__ {scalar_t__ max_early_data; } ;
struct TYPE_14__ {TYPE_1__ ext; } ;
typedef TYPE_5__ SSL_SESSION ;
typedef TYPE_6__ SSL ;
typedef int PACKET ;
typedef int EVP_PKEY ;
typedef int EVP_MD_CTX ;
typedef int EVP_MD ;


 long FUNC_0 (int ,void**) ;
 scalar_t__ FUNC_1 (unsigned char const*,unsigned char*,size_t) ;
 int VAR_0 ;
 scalar_t__ FUNC_2 (int *,unsigned char*,int *) ;
 scalar_t__ FUNC_3 (int *,int const*,int *) ;
 scalar_t__ FUNC_4 (int *,unsigned char*,size_t*) ;
 scalar_t__ FUNC_5 (int *,int *,int const*,int *,int *) ;
 scalar_t__ FUNC_6 (int *,unsigned char*,size_t) ;
 scalar_t__ FUNC_7 (int *,unsigned char const*,size_t) ;
 int VAR_1 ;
 int FUNC_8 (int *) ;
 int * FUNC_9 () ;
 int FUNC_10 (int const*) ;
 int VAR_2 ;
 int FUNC_11 (int *) ;
 int * FUNC_12 (int ,int *,unsigned char*,size_t) ;
 int FUNC_13 (unsigned char*,int) ;
 int FUNC_14 (int *,void*,size_t) ;
 int FUNC_15 (int *,int) ;
 int FUNC_16 (int *,int *) ;
 scalar_t__ FUNC_17 (int *) ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_18 (TYPE_6__*,int ,int ,int ) ;
 int FUNC_19 (int) ;
 int FUNC_20 (TYPE_6__*,int const*,unsigned char*,unsigned char*,size_t) ;
 int FUNC_21 (TYPE_6__*,int const*,int *,int ,int ,unsigned char*) ;
 int FUNC_22 (TYPE_6__*,int const*,unsigned char*,unsigned char const*,size_t,unsigned char*,size_t,unsigned char*,size_t,int) ;

int FUNC_23(SSL *VAR_10, const EVP_MD *VAR_11, const unsigned char *VAR_12,
                      size_t VAR_13, const unsigned char *VAR_14,
                      unsigned char *VAR_15, SSL_SESSION *VAR_16, int VAR_17,
                      int VAR_18)
{
    EVP_PKEY *VAR_19 = ((void*)0);
    EVP_MD_CTX *VAR_20 = ((void*)0);
    unsigned char VAR_21[VAR_1], VAR_22[VAR_1];
    unsigned char VAR_23[VAR_1], VAR_24[VAR_1];
    unsigned char *VAR_25;




    static const unsigned char VAR_26[] = "res binder";
    static const unsigned char VAR_27[] = "ext binder";

    const unsigned char *VAR_28;
    size_t VAR_29, VAR_30, VAR_31;
    int VAR_32 = FUNC_10(VAR_11);
    int VAR_33 = -1;
    int VAR_34 = 0;


    if (!FUNC_19(VAR_32 >= 0)) {
        FUNC_18(VAR_10, VAR_4, VAR_6,
                 VAR_0);
        goto err;
    }
    VAR_31 = (size_t)VAR_32;

    if (VAR_18
            && VAR_10->early_data_state == VAR_5
            && VAR_10->session->ext.max_early_data == 0
            && VAR_16->ext.max_early_data > 0)
        VAR_34 = 1;

    if (VAR_18) {
        VAR_28 = VAR_27;
        VAR_30 = sizeof(VAR_27) - 1;
    } else {
        VAR_28 = VAR_26;
        VAR_30 = sizeof(VAR_26) - 1;
    }
    if (VAR_10->server || !VAR_18 || VAR_34)
        VAR_25 = (unsigned char *)VAR_10->early_secret;
    else
        VAR_25 = (unsigned char *)VAR_16->early_secret;

    if (!FUNC_21(VAR_10, VAR_11, ((void*)0), VAR_16->master_key,
                               VAR_16->master_key_length, VAR_25)) {

        goto err;
    }





    VAR_20 = FUNC_9();
    if (VAR_20 == ((void*)0)
            || FUNC_3(VAR_20, VAR_11, ((void*)0)) <= 0
            || FUNC_2(VAR_20, VAR_21, ((void*)0)) <= 0) {
        FUNC_18(VAR_10, VAR_4, VAR_6,
                 VAR_0);
        goto err;
    }


    if (!FUNC_22(VAR_10, VAR_11, VAR_25, VAR_28, VAR_30, VAR_21,
                           VAR_31, VAR_22, VAR_31, 1)) {

        goto err;
    }


    if (!FUNC_20(VAR_10, VAR_11, VAR_22, VAR_23, VAR_31)) {

        goto err;
    }

    if (FUNC_3(VAR_20, VAR_11, ((void*)0)) <= 0) {
        FUNC_18(VAR_10, VAR_4, VAR_6,
                 VAR_0);
        goto err;
    }






    if (VAR_10->hello_retry_request == VAR_7) {
        size_t VAR_35;
        long VAR_36;
        void *VAR_37;

        VAR_35 = VAR_36 =
            FUNC_0(VAR_10->s3->handshake_buffer, &VAR_37);
        if (VAR_36 <= 0) {
            FUNC_18(VAR_10, VAR_4, VAR_6,
                     VAR_8);
            goto err;
        }





        if (VAR_10->server) {
            PACKET VAR_38, VAR_39;


            if (!FUNC_14(&VAR_38, VAR_37, VAR_35)
                    || !FUNC_15(&VAR_38, 1)
                    || !FUNC_16(&VAR_38, &VAR_39)
                    || !FUNC_15(&VAR_38, 1)
                    || !FUNC_16(&VAR_38, &VAR_39)) {
                FUNC_18(VAR_10, VAR_4, VAR_6,
                         VAR_0);
                goto err;
            }
            VAR_35 -= FUNC_17(&VAR_38);
        }

        if (FUNC_7(VAR_20, VAR_37, VAR_35) <= 0) {
            FUNC_18(VAR_10, VAR_4, VAR_6,
                     VAR_0);
            goto err;
        }
    }

    if (FUNC_7(VAR_20, VAR_12, VAR_13) <= 0
            || FUNC_2(VAR_20, VAR_21, ((void*)0)) <= 0) {
        FUNC_18(VAR_10, VAR_4, VAR_6,
                 VAR_0);
        goto err;
    }

    VAR_19 = FUNC_12(VAR_2, ((void*)0), VAR_23,
                                          VAR_31);
    if (VAR_19 == ((void*)0)) {
        FUNC_18(VAR_10, VAR_4, VAR_6,
                 VAR_0);
        goto err;
    }

    if (!VAR_17)
        VAR_15 = VAR_24;

    VAR_29 = VAR_31;
    if (FUNC_5(VAR_20, ((void*)0), VAR_11, ((void*)0), VAR_19) <= 0
            || FUNC_6(VAR_20, VAR_21, VAR_31) <= 0
            || FUNC_4(VAR_20, VAR_15, &VAR_29) <= 0
            || VAR_29 != VAR_31) {
        FUNC_18(VAR_10, VAR_4, VAR_6,
                 VAR_0);
        goto err;
    }

    if (VAR_17) {
        VAR_33 = 1;
    } else {

        VAR_33 = (FUNC_1(VAR_14, VAR_15, VAR_31) == 0);
        if (!VAR_33)
            FUNC_18(VAR_10, VAR_3, VAR_6,
                     VAR_9);
    }

 err:
    FUNC_13(VAR_22, sizeof(VAR_22));
    FUNC_13(VAR_23, sizeof(VAR_23));
    FUNC_11(VAR_19);
    FUNC_8(VAR_20);

    return VAR_33;
}
