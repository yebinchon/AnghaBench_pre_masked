
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned char uint8_t ;
typedef unsigned int uint32_t ;


 int FUNC_0 (int) ;
 int FUNC_1 (unsigned char*,unsigned char*) ;
 unsigned int FUNC_2 () ;
 int FUNC_3 (unsigned char*,unsigned char*) ;
 unsigned int FUNC_4 () ;
 int FUNC_5 (unsigned char*,unsigned char*) ;
 unsigned int FUNC_6 () ;
 int FUNC_7 (unsigned char*,unsigned char*,int) ;
 int FUNC_8 (char*) ;
 int FUNC_9 (unsigned char*,int) ;
 unsigned int FUNC_10 () ;
 int FUNC_11 (unsigned char*) ;
 scalar_t__ FUNC_12 (int) ;
 int FUNC_13 (unsigned char*,unsigned char*,int) ;

int
FUNC_14(void)
{
    unsigned char *VAR_0, *VAR_1;
    unsigned char *VAR_2, *VAR_3;
    unsigned char *VAR_4, *VAR_5;
    uint32_t VAR_6;
    uint8_t VAR_7;
    int VAR_8;

    VAR_0 = (unsigned char *) FUNC_12(16);
    VAR_1 = (unsigned char *) FUNC_12(16);
    VAR_2 = (unsigned char *) FUNC_12(32);
    VAR_3 = (unsigned char *) FUNC_12(32);
    VAR_4 = (unsigned char *) FUNC_12(64);
    VAR_5 = (unsigned char *) FUNC_12(64);
    for (VAR_8 = 0; VAR_8 < 10000; VAR_8++) {
        FUNC_9(VAR_0, 16);
        FUNC_9(VAR_2, 32);
        FUNC_9(VAR_4, 64);

        FUNC_7(VAR_1, VAR_0, 16);
        FUNC_7(VAR_3, VAR_2, 32);
        FUNC_7(VAR_5, VAR_4, 64);

        if (FUNC_1(VAR_0, VAR_1) != 0 ||
            FUNC_3(VAR_2, VAR_3) != 0 ||
            FUNC_5(VAR_4, VAR_5) != 0 ||
            FUNC_13(VAR_0, VAR_1, 16) != 0 ||
            FUNC_13(VAR_2, VAR_3, 32) != 0 ||
            FUNC_13(VAR_4, VAR_5, 64) != 0) {
            FUNC_8("Failed\n");
        }
    }
    FUNC_8("OK\n");

    for (VAR_8 = 0; VAR_8 < 100000; VAR_8++) {
        VAR_6 = FUNC_10();
        VAR_7 = (uint8_t) FUNC_10();
        if (VAR_7 == 0) {
            continue;
        }
        VAR_1[VAR_6 & 15U] ^= VAR_7;
        VAR_3[VAR_6 & 31U] ^= VAR_7;
        VAR_5[VAR_6 & 63U] ^= VAR_7;
        if (FUNC_1(VAR_0, VAR_1) != -1 ||
            FUNC_3(VAR_2, VAR_3) != -1 ||
            FUNC_5(VAR_4, VAR_5) != -1 ||
            FUNC_13(VAR_0, VAR_1, 16) != -1 ||
            FUNC_13(VAR_2, VAR_3, 32) != -1 ||
            FUNC_13(VAR_4, VAR_5, 64) != -1) {
            FUNC_8("Failed\n");
        }
        VAR_1[VAR_6 & 15U] ^= VAR_7;
        VAR_3[VAR_6 & 31U] ^= VAR_7;
        VAR_5[VAR_6 & 63U] ^= VAR_7;
    }
    FUNC_8("OK\n");

    FUNC_0(FUNC_2() == 16U);
    FUNC_0(FUNC_4() == 32U);
    FUNC_0(FUNC_6() == 64U);

    FUNC_11(VAR_0);
    FUNC_11(VAR_1);
    FUNC_11(VAR_2);
    FUNC_11(VAR_3);
    FUNC_11(VAR_4);
    FUNC_11(VAR_5);

    return 0;
}
