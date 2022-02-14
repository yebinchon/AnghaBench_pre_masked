
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {TYPE_1__* vmList; } ;
struct TYPE_5__ {struct TYPE_5__* link; TYPE_2__* pSys; } ;
typedef TYPE_1__ FICL_VM ;
typedef TYPE_2__ FICL_SYSTEM ;


 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_1__*) ;

void FUNC_2(FICL_VM *VAR_0)
{
    FICL_SYSTEM *VAR_1 = VAR_0->pSys;
    FICL_VM *VAR_2 = VAR_1->vmList;

    FUNC_0(VAR_0 != ((void*)0));

    if (VAR_1->vmList == VAR_0)
    {
        VAR_1->vmList = VAR_1->vmList->link;
    }
    else for (; VAR_2 != ((void*)0); VAR_2 = VAR_2->link)
    {
        if (VAR_2->link == VAR_0)
        {
            VAR_2->link = VAR_0->link;
            break;
        }
    }

    if (VAR_2)
        FUNC_1(VAR_0);
    return;
}
