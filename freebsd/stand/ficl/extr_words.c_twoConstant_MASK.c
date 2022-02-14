
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int pStack; } ;
typedef int STRINGINFO ;
typedef TYPE_1__ FICL_VM ;
typedef int FICL_DICT ;
typedef int CELL ;


 int VAR_0 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int *,int ,int ,int ) ;
 int FUNC_2 (int ) ;
 int VAR_1 ;
 int FUNC_3 (TYPE_1__*,int,int ) ;
 int * FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (TYPE_1__*) ;

__attribute__((used)) static void FUNC_6(FICL_VM *VAR_2)
{
    FICL_DICT *VAR_3 = FUNC_4(VAR_2);
    STRINGINFO VAR_4 = FUNC_5(VAR_2);
    CELL VAR_5;




    VAR_5 = FUNC_2(VAR_2->pStack);
    FUNC_1(VAR_3, VAR_4, VAR_1, VAR_0);
    FUNC_0(VAR_3, FUNC_2(VAR_2->pStack));
    FUNC_0(VAR_3, VAR_5);
    return;
}
