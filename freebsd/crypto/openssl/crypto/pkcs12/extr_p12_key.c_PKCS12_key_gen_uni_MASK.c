
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16_t ;
typedef int EVP_MD_CTX ;
typedef int EVP_MD ;


 int VAR_0 ;
 int FUNC_0 (int *,unsigned char*,int *) ;
 int FUNC_1 (int *,int const*,int *) ;
 int FUNC_2 (int *,unsigned char*,int) ;
 int FUNC_3 (int *) ;
 int * FUNC_4 () ;
 int FUNC_5 (int const*) ;
 int FUNC_6 (int const*) ;
 int FUNC_7 (unsigned char*) ;
 unsigned char* FUNC_8 (int) ;
 int VAR_1 ;
 int FUNC_9 (int ,int ) ;
 int FUNC_10 (int ,char*,...) ;
 int FUNC_11 (unsigned char*,int) ;
 int FUNC_12 (unsigned char*,unsigned char*,int ) ;
 int FUNC_13 (int,int) ;
 int VAR_2 ;

int FUNC_14(unsigned char *VAR_3, int VAR_4, unsigned char *VAR_5,
                       int VAR_6, int VAR_7, int VAR_8, int VAR_9,
                       unsigned char *VAR_10, const EVP_MD *VAR_11)
{
    unsigned char *VAR_12 = ((void*)0), *VAR_13 = ((void*)0), *VAR_14 = ((void*)0), *VAR_15 = ((void*)0), *VAR_16 = ((void*)0);
    int VAR_17, VAR_18, VAR_19;
    int VAR_20, VAR_21, VAR_22, VAR_23;
    int VAR_24 = 0;
    EVP_MD_CTX *VAR_25 = ((void*)0);





    VAR_25 = FUNC_4();
    if (VAR_25 == ((void*)0))
        goto err;
    VAR_23 = FUNC_5(VAR_11);
    VAR_22 = FUNC_6(VAR_11);
    if (VAR_22 < 0 || VAR_23 <= 0)
        goto err;
    VAR_13 = FUNC_8(VAR_23);
    VAR_16 = FUNC_8(VAR_22);
    VAR_12 = FUNC_8(VAR_23 + 1);
    VAR_17 = VAR_23 * ((VAR_6 + VAR_23 - 1) / VAR_23);
    if (VAR_4)
        VAR_18 = VAR_23 * ((VAR_4 + VAR_23 - 1) / VAR_23);
    else
        VAR_18 = 0;
    VAR_19 = VAR_17 + VAR_18;
    VAR_14 = FUNC_8(VAR_19);
    if (VAR_13 == ((void*)0) || VAR_16 == ((void*)0) || VAR_12 == ((void*)0) || VAR_14 == ((void*)0))
        goto err;
    for (VAR_20 = 0; VAR_20 < VAR_23; VAR_20++)
        VAR_13[VAR_20] = VAR_7;
    VAR_15 = VAR_14;
    for (VAR_20 = 0; VAR_20 < VAR_17; VAR_20++)
        *VAR_15++ = VAR_5[VAR_20 % VAR_6];
    for (VAR_20 = 0; VAR_20 < VAR_18; VAR_20++)
        *VAR_15++ = VAR_3[VAR_20 % VAR_4];
    for (;;) {
        if (!FUNC_1(VAR_25, VAR_11, ((void*)0))
            || !FUNC_2(VAR_25, VAR_13, VAR_23)
            || !FUNC_2(VAR_25, VAR_14, VAR_19)
            || !FUNC_0(VAR_25, VAR_16, ((void*)0)))
            goto err;
        for (VAR_21 = 1; VAR_21 < VAR_8; VAR_21++) {
            if (!FUNC_1(VAR_25, VAR_11, ((void*)0))
                || !FUNC_2(VAR_25, VAR_16, VAR_22)
                || !FUNC_0(VAR_25, VAR_16, ((void*)0)))
                goto err;
        }
        FUNC_12(VAR_10, VAR_16, FUNC_13(VAR_9, VAR_22));
        if (VAR_22 >= VAR_9) {




            VAR_24 = 1;
            goto end;
        }
        VAR_9 -= VAR_22;
        VAR_10 += VAR_22;
        for (VAR_21 = 0; VAR_21 < VAR_23; VAR_21++)
            VAR_12[VAR_21] = VAR_16[VAR_21 % VAR_22];
        for (VAR_21 = 0; VAR_21 < VAR_19; VAR_21 += VAR_23) {
            int VAR_26;
            unsigned char *VAR_27 = VAR_14 + VAR_21;
            uint16_t VAR_28 = 1;


            for (VAR_26 = VAR_23 - 1; VAR_26 >= 0; VAR_26--) {
                VAR_28 += VAR_27[VAR_26] + VAR_12[VAR_26];
                VAR_27[VAR_26] = (unsigned char)VAR_28;
                VAR_28 >>= 8;
            }
        }
    }

 err:
    FUNC_9(VAR_1, VAR_0);

 end:
    FUNC_7(VAR_16);
    FUNC_7(VAR_12);
    FUNC_7(VAR_13);
    FUNC_7(VAR_14);
    FUNC_3(VAR_25);
    return VAR_24;
}
