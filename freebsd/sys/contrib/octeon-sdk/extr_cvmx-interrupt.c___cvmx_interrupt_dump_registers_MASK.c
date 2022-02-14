
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int ) ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (char*,int ,int,unsigned int,unsigned int,int ,int,unsigned int,unsigned int) ;
 int FUNC_4 (char*,int ) ;
 int * VAR_4 ;

__attribute__((used)) static void FUNC_5(uint64_t *VAR_5)
{
    uint64_t VAR_6, VAR_7;
    int VAR_8;
    for (VAR_8=0; VAR_8<16; VAR_8++)
    {
        VAR_6 = VAR_5[VAR_8]; VAR_7 = VAR_5[VAR_8+16];
        FUNC_3("%3s ($%02d): 0x%08x%08x \t %3s ($%02d): 0x%08x%08x\n",
                           VAR_4[VAR_8], VAR_8, (unsigned int)FUNC_1(VAR_6), (unsigned int)FUNC_2(VAR_6),
                           VAR_4[VAR_8+16], VAR_8+16, (unsigned int)FUNC_1(VAR_7), (unsigned int)FUNC_2(VAR_7));
    }
    FUNC_0 (VAR_6, VAR_1);
    FUNC_4 ("COP0_CAUSE", VAR_6);
    FUNC_0 (VAR_7, VAR_3);
    FUNC_4 ("COP0_STATUS", VAR_7);
    FUNC_0 (VAR_6, VAR_0);
    FUNC_4 ("COP0_BADVADDR", VAR_6);
    FUNC_0 (VAR_7, VAR_2);
    FUNC_4 ("COP0_EPC", VAR_7);
}
