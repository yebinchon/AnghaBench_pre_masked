
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int RSA ;
typedef int EVP_PKEY ;
typedef int BIGNUM ;


 int FUNC_0 (int *) ;
 int * FUNC_1 () ;
 int FUNC_2 (int *,int ) ;
 int VAR_0 ;
 int FUNC_3 (int *) ;
 int * FUNC_4 () ;
 int FUNC_5 (int *,int *) ;
 int VAR_1 ;
 int FUNC_6 (int ,int ) ;
 int FUNC_7 (int *) ;
 int * FUNC_8 () ;
 int FUNC_9 (int *,int *,int *,int *) ;
 int FUNC_10 (int *,int *,int *) ;
 int FUNC_11 (int *,int *,int *,int *) ;
 int FUNC_12 (unsigned char const**,unsigned int,int **) ;
 int FUNC_13 (unsigned char const**) ;

__attribute__((used)) static EVP_PKEY *FUNC_14(const unsigned char **VAR_2,
                         unsigned int VAR_3, int VAR_4)
{
    const unsigned char *VAR_5 = *VAR_2;
    EVP_PKEY *VAR_6 = ((void*)0);
    BIGNUM *VAR_7 = ((void*)0), *VAR_8 = ((void*)0), *VAR_9 = ((void*)0);
    BIGNUM *VAR_10 = ((void*)0), *VAR_11 = ((void*)0), *VAR_12 = ((void*)0), *VAR_13 = ((void*)0), *VAR_14 = ((void*)0);
    RSA *VAR_15 = ((void*)0);
    unsigned int VAR_16, VAR_17;
    VAR_16 = (VAR_3 + 7) >> 3;
    VAR_17 = (VAR_3 + 15) >> 4;
    VAR_15 = FUNC_8();
    VAR_6 = FUNC_4();
    if (VAR_15 == ((void*)0) || VAR_6 == ((void*)0))
        goto memerr;
    VAR_7 = FUNC_1();
    if (VAR_7 == ((void*)0))
        goto memerr;
    if (!FUNC_2(VAR_7, FUNC_13(&VAR_5)))
        goto memerr;
    if (!FUNC_12(&VAR_5, VAR_16, &VAR_8))
        goto memerr;
    if (!VAR_4) {
        if (!FUNC_12(&VAR_5, VAR_17, &VAR_10))
            goto memerr;
        if (!FUNC_12(&VAR_5, VAR_17, &VAR_11))
            goto memerr;
        if (!FUNC_12(&VAR_5, VAR_17, &VAR_12))
            goto memerr;
        if (!FUNC_12(&VAR_5, VAR_17, &VAR_13))
            goto memerr;
        if (!FUNC_12(&VAR_5, VAR_17, &VAR_14))
            goto memerr;
        if (!FUNC_12(&VAR_5, VAR_16, &VAR_9))
            goto memerr;
        if (!FUNC_10(VAR_15, VAR_10, VAR_11))
            goto memerr;
        VAR_10 = VAR_11 = ((void*)0);
        if (!FUNC_9(VAR_15, VAR_12, VAR_13, VAR_14))
            goto memerr;
        VAR_12 = VAR_13 = VAR_14 = ((void*)0);
    }
    if (!FUNC_11(VAR_15, VAR_8, VAR_7, VAR_9))
        goto memerr;
    VAR_8 = VAR_7 = VAR_9 = ((void*)0);

    if (!FUNC_5(VAR_6, VAR_15))
        goto memerr;
    FUNC_7(VAR_15);
    *VAR_2 = VAR_5;
    return VAR_6;
 memerr:
    FUNC_6(VAR_1, VAR_0);
    FUNC_0(VAR_7);
    FUNC_0(VAR_8);
    FUNC_0(VAR_10);
    FUNC_0(VAR_11);
    FUNC_0(VAR_12);
    FUNC_0(VAR_13);
    FUNC_0(VAR_14);
    FUNC_0(VAR_9);
    FUNC_7(VAR_15);
    FUNC_3(VAR_6);
    return ((void*)0);
}
