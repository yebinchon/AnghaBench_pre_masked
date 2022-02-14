
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int uint16_t ;


 int FUNC_0 (int,int) ;

void FUNC_1(uint16_t VAR_0, uint32_t VAR_1)
{
    uint16_t VAR_2, VAR_3;

    if (VAR_0 & 0x1)
    {
        return;
    }
    VAR_3 = VAR_1 & 0xFFFF;
    VAR_2 = VAR_1 >> 16;
    FUNC_0(VAR_0, VAR_3);
    FUNC_0(VAR_0 + 1, VAR_2);

}
