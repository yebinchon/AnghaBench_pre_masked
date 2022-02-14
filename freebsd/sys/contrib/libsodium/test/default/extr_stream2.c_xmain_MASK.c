
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int) ;
 int FUNC_1 (int*,scalar_t__*,int) ;
 int FUNC_2 (scalar_t__*,int,int ,int ) ;
 unsigned int FUNC_3 () ;
 unsigned int FUNC_4 () ;
 unsigned int FUNC_5 () ;
 int FUNC_6 (scalar_t__*,scalar_t__*,int,int ,unsigned int,int ) ;
 int* VAR_0 ;
 int VAR_1 ;
 scalar_t__* VAR_2 ;
 int FUNC_7 (char*,...) ;
 int VAR_3 ;

int
FUNC_8(void)
{
    int VAR_4;
    FUNC_2(VAR_2, sizeof VAR_2, VAR_1, VAR_3);
    FUNC_1(VAR_0, VAR_2, sizeof VAR_2);
    for (VAR_4 = 0; VAR_4 < 32; ++VAR_4)
        FUNC_7("%02x", VAR_0[VAR_4]);
    FUNC_7("\n");

    FUNC_0(sizeof VAR_2 > 4000);

    FUNC_6(VAR_2, VAR_2, 4000, VAR_1, 0U,
                                 VAR_3);
    for (VAR_4 = 0; VAR_4 < 4000; ++VAR_4)
        FUNC_0(VAR_2[VAR_4] == 0);

    FUNC_6(VAR_2, VAR_2, 4000, VAR_1, 1U,
                                 VAR_3);
    FUNC_1(VAR_0, VAR_2, sizeof VAR_2);
    for (VAR_4 = 0; VAR_4 < 32; ++VAR_4)
        FUNC_7("%02x", VAR_0[VAR_4]);
    FUNC_7("\n");

    FUNC_0(FUNC_3() > 0U);
    FUNC_0(FUNC_5() > 0U);
    FUNC_0(FUNC_4() > 0U);

    return 0;
}
