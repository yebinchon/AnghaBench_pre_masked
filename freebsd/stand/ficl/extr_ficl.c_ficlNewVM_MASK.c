
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {TYPE_1__* vmList; int textOut; int pExtend; } ;
struct TYPE_7__ {int pExtend; TYPE_2__* pSys; struct TYPE_7__* link; } ;
typedef TYPE_1__ FICL_VM ;
typedef TYPE_2__ FICL_SYSTEM ;


 int VAR_0 ;
 TYPE_1__* FUNC_0 (int *,int ,int ) ;
 int FUNC_1 (TYPE_1__*,int ) ;

FICL_VM *FUNC_2(FICL_SYSTEM *VAR_1)
{
    FICL_VM *VAR_2 = FUNC_0(((void*)0), VAR_0, VAR_0);
    VAR_2->link = VAR_1->vmList;
    VAR_2->pSys = VAR_1;
    VAR_2->pExtend = VAR_1->pExtend;
    FUNC_1(VAR_2, VAR_1->textOut);

    VAR_1->vmList = VAR_2;
    return VAR_2;
}
