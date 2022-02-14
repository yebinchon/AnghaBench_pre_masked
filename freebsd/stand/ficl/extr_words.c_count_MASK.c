
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int count; int text; } ;
typedef int FICL_VM ;
typedef TYPE_1__ FICL_STRING ;


 TYPE_1__* FUNC_0 () ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *,int,int) ;

__attribute__((used)) static void FUNC_4(FICL_VM *VAR_0)
{
    FICL_STRING *VAR_1;




    VAR_1 = FUNC_0();
    FUNC_1(VAR_1->text);
    FUNC_2(VAR_1->count);
    return;
}
