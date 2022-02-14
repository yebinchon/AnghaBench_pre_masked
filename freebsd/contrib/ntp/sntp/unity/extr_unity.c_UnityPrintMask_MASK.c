
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int _U_UINT ;
typedef int _US32 ;


 int VAR_0 ;
 int FUNC_0 (char) ;

void FUNC_1(const _U_UINT VAR_1, const _U_UINT VAR_2)
{
    _U_UINT VAR_3 = (_U_UINT)1 << (VAR_0 - 1);
    _US32 VAR_4;

    for (VAR_4 = 0; VAR_4 < VAR_0; VAR_4++)
    {
        if (VAR_3 & VAR_1)
        {
            if (VAR_3 & VAR_2)
            {
                FUNC_0('1');
            }
            else
            {
                FUNC_0('0');
            }
        }
        else
        {
            FUNC_0('X');
        }
        VAR_3 = VAR_3 >> 1;
    }
}
