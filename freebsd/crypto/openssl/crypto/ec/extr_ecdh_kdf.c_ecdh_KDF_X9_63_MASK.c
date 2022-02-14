
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ctr ;
typedef int EVP_MD_CTX ;
typedef int EVP_MD ;


 size_t VAR_0 ;
 int FUNC_0 (int *,unsigned char*,int *) ;
 int FUNC_1 (int *,int const*,int *) ;
 int FUNC_2 (int *,unsigned char const*,size_t) ;
 int VAR_1 ;
 int FUNC_3 (int *) ;
 int * FUNC_4 () ;
 size_t FUNC_5 (int const*) ;
 int FUNC_6 (unsigned char*,size_t) ;
 int FUNC_7 (unsigned char*,unsigned char*,size_t) ;

int FUNC_8(unsigned char *VAR_2, size_t VAR_3,
                   const unsigned char *VAR_4, size_t VAR_5,
                   const unsigned char *VAR_6, size_t VAR_7,
                   const EVP_MD *VAR_8)
{
    EVP_MD_CTX *VAR_9 = ((void*)0);
    int VAR_10 = 0;
    unsigned int VAR_11;
    size_t VAR_12;
    unsigned char VAR_13[4];
    if (VAR_7 > VAR_0 || VAR_3 > VAR_0
        || VAR_5 > VAR_0)
        return 0;
    VAR_9 = FUNC_4();
    if (VAR_9 == ((void*)0))
        return 0;
    VAR_12 = FUNC_5(VAR_8);
    for (VAR_11 = 1;; VAR_11++) {
        unsigned char VAR_14[VAR_1];
        if (!FUNC_1(VAR_9, VAR_8, ((void*)0)))
            goto err;
        VAR_13[3] = VAR_11 & 0xFF;
        VAR_13[2] = (VAR_11 >> 8) & 0xFF;
        VAR_13[1] = (VAR_11 >> 16) & 0xFF;
        VAR_13[0] = (VAR_11 >> 24) & 0xFF;
        if (!FUNC_2(VAR_9, VAR_4, VAR_5))
            goto err;
        if (!FUNC_2(VAR_9, VAR_13, sizeof(VAR_13)))
            goto err;
        if (!FUNC_2(VAR_9, VAR_6, VAR_7))
            goto err;
        if (VAR_3 >= VAR_12) {
            if (!FUNC_0(VAR_9, VAR_2, ((void*)0)))
                goto err;
            VAR_3 -= VAR_12;
            if (VAR_3 == 0)
                break;
            VAR_2 += VAR_12;
        } else {
            if (!FUNC_0(VAR_9, VAR_14, ((void*)0)))
                goto err;
            FUNC_7(VAR_2, VAR_14, VAR_3);
            FUNC_6(VAR_14, VAR_12);
            break;
        }
    }
    VAR_10 = 1;
 err:
    FUNC_3(VAR_9);
    return VAR_10;
}
