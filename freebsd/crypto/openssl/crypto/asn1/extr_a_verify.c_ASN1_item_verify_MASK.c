
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_13__ {int algorithm; } ;
typedef TYPE_2__ X509_ALGOR ;
struct TYPE_15__ {scalar_t__ type; int flags; scalar_t__ length; int data; } ;
struct TYPE_14__ {TYPE_1__* ameth; } ;
struct TYPE_12__ {int (* item_verify ) (int *,int const*,void*,TYPE_2__*,TYPE_4__*,TYPE_3__*) ;scalar_t__ pkey_id; } ;
typedef TYPE_3__ EVP_PKEY ;
typedef int EVP_MD_CTX ;
typedef int EVP_MD ;
typedef int ASN1_ITEM ;
typedef TYPE_4__ ASN1_BIT_STRING ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (void*,unsigned char**,int const*) ;
 int FUNC_1 (int ,int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_2 (int *,int ,size_t,unsigned char*,int) ;
 int FUNC_3 (int *,int *,int const*,int *,TYPE_3__*) ;
 int FUNC_4 (int *) ;
 int * FUNC_5 () ;
 scalar_t__ FUNC_6 (int) ;
 int * FUNC_7 (int) ;
 int VAR_9 ;
 int FUNC_8 (int ,int*,int*) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (unsigned char*,size_t) ;
 scalar_t__ VAR_10 ;
 int FUNC_11 (int *,int const*,void*,TYPE_2__*,TYPE_4__*,TYPE_3__*) ;

int FUNC_12(const ASN1_ITEM *VAR_11, X509_ALGOR *VAR_12,
                     ASN1_BIT_STRING *VAR_13, void *VAR_14, EVP_PKEY *VAR_15)
{
    EVP_MD_CTX *VAR_16 = ((void*)0);
    unsigned char *VAR_17 = ((void*)0);
    int VAR_18 = -1, VAR_19 = 0;
    int VAR_20, VAR_21;
    size_t VAR_22 = 0;

    if (!VAR_15) {
        FUNC_1(VAR_0, VAR_8);
        return -1;
    }

    if (VAR_13->type == VAR_10 && VAR_13->flags & 0x7) {
        FUNC_1(VAR_0, VAR_1);
        return -1;
    }

    VAR_16 = FUNC_5();
    if (VAR_16 == ((void*)0)) {
        FUNC_1(VAR_0, VAR_7);
        goto err;
    }


    if (!FUNC_8(FUNC_9(VAR_12->algorithm), &VAR_20, &VAR_21)) {
        FUNC_1(VAR_0, VAR_3);
        goto err;
    }
    if (VAR_20 == VAR_9) {
        if (!VAR_15->ameth || !VAR_15->ameth->item_verify) {
            FUNC_1(VAR_0,
                    VAR_3);
            goto err;
        }
        VAR_18 = VAR_15->ameth->item_verify(VAR_16, VAR_11, VAR_14, VAR_12, VAR_13, VAR_15);





        if (VAR_18 != 2)
            goto err;
        VAR_18 = -1;
    } else {
        const EVP_MD *VAR_23 = FUNC_7(VAR_20);

        if (VAR_23 == ((void*)0)) {
            FUNC_1(VAR_0,
                    VAR_2);
            goto err;
        }


        if (FUNC_6(VAR_21) != VAR_15->ameth->pkey_id) {
            FUNC_1(VAR_0, VAR_4);
            goto err;
        }

        if (!FUNC_3(VAR_16, ((void*)0), VAR_23, ((void*)0), VAR_15)) {
            FUNC_1(VAR_0, VAR_5);
            VAR_18 = 0;
            goto err;
        }

    }

    VAR_19 = FUNC_0(VAR_14, &VAR_17, VAR_11);
    if (VAR_19 <= 0) {
        FUNC_1(VAR_0, VAR_6);
        goto err;
    }
    if (VAR_17 == ((void*)0)) {
        FUNC_1(VAR_0, VAR_7);
        goto err;
    }
    VAR_22 = VAR_19;

    VAR_18 = FUNC_2(VAR_16, VAR_13->data, (size_t)VAR_13->length,
                           VAR_17, VAR_19);
    if (VAR_18 <= 0) {
        FUNC_1(VAR_0, VAR_5);
        goto err;
    }
    VAR_18 = 1;
 err:
    FUNC_10(VAR_17, VAR_22);
    FUNC_4(VAR_16);
    return VAR_18;
}
