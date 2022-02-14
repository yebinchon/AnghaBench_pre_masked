
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int WORDKIND ;
struct TYPE_8__ {TYPE_1__* pSys; int pStack; } ;
struct TYPE_7__ {int bpStep; } ;
typedef int FICL_WORD ;
typedef TYPE_2__ FICL_VM ;




 int FUNC_0 (int *) ;
 int FUNC_1 (TYPE_2__*) ;
 int * FUNC_2 (int ) ;
 int FUNC_3 (int ,int *) ;
 int FUNC_4 (TYPE_2__*,int *) ;
 int FUNC_5 (TYPE_2__*,int *) ;

void FUNC_6(FICL_VM *VAR_0)
{
    FICL_WORD *VAR_1 = FUNC_2(VAR_0->pStack);
    WORDKIND VAR_2 = FUNC_0(VAR_1);

    FUNC_3(VAR_0->pStack, VAR_1);
    FUNC_1(VAR_0);

    switch (VAR_2)
    {
    case 129:
    case 128:



        FUNC_4(VAR_0, VAR_1);
        FUNC_5(VAR_0, &(VAR_0->pSys->bpStep));
        break;

    default:
        FUNC_4(VAR_0, VAR_1);
        break;
    }

    return;
}
