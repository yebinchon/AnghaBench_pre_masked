
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_6__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_15__ {int priv_key; } ;
struct TYPE_14__ {scalar_t__ length; int type; int data; } ;
struct TYPE_11__ {TYPE_6__* dh; } ;
struct TYPE_13__ {TYPE_2__* ameth; TYPE_1__ pkey; } ;
struct TYPE_12__ {int pkey_id; } ;
typedef int PKCS8_PRIV_KEY_INFO ;
typedef TYPE_3__ EVP_PKEY ;
typedef TYPE_4__ ASN1_STRING ;
typedef int ASN1_INTEGER ;


 int FUNC_0 (int *) ;
 int FUNC_1 (TYPE_4__*) ;
 TYPE_4__* FUNC_2 () ;
 int * FUNC_3 (int ,int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_4 (int ,int ) ;
 int VAR_2 ;
 int FUNC_5 (int ) ;
 int FUNC_6 (unsigned char*) ;
 int FUNC_7 (int *,int ,int ,int ,TYPE_4__*,unsigned char*,int) ;
 int VAR_3 ;
 int FUNC_8 (int *,unsigned char**) ;
 scalar_t__ FUNC_9 (TYPE_3__ const*,TYPE_6__*,int *) ;

__attribute__((used)) static int FUNC_10(PKCS8_PRIV_KEY_INFO *VAR_4, const EVP_PKEY *VAR_5)
{
    ASN1_STRING *VAR_6 = ((void*)0);
    ASN1_INTEGER *VAR_7 = ((void*)0);
    unsigned char *VAR_8 = ((void*)0);
    int VAR_9;

    VAR_6 = FUNC_2();

    if (VAR_6 == ((void*)0)) {
        FUNC_4(VAR_0, VAR_2);
        goto err;
    }

    VAR_6->length = FUNC_9(VAR_5, VAR_5->pkey.dh, &VAR_6->data);
    if (VAR_6->length <= 0) {
        FUNC_4(VAR_0, VAR_2);
        goto err;
    }
    VAR_6->type = VAR_3;


    VAR_7 = FUNC_3(VAR_5->pkey.dh->priv_key, ((void*)0));

    if (!VAR_7) {
        FUNC_4(VAR_0, VAR_1);
        goto err;
    }

    VAR_9 = FUNC_8(VAR_7, &VAR_8);

    FUNC_0(VAR_7);
    VAR_7 = ((void*)0);

    if (!FUNC_7(VAR_4, FUNC_5(VAR_5->ameth->pkey_id), 0,
                         VAR_3, VAR_6, VAR_8, VAR_9))
        goto err;

    return 1;

 err:
    FUNC_6(VAR_8);
    FUNC_1(VAR_6);
    FUNC_0(VAR_7);
    return 0;
}
