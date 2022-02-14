
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef int jmp_buf ;
struct TYPE_12__ {int * runningWord; int * pState; TYPE_1__* pSys; } ;
struct TYPE_11__ {TYPE_2__* pExitInner; } ;
typedef int FICL_WORD ;
typedef TYPE_2__ FICL_VM ;
 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_2__*,int *) ;
 int FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (TYPE_2__*) ;
 int FUNC_5 (TYPE_2__*,TYPE_2__**) ;
 int FUNC_6 (TYPE_2__*,int) ;

int FUNC_7(FICL_VM *VAR_0, FICL_WORD *VAR_1)
{
    int VAR_2;
    jmp_buf VAR_3;
    jmp_buf *VAR_4;
    FICL_WORD *VAR_5;

    FUNC_0(VAR_0);
    FUNC_0(VAR_0->pSys->pExitInner);





    VAR_5 = VAR_0->runningWord;



    VAR_4 = VAR_0->pState;
    VAR_0->pState = &VAR_3;
    VAR_2 = FUNC_1(VAR_3);

    if (VAR_2)
        FUNC_4(VAR_0);
    else
        FUNC_5(VAR_0, &(VAR_0->pSys->pExitInner));

    switch (VAR_2)
    {
    case 0:
        FUNC_2(VAR_0, VAR_1);
        FUNC_3(VAR_0);
        break;

    case 132:
    case 134:
        break;

    case 129:
    case 131:
    case 128:
    case 130:
    case 133:
    case 136:
    case 135:
    default:
        if (VAR_4)
        {
            VAR_0->pState = VAR_4;
            FUNC_6(VAR_0, VAR_2);
        }
        break;
    }

    VAR_0->pState = VAR_4;
    VAR_0->runningWord = VAR_5;
    return (VAR_2);
}
