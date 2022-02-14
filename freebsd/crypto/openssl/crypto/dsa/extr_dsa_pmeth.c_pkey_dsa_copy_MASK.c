
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int md; int pmd; int qbits; int nbits; } ;
struct TYPE_6__ {TYPE_2__* data; } ;
typedef TYPE_1__ EVP_PKEY_CTX ;
typedef TYPE_2__ DSA_PKEY_CTX ;


 int FUNC_0 (TYPE_1__*) ;

__attribute__((used)) static int FUNC_1(EVP_PKEY_CTX *VAR_0, EVP_PKEY_CTX *VAR_1)
{
    DSA_PKEY_CTX *VAR_2, *VAR_3;

    if (!FUNC_0(VAR_0))
        return 0;
    VAR_3 = VAR_1->data;
    VAR_2 = VAR_0->data;
    VAR_2->nbits = VAR_3->nbits;
    VAR_2->qbits = VAR_3->qbits;
    VAR_2->pmd = VAR_3->pmd;
    VAR_2->md = VAR_3->md;
    return 1;
}
