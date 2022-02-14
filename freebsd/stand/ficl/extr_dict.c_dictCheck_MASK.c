
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ nLists; } ;
typedef int FICL_VM ;
typedef TYPE_1__ FICL_DICT ;
typedef int CELL ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (int *,char*) ;

void FUNC_4(FICL_DICT *VAR_1, FICL_VM *VAR_2, int VAR_3)
{
    if ((VAR_3 >= 0) && (FUNC_0(VAR_1) * (int)sizeof(CELL) < VAR_3))
    {
        FUNC_3(VAR_2, "Error: dictionary full");
    }

    if ((VAR_3 <= 0) && (FUNC_1(VAR_1) * (int)sizeof(CELL) < -VAR_3))
    {
        FUNC_3(VAR_2, "Error: dictionary underflow");
    }

    if (VAR_1->nLists > VAR_0)
    {
        FUNC_2(VAR_1);
        FUNC_3(VAR_2, "Error: search order overflow");
    }
    else if (VAR_1->nLists < 0)
    {
        FUNC_2(VAR_1);
        FUNC_3(VAR_2, "Error: search order underflow");
    }

    return;
}
