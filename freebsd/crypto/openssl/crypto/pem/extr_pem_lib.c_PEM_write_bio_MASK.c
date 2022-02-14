
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int EVP_ENCODE_CTX ;
typedef int BIO ;


 int FUNC_0 (int *,char const*,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int *) ;
 int * FUNC_2 () ;
 int FUNC_3 (int *,unsigned char*,int*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,unsigned char*,int*,unsigned char const*,int) ;
 int FUNC_6 (unsigned char*,int) ;
 unsigned char* FUNC_7 (int) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_8 (int ,int) ;
 int FUNC_9 (char const*) ;

int FUNC_10(BIO *VAR_4, const char *VAR_5, const char *VAR_6,
                  const unsigned char *VAR_7, long VAR_8)
{
    int VAR_9, VAR_10, VAR_11, VAR_12, VAR_13;
    unsigned char *VAR_14 = ((void*)0);
    EVP_ENCODE_CTX *VAR_15 = FUNC_2();
    int VAR_16 = VAR_0;
    int VAR_17 = 0;

    if (VAR_15 == ((void*)0)) {
        VAR_16 = VAR_1;
        goto err;
    }

    FUNC_4(VAR_15);
    VAR_9 = FUNC_9(VAR_5);

    if ((FUNC_0(VAR_4, "-----BEGIN ", 11) != 11) ||
        (FUNC_0(VAR_4, VAR_5, VAR_9) != VAR_9) ||
        (FUNC_0(VAR_4, "-----\n", 6) != 6))
        goto err;

    VAR_11 = FUNC_9(VAR_6);
    if (VAR_11 > 0) {
        if ((FUNC_0(VAR_4, VAR_6, VAR_11) != VAR_11) || (FUNC_0(VAR_4, "\n", 1) != 1))
            goto err;
    }

    VAR_14 = FUNC_7(VAR_2 * 8);
    if (VAR_14 == ((void*)0)) {
        VAR_16 = VAR_1;
        goto err;
    }

    VAR_11 = VAR_12 = 0;
    while (VAR_8 > 0) {
        VAR_10 = (int)((VAR_8 > (VAR_2 * 5)) ? (VAR_2 * 5) : VAR_8);
        if (!FUNC_5(VAR_15, VAR_14, &VAR_13, &(VAR_7[VAR_12]), VAR_10))
            goto err;
        if ((VAR_13) && (FUNC_0(VAR_4, (char *)VAR_14, VAR_13) != VAR_13))
            goto err;
        VAR_11 += VAR_13;
        VAR_8 -= VAR_10;
        VAR_12 += VAR_10;
    }
    FUNC_3(VAR_15, VAR_14, &VAR_13);
    if ((VAR_13 > 0) && (FUNC_0(VAR_4, (char *)VAR_14, VAR_13) != VAR_13))
        goto err;
    if ((FUNC_0(VAR_4, "-----END ", 9) != 9) ||
        (FUNC_0(VAR_4, VAR_5, VAR_9) != VAR_9) ||
        (FUNC_0(VAR_4, "-----\n", 6) != 6))
        goto err;
    VAR_17 = VAR_11 + VAR_13;

 err:
    if (VAR_17 == 0)
        FUNC_8(VAR_3, VAR_16);
    FUNC_1(VAR_15);
    FUNC_6(VAR_14, VAR_2 * 8);
    return VAR_17;
}
