
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_11__ {int length; int data; } ;
struct TYPE_10__ {int engine; TYPE_2__* pkey; TYPE_3__* data; } ;
struct TYPE_9__ {void* md; int ctx; int ktmp; } ;
struct TYPE_7__ {scalar_t__ ptr; } ;
struct TYPE_8__ {TYPE_1__ pkey; } ;
typedef TYPE_3__ HMAC_PKEY_CTX ;
typedef TYPE_4__ EVP_PKEY_CTX ;
typedef TYPE_5__ ASN1_OCTET_STRING ;


 int FUNC_0 (int *,void*,int) ;



 int FUNC_1 (int ,int ,int ,void*,int ) ;

__attribute__((used)) static int FUNC_2(EVP_PKEY_CTX *VAR_0, int VAR_1, int VAR_2, void *VAR_3)
{
    HMAC_PKEY_CTX *VAR_4 = VAR_0->data;
    ASN1_OCTET_STRING *VAR_5;
    switch (VAR_1) {

    case 128:
        if ((!VAR_3 && VAR_2 > 0) || (VAR_2 < -1))
            return 0;
        if (!FUNC_0(&VAR_4->ktmp, VAR_3, VAR_2))
            return 0;
        break;

    case 129:
        VAR_4->md = VAR_3;
        break;

    case 130:
        VAR_5 = (ASN1_OCTET_STRING *)VAR_0->pkey->pkey.ptr;
        if (!FUNC_1(VAR_4->ctx, VAR_5->data, VAR_5->length, VAR_4->md,
                          VAR_0->engine))
            return 0;
        break;

    default:
        return -2;

    }
    return 1;
}
