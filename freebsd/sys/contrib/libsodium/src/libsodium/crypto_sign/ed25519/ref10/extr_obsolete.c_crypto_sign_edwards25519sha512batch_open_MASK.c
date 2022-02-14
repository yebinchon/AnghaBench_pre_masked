
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ge25519_p3 ;
typedef int ge25519_p2 ;
typedef int ge25519_p1p1 ;
typedef int ge25519_cached ;


 int FUNC_0 (unsigned char*,unsigned char const*,unsigned long long) ;
 unsigned long long VAR_0 ;
 scalar_t__ FUNC_1 (unsigned char*,unsigned char*) ;
 int FUNC_2 (int *,int *,int *) ;
 scalar_t__ FUNC_3 (int *,unsigned char const*) ;
 scalar_t__ FUNC_4 (unsigned char const*) ;
 int FUNC_5 (int *,int *) ;
 int FUNC_6 (int *,int *) ;
 int FUNC_7 (unsigned char*,int *) ;
 int FUNC_8 (int *,unsigned char*,int *) ;
 int FUNC_9 (int *,unsigned char const*) ;
 int FUNC_10 (unsigned char*,int *) ;
 int FUNC_11 (unsigned char*,unsigned char const*,unsigned long long) ;
 int FUNC_12 (unsigned char*) ;

int
FUNC_13(unsigned char *VAR_1,
                                         unsigned long long *VAR_2,
                                         const unsigned char *VAR_3,
                                         unsigned long long VAR_4,
                                         const unsigned char *VAR_5)
{
    unsigned char VAR_6[64];
    unsigned char VAR_7[32], VAR_8[32];
    unsigned long long VAR_9;
    ge25519_cached VAR_10;
    ge25519_p1p1 VAR_11;
    ge25519_p2 VAR_12;
    ge25519_p3 VAR_13;
    ge25519_p3 VAR_14;
    ge25519_p3 VAR_15;

    *VAR_2 = 0;
    if (VAR_4 < 64 || VAR_4 - 64 > VAR_0) {
        return -1;
    }
    VAR_9 = VAR_4 - 64;
    if (VAR_3[VAR_4 - 1] & 224) {
        return -1;
    }
    if (FUNC_4(VAR_5) != 0 ||
        FUNC_3(&VAR_13, VAR_5) != 0 ||
        FUNC_4(VAR_3) != 0 ||
        FUNC_3(&VAR_14, VAR_3) != 0) {
        return -1;
    }
    FUNC_6(&VAR_10, &VAR_13);
    FUNC_0(VAR_6, VAR_3, VAR_9 + 32);
    FUNC_12(VAR_6);
    FUNC_8(&VAR_15, VAR_6, &VAR_14);
    FUNC_2(&VAR_11, &VAR_15, &VAR_10);
    FUNC_5(&VAR_12, &VAR_11);
    FUNC_10(VAR_7, &VAR_12);
    VAR_7[31] ^= 1 << 7;
    FUNC_9(&VAR_14, VAR_3 + 32 + VAR_9);
    FUNC_7(VAR_8, &VAR_14);
    if (FUNC_1(VAR_7, VAR_8) != 0) {
        return -1;
    }
    *VAR_2 = VAR_9;
    FUNC_11(VAR_1, VAR_3 + 32, VAR_9);

    return 0;
}
