
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_9__ {int pStack; TYPE_2__* runningWord; } ;
struct TYPE_8__ {TYPE_1__* param; } ;
struct TYPE_7__ {int fn; } ;
typedef int STRINGINFO ;
typedef TYPE_2__ FICL_WORD ;
typedef TYPE_3__ FICL_VM ;
typedef int (* FICL_PARSE_STEP ) (TYPE_3__*,int ) ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (TYPE_3__*,int ) ;

void FUNC_6(FICL_VM *VAR_0)
{
    STRINGINFO VAR_1;
    FICL_WORD *VAR_2 = VAR_0->runningWord;
    FICL_PARSE_STEP VAR_3 = (FICL_PARSE_STEP)(VAR_2->param->fn);

    FUNC_1(VAR_1, FUNC_3(VAR_0->pStack));
    FUNC_2(VAR_1, FUNC_4(VAR_0->pStack));

    FUNC_0((*VAR_3)(VAR_0, VAR_1));

    return;
}
