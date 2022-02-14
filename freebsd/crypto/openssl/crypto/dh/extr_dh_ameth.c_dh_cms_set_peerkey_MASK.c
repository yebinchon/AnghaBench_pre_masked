
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


typedef int X509_ALGOR ;
struct TYPE_16__ {int * pub_key; } ;
struct TYPE_13__ {int dh; } ;
struct TYPE_15__ {scalar_t__ type; TYPE_2__* ameth; TYPE_1__ pkey; } ;
struct TYPE_14__ {int pkey_id; } ;
typedef int EVP_PKEY_CTX ;
typedef TYPE_3__ EVP_PKEY ;
typedef TYPE_4__ DH ;
typedef int ASN1_OBJECT ;
typedef int ASN1_INTEGER ;
typedef int ASN1_BIT_STRING ;


 int FUNC_0 (int *) ;
 int * FUNC_1 (int *,int *) ;
 unsigned char* FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_4 (TYPE_4__*) ;
 int FUNC_5 (int ,int ) ;
 TYPE_4__* FUNC_6 (int ) ;
 TYPE_3__* FUNC_7 (int *) ;
 scalar_t__ VAR_3 ;
 int FUNC_8 (TYPE_3__*,int ,TYPE_4__*) ;
 scalar_t__ FUNC_9 (int *,TYPE_3__*) ;
 int FUNC_10 (TYPE_3__*) ;
 TYPE_3__* FUNC_11 () ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_12 (int const*) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_13 (int const**,int*,void const**,int *) ;
 int * FUNC_14 (int *,unsigned char const**,int) ;

__attribute__((used)) static int FUNC_15(EVP_PKEY_CTX *VAR_7,
                              X509_ALGOR *VAR_8, ASN1_BIT_STRING *VAR_9)
{
    const ASN1_OBJECT *VAR_10;
    int VAR_11;
    const void *VAR_12;
    ASN1_INTEGER *VAR_13 = ((void*)0);
    int VAR_14 = 0;
    EVP_PKEY *VAR_15 = ((void*)0), *VAR_16 = ((void*)0);
    DH *VAR_17 = ((void*)0);
    const unsigned char *VAR_18;
    int VAR_19;

    FUNC_13(&VAR_10, &VAR_11, &VAR_12, VAR_8);
    if (FUNC_12(VAR_10) != VAR_4)
        goto err;

    if (VAR_11 != VAR_6 && VAR_11 == VAR_5)
        goto err;

    VAR_16 = FUNC_7(VAR_7);
    if (!VAR_16)
        goto err;
    if (VAR_16->type != VAR_3)
        goto err;

    VAR_17 = FUNC_6(VAR_16->pkey.dh);

    VAR_19 = FUNC_3(VAR_9);
    VAR_18 = FUNC_2(VAR_9);
    if (!VAR_18 || !VAR_19)
        goto err;

    if ((VAR_13 = FUNC_14(((void*)0), &VAR_18, VAR_19)) == ((void*)0)) {
        FUNC_5(VAR_0, VAR_2);
        goto err;
    }


    if ((VAR_17->pub_key = FUNC_1(VAR_13, ((void*)0))) == ((void*)0)) {
        FUNC_5(VAR_0, VAR_1);
        goto err;
    }

    VAR_15 = FUNC_11();
    if (VAR_15 == ((void*)0))
        goto err;
    FUNC_8(VAR_15, VAR_16->ameth->pkey_id, VAR_17);
    VAR_17 = ((void*)0);
    if (FUNC_9(VAR_7, VAR_15) > 0)
        VAR_14 = 1;
 err:
    FUNC_0(VAR_13);
    FUNC_10(VAR_15);
    FUNC_4(VAR_17);
    return VAR_14;
}
