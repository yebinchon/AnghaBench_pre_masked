
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int pStack; } ;
struct TYPE_6__ {int quot; int rem; } ;
typedef TYPE_1__ INTQR ;
typedef TYPE_2__ FICL_VM ;
typedef int FICL_INT ;
typedef int DPINT ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ) ;
 TYPE_1__ FUNC_2 (int ,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (TYPE_2__*,int,int) ;

__attribute__((used)) static void FUNC_5(FICL_VM *VAR_0)
{
    FICL_INT VAR_1, VAR_2, VAR_3;
    DPINT VAR_4;
    INTQR VAR_5;



    VAR_3 = FUNC_3(VAR_0->pStack);
    VAR_2 = FUNC_3(VAR_0->pStack);
    VAR_1 = FUNC_3(VAR_0->pStack);

    VAR_4 = FUNC_1(VAR_1,VAR_2);
    VAR_5 = FUNC_2(VAR_4, VAR_3);

    FUNC_0(VAR_5.rem);
    FUNC_0(VAR_5.quot);
    return;
}
