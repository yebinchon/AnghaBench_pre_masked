
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_14__ {TYPE_2__* pkey; TYPE_3__* data; } ;
struct TYPE_13__ {int * pss; } ;
struct TYPE_12__ {int min_saltlen; int saltlen; int const* mgf1md; int const* md; } ;
struct TYPE_10__ {TYPE_4__* rsa; } ;
struct TYPE_11__ {TYPE_1__ pkey; } ;
typedef TYPE_3__ RSA_PKEY_CTX ;
typedef TYPE_4__ RSA ;
typedef TYPE_5__ EVP_PKEY_CTX ;
typedef int EVP_MD ;


 int FUNC_0 (int const*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (TYPE_4__*) ;
 int FUNC_2 (TYPE_4__*) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (TYPE_5__*) ;
 int FUNC_5 (int *,int const**,int const**,int*) ;

__attribute__((used)) static int FUNC_6(EVP_PKEY_CTX *VAR_2)
{
    RSA *VAR_3;
    RSA_PKEY_CTX *VAR_4 = VAR_2->data;
    const EVP_MD *VAR_5;
    const EVP_MD *VAR_6;
    int VAR_7, VAR_8;


    if (!FUNC_4(VAR_2))
        return 0;
    VAR_3 = VAR_2->pkey->pkey.rsa;

    if (VAR_3->pss == ((void*)0))
        return 1;

    if (!FUNC_5(VAR_3->pss, &VAR_5, &VAR_6, &VAR_7))
        return 0;


    VAR_8 = FUNC_2(VAR_3) - FUNC_0(VAR_5);
    if ((FUNC_1(VAR_3) & 0x7) == 1)
        VAR_8--;
    if (VAR_7 > VAR_8) {
        FUNC_3(VAR_0, VAR_1);
        return 0;
    }

    VAR_4->min_saltlen = VAR_7;






    VAR_4->md = VAR_5;
    VAR_4->mgf1md = VAR_6;
    VAR_4->saltlen = VAR_7;

    return 1;
}
