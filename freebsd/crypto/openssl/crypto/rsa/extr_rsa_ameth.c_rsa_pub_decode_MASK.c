
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int X509_PUBKEY ;
typedef int X509_ALGOR ;
struct TYPE_6__ {TYPE_1__* ameth; } ;
struct TYPE_5__ {int pkey_id; } ;
typedef int RSA ;
typedef TYPE_2__ EVP_PKEY ;


 int VAR_0 ;
 int FUNC_0 (TYPE_2__*,int ,int *) ;
 int VAR_1 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int *,unsigned char const**,int*,int **,int *) ;
 int * FUNC_4 (int *,unsigned char const**,int) ;
 int FUNC_5 (int *,int *) ;

__attribute__((used)) static int FUNC_6(EVP_PKEY *VAR_2, X509_PUBKEY *VAR_3)
{
    const unsigned char *VAR_4;
    int VAR_5;
    X509_ALGOR *VAR_6;
    RSA *VAR_7 = ((void*)0);

    if (!FUNC_3(((void*)0), &VAR_4, &VAR_5, &VAR_6, VAR_3))
        return 0;
    if ((VAR_7 = FUNC_4(((void*)0), &VAR_4, VAR_5)) == ((void*)0)) {
        FUNC_2(VAR_1, VAR_0);
        return 0;
    }
    if (!FUNC_5(VAR_7, VAR_6)) {
        FUNC_1(VAR_7);
        return 0;
    }
    if (!FUNC_0(VAR_2, VAR_2->ameth->pkey_id, VAR_7)) {
        FUNC_1(VAR_7);
        return 0;
    }
    return 1;
}
