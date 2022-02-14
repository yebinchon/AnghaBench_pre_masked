
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int md ;
typedef int EVP_MD_CTX ;
typedef int EVP_MD ;


 int FUNC_0 (int *,unsigned char*,int *) ;
 int FUNC_1 (int *,int const*,int *) ;
 int FUNC_2 (int *,unsigned char const*,int) ;
 int VAR_0 ;
 int FUNC_3 (int *) ;
 int * FUNC_4 () ;
 int FUNC_5 (int const*) ;
 int FUNC_6 (unsigned char*,int) ;
 int FUNC_7 (unsigned char*,unsigned char*,long) ;

int FUNC_8(unsigned char *VAR_1, long VAR_2,
               const unsigned char *VAR_3, long VAR_4, const EVP_MD *VAR_5)
{
    long VAR_6, VAR_7 = 0;
    unsigned char VAR_8[4];
    EVP_MD_CTX *VAR_9 = FUNC_4();
    unsigned char VAR_10[VAR_0];
    int VAR_11;
    int VAR_12 = -1;

    if (VAR_9 == ((void*)0))
        goto err;
    VAR_11 = FUNC_5(VAR_5);
    if (VAR_11 < 0)
        goto err;
    for (VAR_6 = 0; VAR_7 < VAR_2; VAR_6++) {
        VAR_8[0] = (unsigned char)((VAR_6 >> 24) & 255);
        VAR_8[1] = (unsigned char)((VAR_6 >> 16) & 255);
        VAR_8[2] = (unsigned char)((VAR_6 >> 8)) & 255;
        VAR_8[3] = (unsigned char)(VAR_6 & 255);
        if (!FUNC_1(VAR_9, VAR_5, ((void*)0))
            || !FUNC_2(VAR_9, VAR_3, VAR_4)
            || !FUNC_2(VAR_9, VAR_8, 4))
            goto err;
        if (VAR_7 + VAR_11 <= VAR_2) {
            if (!FUNC_0(VAR_9, VAR_1 + VAR_7, ((void*)0)))
                goto err;
            VAR_7 += VAR_11;
        } else {
            if (!FUNC_0(VAR_9, VAR_10, ((void*)0)))
                goto err;
            FUNC_7(VAR_1 + VAR_7, VAR_10, VAR_2 - VAR_7);
            VAR_7 = VAR_2;
        }
    }
    VAR_12 = 0;
 err:
    FUNC_6(VAR_10, sizeof(VAR_10));
    FUNC_3(VAR_9);
    return VAR_12;
}
