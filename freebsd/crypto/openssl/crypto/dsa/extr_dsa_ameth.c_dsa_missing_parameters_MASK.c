
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {int * g; int * q; int * p; } ;
struct TYPE_5__ {TYPE_3__* dsa; } ;
struct TYPE_6__ {TYPE_1__ pkey; } ;
typedef TYPE_2__ EVP_PKEY ;
typedef TYPE_3__ DSA ;



__attribute__((used)) static int FUNC_0(const EVP_PKEY *VAR_0)
{
    DSA *VAR_1;
    VAR_1 = VAR_0->pkey.dsa;
    if (VAR_1 == ((void*)0) || VAR_1->p == ((void*)0) || VAR_1->q == ((void*)0) || VAR_1->g == ((void*)0))
        return 1;
    return 0;
}
