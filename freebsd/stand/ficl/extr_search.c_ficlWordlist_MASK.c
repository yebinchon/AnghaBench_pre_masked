
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int pStack; } ;
typedef TYPE_1__ FICL_VM ;
typedef int FICL_UNS ;
typedef int FICL_HASH ;
typedef int FICL_DICT ;


 int * FUNC_0 (int *,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int *) ;
 int FUNC_3 (TYPE_1__*,int,int) ;
 int * FUNC_4 (TYPE_1__*) ;

__attribute__((used)) static void FUNC_5(FICL_VM *VAR_0)
{
    FICL_DICT *VAR_1 = FUNC_4(VAR_0);
    FICL_HASH *VAR_2;
    FICL_UNS VAR_3;




    VAR_3 = FUNC_1(VAR_0->pStack);
    VAR_2 = FUNC_0(VAR_1, VAR_3);
    FUNC_2(VAR_0->pStack, VAR_2);
    return;
}
