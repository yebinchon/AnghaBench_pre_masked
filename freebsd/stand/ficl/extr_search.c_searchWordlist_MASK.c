
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int UNS16 ;
struct TYPE_7__ {int pStack; } ;
struct TYPE_6__ {void* cp; scalar_t__ count; } ;
typedef TYPE_1__ STRINGINFO ;
typedef int FICL_WORD ;
typedef TYPE_2__ FICL_VM ;
typedef int FICL_HASH ;
typedef scalar_t__ FICL_COUNT ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_1__) ;
 int * FUNC_2 (int *,TYPE_1__,int ) ;
 void* FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (int ,int) ;
 int FUNC_6 (int ,int *) ;
 int FUNC_7 (int ,int ) ;
 scalar_t__ FUNC_8 (int *) ;

__attribute__((used)) static void FUNC_9(FICL_VM *VAR_2)
{
    STRINGINFO VAR_3;
    UNS16 VAR_4;
    FICL_WORD *VAR_5;
    FICL_HASH *VAR_6 = FUNC_3(VAR_2->pStack);

    VAR_3.count = (FICL_COUNT)FUNC_4(VAR_2->pStack);
    VAR_3.cp = FUNC_3(VAR_2->pStack);
    VAR_4 = FUNC_1(VAR_3);

    FUNC_0(VAR_1);
    VAR_5 = FUNC_2(VAR_6, VAR_3, VAR_4);
    FUNC_0(VAR_0);

    if (VAR_5)
    {
        FUNC_6(VAR_2->pStack, VAR_5);
        FUNC_5(VAR_2->pStack, (FUNC_8(VAR_5) ? 1 : -1));
    }
    else
    {
        FUNC_7(VAR_2->pStack, 0);
    }

    return;
}
