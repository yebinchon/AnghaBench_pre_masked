
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {TYPE_1__* vmList; int * localp; int * envp; int * dp; } ;
struct TYPE_6__ {struct TYPE_6__* link; } ;
typedef TYPE_1__ FICL_VM ;
typedef TYPE_2__ FICL_SYSTEM ;


 int FUNC_0 (int *) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (TYPE_1__*) ;

void FUNC_3(FICL_SYSTEM *VAR_0)
{
    if (VAR_0->dp)
        FUNC_0(VAR_0->dp);
    VAR_0->dp = ((void*)0);

    if (VAR_0->envp)
        FUNC_0(VAR_0->envp);
    VAR_0->envp = ((void*)0);







    while (VAR_0->vmList != ((void*)0))
    {
        FICL_VM *VAR_1 = VAR_0->vmList;
        VAR_0->vmList = VAR_0->vmList->link;
        FUNC_2(VAR_1);
    }

    FUNC_1(VAR_0);
    VAR_0 = ((void*)0);
    return;
}
