
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {scalar_t__ nLists; int * pSearch; } ;
struct TYPE_7__ {int pStack; } ;
typedef TYPE_1__ FICL_VM ;
typedef TYPE_2__ FICL_DICT ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 TYPE_2__* FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*,char*) ;

__attribute__((used)) static void FUNC_4(FICL_VM *VAR_3)
{
    FICL_DICT *VAR_4 = FUNC_2(VAR_3);

    FUNC_0(VAR_2);
    if (VAR_4->nLists > VAR_1)
    {
        FUNC_3(VAR_3, ">search error: search order overflow");
    }
    VAR_4->pSearch[VAR_4->nLists++] = FUNC_1(VAR_3->pStack);
    FUNC_0(VAR_0);
    return;
}
