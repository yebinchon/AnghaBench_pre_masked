
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int uint16_t ;


 int FUNC_0 (int) ;

uint32_t FUNC_1(uint16_t VAR_0)
{
    uint32_t VAR_1, VAR_2;

    if (VAR_0 & 0x1)
    {
        return(0xdeadbeef);
    }
    VAR_2 = FUNC_0(VAR_0);
    VAR_1 = FUNC_0(VAR_0 + 1);
    return((VAR_1 << 16) | VAR_2);
}
