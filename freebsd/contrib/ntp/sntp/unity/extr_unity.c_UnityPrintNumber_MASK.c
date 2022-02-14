
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef long _U_UINT ;
typedef long _U_SINT ;


 int VAR_0 ;
 int FUNC_0 (char) ;

void FUNC_1(const _U_SINT VAR_1)
{
    _U_SINT VAR_2 = 1;
    _U_SINT VAR_3;
    _U_UINT VAR_4;

    if (VAR_1 == (1l << (VAR_0-1)))
    {

        FUNC_0('-');
        VAR_4 = (1ul << (VAR_0-1));
    }
    else if (VAR_1 < 0)
    {

        FUNC_0('-');
        VAR_4 = (_U_UINT)(-VAR_1);
    }
    else
    {

        VAR_4 = (_U_UINT)VAR_1;
    }


    while (VAR_4 / VAR_2 > 9)
    {
        VAR_3 = VAR_2 * 10;
        if (VAR_3 > VAR_2)
            VAR_2 = VAR_3;
        else
            break;
    }


    do
    {
        FUNC_0((char)('0' + (VAR_4 / VAR_2 % 10)));
        VAR_2 /= 10;
    }
    while (VAR_2 > 0);
}
