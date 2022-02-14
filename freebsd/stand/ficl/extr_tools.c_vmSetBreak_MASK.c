
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int * origXT; int ** address; } ;
struct TYPE_5__ {int ** ip; int pSys; } ;
typedef int FICL_WORD ;
typedef TYPE_1__ FICL_VM ;
typedef TYPE_2__ FICL_BREAKPOINT ;


 int FUNC_0 (int *) ;
 int * FUNC_1 (int ,char*) ;

__attribute__((used)) static void FUNC_2(FICL_VM *VAR_0, FICL_BREAKPOINT *VAR_1)
{
    FICL_WORD *VAR_2 = FUNC_1(VAR_0->pSys, "step-break");
    FUNC_0(VAR_2);

    VAR_1->address = VAR_0->ip;
    VAR_1->origXT = *VAR_0->ip;
    *VAR_0->ip = VAR_2;
}
