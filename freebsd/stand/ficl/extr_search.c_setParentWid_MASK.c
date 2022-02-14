
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {struct TYPE_6__* link; } ;
struct TYPE_5__ {int pStack; } ;
typedef TYPE_1__ FICL_VM ;
typedef TYPE_2__ FICL_HASH ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (TYPE_1__*,int,int ) ;

__attribute__((used)) static void FUNC_2(FICL_VM *VAR_0)
{
    FICL_HASH *VAR_1, *VAR_2;



    VAR_2 = (FICL_HASH *)FUNC_0(VAR_0->pStack);
    VAR_1 = (FICL_HASH *)FUNC_0(VAR_0->pStack);

    VAR_2->link = VAR_1;
    return;
}
