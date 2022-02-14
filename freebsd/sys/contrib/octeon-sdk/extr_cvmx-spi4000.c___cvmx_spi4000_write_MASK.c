
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (char*,int) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ,int ,int ,int,int,int) ;

__attribute__((used)) static void FUNC_4(int VAR_4, int VAR_5, uint32_t VAR_6)
{
    int VAR_7;
    FUNC_3(0, FUNC_0(VAR_4), VAR_2, 2, 1, VAR_5);
    FUNC_3(0, FUNC_0(VAR_4), VAR_3, 4, 1, VAR_6);

    VAR_7 = FUNC_2(FUNC_0(VAR_4), VAR_0);
    while ((VAR_7 == 5) || (VAR_7 == 0xff))
        VAR_7 = FUNC_2(FUNC_0(VAR_4), VAR_1);

    if (VAR_7 != 4)
        FUNC_1("SPI4000: write failed with status=0x%x\n", VAR_7);
}
