
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int pStack; } ;
typedef TYPE_1__ FICL_VM ;
typedef int FICL_UNS ;


 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (int) ;
 char* FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (char*,char*,int) ;
 int FUNC_5 (TYPE_1__*,char*,int ) ;
 int FUNC_6 (TYPE_1__*,char*) ;

__attribute__((used)) static void FUNC_7(FICL_VM *VAR_0)
{
    FICL_UNS VAR_1 = FUNC_3(VAR_0->pStack);
    char *VAR_2 = FUNC_2(VAR_0->pStack);
    char *VAR_3 = (char *)FUNC_1(VAR_1 + 1);






    if (!VAR_3)
 FUNC_6(VAR_0, "Error: out of memory");

    FUNC_4(VAR_3, VAR_2, VAR_1);
    VAR_3[VAR_1] = '\0';

    FUNC_5(VAR_0, VAR_3, 0);

    FUNC_0(VAR_3);
    return;
}
