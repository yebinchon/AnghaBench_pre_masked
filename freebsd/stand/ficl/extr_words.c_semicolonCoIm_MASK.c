
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_9__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


struct TYPE_16__ {scalar_t__ nLocals; int pSemiParen; int pUnLinkParen; } ;
struct TYPE_15__ {TYPE_1__* pForthWords; } ;
struct TYPE_14__ {int state; TYPE_9__* pSys; } ;
struct TYPE_13__ {int size; } ;
typedef TYPE_2__ FICL_VM ;
typedef TYPE_3__ FICL_DICT ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_1 ;
 int FUNC_2 (TYPE_3__*,int ) ;
 int FUNC_3 (TYPE_3__*,int ) ;
 int FUNC_4 (TYPE_3__*) ;
 TYPE_3__* FUNC_5 (TYPE_9__*) ;
 int FUNC_6 (TYPE_2__*,int ) ;
 TYPE_3__* FUNC_7 (TYPE_2__*) ;

__attribute__((used)) static void FUNC_8(FICL_VM *VAR_2)
{
    FICL_DICT *VAR_3 = FUNC_7(VAR_2);

    FUNC_1(VAR_2->pSys->pSemiParen);
    FUNC_6(VAR_2, VAR_1);
    FUNC_2(VAR_3, FUNC_0(VAR_2->pSys->pSemiParen));
    VAR_2->state = VAR_0;
    FUNC_4(VAR_3);
    return;
}
