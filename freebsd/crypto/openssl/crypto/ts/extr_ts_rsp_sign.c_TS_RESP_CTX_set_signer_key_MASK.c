
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int * signer_key; } ;
typedef TYPE_1__ TS_RESP_CTX ;
typedef int EVP_PKEY ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

int FUNC_2(TS_RESP_CTX *VAR_0, EVP_PKEY *VAR_1)
{
    FUNC_0(VAR_0->signer_key);
    VAR_0->signer_key = VAR_1;
    FUNC_1(VAR_0->signer_key);

    return 1;
}
