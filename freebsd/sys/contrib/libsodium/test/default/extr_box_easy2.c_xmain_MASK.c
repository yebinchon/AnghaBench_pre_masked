
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;


 int FUNC_0 (int) ;
 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 int FUNC_1 (unsigned char*,unsigned char*,unsigned char*) ;
 int FUNC_2 (unsigned char*,unsigned char*,unsigned char*,unsigned long long,unsigned char*,unsigned char*,unsigned char*) ;
 int FUNC_3 (unsigned char*,unsigned char*,unsigned char*,unsigned long long,unsigned char*,unsigned char*) ;
 int FUNC_4 (unsigned char*,unsigned char*,unsigned long long,unsigned char*,unsigned char*,unsigned char*) ;
 scalar_t__ FUNC_5 (unsigned char*,unsigned char*,unsigned long long,unsigned char*,unsigned char*) ;
 int FUNC_6 (unsigned char*,unsigned char*) ;
 int FUNC_7 (unsigned char*,unsigned char*,unsigned char*,unsigned long long,unsigned char*,unsigned char*,unsigned char*) ;
 scalar_t__ FUNC_8 (unsigned char*,unsigned char*,unsigned char*,unsigned long long,unsigned char*,unsigned char*) ;
 scalar_t__ FUNC_9 (unsigned char*,unsigned char*,unsigned long long,unsigned char*,unsigned char*,unsigned char*) ;
 scalar_t__ FUNC_10 (unsigned char*,unsigned char*,size_t,unsigned char*,unsigned char*) ;
 int FUNC_11 (unsigned char*,unsigned char*,size_t) ;
 int FUNC_12 (unsigned char*,unsigned char*,size_t) ;
 int FUNC_13 (unsigned char*,int ,size_t) ;
 int FUNC_14 (char*,...) ;
 int FUNC_15 (unsigned char*,size_t) ;
 size_t FUNC_16 (int) ;
 unsigned char* VAR_5 ;
 int FUNC_17 (unsigned char*) ;
 scalar_t__ FUNC_18 (size_t) ;

