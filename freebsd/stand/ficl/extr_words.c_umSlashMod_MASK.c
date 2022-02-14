
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int quot; int rem; } ;
typedef TYPE_1__ UNSQR ;
struct TYPE_6__ {int pStack; } ;
typedef TYPE_2__ FICL_VM ;
typedef int FICL_UNS ;
typedef int DPUNS ;


 int FUNC_0 (int ) ;
 TYPE_1__ FUNC_1 (int ,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static void FUNC_4(FICL_VM *VAR_0)
{
    DPUNS VAR_1;
    FICL_UNS VAR_2;
    UNSQR VAR_3;

    VAR_2 = FUNC_2(VAR_0->pStack);
    VAR_1 = FUNC_3(VAR_0->pStack);
    VAR_3 = FUNC_1(VAR_1, VAR_2);
    FUNC_0(VAR_3.rem);
    FUNC_0(VAR_3.quot);
    return;
}
