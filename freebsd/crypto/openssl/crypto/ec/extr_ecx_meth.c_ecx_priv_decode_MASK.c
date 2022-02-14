
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int X509_ALGOR ;
struct TYPE_6__ {TYPE_1__* ameth; } ;
struct TYPE_5__ {int pkey_id; } ;
typedef int PKCS8_PRIV_KEY_INFO ;
typedef TYPE_2__ EVP_PKEY ;
typedef int ASN1_OCTET_STRING ;


 int FUNC_0 (int *) ;
 unsigned char* FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int VAR_0 ;
 int FUNC_3 (int *,unsigned char const**,int*,int const**,int const*) ;
 int * FUNC_4 (int *,unsigned char const**,int) ;
 int FUNC_5 (TYPE_2__*,int ,int const*,unsigned char const*,int,int ) ;

__attribute__((used)) static int FUNC_6(EVP_PKEY *VAR_1, const PKCS8_PRIV_KEY_INFO *VAR_2)
{
    const unsigned char *VAR_3;
    int VAR_4;
    ASN1_OCTET_STRING *VAR_5 = ((void*)0);
    const X509_ALGOR *VAR_6;
    int VAR_7;

    if (!FUNC_3(((void*)0), &VAR_3, &VAR_4, &VAR_6, VAR_2))
        return 0;

    VAR_5 = FUNC_4(((void*)0), &VAR_3, VAR_4);
    if (VAR_5 == ((void*)0)) {
        VAR_3 = ((void*)0);
        VAR_4 = 0;
    } else {
        VAR_3 = FUNC_1(VAR_5);
        VAR_4 = FUNC_2(VAR_5);
    }

    VAR_7 = FUNC_5(VAR_1, VAR_1->ameth->pkey_id, VAR_6, VAR_3, VAR_4, VAR_0);
    FUNC_0(VAR_5);
    return VAR_7;
}
