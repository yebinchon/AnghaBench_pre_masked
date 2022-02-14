
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {int * p; } ;
struct TYPE_7__ {int pStack; int pSys; } ;
typedef int FICL_WORD ;
typedef TYPE_1__ FICL_VM ;
typedef int FICL_DICT ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int ) ;
 int * FUNC_3 (int ,char*) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (TYPE_1__*) ;
 TYPE_3__ FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int * FUNC_8 (TYPE_1__*) ;
 scalar_t__ FUNC_9 (int *) ;

__attribute__((used)) static void FUNC_10(FICL_VM *VAR_0)
{
    FICL_DICT *VAR_1 = FUNC_8(VAR_0);
    FICL_WORD *VAR_2;
    FICL_WORD *VAR_3 = FUNC_3(VAR_0->pSys, ",");
    FUNC_1(VAR_3);

    FUNC_4(VAR_0);
    VAR_2 = FUNC_6(VAR_0->pStack).p;
    if (FUNC_9(VAR_2))
    {
        FUNC_2(VAR_1, FUNC_7(VAR_0->pStack));
    }
    else
    {
        FUNC_5(VAR_0);
        FUNC_2(VAR_1, FUNC_0(VAR_3));
    }

    return;
}
