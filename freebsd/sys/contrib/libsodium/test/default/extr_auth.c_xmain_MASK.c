
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int crypto_auth_hmacsha512_state ;
typedef int crypto_auth_hmacsha256_state ;


 scalar_t__* VAR_0 ;
 scalar_t__* VAR_1 ;
 int FUNC_0 (int) ;
 int * VAR_2 ;
 int FUNC_1 (scalar_t__*,int *,int,int ) ;
 unsigned int FUNC_2 () ;
 unsigned int FUNC_3 () ;
 int FUNC_4 (int *,scalar_t__*) ;
 int FUNC_5 (int *,int ,int) ;
 unsigned int FUNC_6 () ;
 int FUNC_7 () ;
 int FUNC_8 (int *,int *,int) ;
 unsigned int FUNC_9 () ;
 unsigned int FUNC_10 () ;
 unsigned int FUNC_11 () ;
 unsigned int FUNC_12 () ;
 int FUNC_13 (int *,scalar_t__*) ;
 int FUNC_14 (int *,int ,int) ;
 unsigned int FUNC_15 () ;
 int FUNC_16 () ;
 int FUNC_17 (int *,int *,int) ;
 unsigned int FUNC_18 () ;
 int FUNC_19 () ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_20 (scalar_t__*,int ,int) ;
 int FUNC_21 (char*,...) ;
 scalar_t__ FUNC_22 (int ,char*) ;

int
FUNC_23(void)
{
    crypto_auth_hmacsha512_state VAR_5;
    crypto_auth_hmacsha256_state VAR_6;
    size_t VAR_7;

    FUNC_0(FUNC_16() ==
           sizeof(crypto_auth_hmacsha512_state));
    FUNC_1(VAR_0, VAR_2, sizeof VAR_2 - 1U, VAR_3);
    for (VAR_7 = 0; VAR_7 < sizeof VAR_0; ++VAR_7) {
        FUNC_21(",0x%02x", (unsigned int) VAR_0[VAR_7]);
        if (VAR_7 % 8 == 7)
            FUNC_21("\n");
    }
    FUNC_21("\n");

    FUNC_14(&VAR_5, VAR_3, sizeof VAR_3);
    FUNC_17(&VAR_5, VAR_2, 1U);
    FUNC_17(&VAR_5, VAR_2, sizeof VAR_2 - 2U);
    FUNC_13(&VAR_5, VAR_1);
    for (VAR_7 = 0; VAR_7 < sizeof VAR_1; ++VAR_7) {
        FUNC_21(",0x%02x", (unsigned int) VAR_1[VAR_7]);
        if (VAR_7 % 8 == 7)
            FUNC_21("\n");
    }
    FUNC_21("\n");

    FUNC_14(&VAR_5, VAR_4, sizeof VAR_4);
    FUNC_17(&VAR_5, VAR_2, 1U);
    FUNC_17(&VAR_5, VAR_2, sizeof VAR_2 - 2U);
    FUNC_13(&VAR_5, VAR_1);
    for (VAR_7 = 0; VAR_7 < sizeof VAR_1; ++VAR_7) {
        FUNC_21(",0x%02x", (unsigned int) VAR_1[VAR_7]);
        if (VAR_7 % 8 == 7)
            FUNC_21("\n");
    }

    FUNC_20(VAR_1, 0, sizeof VAR_1);
    FUNC_5(&VAR_6, VAR_4, sizeof VAR_4);
    FUNC_8(&VAR_6, ((void*)0), 0U);
    FUNC_8(&VAR_6, VAR_2, 1U);
    FUNC_8(&VAR_6, VAR_2, sizeof VAR_2 - 2U);
    FUNC_4(&VAR_6, VAR_1);
    for (VAR_7 = 0; VAR_7 < sizeof VAR_1; ++VAR_7) {
        FUNC_21(",0x%02x", (unsigned int) VAR_1[VAR_7]);
        if (VAR_7 % 8 == 7)
            FUNC_21("\n");
    }

    FUNC_0(FUNC_2() > 0U);
    FUNC_0(FUNC_18() > 0U);
    FUNC_0(FUNC_22(FUNC_19(), "hmacsha512256") == 0);
    FUNC_0(FUNC_3() > 0U);
    FUNC_0(FUNC_6() > 0U);
    FUNC_0(FUNC_12() > 0U);
    FUNC_0(FUNC_15() > 0U);
    FUNC_0(FUNC_9() == FUNC_2());
    FUNC_0(FUNC_10() == FUNC_18());
    FUNC_0(FUNC_11() >=
           FUNC_10());
    FUNC_0(FUNC_7() ==
           sizeof(crypto_auth_hmacsha256_state));
    FUNC_0(FUNC_16() ==
           sizeof(crypto_auth_hmacsha512_state));

    return 0;
}
