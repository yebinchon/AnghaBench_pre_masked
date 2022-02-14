
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_11__ {TYPE_6__* parameter; int algorithm; } ;
typedef TYPE_3__ X509_ALGOR ;
struct TYPE_10__ {TYPE_1__* sequence; } ;
struct TYPE_12__ {scalar_t__ type; TYPE_2__ value; } ;
struct TYPE_9__ {unsigned char* data; int length; } ;
typedef int EVP_PKEY_CTX ;
typedef int EVP_CIPHER_CTX ;
typedef int EVP_CIPHER ;
typedef int CMS_RecipientInfo ;
typedef int ASN1_OCTET_STRING ;


 int FUNC_0 (int *,TYPE_3__**,int **) ;
 int * FUNC_1 (int *) ;
 int FUNC_2 (unsigned char**,TYPE_3__*,int *,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (int *,TYPE_6__*) ;
 scalar_t__ FUNC_6 (int const*) ;
 scalar_t__ VAR_2 ;
 int FUNC_7 (int *,int const*,int *,int *,int *) ;
 scalar_t__ FUNC_8 (int *,unsigned char*,int) ;
 scalar_t__ FUNC_9 (int *,int) ;
 int * FUNC_10 (int ) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (unsigned char*) ;
 scalar_t__ VAR_3 ;
 int FUNC_13 (TYPE_3__*) ;
 TYPE_3__* FUNC_14 (int *,unsigned char const**,int) ;
 int FUNC_15 (int *,int ) ;

__attribute__((used)) static int FUNC_16(EVP_PKEY_CTX *VAR_4, CMS_RecipientInfo *VAR_5)
{
    int VAR_6 = 0;

    X509_ALGOR *VAR_7, *VAR_8 = ((void*)0);
    ASN1_OCTET_STRING *VAR_9;
    const unsigned char *VAR_10;
    unsigned char *VAR_11 = ((void*)0);
    int VAR_12, VAR_13;
    const EVP_CIPHER *VAR_14;
    EVP_CIPHER_CTX *VAR_15;

    if (!FUNC_0(VAR_5, &VAR_7, &VAR_9))
        return 0;

    if (!FUNC_15(VAR_4, FUNC_11(VAR_7->algorithm))) {
        FUNC_3(VAR_0, VAR_1);
        return 0;
    }

    if (VAR_7->parameter->type != VAR_3)
        return 0;

    VAR_10 = VAR_7->parameter->value.sequence->data;
    VAR_12 = VAR_7->parameter->value.sequence->length;
    VAR_8 = FUNC_14(((void*)0), &VAR_10, VAR_12);
    if (!VAR_8)
        goto err;
    VAR_15 = FUNC_1(VAR_5);
    if (!VAR_15)
        goto err;
    VAR_14 = FUNC_10(VAR_8->algorithm);
    if (!VAR_14 || FUNC_6(VAR_14) != VAR_2)
        goto err;
    if (!FUNC_7(VAR_15, VAR_14, ((void*)0), ((void*)0), ((void*)0)))
        goto err;
    if (FUNC_5(VAR_15, VAR_8->parameter) <= 0)
        goto err;

    VAR_13 = FUNC_4(VAR_15);
    if (FUNC_9(VAR_4, VAR_13) <= 0)
        goto err;

    VAR_12 = FUNC_2(&VAR_11, VAR_8, VAR_9, VAR_13);

    if (!VAR_12)
        goto err;

    if (FUNC_8(VAR_4, VAR_11, VAR_12) <= 0)
        goto err;
    VAR_11 = ((void*)0);

    VAR_6 = 1;
 err:
    FUNC_13(VAR_8);
    FUNC_12(VAR_11);
    return VAR_6;
}
