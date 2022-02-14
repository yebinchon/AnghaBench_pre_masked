
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_6__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_10__ {TYPE_6__* parameter; int algorithm; } ;
typedef TYPE_3__ X509_ALGOR ;
struct TYPE_9__ {TYPE_1__* sequence; } ;
struct TYPE_11__ {scalar_t__ type; TYPE_2__ value; } ;
struct TYPE_8__ {unsigned char* data; int length; } ;
typedef int EVP_PKEY_CTX ;
typedef int EVP_CIPHER_CTX ;
typedef int EVP_CIPHER ;
typedef int CMS_RecipientInfo ;
typedef int ASN1_OCTET_STRING ;


 int FUNC_0 (int *) ;
 size_t FUNC_1 (int *) ;
 int FUNC_2 (int *,TYPE_3__**,int **) ;
 int * FUNC_3 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (int *,TYPE_6__*) ;
 scalar_t__ FUNC_7 (int const*) ;
 int FUNC_8 (int const*) ;
 scalar_t__ VAR_2 ;
 int FUNC_9 (int *,int const*,int *,int *,int *) ;
 scalar_t__ FUNC_10 (int *,int ) ;
 scalar_t__ FUNC_11 (int *,unsigned char*,size_t) ;
 scalar_t__ FUNC_12 (int *,int ) ;
 scalar_t__ FUNC_13 (int *,int) ;
 scalar_t__ FUNC_14 (int *,int ) ;
 int VAR_3 ;
 int * FUNC_15 (int ) ;
 int FUNC_16 () ;
 scalar_t__ VAR_4 ;
 int FUNC_17 (int ) ;
 scalar_t__ FUNC_18 (int ) ;
 int FUNC_19 (unsigned char*) ;
 unsigned char* FUNC_20 (int ,size_t) ;
 scalar_t__ VAR_5 ;
 int FUNC_21 (TYPE_3__*) ;
 TYPE_3__* FUNC_22 (int *,unsigned char const**,int) ;

__attribute__((used)) static int FUNC_23(EVP_PKEY_CTX *VAR_6, CMS_RecipientInfo *VAR_7)
{
    int VAR_8 = 0;

    X509_ALGOR *VAR_9, *VAR_10 = ((void*)0);
    ASN1_OCTET_STRING *VAR_11;
    const unsigned char *VAR_12;
    unsigned char *VAR_13 = ((void*)0);
    size_t VAR_14 = 0;
    int VAR_15, VAR_16;
    const EVP_CIPHER *VAR_17;
    EVP_CIPHER_CTX *VAR_18;

    if (!FUNC_2(VAR_7, &VAR_9, &VAR_11))
        goto err;





    if (FUNC_18(VAR_9->algorithm) != VAR_4) {
        FUNC_4(VAR_0, VAR_1);
        goto err;
    }

    if (FUNC_14(VAR_6, VAR_3) <= 0)
        goto err;

    if (FUNC_12(VAR_6, FUNC_16()) <= 0)
        goto err;

    if (VAR_9->parameter->type != VAR_5)
        goto err;

    VAR_12 = VAR_9->parameter->value.sequence->data;
    VAR_16 = VAR_9->parameter->value.sequence->length;
    VAR_10 = FUNC_22(((void*)0), &VAR_12, VAR_16);
    if (!VAR_10)
        goto err;
    VAR_18 = FUNC_3(VAR_7);
    if (!VAR_18)
        goto err;
    VAR_17 = FUNC_15(VAR_10->algorithm);
    if (!VAR_17 || FUNC_7(VAR_17) != VAR_2)
        goto err;
    if (!FUNC_9(VAR_18, VAR_17, ((void*)0), ((void*)0), ((void*)0)))
        goto err;
    if (FUNC_6(VAR_18, VAR_10->parameter) <= 0)
        goto err;

    VAR_15 = FUNC_5(VAR_18);
    if (FUNC_13(VAR_6, VAR_15) <= 0)
        goto err;

    if (FUNC_10(VAR_6,
                                     FUNC_17(FUNC_8(VAR_17)))
        <= 0)
        goto err;

    if (VAR_11) {
        VAR_14 = FUNC_1(VAR_11);
        VAR_13 = FUNC_20(FUNC_0(VAR_11), VAR_14);
        if (!VAR_13)
            goto err;
    }

    if (FUNC_11(VAR_6, VAR_13, VAR_14) <= 0)
        goto err;
    VAR_13 = ((void*)0);

    VAR_8 = 1;
 err:
    FUNC_21(VAR_10);
    FUNC_19(VAR_13);
    return VAR_8;
}
