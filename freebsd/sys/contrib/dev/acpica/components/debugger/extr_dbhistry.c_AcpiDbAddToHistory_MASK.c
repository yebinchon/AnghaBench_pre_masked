
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ UINT16 ;
struct TYPE_2__ {char* Command; int CmdNum; } ;


 TYPE_1__* VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 void* FUNC_0 (scalar_t__) ;
 int FUNC_1 (char*) ;
 size_t VAR_5 ;
 int FUNC_2 (char*,char*) ;
 scalar_t__ FUNC_3 (char*) ;

void
FUNC_4 (
    char *VAR_6)
{
    UINT16 VAR_7;
    UINT16 VAR_8;



    VAR_7 = (UINT16) FUNC_3 (VAR_6);
    if (!VAR_7)
    {
        return;
    }

    if (VAR_0[VAR_3].Command != ((void*)0))
    {
        VAR_8 = (UINT16) FUNC_3 (
            VAR_0[VAR_3].Command);

        if (VAR_7 > VAR_8)
        {
            FUNC_1 (VAR_0[VAR_3].
                Command);
            VAR_0[VAR_3].Command =
                FUNC_0 (VAR_7 + 1);
        }
    }
    else
    {
        VAR_0[VAR_3].Command =
            FUNC_0 (VAR_7 + 1);
    }

    FUNC_2 (VAR_0[VAR_3].Command,
        VAR_6);

    VAR_0[VAR_3].CmdNum =
        VAR_2;



    if ((VAR_4 == VAR_5) &&
        (VAR_3 == VAR_1))
    {
        VAR_1++;
        if (VAR_1 >= VAR_5)
        {
            VAR_1 = 0;
        }
    }

    VAR_3++;
    if (VAR_3 >= VAR_5)
    {
        VAR_3 = 0;
    }

    VAR_2++;
    if (VAR_4 < VAR_5)
    {
        VAR_4++;
    }
}
