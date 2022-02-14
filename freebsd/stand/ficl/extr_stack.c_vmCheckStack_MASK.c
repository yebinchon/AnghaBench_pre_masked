
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int base; int nCells; int sp; } ;
struct TYPE_6__ {TYPE_2__* pStack; } ;
typedef TYPE_1__ FICL_VM ;
typedef TYPE_2__ FICL_STACK ;


 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (TYPE_1__*,char*) ;

void FUNC_2(FICL_VM *VAR_0, int VAR_1, int VAR_2)
{
    FICL_STACK *VAR_3 = VAR_0->pStack;
    int VAR_4 = VAR_3->base + VAR_3->nCells - VAR_3->sp;

    if (VAR_1 > FUNC_0(VAR_3))
    {
        FUNC_1(VAR_0, "Error: stack underflow");
    }

    if (VAR_4 < VAR_2 - VAR_1)
    {
        FUNC_1(VAR_0, "Error: stack overflow");
    }

    return;
}
