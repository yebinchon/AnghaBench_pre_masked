
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int * q; int * p; } ;
typedef TYPE_1__ RSA ;
typedef int BN_GENCB ;
typedef int BN_CTX ;
typedef int BIGNUM ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (int *) ;
 int * FUNC_3 () ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,int *,int,int *) ;
 int FUNC_6 (int *,int *,int *,int *,int *,int *,int const*,int *,int *) ;
 void* FUNC_7 () ;
 int FUNC_8 (TYPE_1__*,int *,int *,int *,int *,int *,int *,int *,int *,int *,int *,int const*,int *) ;

int FUNC_9(RSA *VAR_0, int VAR_1, const BIGNUM *VAR_2,
                             BN_GENCB *VAR_3)
{
    int VAR_4 = 0;
    BIGNUM *VAR_5 = ((void*)0), *VAR_6 = ((void*)0);
    BN_CTX *VAR_7 = ((void*)0);

    VAR_7 = FUNC_3();
    if (VAR_7 == ((void*)0))
        goto error;

    FUNC_4(VAR_7);
    VAR_5 = FUNC_2(VAR_7);
    VAR_6 = FUNC_2(VAR_7);
    if (VAR_6 == ((void*)0))
        goto error;
    if (!FUNC_5(VAR_5, VAR_6, VAR_1, VAR_7))
        goto error;

    VAR_0->p = FUNC_7();
    VAR_0->q = FUNC_7();
    if (VAR_0->p == ((void*)0) || VAR_0->q == ((void*)0))
        goto error;



    if (!FUNC_6(VAR_0->p, ((void*)0), ((void*)0), ((void*)0), ((void*)0), VAR_5,
                                   VAR_2, VAR_7, VAR_3))
        goto error;

    if (!FUNC_6(VAR_0->q, ((void*)0), ((void*)0), ((void*)0), ((void*)0), VAR_6,
                                   VAR_2, VAR_7, VAR_3))
        goto error;






    if (!FUNC_8(VAR_0, ((void*)0), ((void*)0), ((void*)0), ((void*)0),
                            ((void*)0), ((void*)0), ((void*)0), ((void*)0), ((void*)0), ((void*)0), VAR_2, VAR_3))
        goto error;

    VAR_4 = 1;

 error:
    FUNC_0(VAR_7);
    FUNC_1(VAR_7);

    if (VAR_4)
        return 1;

    return 0;

}
