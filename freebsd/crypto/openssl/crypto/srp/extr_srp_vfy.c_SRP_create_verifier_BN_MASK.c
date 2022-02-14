
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int BN_CTX ;
typedef int BIGNUM ;


 int FUNC_0 (int *) ;
 int * FUNC_1 () ;
 int * FUNC_2 (unsigned char*,int ,int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int const*,int *,int const*,int *) ;
 int * FUNC_5 () ;
 int VAR_0 ;
 scalar_t__ FUNC_6 (unsigned char*,int ) ;
 int * FUNC_7 (int *,char const*,char const*) ;
 int VAR_1 ;

int FUNC_8(const char *VAR_2, const char *VAR_3, BIGNUM **VAR_4,
                           BIGNUM **VAR_5, const BIGNUM *VAR_6,
                           const BIGNUM *VAR_7)
{
    int VAR_8 = 0;
    BIGNUM *VAR_9 = ((void*)0);
    BN_CTX *VAR_10 = FUNC_1();
    unsigned char VAR_11[VAR_0];
    BIGNUM *VAR_12 = ((void*)0);

    if ((VAR_2 == ((void*)0)) ||
        (VAR_3 == ((void*)0)) ||
        (VAR_4 == ((void*)0)) ||
        (VAR_5 == ((void*)0)) || (VAR_6 == ((void*)0)) || (VAR_7 == ((void*)0)) || (VAR_10 == ((void*)0)))
        goto err;

    if (*VAR_4 == ((void*)0)) {
        if (FUNC_6(VAR_11, VAR_1) <= 0)
            goto err;

        VAR_12 = FUNC_2(VAR_11, VAR_1, ((void*)0));
        if (VAR_12 == ((void*)0))
            goto err;
    } else {
        VAR_12 = *VAR_4;
    }

    VAR_9 = FUNC_7(VAR_12, VAR_2, VAR_3);
    if (VAR_9 == ((void*)0))
        goto err;

    *VAR_5 = FUNC_5();
    if (*VAR_5 == ((void*)0))
        goto err;

    if (!FUNC_4(*VAR_5, VAR_7, VAR_9, VAR_6, VAR_10)) {
        FUNC_3(*VAR_5);
        goto err;
    }

    VAR_8 = 1;
    *VAR_4 = VAR_12;

 err:
    if (VAR_4 != ((void*)0) && *VAR_4 != VAR_12)
        FUNC_3(VAR_12);
    FUNC_3(VAR_9);
    FUNC_0(VAR_10);
    return VAR_8;
}
