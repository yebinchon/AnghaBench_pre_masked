
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int ** parseList; } ;
typedef int FICL_WORD ;
typedef TYPE_1__ FICL_SYSTEM ;


 int VAR_0 ;

int FUNC_0(FICL_SYSTEM *VAR_1, FICL_WORD *VAR_2)
{
    int VAR_3;
    for (VAR_3 = 0; VAR_3 < VAR_0; VAR_3++)
    {
        if (VAR_1->parseList[VAR_3] == ((void*)0))
        {
            VAR_1->parseList[VAR_3] = VAR_2;
            return 0;
        }
    }

    return 1;
}
