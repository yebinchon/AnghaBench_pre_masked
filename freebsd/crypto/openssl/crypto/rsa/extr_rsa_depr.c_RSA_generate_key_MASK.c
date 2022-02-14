
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int RSA ;
typedef int BN_GENCB ;
typedef int BIGNUM ;


 int FUNC_0 (int *) ;
 int * FUNC_1 () ;
 int FUNC_2 (int *,void (*) (int,int,void*),void*) ;
 int FUNC_3 (int *) ;
 int * FUNC_4 () ;
 scalar_t__ FUNC_5 (int *,int) ;
 int FUNC_6 (int *) ;
 scalar_t__ FUNC_7 (int *,int,int *,int *) ;
 int * FUNC_8 () ;

RSA *FUNC_9(int VAR_0, unsigned long VAR_1,
                      void (*VAR_2) (int, int, void *), void *VAR_3)
{
    int VAR_4;
    BN_GENCB *VAR_5 = FUNC_1();
    RSA *VAR_6 = FUNC_8();
    BIGNUM *VAR_7 = FUNC_4();

    if (VAR_5 == ((void*)0) || VAR_6 == ((void*)0) || VAR_7 == ((void*)0))
        goto err;





    for (VAR_4 = 0; VAR_4 < (int)sizeof(unsigned long) * 8; VAR_4++) {
        if (VAR_1 & (1UL << VAR_4))
            if (FUNC_5(VAR_7, VAR_4) == 0)
                goto err;
    }

    FUNC_2(VAR_5, VAR_2, VAR_3);

    if (FUNC_7(VAR_6, VAR_0, VAR_7, VAR_5)) {
        FUNC_3(VAR_7);
        FUNC_0(VAR_5);
        return VAR_6;
    }
 err:
    FUNC_3(VAR_7);
    FUNC_6(VAR_6);
    FUNC_0(VAR_5);
    return 0;
}
