
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_10__ {TYPE_1__* smudge; } ;
struct TYPE_9__ {int ip; } ;
struct TYPE_8__ {int * param; int code; } ;
typedef TYPE_2__ FICL_VM ;
typedef TYPE_3__ FICL_DICT ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 TYPE_3__* FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (TYPE_2__*) ;

__attribute__((used)) static void FUNC_3(FICL_VM *VAR_1)
{
    FICL_DICT *VAR_2 = FUNC_1(VAR_1);
    VAR_2->smudge->code = VAR_0;
    VAR_2->smudge->param[0] = FUNC_0(VAR_1->ip);
    FUNC_2(VAR_1);
    return;
}
