
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_13__ {TYPE_3__* parameter; int algorithm; } ;
typedef TYPE_4__ X509_ALGOR ;
struct TYPE_14__ {TYPE_4__* pSourceFunc; int hashFunc; int maskHash; } ;
struct TYPE_11__ {TYPE_1__* octet_string; } ;
struct TYPE_12__ {scalar_t__ type; TYPE_2__ value; } ;
struct TYPE_10__ {unsigned char* data; int length; } ;
typedef TYPE_5__ RSA_OAEP_PARAMS ;
typedef int EVP_PKEY_CTX ;
typedef int EVP_MD ;
typedef int CMS_RecipientInfo ;


 int * FUNC_0 (int *) ;
 int FUNC_1 (int *,int *,int *,TYPE_4__**) ;
 scalar_t__ FUNC_2 (int *,unsigned char*,int) ;
 scalar_t__ FUNC_3 (int *,int const*) ;
 scalar_t__ FUNC_4 (int *,int const*) ;
 scalar_t__ FUNC_5 (int *,int ) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_6 (int ) ;
 int VAR_3 ;
 int FUNC_7 (TYPE_5__*) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_8 (int ,int ) ;
 scalar_t__ VAR_9 ;
 int * FUNC_9 (int ) ;
 TYPE_5__* FUNC_10 (TYPE_4__*) ;

__attribute__((used)) static int FUNC_11(CMS_RecipientInfo *VAR_10)
{
    EVP_PKEY_CTX *VAR_11;
    X509_ALGOR *VAR_12;
    int VAR_13;
    int VAR_14 = -1;
    unsigned char *VAR_15 = ((void*)0);
    int VAR_16 = 0;
    const EVP_MD *VAR_17 = ((void*)0), *VAR_18 = ((void*)0);
    RSA_OAEP_PARAMS *VAR_19;

    VAR_11 = FUNC_0(VAR_10);
    if (VAR_11 == ((void*)0))
        return 0;
    if (!FUNC_1(VAR_10, ((void*)0), ((void*)0), &VAR_12))
        return -1;
    VAR_13 = FUNC_6(VAR_12->algorithm);
    if (VAR_13 == VAR_1)
        return 1;
    if (VAR_13 != VAR_2) {
        FUNC_8(VAR_3, VAR_7);
        return -1;
    }

    VAR_19 = FUNC_10(VAR_12);

    if (VAR_19 == ((void*)0)) {
        FUNC_8(VAR_3, VAR_6);
        goto err;
    }

    VAR_17 = FUNC_9(VAR_19->maskHash);
    if (VAR_17 == ((void*)0))
        goto err;
    VAR_18 = FUNC_9(VAR_19->hashFunc);
    if (VAR_18 == ((void*)0))
        goto err;

    if (VAR_19->pSourceFunc != ((void*)0)) {
        X509_ALGOR *VAR_20 = VAR_19->pSourceFunc;

        if (FUNC_6(VAR_20->algorithm) != VAR_0) {
            FUNC_8(VAR_3, VAR_8);
            goto err;
        }
        if (VAR_20->parameter->type != VAR_9) {
            FUNC_8(VAR_3, VAR_5);
            goto err;
        }

        VAR_15 = VAR_20->parameter->value.octet_string->data;

        VAR_20->parameter->value.octet_string->data = ((void*)0);
        VAR_16 = VAR_20->parameter->value.octet_string->length;
    }

    if (FUNC_5(VAR_11, VAR_4) <= 0)
        goto err;
    if (FUNC_4(VAR_11, VAR_18) <= 0)
        goto err;
    if (FUNC_3(VAR_11, VAR_17) <= 0)
        goto err;
    if (FUNC_2(VAR_11, VAR_15, VAR_16) <= 0)
        goto err;

    VAR_14 = 1;

 err:
    FUNC_7(VAR_19);
    return VAR_14;
}
