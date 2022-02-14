
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {int here; } ;
struct TYPE_7__ {int pStack; } ;
typedef TYPE_1__ FICL_VM ;
typedef TYPE_2__ FICL_DICT ;
typedef int CELL ;


 int FUNC_0 (int ) ;
 char* FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (char*,char*) ;
 int FUNC_3 (TYPE_1__*,int,int ) ;
 int FUNC_4 (TYPE_1__*,char*,int) ;

__attribute__((used)) static void FUNC_5(FICL_DICT *VAR_0, FICL_VM *VAR_1, char *VAR_2)
{
    CELL *VAR_3;
    char *VAR_4;




    VAR_4 = FUNC_1(VAR_1->pStack);



    if ((VAR_4 != VAR_2) && FUNC_2(VAR_4, VAR_2))
    {
        FUNC_4(VAR_1, "Warning -- Unmatched control word: ", 0);
        FUNC_4(VAR_1, VAR_2, 1);
    }

    VAR_3 = (CELL *)FUNC_1(VAR_1->pStack);
    *VAR_3 = FUNC_0(VAR_0->here);

    return;
}
