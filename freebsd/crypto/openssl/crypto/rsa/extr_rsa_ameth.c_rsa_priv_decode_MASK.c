
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int X509_ALGOR ;
struct TYPE_6__ {TYPE_1__* ameth; } ;
struct TYPE_5__ {int pkey_id; } ;
typedef int RSA ;
typedef int PKCS8_PRIV_KEY_INFO ;
typedef TYPE_2__ EVP_PKEY ;


 int VAR_0 ;
 int FUNC_0 (TYPE_2__*,int ,int *) ;
 int FUNC_1 (int *,unsigned char const**,int*,int const**,int const*) ;
 int VAR_1 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ,int ) ;
 int * FUNC_4 (int *,unsigned char const**,int) ;
 int FUNC_5 (int *,int const*) ;

__attribute__((used)) static int FUNC_6(EVP_PKEY *VAR_2, const PKCS8_PRIV_KEY_INFO *VAR_3)
{
    const unsigned char *VAR_4;
    RSA *VAR_5;
    int VAR_6;
    const X509_ALGOR *VAR_7;

    if (!FUNC_1(((void*)0), &VAR_4, &VAR_6, &VAR_7, VAR_3))
        return 0;
    VAR_5 = FUNC_4(((void*)0), &VAR_4, VAR_6);
    if (VAR_5 == ((void*)0)) {
        FUNC_3(VAR_1, VAR_0);
        return 0;
    }
    if (!FUNC_5(VAR_5, VAR_7)) {
        FUNC_2(VAR_5);
        return 0;
    }
    FUNC_0(VAR_2, VAR_2->ameth->pkey_id, VAR_5);
    return 1;
}
