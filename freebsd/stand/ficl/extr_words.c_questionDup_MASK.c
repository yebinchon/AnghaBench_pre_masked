
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__ i; } ;
struct TYPE_6__ {int pStack; } ;
typedef TYPE_1__ FICL_VM ;
typedef TYPE_2__ CELL ;


 TYPE_2__ FUNC_0 (int ) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (TYPE_1__*,int,int) ;

__attribute__((used)) static void FUNC_3(FICL_VM *VAR_0)
{
    CELL VAR_1;



    VAR_1 = FUNC_0(VAR_0->pStack);

    if (VAR_1.i != 0)
        FUNC_1(VAR_0->pStack, 0);

    return;
}
