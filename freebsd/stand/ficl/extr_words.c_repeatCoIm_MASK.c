
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {TYPE_1__* pSys; } ;
struct TYPE_7__ {int pBranchParen; } ;
typedef TYPE_2__ FICL_VM ;
typedef int FICL_DICT ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int FUNC_2 (int *,int ) ;
 int VAR_1 ;
 int FUNC_3 (int *,TYPE_2__*,int ) ;
 int FUNC_4 (int *,TYPE_2__*,int ) ;
 int * FUNC_5 (TYPE_2__*) ;

__attribute__((used)) static void FUNC_6(FICL_VM *VAR_2)
{
    FICL_DICT *VAR_3 = FUNC_5(VAR_2);

    FUNC_1(VAR_2->pSys->pBranchParen);
    FUNC_2(VAR_3, FUNC_0(VAR_2->pSys->pBranchParen));


    FUNC_3(VAR_3, VAR_2, VAR_0);

    FUNC_4(VAR_3, VAR_2, VAR_1);
    return;
}
