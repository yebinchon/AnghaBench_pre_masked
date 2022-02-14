
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int X509_ALGOR ;
typedef int X509 ;
struct TYPE_11__ {int * tsa; } ;
struct TYPE_10__ {int flags; unsigned char* imprint; unsigned int imprint_len; int * tsa_name; int nonce; int data; int * md_alg; int policy; int store; int certs; } ;
typedef TYPE_1__ TS_VERIFY_CTX ;
typedef TYPE_2__ TS_TST_INFO ;
typedef int PKCS7 ;
typedef int GENERAL_NAME ;


 int FUNC_0 (unsigned char*) ;
 int VAR_0 ;
 int FUNC_1 (int *,int ,int ,int **) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (TYPE_2__*) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,unsigned char*,unsigned int,TYPE_2__*) ;
 int FUNC_7 (int ,TYPE_2__*) ;
 int FUNC_8 (int ,TYPE_2__*) ;
 int FUNC_9 (int *,int *) ;
 int FUNC_10 (int ,TYPE_2__*,int **,unsigned char**,unsigned int*) ;

__attribute__((used)) static int FUNC_11(TS_VERIFY_CTX *VAR_12,
                                    PKCS7 *VAR_13, TS_TST_INFO *VAR_14)
{
    X509 *VAR_15 = ((void*)0);
    GENERAL_NAME *VAR_16 = VAR_14->tsa;
    X509_ALGOR *VAR_17 = ((void*)0);
    unsigned char *VAR_18 = ((void*)0);
    unsigned VAR_19 = 0;
    int VAR_20 = 0;
    int VAR_21 = VAR_12->flags;


    if (((VAR_21 & VAR_9) && VAR_16 != ((void*)0))
            || (VAR_21 & VAR_10)) {
        VAR_21 |= VAR_8;
    }

    if ((VAR_21 & VAR_8)
        && !FUNC_1(VAR_13, VAR_12->certs, VAR_12->store, &VAR_15))
        goto err;
    if ((VAR_21 & VAR_11)
        && FUNC_2(VAR_14) != 1) {
        FUNC_3(VAR_0, VAR_3);
        goto err;
    }
    if ((VAR_21 & VAR_7)
        && !FUNC_8(VAR_12->policy, VAR_14))
        goto err;
    if ((VAR_21 & VAR_5)
        && !FUNC_6(VAR_12->md_alg, VAR_12->imprint, VAR_12->imprint_len,
                              VAR_14))
        goto err;
    if ((VAR_21 & VAR_4)
        && (!FUNC_10(VAR_12->data, VAR_14,
                                &VAR_17, &VAR_18, &VAR_19)
            || !FUNC_6(VAR_17, VAR_18, VAR_19, VAR_14)))
        goto err;
    if ((VAR_21 & VAR_6)
        && !FUNC_7(VAR_12->nonce, VAR_14))
        goto err;
    if ((VAR_21 & VAR_9)
        && VAR_16 && !FUNC_9(VAR_16, VAR_15)) {
        FUNC_3(VAR_0, VAR_1);
        goto err;
    }
    if ((VAR_21 & VAR_10)
        && !FUNC_9(VAR_12->tsa_name, VAR_15)) {
        FUNC_3(VAR_0, VAR_2);
        goto err;
    }
    VAR_20 = 1;

 err:
    FUNC_5(VAR_15);
    FUNC_4(VAR_17);
    FUNC_0(VAR_18);
    return VAR_20;
}
