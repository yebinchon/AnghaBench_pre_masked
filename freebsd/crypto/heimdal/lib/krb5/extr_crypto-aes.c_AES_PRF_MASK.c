
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_24__ TYPE_8__ ;
typedef struct TYPE_23__ TYPE_7__ ;
typedef struct TYPE_22__ TYPE_6__ ;
typedef struct TYPE_21__ TYPE_5__ ;
typedef struct TYPE_20__ TYPE_4__ ;
typedef struct TYPE_19__ TYPE_3__ ;
typedef struct TYPE_18__ TYPE_2__ ;
typedef struct TYPE_17__ TYPE_1__ ;


struct _krb5_checksum_type {scalar_t__ checksumsize; scalar_t__ (* checksum ) (int ,int *,int ,scalar_t__,int ,TYPE_8__*) ;int type; } ;
struct TYPE_19__ {int data; } ;
struct TYPE_21__ {TYPE_3__ keyvalue; } ;
typedef TYPE_5__ krb5_keyblock ;
typedef scalar_t__ krb5_error_code ;
struct TYPE_22__ {scalar_t__ length; int data; } ;
typedef TYPE_6__ krb5_data ;
typedef TYPE_7__* krb5_crypto ;
typedef int krb5_context ;
struct TYPE_24__ {TYPE_6__ checksum; int cksumtype; } ;
struct TYPE_17__ {int key; } ;
struct TYPE_23__ {TYPE_4__* et; TYPE_1__ key; } ;
struct TYPE_20__ {scalar_t__ blocksize; TYPE_2__* keytype; int type; struct _krb5_checksum_type* checksum; } ;
struct TYPE_18__ {int * (* evp ) () ;} ;
typedef int EVP_CIPHER_CTX ;
typedef int EVP_CIPHER ;
typedef TYPE_8__ Checksum ;


 int FUNC_0 (int *) ;
 int * FUNC_1 () ;
 int FUNC_2 (int *,int ,int ,scalar_t__) ;
 int FUNC_3 (int *,int const*,int *,int ,int *,int) ;
 int FUNC_4 (char*,char*) ;
 int FUNC_5 (int ,char*) ;
 scalar_t__ FUNC_6 (TYPE_6__*,scalar_t__) ;
 int FUNC_7 (TYPE_6__*) ;
 scalar_t__ FUNC_8 (int ,int ,int ,char*,int,TYPE_5__**) ;
 int FUNC_9 (int ,TYPE_5__*) ;
 int FUNC_10 (int ,scalar_t__,int ) ;
 scalar_t__ FUNC_11 (int ,int *,int ,scalar_t__,int ,TYPE_8__*) ;
 int * FUNC_12 () ;

__attribute__((used)) static krb5_error_code
FUNC_13(krb5_context VAR_0,
 krb5_crypto VAR_1,
 const krb5_data *VAR_2,
 krb5_data *VAR_3)
{
    struct _krb5_checksum_type *VAR_4 = VAR_1->et->checksum;
    krb5_error_code VAR_5;
    Checksum VAR_6;
    krb5_keyblock *VAR_7;

    VAR_6.cksumtype = VAR_4->type;
    VAR_5 = FUNC_6(&VAR_6.checksum, VAR_4->checksumsize);
    if (VAR_5) {
 FUNC_10(VAR_0, VAR_5, FUNC_4("malloc: out memory", ""));
 return VAR_5;
    }

    VAR_5 = (*VAR_4->checksum)(VAR_0, ((void*)0), VAR_2->data, VAR_2->length, 0, &VAR_6);
    if (VAR_5) {
 FUNC_7(&VAR_6.checksum);
 return VAR_5;
    }

    if (VAR_6.checksum.length < VAR_1->et->blocksize)
 FUNC_5(VAR_0, "internal prf error");

    VAR_7 = ((void*)0);
    VAR_5 = FUNC_8(VAR_0, VAR_1->key.key,
     VAR_1->et->type, "prf", 3, &VAR_7);
    if (VAR_5)
 FUNC_5(VAR_0, "krb5_derive_key");

    VAR_5 = FUNC_6(VAR_3, VAR_1->et->blocksize);
    if (VAR_5)
 FUNC_5(VAR_0, "malloc failed");

    {
 const EVP_CIPHER *VAR_8 = (*VAR_1->et->keytype->evp)();
 EVP_CIPHER_CTX *VAR_9;

 VAR_9 = FUNC_1();
 if (VAR_9 == ((void*)0))
     FUNC_5(VAR_0, "malloc failed");
 FUNC_3(VAR_9, VAR_8, ((void*)0), VAR_7->keyvalue.data, ((void*)0), 1);
 FUNC_2(VAR_9, VAR_3->data, VAR_6.checksum.data,
     VAR_1->et->blocksize);
 FUNC_0(VAR_9);
    }

    FUNC_7(&VAR_6.checksum);
    FUNC_9(VAR_0, VAR_7);

    return VAR_5;
}
