
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int dig ;
typedef int EVP_MD_CTX ;
typedef int BIGNUM ;


 int * FUNC_0 (unsigned char*,int,int *) ;
 scalar_t__ FUNC_1 (int const*,unsigned char*) ;
 int FUNC_2 (int const*) ;
 int FUNC_3 (int *,unsigned char*,int *) ;
 int FUNC_4 (int *,int ,int *) ;
 int FUNC_5 (int *,...) ;
 int FUNC_6 (int *) ;
 int * FUNC_7 () ;
 int FUNC_8 () ;
 int FUNC_9 (unsigned char*) ;
 unsigned char* FUNC_10 (int) ;
 int VAR_0 ;
 int FUNC_11 (char const*) ;

BIGNUM *FUNC_12(const BIGNUM *VAR_1, const char *VAR_2, const char *VAR_3)
{
    unsigned char VAR_4[VAR_0];
    EVP_MD_CTX *VAR_5;
    unsigned char *VAR_6 = ((void*)0);
    BIGNUM *VAR_7 = ((void*)0);

    if ((VAR_1 == ((void*)0)) || (VAR_2 == ((void*)0)) || (VAR_3 == ((void*)0)))
        return ((void*)0);

    VAR_5 = FUNC_7();
    if (VAR_5 == ((void*)0))
        return ((void*)0);
    if ((VAR_6 = FUNC_10(FUNC_2(VAR_1))) == ((void*)0))
        goto err;

    if (!FUNC_4(VAR_5, FUNC_8(), ((void*)0))
        || !FUNC_5(VAR_5, VAR_2, FUNC_11(VAR_2))
        || !FUNC_5(VAR_5, ":", 1)
        || !FUNC_5(VAR_5, VAR_3, FUNC_11(VAR_3))
        || !FUNC_3(VAR_5, VAR_4, ((void*)0))
        || !FUNC_4(VAR_5, FUNC_8(), ((void*)0)))
        goto err;
    if (FUNC_1(VAR_1, VAR_6) < 0)
        goto err;
    if (!FUNC_5(VAR_5, VAR_6, FUNC_2(VAR_1)))
        goto err;

    if (!FUNC_5(VAR_5, VAR_4, sizeof(VAR_4))
        || !FUNC_3(VAR_5, VAR_4, ((void*)0)))
        goto err;

    VAR_7 = FUNC_0(VAR_4, sizeof(VAR_4), ((void*)0));

 err:
    FUNC_9(VAR_6);
    FUNC_6(VAR_5);
    return VAR_7;
}
