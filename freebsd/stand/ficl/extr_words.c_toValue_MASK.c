
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_8__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_12__ {scalar_t__ nLocals; int pStore; int pTo2LocalParen; int pToLocalParen; } ;
struct TYPE_11__ {scalar_t__ state; TYPE_8__* pSys; int pStack; } ;
struct TYPE_10__ {scalar_t__ code; int * param; } ;
typedef int STRINGINFO ;
typedef TYPE_1__ FICL_WORD ;
typedef TYPE_2__ FICL_VM ;
typedef int FICL_DICT ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int *,int ) ;
 TYPE_1__* FUNC_6 (int *,int ) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int * FUNC_7 (TYPE_8__*) ;
 int FUNC_8 (TYPE_2__*) ;
 int FUNC_9 (int ) ;
 int * FUNC_10 (TYPE_2__*) ;
 int FUNC_11 (TYPE_2__*) ;
 int FUNC_12 (TYPE_2__*,char*,int,int ) ;

__attribute__((used)) static void FUNC_13(FICL_VM *VAR_4)
{
    STRINGINFO VAR_5 = FUNC_11(VAR_4);
    FICL_DICT *VAR_6 = FUNC_10(VAR_4);
    FICL_WORD *VAR_7;
    FUNC_4(VAR_4->pSys->pStore);

    VAR_7 = FUNC_6(VAR_6, VAR_5);
    if (!VAR_7)
    {
        int VAR_8 = FUNC_2(VAR_5);
        FUNC_12(VAR_4, "%.*s not found", VAR_8, FUNC_3(VAR_5));
    }

    if (VAR_4->state == VAR_1)
        VAR_7->param[0] = FUNC_9(VAR_4->pStack);
    else
    {
        FUNC_1(&VAR_7->param[0]);
        FUNC_8(VAR_4);
        FUNC_5(VAR_6, FUNC_0(VAR_4->pSys->pStore));
    }
    return;
}
