
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t _UU32 ;
typedef int UNITY_LINE_TYPE ;
struct TYPE_2__ {int CurrentTestFailed; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__ VAR_2 ;
 int FUNC_0 (char const*) ;
 int FUNC_1 (char const*,char const*) ;
 int FUNC_2 (int const) ;

void FUNC_3(const char* VAR_3,
                            const char* VAR_4,
                            const char* VAR_5,
                            const UNITY_LINE_TYPE VAR_6)
{
    _UU32 VAR_7;

    VAR_1;


    if (VAR_3 && VAR_4)
    {
        for (VAR_7 = 0; VAR_3[VAR_7] || VAR_4[VAR_7]; VAR_7++)
        {
            if (VAR_3[VAR_7] != VAR_4[VAR_7])
            {
                VAR_2.CurrentTestFailed = 1;
                break;
            }
        }
    }
    else
    {
        if (VAR_3 != VAR_4)
        {
            VAR_2.CurrentTestFailed = 1;
        }
    }

    if (VAR_2.CurrentTestFailed)
    {
      FUNC_2(VAR_6);
      FUNC_1(VAR_3, VAR_4);
      FUNC_0(VAR_5);
      VAR_0;
    }
}
