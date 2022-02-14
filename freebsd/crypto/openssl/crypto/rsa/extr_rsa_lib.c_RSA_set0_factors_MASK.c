
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int * q; int * p; } ;
typedef TYPE_1__ RSA ;
typedef int BIGNUM ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int ) ;

int FUNC_2(RSA *VAR_1, BIGNUM *VAR_2, BIGNUM *VAR_3)
{



    if ((VAR_1->p == ((void*)0) && VAR_2 == ((void*)0))
        || (VAR_1->q == ((void*)0) && VAR_3 == ((void*)0)))
        return 0;

    if (VAR_2 != ((void*)0)) {
        FUNC_0(VAR_1->p);
        VAR_1->p = VAR_2;
        FUNC_1(VAR_1->p, VAR_0);
    }
    if (VAR_3 != ((void*)0)) {
        FUNC_0(VAR_1->q);
        VAR_1->q = VAR_3;
        FUNC_1(VAR_1->q, VAR_0);
    }

    return 1;
}
