
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int nbits; int qbits; int gentmp; int * md; int * pmd; } ;
struct TYPE_5__ {int keygen_info_count; int keygen_info; TYPE_2__* data; } ;
typedef TYPE_1__ EVP_PKEY_CTX ;
typedef TYPE_2__ DSA_PKEY_CTX ;


 TYPE_2__* FUNC_0 (int) ;

__attribute__((used)) static int FUNC_1(EVP_PKEY_CTX *VAR_0)
{
    DSA_PKEY_CTX *VAR_1 = FUNC_0(sizeof(*VAR_1));

    if (VAR_1 == ((void*)0))
        return 0;
    VAR_1->nbits = 2048;
    VAR_1->qbits = 224;
    VAR_1->pmd = ((void*)0);
    VAR_1->md = ((void*)0);

    VAR_0->data = VAR_1;
    VAR_0->keygen_info = VAR_1->gentmp;
    VAR_0->keygen_info_count = 2;

    return 1;
}
