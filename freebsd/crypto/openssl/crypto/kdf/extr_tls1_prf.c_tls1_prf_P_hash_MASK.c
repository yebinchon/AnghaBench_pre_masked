
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int EVP_PKEY ;
typedef int EVP_MD_CTX ;
typedef int EVP_MD ;
typedef int A1 ;


 int FUNC_0 (int *,unsigned char*,size_t*) ;
 int FUNC_1 (int *,int *,int const*,int *,int *) ;
 int FUNC_2 (int *,unsigned char const*,size_t) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (int *) ;
 int * FUNC_5 () ;
 int FUNC_6 (int *,int ) ;
 int FUNC_7 (int const*) ;
 int VAR_2 ;
 int FUNC_8 (int *) ;
 int * FUNC_9 (int ,int *,unsigned char const*,size_t) ;
 int FUNC_10 (unsigned char*,int) ;
 int FUNC_11 (unsigned char*,unsigned char*,size_t) ;
 int FUNC_12 (int) ;

__attribute__((used)) static int FUNC_13(const EVP_MD *VAR_3,
                           const unsigned char *VAR_4, size_t VAR_5,
                           const unsigned char *VAR_6, size_t VAR_7,
                           unsigned char *VAR_8, size_t VAR_9)
{
    int VAR_10;
    EVP_MD_CTX *VAR_11 = ((void*)0), *VAR_12 = ((void*)0), *VAR_13 = ((void*)0);
    EVP_PKEY *VAR_14 = ((void*)0);
    unsigned char VAR_15[VAR_0];
    size_t VAR_16;
    int VAR_17 = 0;

    VAR_10 = FUNC_7(VAR_3);
    if (!FUNC_12(VAR_10 > 0))
        goto err;

    VAR_11 = FUNC_5();
    VAR_12 = FUNC_5();
    VAR_13 = FUNC_5();
    if (VAR_11 == ((void*)0) || VAR_12 == ((void*)0) || VAR_13 == ((void*)0))
        goto err;
    FUNC_6(VAR_13, VAR_1);
    VAR_14 = FUNC_9(VAR_2, ((void*)0), VAR_4, VAR_5);
    if (VAR_14 == ((void*)0))
        goto err;
    if (!FUNC_1(VAR_13, ((void*)0), VAR_3, ((void*)0), VAR_14))
        goto err;
    if (!FUNC_3(VAR_11, VAR_13))
        goto err;
    if (VAR_6 != ((void*)0) && !FUNC_2(VAR_11, VAR_6, VAR_7))
        goto err;
    if (!FUNC_0(VAR_11, VAR_15, &VAR_16))
        goto err;

    for (;;) {

        if (!FUNC_3(VAR_11, VAR_13))
            goto err;
        if (!FUNC_2(VAR_11, VAR_15, VAR_16))
            goto err;
        if (VAR_9 > (size_t)VAR_10 && !FUNC_3(VAR_12, VAR_11))
            goto err;
        if (VAR_6 && !FUNC_2(VAR_11, VAR_6, VAR_7))
            goto err;

        if (VAR_9 > (size_t)VAR_10) {
            size_t VAR_18;
            if (!FUNC_0(VAR_11, VAR_8, &VAR_18))
                goto err;
            VAR_8 += VAR_18;
            VAR_9 -= VAR_18;

            if (!FUNC_0(VAR_12, VAR_15, &VAR_16))
                goto err;
        } else {

            if (!FUNC_0(VAR_11, VAR_15, &VAR_16))
                goto err;
            FUNC_11(VAR_8, VAR_15, VAR_9);
            break;
        }
    }
    VAR_17 = 1;
 err:
    FUNC_8(VAR_14);
    FUNC_4(VAR_11);
    FUNC_4(VAR_12);
    FUNC_4(VAR_13);
    FUNC_10(VAR_15, sizeof(VAR_15));
    return VAR_17;
}
