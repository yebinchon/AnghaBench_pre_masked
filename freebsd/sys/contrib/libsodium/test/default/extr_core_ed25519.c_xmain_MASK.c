
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (unsigned char*) ;
 int FUNC_1 (int) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_2 (unsigned char*,unsigned char*,unsigned char*) ;
 scalar_t__ FUNC_3 () ;
 scalar_t__ FUNC_4 (unsigned char*,unsigned char*) ;
 int FUNC_5 (unsigned char*) ;
 int FUNC_6 (unsigned char*,unsigned char*,unsigned char*) ;
 scalar_t__ FUNC_7 () ;
 scalar_t__ FUNC_8 (unsigned char*,unsigned char*,unsigned char*) ;
 scalar_t__ VAR_2 ;
 unsigned char* VAR_3 ;
 scalar_t__ FUNC_9 (unsigned char*,unsigned char*,scalar_t__) ;
 int FUNC_10 (unsigned char*,unsigned char*,scalar_t__) ;
 int FUNC_11 (unsigned char*,int ,scalar_t__) ;
 unsigned char* VAR_4 ;
 unsigned char* VAR_5 ;
 int FUNC_12 (char*) ;
 int FUNC_13 (unsigned char*,scalar_t__) ;
 scalar_t__ FUNC_14 (int) ;
 int FUNC_15 (unsigned char*) ;
 scalar_t__ FUNC_16 (scalar_t__) ;

int
FUNC_17(void)
{
    unsigned char *VAR_6;
    unsigned char *VAR_7, *VAR_8, *VAR_9;
    unsigned char *VAR_10;
    int VAR_11, VAR_12;

    VAR_6 = (unsigned char *) FUNC_16(VAR_1);
    VAR_7 = (unsigned char *) FUNC_16(VAR_0);
    for (VAR_11 = 0; VAR_11 < 1000; VAR_11++) {
        FUNC_13(VAR_6, VAR_1);
        if (FUNC_4(VAR_7, VAR_6) != 0) {
            FUNC_12("crypto_core_ed25519_from_uniform() failed\n");
        }
        if (FUNC_5(VAR_7) == 0) {
            FUNC_12("crypto_core_ed25519_from_uniform() returned an invalid point\n");
        }
    }

    VAR_8 = (unsigned char *) FUNC_16(VAR_0);
    VAR_9 = (unsigned char *) FUNC_16(VAR_0);
    FUNC_13(VAR_6, VAR_1);
    FUNC_4(VAR_8, VAR_6);

    VAR_12 = 1 + (int) FUNC_14(100);
    FUNC_10(VAR_9, VAR_7, VAR_0);
    for (VAR_11 = 0; VAR_11 < VAR_12; VAR_11++) {
        FUNC_2(VAR_7, VAR_7, VAR_8);
        if (FUNC_5(VAR_7) != 1) {
            FUNC_12("crypto_core_add() returned an invalid point\n");
        }
    }
    if (FUNC_9(VAR_7, VAR_9, VAR_0) == 0) {
        FUNC_12("crypto_core_add() failed\n");
    }
    for (VAR_11 = 0; VAR_11 < VAR_12; VAR_11++) {
        FUNC_6(VAR_7, VAR_7, VAR_8);
    }
    if (FUNC_9(VAR_7, VAR_9, VAR_0) != 0) {
        FUNC_12("crypto_core_add() or crypto_core_sub() failed\n");
    }
    VAR_10 = (unsigned char *) FUNC_16(VAR_2);
    FUNC_11(VAR_10, 0, VAR_2);
    VAR_10[0] = 8;
    FUNC_10(VAR_8, VAR_7, VAR_0);
    FUNC_10(VAR_9, VAR_7, VAR_0);

    for (VAR_11 = 0; VAR_11 < 254; VAR_11++) {
        FUNC_2(VAR_8, VAR_8, VAR_8);
    }
    for (VAR_11 = 0; VAR_11 < 8; VAR_11++) {
        FUNC_2(VAR_8, VAR_8, VAR_7);
    }
    if (FUNC_8(VAR_9, VAR_10, VAR_7) != 0) {
        FUNC_12("crypto_scalarmult_ed25519() failed\n");
    }
    if (FUNC_9(VAR_8, VAR_9, VAR_0) != 0) {
        FUNC_12("crypto_scalarmult_ed25519() is inconsistent with crypto_core_ed25519_add()\n");
    }

    FUNC_1(FUNC_5(VAR_7) == 1);

    FUNC_11(VAR_7, 0, VAR_0);
    FUNC_1(FUNC_5(VAR_7) == 0);

    VAR_7[0] = 1;
    FUNC_1(FUNC_5(VAR_7) == 0);

    VAR_7[0] = 2;
    FUNC_1(FUNC_5(VAR_7) == 0);

    VAR_7[0] = 9;
    FUNC_1(FUNC_5(VAR_7) == 1);

    FUNC_1(FUNC_5(VAR_3) == 1);
    FUNC_1(FUNC_5(VAR_4) == 0);
    FUNC_1(FUNC_5(VAR_5) == 0);

    FUNC_10(VAR_8, VAR_7, VAR_0);
    FUNC_0(VAR_8);
    FUNC_2(VAR_9, VAR_8, VAR_8);
    FUNC_6(VAR_9, VAR_9, VAR_8);
    FUNC_1(FUNC_9(VAR_8, VAR_7, VAR_0) != 0);
    FUNC_1(FUNC_9(VAR_9, VAR_7, VAR_0) == 0);

    VAR_7[0] = 2;
    FUNC_1(FUNC_2(VAR_9, VAR_8, VAR_7) == -1);
    FUNC_1(FUNC_2(VAR_9, VAR_8, VAR_5) == 0);
    FUNC_1(FUNC_2(VAR_9, VAR_8, VAR_4) == -1);
    FUNC_1(FUNC_2(VAR_9, VAR_7, VAR_9) == -1);
    FUNC_1(FUNC_2(VAR_9, VAR_5, VAR_9) == 0);
    FUNC_1(FUNC_2(VAR_9, VAR_4, VAR_9) == -1);

    FUNC_1(FUNC_6(VAR_9, VAR_8, VAR_7) == -1);
    FUNC_1(FUNC_6(VAR_9, VAR_8, VAR_5) == 0);
    FUNC_1(FUNC_6(VAR_9, VAR_8, VAR_4) == -1);
    FUNC_1(FUNC_6(VAR_9, VAR_7, VAR_9) == -1);
    FUNC_1(FUNC_6(VAR_9, VAR_5, VAR_9) == 0);
    FUNC_1(FUNC_6(VAR_9, VAR_4, VAR_9) == -1);

    FUNC_15(VAR_10);
    FUNC_15(VAR_9);
    FUNC_15(VAR_8);
    FUNC_15(VAR_7);
    FUNC_15(VAR_6);

    FUNC_1(VAR_0 == FUNC_3());
    FUNC_1(VAR_1 == FUNC_7());
    FUNC_1(VAR_1 >= VAR_0);

    FUNC_12("OK\n");

    return 0;
}
