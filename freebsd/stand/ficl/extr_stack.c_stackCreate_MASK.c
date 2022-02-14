
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {unsigned int nCells; int * pFrame; int base; int sp; } ;
typedef TYPE_1__ FICL_STACK ;
typedef int CELL ;


 int FUNC_0 (int) ;
 TYPE_1__* FUNC_1 (size_t) ;

FICL_STACK *FUNC_2(unsigned VAR_0)
{
    size_t VAR_1 = sizeof (FICL_STACK) + VAR_0 * sizeof (CELL);
    FICL_STACK *VAR_2 = FUNC_1(VAR_1);






    VAR_2->nCells = VAR_0;
    VAR_2->sp = VAR_2->base;
    VAR_2->pFrame = ((void*)0);
    return VAR_2;
}
