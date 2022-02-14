
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int prev ;
typedef int HMAC_CTX ;
typedef int EVP_MD ;


 int VAR_0 ;
 size_t FUNC_0 (int const*) ;
 int FUNC_1 (int *) ;
 int * FUNC_2 () ;
 int FUNC_3 (int *,unsigned char*,int *) ;
 int FUNC_4 (int *,unsigned char const*,size_t,int const*,int *) ;
 int FUNC_5 (int *,unsigned char const*,int) ;
 int FUNC_6 (unsigned char*,int) ;
 int FUNC_7 (unsigned char*,unsigned char*,size_t) ;

__attribute__((used)) static unsigned char *FUNC_8(const EVP_MD *VAR_1,
                                  const unsigned char *VAR_2, size_t VAR_3,
                                  const unsigned char *VAR_4, size_t VAR_5,
                                  unsigned char *VAR_6, size_t VAR_7)
{
    HMAC_CTX *VAR_8;
    unsigned char *VAR_9 = ((void*)0);

    unsigned int VAR_10;

    unsigned char VAR_11[VAR_0];

    size_t VAR_12 = 0, VAR_13 = FUNC_0(VAR_1);

    size_t VAR_14 = VAR_7 / VAR_13;
    if (VAR_7 % VAR_13)
        VAR_14++;

    if (VAR_14 > 255 || VAR_6 == ((void*)0))
        return ((void*)0);

    if ((VAR_8 = FUNC_2()) == ((void*)0))
        return ((void*)0);

    if (!FUNC_4(VAR_8, VAR_2, VAR_3, VAR_1, ((void*)0)))
        goto err;

    for (VAR_10 = 1; VAR_10 <= VAR_14; VAR_10++) {
        size_t VAR_15;
        const unsigned char VAR_16 = VAR_10;

        if (VAR_10 > 1) {
            if (!FUNC_4(VAR_8, ((void*)0), 0, ((void*)0), ((void*)0)))
                goto err;

            if (!FUNC_5(VAR_8, VAR_11, VAR_13))
                goto err;
        }

        if (!FUNC_5(VAR_8, VAR_4, VAR_5))
            goto err;

        if (!FUNC_5(VAR_8, &VAR_16, 1))
            goto err;

        if (!FUNC_3(VAR_8, VAR_11, ((void*)0)))
            goto err;

        VAR_15 = (VAR_12 + VAR_13 > VAR_7) ?
                       VAR_7 - VAR_12 :
                       VAR_13;

        FUNC_7(VAR_6 + VAR_12, VAR_11, VAR_15);

        VAR_12 += VAR_15;
    }
    VAR_9 = VAR_6;

 err:
    FUNC_6(VAR_11, sizeof(VAR_11));
    FUNC_1(VAR_8);
    return VAR_9;
}
