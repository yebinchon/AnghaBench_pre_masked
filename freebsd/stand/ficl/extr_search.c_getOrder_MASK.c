
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int nLists; int * pSearch; } ;
struct TYPE_6__ {int pStack; } ;
typedef TYPE_1__ FICL_VM ;
typedef TYPE_2__ FICL_DICT ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,int) ;
 TYPE_2__* FUNC_3 (TYPE_1__*) ;

__attribute__((used)) static void FUNC_4(FICL_VM *VAR_2)
{
    FICL_DICT *VAR_3 = FUNC_3(VAR_2);
    int VAR_4 = VAR_3->nLists;
    int VAR_5;

    FUNC_0(VAR_1);
    for (VAR_5 = 0; VAR_5 < VAR_4; VAR_5++)
    {
        FUNC_1(VAR_2->pStack, VAR_3->pSearch[VAR_5]);
    }

    FUNC_2(VAR_2->pStack, VAR_4);
    FUNC_0(VAR_0);
    return;
}
