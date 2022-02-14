
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {int nLists; int * pSearch; } ;
struct TYPE_8__ {int pStack; } ;
typedef TYPE_1__ FICL_VM ;
typedef TYPE_2__ FICL_DICT ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 TYPE_2__* FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (TYPE_1__*,char*) ;

__attribute__((used)) static void FUNC_6(FICL_VM *VAR_3)
{
    int VAR_4;
    int VAR_5 = FUNC_2(VAR_3->pStack);
    FICL_DICT *VAR_6 = FUNC_4(VAR_3);

    if (VAR_5 > VAR_1)
    {
        FUNC_5(VAR_3, "set-order error: list would be too large");
    }

    FUNC_1(VAR_2);

    if (VAR_5 >= 0)
    {
        VAR_6->nLists = VAR_5;
        for (VAR_4 = VAR_5-1; VAR_4 >= 0; --VAR_4)
        {
            VAR_6->pSearch[VAR_4] = FUNC_3(VAR_3->pStack);
        }
    }
    else
    {
        FUNC_0(VAR_6);
    }

    FUNC_1(VAR_0);
    return;
}
