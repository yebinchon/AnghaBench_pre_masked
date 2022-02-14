
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int) ;
 int FUNC_1 (scalar_t__*,scalar_t__*,int) ;
 int FUNC_2 (scalar_t__*,int,int ,int ) ;
 unsigned int FUNC_3 () ;
 unsigned int FUNC_4 () ;
 unsigned int FUNC_5 () ;
 int FUNC_6 () ;
 unsigned int FUNC_7 () ;
 unsigned int FUNC_8 () ;
 unsigned int FUNC_9 () ;
 int FUNC_10 (scalar_t__*,scalar_t__*,int,int ,unsigned long long,int ) ;
 int VAR_0 ;
 scalar_t__* VAR_1 ;
 char* VAR_2 ;
 int FUNC_11 (scalar_t__*,int,int) ;
 int VAR_3 ;
 scalar_t__* VAR_4 ;
 int FUNC_12 (char*,char*) ;
 int FUNC_13 (scalar_t__*,int) ;
 int FUNC_14 (char*,int,scalar_t__*,int) ;
 scalar_t__ FUNC_15 (int ,char*) ;

int
FUNC_16(void)
{
    int VAR_5;

    FUNC_13(VAR_4, sizeof VAR_4);
    FUNC_2(VAR_4, sizeof VAR_4, VAR_3, VAR_0);
    FUNC_1(VAR_1, VAR_4, sizeof VAR_4);
    FUNC_14(VAR_2, sizeof VAR_2, VAR_1, sizeof VAR_1);
    FUNC_12("%s\n", VAR_2);

    FUNC_0(sizeof VAR_4 > 4000);

    FUNC_10(VAR_4, VAR_4, 4000, VAR_3, 0U, VAR_0);
    for (VAR_5 = 0; VAR_5 < 4000; VAR_5++) {
        FUNC_0(VAR_4[VAR_5] == 0);
    }
    FUNC_10(VAR_4, VAR_4, 4000, VAR_3, 1U, VAR_0);
    FUNC_1(VAR_1, VAR_4, sizeof VAR_4);
    FUNC_14(VAR_2, sizeof VAR_2, VAR_1, sizeof VAR_1);
    FUNC_12("%s\n", VAR_2);

    for (VAR_5 = 0; VAR_5 < 64; VAR_5++) {
        FUNC_11(VAR_4, VAR_5, 64);
        FUNC_2(VAR_4, (int) (VAR_5 & 0xff), VAR_3, VAR_0);
        FUNC_14(VAR_2, sizeof VAR_2, VAR_4, 64);
        FUNC_12("%s\n", VAR_2);
    }

    FUNC_11(VAR_4, 0, 192);
    FUNC_10(VAR_4, VAR_4, 192, VAR_3,
                                  (1ULL << 32) - 1ULL, VAR_0);
    FUNC_14(VAR_2, 192 * 2 + 1, VAR_4, 192);
    FUNC_12("%s\n", VAR_2);

    FUNC_0(FUNC_3() > 0U);
    FUNC_0(FUNC_5() > 0U);
    FUNC_0(FUNC_4() > 0U);
    FUNC_0(FUNC_15(FUNC_6(), "xsalsa20") == 0);
    FUNC_0(FUNC_3() == FUNC_7());
    FUNC_0(FUNC_5() == FUNC_9());
    FUNC_0(FUNC_4() == FUNC_8());

    return 0;
}
