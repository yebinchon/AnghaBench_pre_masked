
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_4__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int i; } ;
struct TYPE_5__ {int pStack; } ;
typedef TYPE_1__ FICL_VM ;
typedef int FICL_INT ;


 int FUNC_0 (int) ;
 TYPE_4__ FUNC_1 (int ) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (TYPE_1__*,int,int) ;

__attribute__((used)) static void FUNC_4(FICL_VM *VAR_0)
{
    FICL_INT VAR_1;



    VAR_1 = FUNC_1(VAR_0->pStack).i;
    VAR_1 *= 2;
    FUNC_2(VAR_0->pStack, FUNC_0(VAR_1));
    return;
}
