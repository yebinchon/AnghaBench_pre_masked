
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int _U_UINT ;
typedef scalar_t__ _U_SINT ;
typedef int UNITY_DISPLAY_STYLE_T ;


 int const VAR_0 ;
 int const VAR_1 ;
 int FUNC_0 (scalar_t__ const) ;
 int FUNC_1 (int,char) ;
 int FUNC_2 (int) ;
 int* VAR_2 ;

void FUNC_3(const _U_SINT VAR_3, const UNITY_DISPLAY_STYLE_T VAR_4)
{
    if ((VAR_4 & VAR_0) == VAR_0)
    {
        FUNC_0(VAR_3);
    }
    else if ((VAR_4 & VAR_1) == VAR_1)
    {
        FUNC_2( (_U_UINT)VAR_3 & VAR_2[((_U_UINT)VAR_4 & (_U_UINT)0x0F) - 1] );
    }
    else
    {
        FUNC_1((_U_UINT)VAR_3, (char)((VAR_4 & 0x000F) << 1));
    }
}
