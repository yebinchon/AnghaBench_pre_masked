
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int pStack; } ;
typedef TYPE_1__ FICL_VM ;


 int FUNC_0 (int) ;
 int FUNC_1 (void*) ;
 void* FUNC_2 (size_t) ;
 size_t FUNC_3 (int ) ;

__attribute__((used)) static void FUNC_4(FICL_VM *VAR_0)
{
    size_t VAR_1;
    void *VAR_2;

    VAR_1 = FUNC_3(VAR_0->pStack);
    VAR_2 = FUNC_2(VAR_1);
    FUNC_1(VAR_2);
    if (VAR_2)
        FUNC_0(0);
    else
        FUNC_0(1);
}
