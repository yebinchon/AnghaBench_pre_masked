
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int EVP_PKEY ;
typedef int DSA ;
typedef int BN_CTX ;
typedef int BIGNUM ;


 int FUNC_0 (int *) ;
 int * FUNC_1 () ;
 int VAR_0 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int *,int *,int *,int *) ;
 int * FUNC_4 () ;
 int FUNC_5 (int *,int ) ;
 int FUNC_6 (int *) ;
 int * FUNC_7 () ;
 int FUNC_8 (int *,int *,int *) ;
 int FUNC_9 (int *,int *,int *,int *) ;
 int VAR_1 ;
 int FUNC_10 (int *) ;
 int * FUNC_11 () ;
 int FUNC_12 (int *,int *) ;
 int VAR_2 ;
 int FUNC_13 (int ,int ) ;
 int FUNC_14 (unsigned char const**,int,int **) ;

__attribute__((used)) static EVP_PKEY *FUNC_15(const unsigned char **VAR_3,
                         unsigned int VAR_4, int VAR_5)
{
    const unsigned char *VAR_6 = *VAR_3;
    EVP_PKEY *VAR_7 = ((void*)0);
    DSA *VAR_8 = ((void*)0);
    BN_CTX *VAR_9 = ((void*)0);
    unsigned int VAR_10;
    BIGNUM *VAR_11 = ((void*)0), *VAR_12 = ((void*)0), *VAR_13 = ((void*)0), *VAR_14 = ((void*)0);
    BIGNUM *VAR_15 = ((void*)0);

    VAR_10 = (VAR_4 + 7) >> 3;

    VAR_8 = FUNC_7();
    VAR_7 = FUNC_11();
    if (VAR_8 == ((void*)0) || VAR_7 == ((void*)0))
        goto memerr;
    if (!FUNC_14(&VAR_6, VAR_10, &VAR_11))
        goto memerr;

    if (!FUNC_14(&VAR_6, 20, &VAR_12))
        goto memerr;

    if (!FUNC_14(&VAR_6, VAR_10, &VAR_13))
        goto memerr;

    if (VAR_5) {
        if (!FUNC_14(&VAR_6, VAR_10, &VAR_15))
            goto memerr;
    } else {
        if (!FUNC_14(&VAR_6, 20, &VAR_14))
            goto memerr;


        FUNC_5(VAR_14, VAR_0);


        VAR_15 = FUNC_4();
        if (VAR_15 == ((void*)0))
            goto memerr;
        if ((VAR_9 = FUNC_1()) == ((void*)0))
            goto memerr;

        if (!FUNC_3(VAR_15, VAR_13, VAR_14, VAR_11, VAR_9))
            goto memerr;

        FUNC_0(VAR_9);
        VAR_9 = ((void*)0);
    }
    if (!FUNC_9(VAR_8, VAR_11, VAR_12, VAR_13))
        goto memerr;
    VAR_11 = VAR_12 = VAR_13 = ((void*)0);
    if (!FUNC_8(VAR_8, VAR_15, VAR_14))
        goto memerr;
    VAR_15 = VAR_14 = ((void*)0);

    if (!FUNC_12(VAR_7, VAR_8))
        goto memerr;
    FUNC_6(VAR_8);
    *VAR_3 = VAR_6;
    return VAR_7;

 memerr:
    FUNC_13(VAR_2, VAR_1);
    FUNC_6(VAR_8);
    FUNC_2(VAR_11);
    FUNC_2(VAR_12);
    FUNC_2(VAR_13);
    FUNC_2(VAR_15);
    FUNC_2(VAR_14);
    FUNC_10(VAR_7);
    FUNC_0(VAR_9);
    return ((void*)0);
}
