
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int pStack; } ;
typedef TYPE_1__ FICL_VM ;
typedef int FICL_UNS ;
typedef int DPUNS ;


 int FUNC_0 () ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (TYPE_1__*,int,int) ;

__attribute__((used)) static void FUNC_4(FICL_VM *VAR_0)
{
    FICL_UNS VAR_1;
    FICL_UNS VAR_2;
    DPUNS VAR_3;




    VAR_1 = FUNC_0();
    VAR_2 = FUNC_0();

    VAR_3 = FUNC_1(VAR_2, VAR_1);
    FUNC_2(VAR_0->pStack, VAR_3);
    return;
}
