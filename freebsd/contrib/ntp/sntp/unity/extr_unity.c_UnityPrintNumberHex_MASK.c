
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char _U_UINT ;


 int FUNC_0 (char) ;

void FUNC_1(const _U_UINT VAR_0, const char VAR_1)
{
    _U_UINT VAR_2;
    char VAR_3 = VAR_1;
    FUNC_0('0');
    FUNC_0('x');

    while (VAR_3 > 0)
    {
        VAR_2 = (VAR_0 >> (--VAR_3 << 2)) & 0x0000000F;
        if (VAR_2 <= 9)
        {
            FUNC_0((char)('0' + VAR_2));
        }
        else
        {
            FUNC_0((char)('A' - 10 + VAR_2));
        }
    }
}
