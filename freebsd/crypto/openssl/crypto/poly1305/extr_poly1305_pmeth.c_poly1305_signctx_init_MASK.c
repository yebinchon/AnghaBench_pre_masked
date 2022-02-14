
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_11__ {scalar_t__ length; int data; } ;
struct TYPE_10__ {TYPE_2__* pkey; TYPE_3__* data; } ;
struct TYPE_9__ {int ctx; } ;
struct TYPE_7__ {scalar_t__ ptr; } ;
struct TYPE_8__ {TYPE_1__ pkey; } ;
typedef TYPE_3__ POLY1305_PKEY_CTX ;
typedef TYPE_4__ EVP_PKEY_CTX ;
typedef int EVP_MD_CTX ;
typedef TYPE_5__ ASN1_OCTET_STRING ;


 int VAR_0 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int *,int ) ;
 scalar_t__ VAR_1 ;
 int FUNC_2 (int *,int ) ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_3(EVP_PKEY_CTX *VAR_3, EVP_MD_CTX *VAR_4)
{
    POLY1305_PKEY_CTX *VAR_5 = VAR_3->data;
    ASN1_OCTET_STRING *VAR_6 = (ASN1_OCTET_STRING *)VAR_3->pkey->pkey.ptr;

    if (VAR_6->length != VAR_1)
        return 0;
    FUNC_0(VAR_4, VAR_0);
    FUNC_1(VAR_4, VAR_2);
    FUNC_2(&VAR_5->ctx, VAR_6->data);
    return 1;
}
