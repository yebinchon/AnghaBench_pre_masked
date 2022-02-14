
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {int nLists; int * pSearch; } ;
struct TYPE_7__ {int pStack; } ;
typedef TYPE_1__ FICL_VM ;
typedef TYPE_2__ FICL_DICT ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ) ;
 TYPE_2__* FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*,char*) ;

__attribute__((used)) static void FUNC_4(FICL_VM *VAR_2)
{
    FICL_DICT *VAR_3 = FUNC_2(VAR_2);
    int VAR_4;

    FUNC_0(VAR_1);
    VAR_4 = VAR_3->nLists;
    if (VAR_4 == 0)
    {
        FUNC_3(VAR_2, "search> error: empty search order");
    }
    FUNC_1(VAR_2->pStack, VAR_3->pSearch[--VAR_3->nLists]);
    FUNC_0(VAR_0);
    return;
}
