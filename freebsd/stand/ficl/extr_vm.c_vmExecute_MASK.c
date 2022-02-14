
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {TYPE_1__* runningWord; } ;
struct TYPE_6__ {int (* code ) (TYPE_2__*) ;} ;
typedef TYPE_1__ FICL_WORD ;
typedef TYPE_2__ FICL_VM ;


 int FUNC_0 (TYPE_2__*) ;

void FUNC_1(FICL_VM *VAR_0, FICL_WORD *VAR_1)
{
    VAR_0->runningWord = VAR_1;
    VAR_1->code(VAR_0);
    return;
}
