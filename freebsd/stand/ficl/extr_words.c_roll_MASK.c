
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int i; } ;
struct TYPE_5__ {int pStack; } ;
typedef TYPE_1__ FICL_VM ;


 TYPE_3__ FUNC_0 (int ) ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (TYPE_1__*,int,int) ;

__attribute__((used)) static void FUNC_3(FICL_VM *VAR_0)
{
    int VAR_1 = FUNC_0(VAR_0->pStack).i;
    VAR_1 = (VAR_1 > 0) ? VAR_1 : 0;



    FUNC_1(VAR_0->pStack, VAR_1);
    return;
}
