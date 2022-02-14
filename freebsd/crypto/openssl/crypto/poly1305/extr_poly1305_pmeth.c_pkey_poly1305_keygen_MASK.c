
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int ktmp; } ;
typedef TYPE_1__ POLY1305_PKEY_CTX ;
typedef int EVP_PKEY_CTX ;
typedef int EVP_PKEY ;
typedef int ASN1_OCTET_STRING ;


 int * FUNC_0 (int *) ;
 int * FUNC_1 (int *) ;
 TYPE_1__* FUNC_2 (int *) ;
 int FUNC_3 (int *,int *) ;

__attribute__((used)) static int FUNC_4(EVP_PKEY_CTX *VAR_0, EVP_PKEY *VAR_1)
{
    ASN1_OCTET_STRING *VAR_2;
    POLY1305_PKEY_CTX *VAR_3 = FUNC_2(VAR_0);

    if (FUNC_1(&VAR_3->ktmp) == ((void*)0))
        return 0;
    VAR_2 = FUNC_0(&VAR_3->ktmp);
    if (VAR_2 == ((void*)0))
        return 0;
    return FUNC_3(VAR_1, VAR_2);
}
