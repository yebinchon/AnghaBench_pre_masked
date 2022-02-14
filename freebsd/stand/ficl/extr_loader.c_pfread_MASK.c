
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int pStack; } ;
typedef TYPE_1__ FICL_VM ;


 int FUNC_0 (int,char*,int) ;
 int FUNC_1 (int ) ;
 char* FUNC_2 (int ) ;
 int FUNC_3 (int ,int) ;
 int FUNC_4 (TYPE_1__*,int,int) ;

__attribute__((used)) static void FUNC_5(FICL_VM *VAR_0)
{
    int VAR_1, VAR_2;
    char *VAR_3;




    VAR_2 = FUNC_1(VAR_0->pStack);
    VAR_3 = FUNC_2(VAR_0->pStack);
    VAR_1 = FUNC_1(VAR_0->pStack);
    if (VAR_2 > 0 && VAR_3 && VAR_1 != -1)
 FUNC_3(VAR_0->pStack, FUNC_0(VAR_1, VAR_3, VAR_2));
    else
 FUNC_3(VAR_0->pStack, -1);
    return;
}
