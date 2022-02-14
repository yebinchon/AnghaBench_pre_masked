
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int md_buf ;
typedef int EVP_MD_CTX ;
typedef int EVP_MD ;
typedef int EVP_CIPHER ;


 int FUNC_0 (int const*) ;
 int FUNC_1 (int const*) ;
 int FUNC_2 (int *,unsigned char*,unsigned int*) ;
 int FUNC_3 (int *,int const*,int *) ;
 int FUNC_4 (int *,unsigned char const*,unsigned int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_5 (int *) ;
 int * FUNC_6 () ;
 int FUNC_7 (int) ;
 int FUNC_8 (unsigned char*,int) ;
 unsigned int VAR_3 ;

int FUNC_9(const EVP_CIPHER *VAR_4, const EVP_MD *VAR_5,
                   const unsigned char *VAR_6, const unsigned char *VAR_7,
                   int VAR_8, int VAR_9, unsigned char *VAR_10,
                   unsigned char *VAR_11)
{
    EVP_MD_CTX *VAR_12;
    unsigned char VAR_13[VAR_2];
    int VAR_14, VAR_15, VAR_16 = 0;
    unsigned int VAR_17 = 0, VAR_18;
    int VAR_19 = 0;
    VAR_15 = FUNC_1(VAR_4);
    VAR_14 = FUNC_0(VAR_4);
    FUNC_7(VAR_15 <= VAR_1);
    FUNC_7(VAR_14 <= VAR_0);

    if (VAR_7 == ((void*)0))
        return VAR_15;

    VAR_12 = FUNC_6();
    if (VAR_12 == ((void*)0))
        goto err;
    for (;;) {
        if (!FUNC_3(VAR_12, VAR_5, ((void*)0)))
            goto err;
        if (VAR_16++)
            if (!FUNC_4(VAR_12, &(VAR_13[0]), VAR_17))
                goto err;
        if (!FUNC_4(VAR_12, VAR_7, VAR_8))
            goto err;
        if (VAR_6 != ((void*)0))
            if (!FUNC_4(VAR_12, VAR_6, VAR_3))
                goto err;
        if (!FUNC_2(VAR_12, &(VAR_13[0]), &VAR_17))
            goto err;

        for (VAR_18 = 1; VAR_18 < (unsigned int)VAR_9; VAR_18++) {
            if (!FUNC_3(VAR_12, VAR_5, ((void*)0)))
                goto err;
            if (!FUNC_4(VAR_12, &(VAR_13[0]), VAR_17))
                goto err;
            if (!FUNC_2(VAR_12, &(VAR_13[0]), &VAR_17))
                goto err;
        }
        VAR_18 = 0;
        if (VAR_15) {
            for (;;) {
                if (VAR_15 == 0)
                    break;
                if (VAR_18 == VAR_17)
                    break;
                if (VAR_10 != ((void*)0))
                    *(VAR_10++) = VAR_13[VAR_18];
                VAR_15--;
                VAR_18++;
            }
        }
        if (VAR_14 && (VAR_18 != VAR_17)) {
            for (;;) {
                if (VAR_14 == 0)
                    break;
                if (VAR_18 == VAR_17)
                    break;
                if (VAR_11 != ((void*)0))
                    *(VAR_11++) = VAR_13[VAR_18];
                VAR_14--;
                VAR_18++;
            }
        }
        if ((VAR_15 == 0) && (VAR_14 == 0))
            break;
    }
    VAR_19 = FUNC_1(VAR_4);
 err:
    FUNC_5(VAR_12);
    FUNC_8(VAR_13, sizeof(VAR_13));
    return VAR_19;
}
