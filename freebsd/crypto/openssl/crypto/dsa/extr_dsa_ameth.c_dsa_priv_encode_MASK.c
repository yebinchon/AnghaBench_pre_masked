
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_12__ {int priv_key; } ;
struct TYPE_11__ {scalar_t__ length; int type; int data; } ;
struct TYPE_9__ {TYPE_4__* dsa; } ;
struct TYPE_10__ {TYPE_1__ pkey; } ;
typedef int PKCS8_PRIV_KEY_INFO ;
typedef TYPE_2__ EVP_PKEY ;
typedef TYPE_3__ ASN1_STRING ;
typedef int ASN1_INTEGER ;


 int FUNC_0 (int *) ;
 int FUNC_1 (TYPE_3__*) ;
 TYPE_3__* FUNC_2 () ;
 int * FUNC_3 (int ,int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_4 (int ,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_5 (int ) ;
 int FUNC_6 (unsigned char*) ;
 int FUNC_7 (int *,int ,int ,int ,TYPE_3__*,unsigned char*,int) ;
 int VAR_5 ;
 int FUNC_8 (int *,unsigned char**) ;
 scalar_t__ FUNC_9 (TYPE_4__*,int *) ;

__attribute__((used)) static int FUNC_10(PKCS8_PRIV_KEY_INFO *VAR_6, const EVP_PKEY *VAR_7)
{
    ASN1_STRING *VAR_8 = ((void*)0);
    ASN1_INTEGER *VAR_9 = ((void*)0);
    unsigned char *VAR_10 = ((void*)0);
    int VAR_11;

    if (!VAR_7->pkey.dsa || !VAR_7->pkey.dsa->priv_key) {
        FUNC_4(VAR_0, VAR_2);
        goto err;
    }

    VAR_8 = FUNC_2();

    if (VAR_8 == ((void*)0)) {
        FUNC_4(VAR_0, VAR_3);
        goto err;
    }

    VAR_8->length = FUNC_9(VAR_7->pkey.dsa, &VAR_8->data);
    if (VAR_8->length <= 0) {
        FUNC_4(VAR_0, VAR_3);
        goto err;
    }
    VAR_8->type = VAR_5;


    VAR_9 = FUNC_3(VAR_7->pkey.dsa->priv_key, ((void*)0));

    if (!VAR_9) {
        FUNC_4(VAR_0, VAR_1);
        goto err;
    }

    VAR_11 = FUNC_8(VAR_9, &VAR_10);

    FUNC_0(VAR_9);
    VAR_9 = ((void*)0);

    if (!FUNC_7(VAR_6, FUNC_5(VAR_4), 0,
                         VAR_5, VAR_8, VAR_10, VAR_11))
        goto err;

    return 1;

 err:
    FUNC_6(VAR_10);
    FUNC_1(VAR_8);
    FUNC_0(VAR_9);
    return 0;
}
