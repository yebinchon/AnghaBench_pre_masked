
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_5__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int WORDKIND ;
struct TYPE_6__ {int * origXT; int ** address; } ;
struct TYPE_8__ {TYPE_1__ bpStep; } ;
struct TYPE_7__ {int ** ip; TYPE_5__* pSys; } ;
typedef int FICL_WORD ;
typedef TYPE_2__ FICL_VM ;




 int FUNC_0 (int *) ;
 int * FUNC_1 (TYPE_5__*,char*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (TYPE_2__*) ;

void FUNC_4(FICL_VM *VAR_0)
{
    FICL_WORD *VAR_1;
    WORDKIND VAR_2;
    FICL_WORD *VAR_3 = FUNC_1(VAR_0->pSys, "step-break");
    FUNC_0(VAR_3);

    VAR_1 = *VAR_0->ip;
    VAR_2 = FUNC_2(VAR_1);

    switch (VAR_2)
    {
    case 129:
    case 128:




        VAR_0->pSys->bpStep.address = VAR_0->ip + 1;
        VAR_0->pSys->bpStep.origXT = VAR_0->ip[1];
        VAR_0->ip[1] = VAR_3;
        break;

    default:
        FUNC_3(VAR_0);
        break;
    }

    return;
}
