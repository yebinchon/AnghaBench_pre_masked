
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int pad; int pStack; } ;
typedef TYPE_1__ FICL_VM ;
typedef int FICL_UNS ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (int ,int ,int) ;
 int FUNC_3 (TYPE_1__*,int,int ) ;
 int FUNC_4 (TYPE_1__*,int ,int ) ;

__attribute__((used)) static void FUNC_5(FICL_VM *VAR_0)
{
    FICL_UNS VAR_1;



    VAR_1 = FUNC_0(VAR_0->pStack);
    FUNC_2(VAR_1, VAR_0->pad, 16);
    FUNC_1(VAR_0->pad, " ");
    FUNC_4(VAR_0, VAR_0->pad, 0);
    return;
}
