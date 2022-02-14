
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int textOut; void* fStack; void* rStack; void* pStack; } ;
typedef TYPE_1__ FICL_VM ;


 int FUNC_0 (TYPE_1__*) ;
 scalar_t__ FUNC_1 (int) ;
 int VAR_0 ;
 int FUNC_2 (TYPE_1__*,int ,int) ;
 void* FUNC_3 (unsigned int) ;
 int FUNC_4 (void*) ;
 int FUNC_5 (TYPE_1__*) ;

FICL_VM *FUNC_6(FICL_VM *VAR_1, unsigned VAR_2, unsigned VAR_3)
{
    if (VAR_1 == ((void*)0))
    {
        VAR_1 = (FICL_VM *)FUNC_1(sizeof (FICL_VM));
        FUNC_0 (VAR_1);
        FUNC_2(VAR_1, 0, sizeof (FICL_VM));
    }

    if (VAR_1->pStack)
        FUNC_4(VAR_1->pStack);
    VAR_1->pStack = FUNC_3(VAR_2);

    if (VAR_1->rStack)
        FUNC_4(VAR_1->rStack);
    VAR_1->rStack = FUNC_3(VAR_3);







    VAR_1->textOut = VAR_0;

    FUNC_5(VAR_1);
    return VAR_1;
}
