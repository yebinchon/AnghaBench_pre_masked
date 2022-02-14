
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int X509_PUBKEY ;
struct TYPE_13__ {scalar_t__ length; int data; } ;
struct TYPE_12__ {int pub_key; scalar_t__ g; scalar_t__ q; scalar_t__ p; } ;
struct TYPE_10__ {TYPE_3__* dsa; } ;
struct TYPE_11__ {scalar_t__ save_parameters; TYPE_1__ pkey; } ;
typedef TYPE_2__ EVP_PKEY ;
typedef TYPE_3__ DSA ;
typedef TYPE_4__ ASN1_STRING ;
typedef int ASN1_OBJECT ;
typedef int ASN1_INTEGER ;


 int FUNC_0 (int *) ;
 int FUNC_1 (TYPE_4__*) ;
 TYPE_4__* FUNC_2 () ;
 int * FUNC_3 (int ,int *) ;
 int VAR_0 ;
 int FUNC_4 (int ,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int * FUNC_5 (int ) ;
 int FUNC_6 (unsigned char*) ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_7 (int *,int *,int,TYPE_4__*,unsigned char*,int) ;
 int FUNC_8 (int *,unsigned char**) ;
 scalar_t__ FUNC_9 (TYPE_3__*,int *) ;

__attribute__((used)) static int FUNC_10(X509_PUBKEY *VAR_5, const EVP_PKEY *VAR_6)
{
    DSA *VAR_7;
    int VAR_8;
    unsigned char *VAR_9 = ((void*)0);
    int VAR_10;
    ASN1_STRING *VAR_11 = ((void*)0);
    ASN1_INTEGER *VAR_12 = ((void*)0);
    ASN1_OBJECT *VAR_13;

    VAR_7 = VAR_6->pkey.dsa;
    if (VAR_6->save_parameters && VAR_7->p && VAR_7->q && VAR_7->g) {
        VAR_11 = FUNC_2();
        if (VAR_11 == ((void*)0)) {
            FUNC_4(VAR_0, VAR_1);
            goto err;
        }
        VAR_11->length = FUNC_9(VAR_7, &VAR_11->data);
        if (VAR_11->length <= 0) {
            FUNC_4(VAR_0, VAR_1);
            goto err;
        }
        VAR_8 = VAR_3;
    } else
        VAR_8 = VAR_4;

    VAR_12 = FUNC_3(VAR_7->pub_key, ((void*)0));

    if (VAR_12 == ((void*)0)) {
        FUNC_4(VAR_0, VAR_1);
        goto err;
    }

    VAR_10 = FUNC_8(VAR_12, &VAR_9);
    FUNC_0(VAR_12);

    if (VAR_10 <= 0) {
        FUNC_4(VAR_0, VAR_1);
        goto err;
    }

    VAR_13 = FUNC_5(VAR_2);
    if (VAR_13 == ((void*)0))
        goto err;

    if (FUNC_7(VAR_5, VAR_13, VAR_8, VAR_11, VAR_9, VAR_10))
        return 1;

 err:
    FUNC_6(VAR_9);
    FUNC_1(VAR_11);

    return 0;
}
