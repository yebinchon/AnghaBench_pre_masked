
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int * s; int * r; } ;
typedef TYPE_1__ ECDSA_SIG ;
typedef int BIGNUM ;


 int FUNC_0 (int *) ;

int FUNC_1(ECDSA_SIG *VAR_0, BIGNUM *VAR_1, BIGNUM *VAR_2)
{
    if (VAR_1 == ((void*)0) || VAR_2 == ((void*)0))
        return 0;
    FUNC_0(VAR_0->r);
    FUNC_0(VAR_0->s);
    VAR_0->r = VAR_1;
    VAR_0->s = VAR_2;
    return 1;
}
