
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int crypto_onetimeauth_state ;


 scalar_t__* VAR_0 ;
 int FUNC_0 (int) ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (scalar_t__*,scalar_t__,int,int ) ;
 unsigned int FUNC_2 () ;
 int FUNC_3 (int *,scalar_t__*) ;
 int FUNC_4 (int *,int ) ;
 unsigned int FUNC_5 () ;
 unsigned int FUNC_6 () ;
 unsigned int FUNC_7 () ;
 int FUNC_8 () ;
 int FUNC_9 () ;
 int FUNC_10 () ;
 int FUNC_11 (int *,scalar_t__,int) ;
 int FUNC_12 (scalar_t__*,int ,int) ;
 int FUNC_13 (char*,...) ;
 int VAR_2 ;
 scalar_t__ FUNC_14 (int ,char*) ;

int
FUNC_15(void)
{
    crypto_onetimeauth_state VAR_3;
    int VAR_4;

    FUNC_0(FUNC_10() == sizeof VAR_3);
    FUNC_1(VAR_0, VAR_1, 131, VAR_2);
    for (VAR_4 = 0; VAR_4 < 16; ++VAR_4) {
        FUNC_13(",0x%02x", (unsigned int) VAR_0[VAR_4]);
        if (VAR_4 % 8 == 7)
            FUNC_13("\n");
    }

    FUNC_12(VAR_0, 0, sizeof VAR_0);
    FUNC_4(&VAR_3, VAR_2);
    FUNC_11(&VAR_3, VAR_1, 100);
    FUNC_11(&VAR_3, VAR_1, 0);
    FUNC_11(&VAR_3, VAR_1 + 100, 31);
    FUNC_3(&VAR_3, VAR_0);
    for (VAR_4 = 0; VAR_4 < 16; ++VAR_4) {
        FUNC_13(",0x%02x", (unsigned int) VAR_0[VAR_4]);
        if (VAR_4 % 8 == 7)
            FUNC_13("\n");
    }

    FUNC_0(FUNC_2() > 0U);
    FUNC_0(FUNC_5() > 0U);
    FUNC_0(FUNC_14(FUNC_9(), "poly1305") == 0);
    FUNC_0(FUNC_6() == FUNC_2());
    FUNC_0(FUNC_7() ==
           FUNC_5());
    FUNC_0(FUNC_10() > 0);
    FUNC_0(FUNC_10() == FUNC_8());

    return 0;
}
