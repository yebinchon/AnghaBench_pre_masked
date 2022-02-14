
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {void* lo; } ;
struct TYPE_6__ {int rem; } ;
typedef TYPE_1__ INTQR ;
typedef int FICL_VM ;
typedef void* FICL_INT ;
typedef TYPE_2__ DPINT ;


 void* FUNC_0 () ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_2__) ;
 TYPE_1__ FUNC_3 (TYPE_2__,void*) ;
 int FUNC_4 (int *,int,int) ;

__attribute__((used)) static void FUNC_5(FICL_VM *VAR_0)
{
    DPINT VAR_1;
    FICL_INT VAR_2;
    INTQR VAR_3;




    VAR_2 = FUNC_0();
    VAR_1 = FUNC_0();
    FUNC_2(VAR_1);
    VAR_3 = FUNC_3(VAR_1, VAR_2);
    FUNC_1(VAR_3.rem);
    return;
}
