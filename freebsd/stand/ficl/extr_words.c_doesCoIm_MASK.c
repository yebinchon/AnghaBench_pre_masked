
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_7__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_15__ {scalar_t__ nLocals; int pDoesParen; int pUnLinkParen; } ;
struct TYPE_14__ {TYPE_1__* pForthWords; } ;
struct TYPE_13__ {TYPE_7__* pSys; } ;
struct TYPE_12__ {int size; } ;
typedef TYPE_2__ FICL_VM ;
typedef TYPE_3__ FICL_DICT ;


 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (TYPE_3__*,int ) ;
 int FUNC_4 (TYPE_3__*,int ) ;
 TYPE_3__* FUNC_5 (TYPE_7__*) ;
 TYPE_3__* FUNC_6 (TYPE_2__*) ;

__attribute__((used)) static void FUNC_7(FICL_VM *VAR_0)
{
    FICL_DICT *VAR_1 = FUNC_6(VAR_0);
    FUNC_0(VAR_0);

    FUNC_3(VAR_1, FUNC_1(VAR_0->pSys->pDoesParen));
    return;
}
