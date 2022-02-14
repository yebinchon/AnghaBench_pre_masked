
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int random_bytes ;
typedef int private_bytes ;
typedef int done ;
typedef int SHA512_CTX ;
typedef int BN_CTX ;
typedef int BIGNUM ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (unsigned char*,unsigned int const,int *) ;
 scalar_t__ FUNC_1 (int const*,unsigned char*,int) ;
 int FUNC_2 (int *,int *,int const*,int *) ;
 int FUNC_3 (int const*) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (unsigned char*,int) ;
 int FUNC_6 (unsigned char*) ;
 unsigned char* FUNC_7 (unsigned int const) ;
 int FUNC_8 (unsigned char*,int) ;
 int VAR_2 ;
 int FUNC_9 (unsigned char*,int *) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *,...) ;
 int FUNC_12 (unsigned char*,unsigned char*,unsigned int) ;

int FUNC_13(BIGNUM *VAR_3, const BIGNUM *VAR_4,
                          const BIGNUM *VAR_5, const unsigned char *VAR_6,
                          size_t VAR_7, BN_CTX *VAR_8)
{
    SHA512_CTX VAR_9;




    unsigned char VAR_10[64];
    unsigned char VAR_11[VAR_2];
    unsigned VAR_12, VAR_13;

    const unsigned VAR_14 = FUNC_3(VAR_4) + 8;
    unsigned char VAR_15[96];
    unsigned char *VAR_16;
    int VAR_17 = 0;

    VAR_16 = FUNC_7(VAR_14);
    if (VAR_16 == ((void*)0))
        goto err;


    if (FUNC_1(VAR_5, VAR_15, sizeof(VAR_15)) < 0) {





        FUNC_4(VAR_0, VAR_1);
        goto err;
    }

    for (VAR_12 = 0; VAR_12 < VAR_14;) {
        if (FUNC_8(VAR_10, sizeof(VAR_10)) != 1)
            goto err;
        FUNC_10(&VAR_9);
        FUNC_11(&VAR_9, &VAR_12, sizeof(VAR_12));
        FUNC_11(&VAR_9, VAR_15, sizeof(VAR_15));
        FUNC_11(&VAR_9, VAR_6, VAR_7);
        FUNC_11(&VAR_9, VAR_10, sizeof(VAR_10));
        FUNC_9(VAR_11, &VAR_9);

        VAR_13 = VAR_14 - VAR_12;
        if (VAR_13 > VAR_2)
            VAR_13 = VAR_2;
        FUNC_12(VAR_16 + VAR_12, VAR_11, VAR_13);
        VAR_12 += VAR_13;
    }

    if (!FUNC_0(VAR_16, VAR_14, VAR_3))
        goto err;
    if (FUNC_2(VAR_3, VAR_3, VAR_4, VAR_8) != 1)
        goto err;
    VAR_17 = 1;

 err:
    FUNC_6(VAR_16);
    FUNC_5(VAR_15, sizeof(VAR_15));
    return VAR_17;
}
