
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {TYPE_1__* runningWord; } ;
struct TYPE_5__ {int param; } ;
typedef TYPE_1__ FICL_WORD ;
typedef TYPE_2__ FICL_VM ;


 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_2__*,int ,int) ;

__attribute__((used)) static void FUNC_2(FICL_VM *VAR_0)
{
    FICL_WORD *VAR_1;




    VAR_1 = VAR_0->runningWord;
    FUNC_0(VAR_1->param);
}
