
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {TYPE_1__* pSys; } ;
struct TYPE_6__ {int pBranch0; } ;
typedef TYPE_2__ FICL_VM ;
typedef int FICL_DICT ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int *,TYPE_2__*,int ) ;
 int * FUNC_4 (TYPE_2__*) ;

__attribute__((used)) static void FUNC_5(FICL_VM *VAR_1)
{
    FICL_DICT *VAR_2 = FUNC_4(VAR_1);

    FUNC_1(VAR_1->pSys->pBranch0);

    FUNC_2(VAR_2, FUNC_0(VAR_1->pSys->pBranch0));
    FUNC_3(VAR_2, VAR_1, VAR_0);
    return;
}
