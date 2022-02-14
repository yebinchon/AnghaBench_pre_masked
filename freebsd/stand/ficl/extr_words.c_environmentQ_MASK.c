
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_10__ {int pStack; TYPE_1__* pSys; } ;
struct TYPE_9__ {int cp; scalar_t__ count; } ;
struct TYPE_8__ {int * envp; } ;
typedef TYPE_2__ STRINGINFO ;
typedef int FICL_WORD ;
typedef TYPE_3__ FICL_VM ;
typedef int FICL_DICT ;
typedef scalar_t__ FICL_COUNT ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int * FUNC_1 (int *,TYPE_2__) ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (TYPE_3__*,int,int) ;
 int FUNC_5 (TYPE_3__*,int *) ;

__attribute__((used)) static void FUNC_6(FICL_VM *VAR_2)
{
    FICL_DICT *VAR_3;
    FICL_WORD *VAR_4;
    STRINGINFO VAR_5;




    VAR_3 = VAR_2->pSys->envp;
    VAR_5.count = (FICL_COUNT)FUNC_3(VAR_2->pStack);
    VAR_5.cp = FUNC_2(VAR_2->pStack);

    VAR_4 = FUNC_1(VAR_3, VAR_5);

    if (VAR_4 != ((void*)0))
    {
        FUNC_5(VAR_2, VAR_4);
        FUNC_0(VAR_1);
    }
    else
    {
        FUNC_0(VAR_0);
    }
    return;
}
