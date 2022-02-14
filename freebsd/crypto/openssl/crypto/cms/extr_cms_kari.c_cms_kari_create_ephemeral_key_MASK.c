
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int * pctx; } ;
typedef int EVP_PKEY_CTX ;
typedef int EVP_PKEY ;
typedef TYPE_1__ CMS_KeyAgreeRecipientInfo ;


 int FUNC_0 (int *) ;
 int * FUNC_1 (int *,int *) ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int *,int **) ;
 scalar_t__ FUNC_5 (int *) ;

__attribute__((used)) static int FUNC_6(CMS_KeyAgreeRecipientInfo *VAR_0,
                                         EVP_PKEY *VAR_1)
{
    EVP_PKEY_CTX *VAR_2 = ((void*)0);
    EVP_PKEY *VAR_3 = ((void*)0);
    int VAR_4 = 0;
    VAR_2 = FUNC_1(VAR_1, ((void*)0));
    if (!VAR_2)
        goto err;
    if (FUNC_5(VAR_2) <= 0)
        goto err;
    if (FUNC_4(VAR_2, &VAR_3) <= 0)
        goto err;
    FUNC_0(VAR_2);
    VAR_2 = FUNC_1(VAR_3, ((void*)0));
    if (!VAR_2)
        goto err;
    if (FUNC_2(VAR_2) <= 0)
        goto err;
    VAR_0->pctx = VAR_2;
    VAR_4 = 1;
 err:
    if (!VAR_4)
        FUNC_0(VAR_2);
    FUNC_3(VAR_3);
    return VAR_4;
}
