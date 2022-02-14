
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int i; } ;
struct TYPE_6__ {int pStack; } ;
typedef TYPE_1__ FICL_VM ;
typedef TYPE_2__ CELL ;


 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ,TYPE_2__) ;
 int FUNC_3 (TYPE_1__*,int,int) ;

__attribute__((used)) static void FUNC_4(FICL_VM *VAR_0)
{
    CELL VAR_1;



    VAR_1.i = FUNC_0(FUNC_1(VAR_0->pStack) == 0);
    FUNC_2(VAR_0->pStack, VAR_1);
    return;
}
