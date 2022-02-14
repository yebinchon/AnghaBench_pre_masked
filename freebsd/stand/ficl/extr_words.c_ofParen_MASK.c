
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_4__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__ u; } ;
struct TYPE_6__ {scalar_t__ ip; int pStack; } ;
typedef TYPE_1__ FICL_VM ;
typedef scalar_t__ FICL_UNS ;


 scalar_t__ FUNC_0 () ;
 int FUNC_1 (int ,int) ;
 TYPE_4__ FUNC_2 (int ) ;
 int FUNC_3 (TYPE_1__*,int) ;
 int FUNC_4 (TYPE_1__*,int,int) ;

__attribute__((used)) static void FUNC_5(FICL_VM *VAR_0)
{
 FICL_UNS VAR_1, VAR_2;





 VAR_1 = FUNC_0();
 VAR_2 = FUNC_2(VAR_0->pStack).u;

    if (VAR_1 == VAR_2)
    {
  FUNC_1(VAR_0->pStack, 1);
        FUNC_3(VAR_0, 1);
    }
    else
    {
        FUNC_3(VAR_0, *(int *)(VAR_0->ip));
    }

    return;
}
