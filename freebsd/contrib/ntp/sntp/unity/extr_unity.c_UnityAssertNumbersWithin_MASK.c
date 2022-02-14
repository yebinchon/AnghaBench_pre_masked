
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ _U_UINT ;
typedef scalar_t__ _U_SINT ;
typedef int UNITY_LINE_TYPE ;
typedef int UNITY_DISPLAY_STYLE_T ;
struct TYPE_2__ {int CurrentTestFailed; } ;


 int const VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_1__ VAR_3 ;
 int FUNC_0 (char const*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (scalar_t__ const,int const) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_3 (int const) ;

void FUNC_4( const _U_SINT VAR_7,
                               const _U_SINT VAR_8,
                               const _U_SINT VAR_9,
                               const char* VAR_10,
                               const UNITY_LINE_TYPE VAR_11,
                               const UNITY_DISPLAY_STYLE_T VAR_12)
{
    VAR_2;

    if ((VAR_12 & VAR_0) == VAR_0)
    {
        if (VAR_9 > VAR_8)
          VAR_3.CurrentTestFailed = ((VAR_9 - VAR_8) > VAR_7);
        else
          VAR_3.CurrentTestFailed = ((VAR_8 - VAR_9) > VAR_7);
    }
    else
    {
        if ((_U_UINT)VAR_9 > (_U_UINT)VAR_8)
            VAR_3.CurrentTestFailed = ((_U_UINT)(VAR_9 - VAR_8) > (_U_UINT)VAR_7);
        else
            VAR_3.CurrentTestFailed = ((_U_UINT)(VAR_8 - VAR_9) > (_U_UINT)VAR_7);
    }

    if (VAR_3.CurrentTestFailed)
    {
        FUNC_3(VAR_11);
        FUNC_1(VAR_4);
        FUNC_2(VAR_7, VAR_12);
        FUNC_1(VAR_5);
        FUNC_2(VAR_8, VAR_12);
        FUNC_1(VAR_6);
        FUNC_2(VAR_9, VAR_12);
        FUNC_0(VAR_10);
        VAR_1;
    }
}
