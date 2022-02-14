
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int pFrame; int sp; } ;
typedef TYPE_1__ FICL_STACK ;


 int FUNC_0 (TYPE_1__*,int) ;

void FUNC_1(FICL_STACK *VAR_0, int VAR_1)
{
    FUNC_0(VAR_0, VAR_0->pFrame);
    VAR_0->pFrame = VAR_0->sp;
    VAR_0->sp += VAR_1;
    return;
}
