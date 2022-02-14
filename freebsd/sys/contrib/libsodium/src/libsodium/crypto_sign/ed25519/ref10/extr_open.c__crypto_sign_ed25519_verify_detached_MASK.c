
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ge25519_p3 ;
typedef int ge25519_p2 ;
typedef int crypto_hash_sha512_state ;


 int FUNC_0 (int *,int) ;
 int FUNC_1 (int *,unsigned char*) ;
 int FUNC_2 (int *,unsigned char const*,unsigned long long) ;
 int FUNC_3 (unsigned char*,unsigned char const*) ;
 int FUNC_4 (int *,unsigned char*,int *,unsigned char const*) ;
 scalar_t__ FUNC_5 (int *,unsigned char const*) ;
 scalar_t__ FUNC_6 (unsigned char const*) ;
 scalar_t__ FUNC_7 (unsigned char const*) ;
 int FUNC_8 (unsigned char*,int *) ;
 scalar_t__ FUNC_9 (unsigned char const*) ;
 int FUNC_10 (unsigned char*) ;
 int FUNC_11 (unsigned char const*,unsigned char*,int) ;

int
FUNC_12(const unsigned char *VAR_0,
                                     const unsigned char *VAR_1,
                                     unsigned long long VAR_2,
                                     const unsigned char *VAR_3,
                                     int VAR_4)
{
    crypto_hash_sha512_state VAR_5;
    unsigned char VAR_6[64];
    unsigned char VAR_7[32];
    ge25519_p3 VAR_8;
    ge25519_p2 VAR_9;






    if (FUNC_9(VAR_0 + 32) == 0 ||
        FUNC_6(VAR_0) != 0) {
        return -1;
    }
    if (FUNC_7(VAR_3) == 0 ||
        FUNC_6(VAR_3) != 0) {
        return -1;
    }

    if (FUNC_5(&VAR_8, VAR_3) != 0) {
        return -1;
    }
    FUNC_0(&VAR_5, VAR_4);
    FUNC_2(&VAR_5, VAR_0, 32);
    FUNC_2(&VAR_5, VAR_3, 32);
    FUNC_2(&VAR_5, VAR_1, VAR_2);
    FUNC_1(&VAR_5, VAR_6);
    FUNC_10(VAR_6);

    FUNC_4(&VAR_9, VAR_6, &VAR_8, VAR_0 + 32);
    FUNC_8(VAR_7, &VAR_9);

    return FUNC_3(VAR_7, VAR_0) | (-(VAR_7 == VAR_0)) |
           FUNC_11(VAR_0, VAR_7, 32);
}
