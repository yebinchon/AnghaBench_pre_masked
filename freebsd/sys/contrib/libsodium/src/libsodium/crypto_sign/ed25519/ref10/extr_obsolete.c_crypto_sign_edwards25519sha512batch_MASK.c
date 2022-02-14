
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ge25519_p3 ;
typedef int crypto_hash_sha512_state ;


 int FUNC_0 (int *,unsigned char*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,unsigned char const*,unsigned long long) ;
 int FUNC_3 (unsigned char*,int *) ;
 int FUNC_4 (int *,unsigned char const*) ;
 int FUNC_5 (unsigned char*,unsigned char*,int) ;
 int FUNC_6 (unsigned char*,unsigned char const*,size_t) ;
 int FUNC_7 (unsigned char*,unsigned char*,unsigned char*,unsigned char const*) ;
 int FUNC_8 (unsigned char*) ;
 int FUNC_9 (unsigned char*,int) ;

int
FUNC_10(unsigned char *VAR_0,
                                    unsigned long long *VAR_1,
                                    const unsigned char *VAR_2,
                                    unsigned long long VAR_3,
                                    const unsigned char *VAR_4)
{
    crypto_hash_sha512_state VAR_5;
    unsigned char VAR_6[64];
    unsigned char VAR_7[64];
    unsigned char VAR_8[64];
    ge25519_p3 VAR_9;
    ge25519_p3 VAR_10;

    FUNC_1(&VAR_5);
    FUNC_2(&VAR_5, VAR_4 + 32, 32);
    FUNC_2(&VAR_5, VAR_2, VAR_3);
    FUNC_0(&VAR_5, VAR_6);
    FUNC_4(&VAR_9, VAR_4);
    FUNC_3(VAR_8 + 32, &VAR_9);
    FUNC_8(VAR_6);
    FUNC_4(&VAR_10, VAR_6);
    FUNC_3(VAR_8, &VAR_10);
    FUNC_1(&VAR_5);
    FUNC_2(&VAR_5, VAR_8, 32);
    FUNC_2(&VAR_5, VAR_2, VAR_3);
    FUNC_0(&VAR_5, VAR_7);
    FUNC_8(VAR_7);
    FUNC_7(VAR_8 + 32, VAR_7, VAR_6, VAR_4);
    FUNC_9(VAR_7, sizeof VAR_7);
    FUNC_6(VAR_0 + 32, VAR_2, (size_t) VAR_3);
    FUNC_5(VAR_0, VAR_8, 32);
    FUNC_5(VAR_0 + 32 + VAR_3, VAR_8 + 32, 32);
    *VAR_1 = VAR_3 + 64U;

    return 0;
}
