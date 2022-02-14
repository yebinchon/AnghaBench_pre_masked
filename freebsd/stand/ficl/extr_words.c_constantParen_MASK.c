
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int pStack; TYPE_1__* runningWord; } ;
struct TYPE_5__ {int * param; } ;
typedef TYPE_1__ FICL_WORD ;
typedef TYPE_2__ FICL_VM ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (TYPE_2__*,int ,int) ;

void FUNC_2(FICL_VM *VAR_0)
{
    FICL_WORD *VAR_1 = VAR_0->runningWord;



    FUNC_0(VAR_0->pStack, VAR_1->param[0]);
    return;
}
