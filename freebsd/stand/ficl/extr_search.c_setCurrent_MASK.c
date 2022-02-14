
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int * pCompile; } ;
struct TYPE_6__ {int pStack; } ;
typedef TYPE_1__ FICL_VM ;
typedef int FICL_HASH ;
typedef TYPE_2__ FICL_DICT ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int * FUNC_1 (int ) ;
 TYPE_2__* FUNC_2 (TYPE_1__*) ;

__attribute__((used)) static void FUNC_3(FICL_VM *VAR_2)
{
    FICL_HASH *VAR_3 = FUNC_1(VAR_2->pStack);
    FICL_DICT *VAR_4 = FUNC_2(VAR_2);
    FUNC_0(VAR_1);
    VAR_4->pCompile = VAR_3;
    FUNC_0(VAR_0);
    return;
}
