
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int here; } ;
struct TYPE_6__ {int pStack; } ;
typedef TYPE_1__ FICL_VM ;
typedef int FICL_HASH ;
typedef TYPE_2__ FICL_DICT ;


 int FUNC_0 (int *,int ) ;
 scalar_t__ FUNC_1 (int ) ;
 TYPE_2__* FUNC_2 (TYPE_1__*) ;

__attribute__((used)) static void FUNC_3(FICL_VM *VAR_0)
{
    FICL_DICT *VAR_1 = FUNC_2(VAR_0);
    FICL_HASH *VAR_2;

    VAR_2 = (FICL_HASH *)FUNC_1(VAR_0->pStack);
    FUNC_0(VAR_2, VAR_1->here);

    return;
}
