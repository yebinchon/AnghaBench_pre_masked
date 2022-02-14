
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_11__ {void* lo; } ;
struct TYPE_10__ {int pStack; } ;
struct TYPE_9__ {int quot; int rem; } ;
typedef TYPE_1__ INTQR ;
typedef TYPE_2__ FICL_VM ;
typedef void* FICL_INT ;
typedef TYPE_3__ DPINT ;


 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_3__) ;
 TYPE_1__ FUNC_2 (TYPE_3__,void*) ;
 void* FUNC_3 (int ) ;
 int FUNC_4 (TYPE_2__*,int,int) ;

__attribute__((used)) static void FUNC_5(FICL_VM *VAR_0)
{
    DPINT VAR_1;
    FICL_INT VAR_2;
    INTQR VAR_3;




    VAR_2 = FUNC_3(VAR_0->pStack);
    VAR_1 = FUNC_3(VAR_0->pStack);
    FUNC_1(VAR_1);

    VAR_3 = FUNC_2(VAR_1, VAR_2);
    FUNC_0(VAR_3.rem);
    FUNC_0(VAR_3.quot);
    return;
}
