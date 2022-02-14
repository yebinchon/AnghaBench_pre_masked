
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int pmd; int qbits; int nbits; } ;
struct TYPE_5__ {scalar_t__ pkey_gencb; TYPE_2__* data; } ;
typedef TYPE_1__ EVP_PKEY_CTX ;
typedef int EVP_PKEY ;
typedef TYPE_2__ DSA_PKEY_CTX ;
typedef int DSA ;
typedef int BN_GENCB ;


 int FUNC_0 (int *) ;
 int * FUNC_1 () ;
 int FUNC_2 (int *) ;
 int * FUNC_3 () ;
 int FUNC_4 (int *,int *) ;
 int FUNC_5 (int *,int ,int ,int ,int *,int ,int *,int *,int *,int *) ;
 int FUNC_6 (int *,TYPE_1__*) ;

__attribute__((used)) static int FUNC_7(EVP_PKEY_CTX *VAR_0, EVP_PKEY *VAR_1)
{
    DSA *VAR_2 = ((void*)0);
    DSA_PKEY_CTX *VAR_3 = VAR_0->data;
    BN_GENCB *VAR_4;
    int VAR_5;

    if (VAR_0->pkey_gencb) {
        VAR_4 = FUNC_1();
        if (VAR_4 == ((void*)0))
            return 0;
        FUNC_6(VAR_4, VAR_0);
    } else
        VAR_4 = ((void*)0);
    VAR_2 = FUNC_3();
    if (VAR_2 == ((void*)0)) {
        FUNC_0(VAR_4);
        return 0;
    }
    VAR_5 = FUNC_5(VAR_2, VAR_3->nbits, VAR_3->qbits, VAR_3->pmd,
                               ((void*)0), 0, ((void*)0), ((void*)0), ((void*)0), VAR_4);
    FUNC_0(VAR_4);
    if (VAR_5)
        FUNC_4(VAR_1, VAR_2);
    else
        FUNC_2(VAR_2);
    return VAR_5;
}
