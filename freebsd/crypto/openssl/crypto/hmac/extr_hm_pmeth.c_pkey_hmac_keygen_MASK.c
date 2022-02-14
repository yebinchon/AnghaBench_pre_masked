
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_4__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {int data; } ;
struct TYPE_6__ {TYPE_1__* data; } ;
struct TYPE_5__ {TYPE_4__ ktmp; } ;
typedef TYPE_1__ HMAC_PKEY_CTX ;
typedef TYPE_2__ EVP_PKEY_CTX ;
typedef int EVP_PKEY ;
typedef int ASN1_OCTET_STRING ;


 int * FUNC_0 (TYPE_4__*) ;
 int VAR_0 ;
 int FUNC_1 (int *,int ,int *) ;

__attribute__((used)) static int FUNC_2(EVP_PKEY_CTX *VAR_1, EVP_PKEY *VAR_2)
{
    ASN1_OCTET_STRING *VAR_3 = ((void*)0);
    HMAC_PKEY_CTX *VAR_4 = VAR_1->data;
    if (!VAR_4->ktmp.data)
        return 0;
    VAR_3 = FUNC_0(&VAR_4->ktmp);
    if (!VAR_3)
        return 0;
    FUNC_1(VAR_2, VAR_0, VAR_3);

    return 1;
}
