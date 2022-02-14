
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int X509_PUBKEY ;
typedef int X509_ALGOR ;
struct TYPE_8__ {unsigned char* data; int length; } ;
struct TYPE_7__ {int * pub_key; } ;
typedef int EVP_PKEY ;
typedef TYPE_1__ DSA ;
typedef TYPE_2__ ASN1_STRING ;
typedef int ASN1_INTEGER ;


 int FUNC_0 (int *) ;
 int * FUNC_1 (int *,int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (TYPE_1__*) ;
 TYPE_1__* FUNC_3 () ;
 int FUNC_4 (int ,int ) ;
 int VAR_4 ;
 int FUNC_5 (int *,TYPE_1__*) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_6 (int *,int*,void const**,int *) ;
 int FUNC_7 (int *,unsigned char const**,int*,int **,int *) ;
 int * FUNC_8 (int *,unsigned char const**,int) ;
 TYPE_1__* FUNC_9 (int *,unsigned char const**,int) ;

__attribute__((used)) static int FUNC_10(EVP_PKEY *VAR_8, X509_PUBKEY *VAR_9)
{
    const unsigned char *VAR_10, *VAR_11;
    int VAR_12, VAR_13;
    int VAR_14;
    const void *VAR_15;
    const ASN1_STRING *VAR_16;
    X509_ALGOR *VAR_17;
    ASN1_INTEGER *VAR_18 = ((void*)0);

    DSA *VAR_19 = ((void*)0);

    if (!FUNC_7(((void*)0), &VAR_10, &VAR_12, &VAR_17, VAR_9))
        return 0;
    FUNC_6(((void*)0), &VAR_14, &VAR_15, VAR_17);

    if (VAR_14 == VAR_6) {
        VAR_16 = VAR_15;
        VAR_11 = VAR_16->data;
        VAR_13 = VAR_16->length;

        if ((VAR_19 = FUNC_9(((void*)0), &VAR_11, VAR_13)) == ((void*)0)) {
            FUNC_4(VAR_0, VAR_2);
            goto err;
        }

    } else if ((VAR_14 == VAR_5) || (VAR_14 == VAR_7)) {
        if ((VAR_19 = FUNC_3()) == ((void*)0)) {
            FUNC_4(VAR_0, VAR_4);
            goto err;
        }
    } else {
        FUNC_4(VAR_0, VAR_3);
        goto err;
    }

    if ((VAR_18 = FUNC_8(((void*)0), &VAR_10, VAR_12)) == ((void*)0)) {
        FUNC_4(VAR_0, VAR_2);
        goto err;
    }

    if ((VAR_19->pub_key = FUNC_1(VAR_18, ((void*)0))) == ((void*)0)) {
        FUNC_4(VAR_0, VAR_1);
        goto err;
    }

    FUNC_0(VAR_18);
    FUNC_5(VAR_8, VAR_19);
    return 1;

 err:
    FUNC_0(VAR_18);
    FUNC_2(VAR_19);
    return 0;

}
