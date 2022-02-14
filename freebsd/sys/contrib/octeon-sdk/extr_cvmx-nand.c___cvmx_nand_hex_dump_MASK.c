
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint64_t ;


 int FUNC_0 (char*,...) ;
 int* FUNC_1 (int ) ;
 int VAR_0 ;

__attribute__((used)) static void FUNC_2(uint64_t VAR_1, int VAR_2)
{
    uint8_t *VAR_3 = FUNC_1(VAR_1);
    int VAR_4 = 0;
    while (VAR_4 < VAR_2)
    {
        int VAR_5;
        FUNC_0("%*s%04x:", 2*VAR_0, "", VAR_4);
        for (VAR_5=0; VAR_5<32; VAR_5++)
        {
            if ((VAR_5&3) == 0)
                FUNC_0(" ");
            if (VAR_4+VAR_5 < VAR_2)
                FUNC_0("%02x", 0xff & VAR_3[VAR_4+VAR_5]);
            else
                FUNC_0("  ");
        }
        FUNC_0("\n");
        VAR_4 += 32;
    }
}
