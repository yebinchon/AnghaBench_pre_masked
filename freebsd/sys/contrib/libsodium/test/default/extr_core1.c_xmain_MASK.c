
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (scalar_t__*,int ,int ,int ) ;
 unsigned int FUNC_2 () ;
 unsigned int FUNC_3 () ;
 unsigned int FUNC_4 () ;
 unsigned int FUNC_5 () ;
 scalar_t__* VAR_1 ;
 int FUNC_6 (char*,...) ;
 int VAR_2 ;
 int VAR_3 ;

int
FUNC_7(void)
{
    int VAR_4;

    FUNC_1(VAR_1, VAR_3, VAR_2, VAR_0);
    for (VAR_4 = 0; VAR_4 < 32; ++VAR_4) {
        if (VAR_4 > 0) {
            FUNC_6(",");
        } else {
            FUNC_6(" ");
        }
        FUNC_6("0x%02x", (unsigned int) VAR_1[VAR_4]);
        if (VAR_4 % 8 == 7) {
            FUNC_6("\n");
        }
    }
    FUNC_0(FUNC_5() > 0U);
    FUNC_0(FUNC_3() > 0U);
    FUNC_0(FUNC_4() > 0U);
    FUNC_0(FUNC_2() > 0U);

    return 0;
}
