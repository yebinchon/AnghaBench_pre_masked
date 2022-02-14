
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int * d; int * e; int * n; } ;
typedef TYPE_1__ RSA ;
typedef int BIGNUM ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int ) ;

int FUNC_3(RSA *VAR_1, BIGNUM *VAR_2, BIGNUM *VAR_3, BIGNUM *VAR_4)
{




    if ((VAR_1->n == ((void*)0) && VAR_2 == ((void*)0))
        || (VAR_1->e == ((void*)0) && VAR_3 == ((void*)0)))
        return 0;

    if (VAR_2 != ((void*)0)) {
        FUNC_1(VAR_1->n);
        VAR_1->n = VAR_2;
    }
    if (VAR_3 != ((void*)0)) {
        FUNC_1(VAR_1->e);
        VAR_1->e = VAR_3;
    }
    if (VAR_4 != ((void*)0)) {
        FUNC_0(VAR_1->d);
        VAR_1->d = VAR_4;
        FUNC_2(VAR_1->d, VAR_0);
    }

    return 1;
}
