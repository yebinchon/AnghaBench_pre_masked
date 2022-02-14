
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ge25519_p3 ;
typedef int crypto_hash_sha512_state ;


 int FUNC_0 (unsigned char*) ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (int *,unsigned char*,unsigned char*) ;
 int FUNC_3 (unsigned char*,unsigned char const*,int) ;
 int FUNC_4 (int *,unsigned char*) ;
 int FUNC_5 (int *,unsigned char const*,unsigned long long) ;
 int FUNC_6 (unsigned char*,int *) ;
 int FUNC_7 (int *,unsigned char*) ;
 int FUNC_8 (unsigned char*,unsigned char const*,int) ;
 int FUNC_9 (unsigned char*,unsigned char const*,int) ;
 int FUNC_10 (unsigned char*,unsigned char*,unsigned char*,unsigned char*) ;
 int FUNC_11 (unsigned char*) ;
 int FUNC_12 (unsigned char*,int) ;

int
FUNC_13(unsigned char *VAR_0, unsigned long long *VAR_1,
                              const unsigned char *VAR_2, unsigned long long VAR_3,
                              const unsigned char *VAR_4, int VAR_5)
{
    crypto_hash_sha512_state VAR_6;
    unsigned char VAR_7[64];
    unsigned char VAR_8[64];
    unsigned char VAR_9[64];
    ge25519_p3 VAR_10;

    FUNC_1(&VAR_6, VAR_5);





    FUNC_3(VAR_7, VAR_4, 32);
    FUNC_5(&VAR_6, VAR_7 + 32, 32);


    FUNC_5(&VAR_6, VAR_2, VAR_3);
    FUNC_4(&VAR_6, VAR_8);

    FUNC_9(VAR_0 + 32, VAR_4 + 32, 32);

    FUNC_11(VAR_8);
    FUNC_7(&VAR_10, VAR_8);
    FUNC_6(VAR_0, &VAR_10);

    FUNC_1(&VAR_6, VAR_5);
    FUNC_5(&VAR_6, VAR_0, 64);
    FUNC_5(&VAR_6, VAR_2, VAR_3);
    FUNC_4(&VAR_6, VAR_9);

    FUNC_11(VAR_9);
    FUNC_0(VAR_7);
    FUNC_10(VAR_0 + 32, VAR_9, VAR_7, VAR_8);

    FUNC_12(VAR_7, sizeof VAR_7);
    FUNC_12(VAR_8, sizeof VAR_8);

    if (VAR_1 != ((void*)0)) {
        *VAR_1 = 64U;
    }
    return 0;
}
