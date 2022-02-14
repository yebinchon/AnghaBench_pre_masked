
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int * pForthWords; } ;
struct TYPE_5__ {int pStack; } ;
typedef TYPE_1__ FICL_VM ;
typedef int FICL_HASH ;


 int FUNC_0 (int ,int *) ;
 TYPE_2__* FUNC_1 (TYPE_1__*) ;

__attribute__((used)) static void FUNC_2(FICL_VM *VAR_0)
{
    FICL_HASH *VAR_1 = FUNC_1(VAR_0)->pForthWords;
    FUNC_0(VAR_0->pStack, VAR_1);
    return;
}
