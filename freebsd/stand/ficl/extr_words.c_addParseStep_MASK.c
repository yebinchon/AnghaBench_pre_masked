
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_4__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__ p; } ;
struct TYPE_6__ {int pSys; int pStack; } ;
typedef int FICL_WORD ;
typedef TYPE_1__ FICL_VM ;
typedef int FICL_DICT ;


 int FUNC_0 (int ,int *) ;
 scalar_t__ FUNC_1 (int *,int *) ;
 TYPE_4__ FUNC_2 (int ) ;
 int FUNC_3 (TYPE_1__*,int,int ) ;
 int * FUNC_4 (TYPE_1__*) ;

__attribute__((used)) static void FUNC_5(FICL_VM *VAR_0)
{
    FICL_WORD *VAR_1;
    FICL_DICT *VAR_2 = FUNC_4(VAR_0);



    VAR_1 = (FICL_WORD *)(FUNC_2(VAR_0->pStack).p);
    if ((VAR_1 != ((void*)0)) && FUNC_1(VAR_2, VAR_1))
        FUNC_0(VAR_0->pSys, VAR_1);
    return;
}
