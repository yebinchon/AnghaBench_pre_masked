
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int EVP_MD_CTX ;
typedef int EVP_MD ;
typedef int ASN1_OBJECT ;


 size_t VAR_0 ;
 int FUNC_0 (int *,unsigned char*,int *) ;
 int FUNC_1 (int *,int const*,int *) ;
 int FUNC_2 (int *,unsigned char const*,int) ;
 int VAR_1 ;
 int FUNC_3 (int *) ;
 int * FUNC_4 () ;
 size_t FUNC_5 (int const*) ;
 int FUNC_6 (unsigned char*,size_t) ;
 int FUNC_7 (unsigned char*) ;
 int FUNC_8 (unsigned char**,unsigned char**,int *,size_t,unsigned char const*,size_t) ;
 int FUNC_9 (unsigned char*,unsigned char*,size_t) ;

int FUNC_10(unsigned char *VAR_2, size_t VAR_3,
                 const unsigned char *VAR_4, size_t VAR_5,
                 ASN1_OBJECT *VAR_6,
                 const unsigned char *VAR_7, size_t VAR_8, const EVP_MD *VAR_9)
{
    EVP_MD_CTX *VAR_10 = ((void*)0);
    int VAR_11 = 0;
    unsigned int VAR_12;
    size_t VAR_13;
    unsigned char *VAR_14 = ((void*)0), *VAR_15;
    int VAR_16;
    if (VAR_5 > VAR_0)
        return 0;
    VAR_10 = FUNC_4();
    if (VAR_10 == ((void*)0))
        return 0;
    VAR_13 = FUNC_5(VAR_9);
    VAR_16 = FUNC_8(&VAR_14, &VAR_15, VAR_6, VAR_3, VAR_7, VAR_8);
    if (VAR_16 == 0)
        goto err;
    for (VAR_12 = 1;; VAR_12++) {
        unsigned char VAR_17[VAR_1];
        if (!FUNC_1(VAR_10, VAR_9, ((void*)0))
            || !FUNC_2(VAR_10, VAR_4, VAR_5))
            goto err;
        VAR_15[3] = VAR_12 & 0xFF;
        VAR_15[2] = (VAR_12 >> 8) & 0xFF;
        VAR_15[1] = (VAR_12 >> 16) & 0xFF;
        VAR_15[0] = (VAR_12 >> 24) & 0xFF;
        if (!FUNC_2(VAR_10, VAR_14, VAR_16))
            goto err;
        if (VAR_3 >= VAR_13) {
            if (!FUNC_0(VAR_10, VAR_2, ((void*)0)))
                goto err;
            VAR_3 -= VAR_13;
            if (VAR_3 == 0)
                break;
            VAR_2 += VAR_13;
        } else {
            if (!FUNC_0(VAR_10, VAR_17, ((void*)0)))
                goto err;
            FUNC_9(VAR_2, VAR_17, VAR_3);
            FUNC_6(VAR_17, VAR_13);
            break;
        }
    }
    VAR_11 = 1;
 err:
    FUNC_7(VAR_14);
    FUNC_3(VAR_10);
    return VAR_11;
}
