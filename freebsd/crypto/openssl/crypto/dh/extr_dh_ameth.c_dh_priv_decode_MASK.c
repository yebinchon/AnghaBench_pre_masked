
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef int X509_ALGOR ;
struct TYPE_15__ {unsigned char* data; int length; } ;
struct TYPE_14__ {int * priv_key; } ;
struct TYPE_13__ {TYPE_1__* ameth; } ;
struct TYPE_12__ {int pkey_id; } ;
typedef int PKCS8_PRIV_KEY_INFO ;
typedef TYPE_2__ EVP_PKEY ;
typedef TYPE_3__ DH ;
typedef TYPE_4__ ASN1_STRING ;
typedef int ASN1_INTEGER ;


 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int *) ;
 int * FUNC_2 () ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_3 (TYPE_3__*) ;
 int FUNC_4 (TYPE_3__*) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (TYPE_2__*,int ,TYPE_3__*) ;
 int VAR_2 ;
 int FUNC_7 (int *,unsigned char const**,int*,int const**,int const*) ;
 int VAR_3 ;
 int FUNC_8 (int *,int*,void const**,int const*) ;
 int * FUNC_9 (int *,unsigned char const**,int) ;
 TYPE_3__* FUNC_10 (TYPE_2__*,unsigned char const**,int) ;

__attribute__((used)) static int FUNC_11(EVP_PKEY *VAR_4, const PKCS8_PRIV_KEY_INFO *VAR_5)
{
    const unsigned char *VAR_6, *VAR_7;
    int VAR_8, VAR_9;
    int VAR_10;
    const void *VAR_11;
    const ASN1_STRING *VAR_12;
    const X509_ALGOR *VAR_13;
    ASN1_INTEGER *VAR_14 = ((void*)0);

    DH *VAR_15 = ((void*)0);

    if (!FUNC_7(((void*)0), &VAR_6, &VAR_8, &VAR_13, VAR_5))
        return 0;

    FUNC_8(((void*)0), &VAR_10, &VAR_11, VAR_13);

    if (VAR_10 != VAR_3)
        goto decerr;
    if ((VAR_14 = FUNC_9(((void*)0), &VAR_6, VAR_8)) == ((void*)0))
        goto decerr;

    VAR_12 = VAR_11;
    VAR_7 = VAR_12->data;
    VAR_9 = VAR_12->length;
    if ((VAR_15 = FUNC_10(VAR_4, &VAR_7, VAR_9)) == ((void*)0))
        goto decerr;


    if ((VAR_15->priv_key = FUNC_2()) == ((void*)0)
        || !FUNC_0(VAR_14, VAR_15->priv_key)) {
        FUNC_5(VAR_0, VAR_1);
        goto dherr;
    }

    if (!FUNC_4(VAR_15))
        goto dherr;

    FUNC_6(VAR_4, VAR_4->ameth->pkey_id, VAR_15);

    FUNC_1(VAR_14);

    return 1;

 decerr:
    FUNC_5(VAR_0, VAR_2);
 dherr:
    FUNC_3(VAR_15);
    FUNC_1(VAR_14);
    return 0;
}
