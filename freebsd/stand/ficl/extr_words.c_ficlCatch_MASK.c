
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef int jmp_buf ;
struct TYPE_12__ {scalar_t__ rStack; scalar_t__ pStack; int * pState; TYPE_1__* pSys; } ;
struct TYPE_11__ {TYPE_2__* pExitInner; } ;
typedef int FICL_WORD ;
typedef TYPE_2__ FICL_VM ;
typedef int FICL_STACK ;


 int FUNC_0 (int) ;

 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (void*,void*,int) ;
 int FUNC_3 (int ) ;
 int * FUNC_4 (scalar_t__) ;
 int FUNC_5 (TYPE_2__*,int,int ) ;
 int FUNC_6 (TYPE_2__*,int *) ;
 int FUNC_7 (TYPE_2__*) ;
 int FUNC_8 (TYPE_2__*) ;
 int FUNC_9 (TYPE_2__*,TYPE_2__**) ;

__attribute__((used)) static void FUNC_10(FICL_VM *VAR_0)
{
    int VAR_1;
    jmp_buf VAR_2;
    FICL_VM VAR_3;
    FICL_STACK VAR_4;
    FICL_STACK VAR_5;
    FICL_WORD *VAR_6;

    FUNC_1(VAR_0);
    FUNC_1(VAR_0->pSys->pExitInner);
    VAR_6 = FUNC_4(VAR_0->pStack);
    FUNC_2((void*)&VAR_3, (void*)VAR_0, sizeof(FICL_VM));
    FUNC_2((void*)&VAR_4, (void*)VAR_0->pStack, sizeof(FICL_STACK));
    FUNC_2((void*)&VAR_5, (void*)VAR_0->rStack, sizeof(FICL_STACK));




    VAR_0->pState = &VAR_2;




    VAR_1 = FUNC_3(VAR_2);

    switch (VAR_1)
    {





    case 0:
        FUNC_9(VAR_0, &(VAR_0->pSys->pExitInner));
        FUNC_6(VAR_0, VAR_6);
        FUNC_7(VAR_0);
        break;





    case 128:
        FUNC_8(VAR_0);
        VAR_0->pState = VAR_3.pState;
        FUNC_0(0);
        break;





    default:

        FUNC_2((void*)VAR_0, (void*)&VAR_3, sizeof(FICL_VM));
        FUNC_2((void*)VAR_0->pStack, (void*)&VAR_4, sizeof(FICL_STACK));
        FUNC_2((void*)VAR_0->rStack, (void*)&VAR_5, sizeof(FICL_STACK));

        FUNC_0(VAR_1);
        break;
    }
}
