
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__* ip; int pStack; } ;
typedef TYPE_1__ FICL_VM ;
typedef scalar_t__ FICL_UNS ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (TYPE_1__*,uintptr_t) ;
 int FUNC_2 (TYPE_1__*,int,int ) ;

__attribute__((used)) static void FUNC_3(FICL_VM *VAR_0)
{
    FICL_UNS VAR_1;




    VAR_1 = FUNC_0(VAR_0->pStack);

    if (VAR_1)
    {
        FUNC_1(VAR_0, 1);
    }
    else
    {
        FUNC_1(VAR_0, (uintptr_t)*(VAR_0->ip));
    }

    return;
}
