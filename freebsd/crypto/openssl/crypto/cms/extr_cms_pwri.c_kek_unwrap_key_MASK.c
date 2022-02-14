
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int EVP_CIPHER_CTX ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int VAR_1 ;
 size_t FUNC_1 (int *) ;
 int FUNC_2 (int *,int *,int *,int *,int *) ;
 int FUNC_3 (int *,unsigned char*,int*,unsigned char const*,size_t) ;
 int FUNC_4 (unsigned char*,size_t) ;
 unsigned char* FUNC_5 (size_t) ;
 int FUNC_6 (unsigned char*,unsigned char*,size_t) ;

__attribute__((used)) static int FUNC_7(unsigned char *VAR_2, size_t *VAR_3,
                          const unsigned char *VAR_4, size_t VAR_5,
                          EVP_CIPHER_CTX *VAR_6)
{
    size_t VAR_7 = FUNC_1(VAR_6);
    unsigned char *VAR_8;
    int VAR_9, VAR_10 = 0;
    if (VAR_5 < 2 * VAR_7) {

        return 0;
    }
    if (VAR_5 % VAR_7) {

        return 0;
    }
    if ((VAR_8 = FUNC_5(VAR_5)) == ((void*)0)) {
        FUNC_0(VAR_0, VAR_1);
        return 0;
    }

    if (!FUNC_3(VAR_6, VAR_8 + VAR_5 - 2 * VAR_7, &VAR_9,
                           VAR_4 + VAR_5 - 2 * VAR_7, VAR_7 * 2)





        || !FUNC_3(VAR_6, VAR_8, &VAR_9,
                              VAR_8 + VAR_5 - VAR_7, VAR_7)

        || !FUNC_3(VAR_6, VAR_8, &VAR_9, VAR_4, VAR_5 - VAR_7)


        || !FUNC_2(VAR_6, ((void*)0), ((void*)0), ((void*)0), ((void*)0))

        || !FUNC_3(VAR_6, VAR_8, &VAR_9, VAR_8, VAR_5))
        goto err;

    if (((VAR_8[1] ^ VAR_8[4]) & (VAR_8[2] ^ VAR_8[5]) & (VAR_8[3] ^ VAR_8[6])) != 0xff) {

        goto err;
    }
    if (VAR_5 < (size_t)(VAR_8[0] - 4)) {

        goto err;
    }
    *VAR_3 = (size_t)VAR_8[0];
    FUNC_6(VAR_2, VAR_8 + 4, *VAR_3);
    VAR_10 = 1;
 err:
    FUNC_4(VAR_8, VAR_5);
    return VAR_10;

}
