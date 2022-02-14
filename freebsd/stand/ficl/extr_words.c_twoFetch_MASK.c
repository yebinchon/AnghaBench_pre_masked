
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int pStack; } ;
typedef TYPE_1__ FICL_VM ;
typedef int CELL ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*,int,int) ;

__attribute__((used)) static void FUNC_4(FICL_VM *VAR_0)
{
    CELL *VAR_1;



    VAR_1 = (CELL *)FUNC_0(VAR_0->pStack);
    FUNC_1(VAR_0->pStack, *VAR_1++);
    FUNC_1(VAR_0->pStack, *VAR_1);
    FUNC_2(VAR_0);
    return;
}
