
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {int pStack; } ;
struct TYPE_7__ {int cp; int count; } ;
typedef TYPE_1__ STRINGINFO ;
typedef TYPE_2__ FICL_VM ;


 int FUNC_0 (TYPE_2__*,TYPE_1__,int *) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (TYPE_2__*,int,int) ;

__attribute__((used)) static void FUNC_4(FICL_VM *VAR_0)
{
    STRINGINFO VAR_1;





    VAR_1.count = FUNC_1(VAR_0->pStack);
    VAR_1.cp = FUNC_2(VAR_0->pStack);

    FUNC_0(VAR_0, VAR_1, ((void*)0));
}