int
FUNC_19(void)
{
    unsigned char *VAR_6;
    unsigned char *VAR_7;
    unsigned char *VAR_8;
    unsigned char *VAR_9;
    unsigned char *VAR_10;
    unsigned char *VAR_11;
    unsigned char *VAR_12;
    unsigned char *VAR_13;
    unsigned char *VAR_14;
    unsigned char *VAR_15;
    unsigned char *VAR_16;
    size_t VAR_17;
    size_t VAR_18;
    size_t VAR_19;
    size_t VAR_20;
    size_t VAR_21;
    int VAR_22;

    VAR_20 = VAR_19 = 7U + FUNC_16(1000);
    VAR_21 = VAR_1 + VAR_19;
    VAR_14 = (unsigned char *) FUNC_18(VAR_19);
    VAR_15 = (unsigned char *) FUNC_18(VAR_20);
    VAR_16 = (unsigned char *) FUNC_18(VAR_21);
    VAR_6 = (unsigned char *) FUNC_18(VAR_3);
    VAR_7 = (unsigned char *) FUNC_18(VAR_4);
    VAR_8 = (unsigned char *) FUNC_18(VAR_3);
    VAR_9 = (unsigned char *) FUNC_18(VAR_4);
    VAR_10 = (unsigned char *) FUNC_18(VAR_1);
    VAR_11 = (unsigned char *) FUNC_18(VAR_2);
    VAR_12 = (unsigned char *) FUNC_18(VAR_0);
    VAR_13 = (unsigned char *) FUNC_18(VAR_0);
    FUNC_6(VAR_6, VAR_7);
    FUNC_6(VAR_8, VAR_9);
    VAR_17 = (size_t) FUNC_16((uint32_t) VAR_19) + 1U;
    FUNC_15(VAR_14, VAR_17);
    FUNC_15(VAR_11, VAR_2);
    VAR_22 = FUNC_4(VAR_16, VAR_14, VAR_17, VAR_11, VAR_8, VAR_7);
    FUNC_0(VAR_22 == 0);
    if (FUNC_9(VAR_15, VAR_16,
                             (unsigned long long) VAR_17 + VAR_1,
                             VAR_11, VAR_6, VAR_9) != 0) {
        FUNC_14("open() failed");
        return 1;
    }
    FUNC_14("%d\n", FUNC_11(VAR_14, VAR_15, VAR_17));

    for (VAR_18 = 0; VAR_18 < VAR_17 + VAR_1 - 1; VAR_18++) {
        if (FUNC_9(VAR_15, VAR_16, (unsigned long long) VAR_18, VAR_11, VAR_6,
                                 VAR_9) == 0) {
            FUNC_14("short open() should have failed");
            return 1;
        }
    }
    FUNC_12(VAR_16, VAR_14, VAR_17);
    VAR_22 =
        FUNC_4(VAR_16, VAR_16, (unsigned long long) VAR_17, VAR_11, VAR_8, VAR_7);
    FUNC_0(VAR_22 == 0);
    FUNC_14("%d\n", FUNC_11(VAR_14, VAR_16, VAR_17) == 0);
    FUNC_14("%d\n", FUNC_11(VAR_14, VAR_16 + VAR_1, VAR_17) == 0);
    if (FUNC_9(VAR_16, VAR_16,
                             (unsigned long long) VAR_17 + VAR_1,
                             VAR_11, VAR_6, VAR_9) != 0) {
        FUNC_14("crypto_box_open_easy() failed\n");
    }

    VAR_22 = FUNC_1(VAR_12, VAR_5, VAR_9);
    FUNC_0(VAR_22 == -1);
    VAR_22 = FUNC_1(VAR_13, VAR_5, VAR_7);
    FUNC_0(VAR_22 == -1);

    VAR_22 = FUNC_1(VAR_12, VAR_6, VAR_9);
    FUNC_0(VAR_22 == 0);
    VAR_22 = FUNC_1(VAR_13, VAR_8, VAR_7);
    FUNC_0(VAR_22 == 0);

    FUNC_13(VAR_15, 0, VAR_20);

    if (FUNC_5(VAR_16, VAR_14, 0, VAR_11, VAR_12) != 0) {
        FUNC_14(
            "crypto_box_easy_afternm() with a null ciphertext should have "
            "worked\n");
    }
    FUNC_5(VAR_16, VAR_14, (unsigned long long) VAR_17, VAR_11, VAR_12);
    if (FUNC_10(
            VAR_15, VAR_16, (unsigned long long) VAR_17 + VAR_1, VAR_11,
            VAR_13) != 0) {
        FUNC_14("crypto_box_open_easy_afternm() failed\n");
    }
    FUNC_14("%d\n", FUNC_11(VAR_14, VAR_15, VAR_17));
    if (FUNC_10(VAR_15, VAR_16, VAR_1 - 1U, VAR_11,
                                     VAR_13) == 0) {
        FUNC_14(
            "crypto_box_open_easy_afternm() with a huge ciphertext should have "
            "failed\n");
    }
    FUNC_13(VAR_15, 0, VAR_20);
    VAR_22 = FUNC_2(VAR_16, VAR_10, VAR_14, (unsigned long long) VAR_17, VAR_11,
                              VAR_5, VAR_9);
    FUNC_0(VAR_22 == -1);
    VAR_22 = FUNC_2(VAR_16, VAR_10, VAR_14, (unsigned long long) VAR_17, VAR_11,
                              VAR_6, VAR_9);
    FUNC_0(VAR_22 == 0);
    if (FUNC_7(VAR_15, VAR_16, VAR_10, (unsigned long long) VAR_17, VAR_11,
                                 VAR_5, VAR_7) != -1) {
        FUNC_14("crypto_box_open_detached() with a weak key passed\n");
    }
    if (FUNC_7(VAR_15, VAR_16, VAR_10, (unsigned long long) VAR_17, VAR_11,
                                 VAR_8, VAR_7) != 0) {
        FUNC_14("crypto_box_open_detached() failed\n");
    }
    FUNC_14("%d\n", FUNC_11(VAR_14, VAR_15, VAR_17));

    FUNC_13(VAR_15, 0, VAR_20);
    FUNC_3(VAR_16, VAR_10, VAR_14, (unsigned long long) VAR_17, VAR_11,
                                VAR_12);
    if (FUNC_8(VAR_15, VAR_16, VAR_10, (unsigned long long) VAR_17,
                                         VAR_11, VAR_13) != 0) {
        FUNC_14("crypto_box_open_detached_afternm() failed\n");
    }
    FUNC_14("%d\n", FUNC_11(VAR_14, VAR_15, VAR_17));

    FUNC_17(VAR_6);
    FUNC_17(VAR_7);
    FUNC_17(VAR_8);
    FUNC_17(VAR_9);
    FUNC_17(VAR_10);
    FUNC_17(VAR_11);
    FUNC_17(VAR_12);
    FUNC_17(VAR_13);
    FUNC_17(VAR_14);
    FUNC_17(VAR_15);
    FUNC_17(VAR_16);
    FUNC_14("OK\n");

    return 0;
}
