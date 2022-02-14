
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_5__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {int * g; int * q; int * p; } ;
struct TYPE_6__ {TYPE_5__* dsa; } ;
struct TYPE_7__ {TYPE_1__ pkey; } ;
typedef TYPE_2__ EVP_PKEY ;
typedef int BIGNUM ;


 int * FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 TYPE_5__* FUNC_2 () ;

__attribute__((used)) static int FUNC_3(EVP_PKEY *VAR_0, const EVP_PKEY *VAR_1)
{
    BIGNUM *VAR_2;

    if (VAR_0->pkey.dsa == ((void*)0)) {
        VAR_0->pkey.dsa = FUNC_2();
        if (VAR_0->pkey.dsa == ((void*)0))
            return 0;
    }

    if ((VAR_2 = FUNC_0(VAR_1->pkey.dsa->p)) == ((void*)0))
        return 0;
    FUNC_1(VAR_0->pkey.dsa->p);
    VAR_0->pkey.dsa->p = VAR_2;

    if ((VAR_2 = FUNC_0(VAR_1->pkey.dsa->q)) == ((void*)0))
        return 0;
    FUNC_1(VAR_0->pkey.dsa->q);
    VAR_0->pkey.dsa->q = VAR_2;

    if ((VAR_2 = FUNC_0(VAR_1->pkey.dsa->g)) == ((void*)0))
        return 0;
    FUNC_1(VAR_0->pkey.dsa->g);
    VAR_0->pkey.dsa->g = VAR_2;
    return 1;
}
