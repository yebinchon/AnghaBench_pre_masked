
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int nLists; int * pSearch; int pCompile; } ;
typedef int FICL_VM ;
typedef TYPE_1__ FICL_DICT ;


 int FUNC_0 (TYPE_1__*) ;
 TYPE_1__* FUNC_1 (int *) ;
 int FUNC_2 (int *,char*) ;

__attribute__((used)) static void FUNC_3(FICL_VM *VAR_0)
{
    FICL_DICT *VAR_1 = FUNC_1(VAR_0);

    FUNC_0(VAR_1);
    if (VAR_1->nLists < 1)
    {
        FUNC_2(VAR_0, "DEFINITIONS error - empty search order");
    }

    VAR_1->pCompile = VAR_1->pSearch[VAR_1->nLists-1];
    return;
}
