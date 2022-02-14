
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int i; } ;
struct TYPE_6__ {int pStack; } ;
typedef TYPE_1__ FICL_VM ;
typedef TYPE_2__ CELL ;


 int FUNC_0 (int) ;
 TYPE_2__ FUNC_1 (int ) ;
 int FUNC_2 (TYPE_1__*,int,int) ;

__attribute__((used)) static void FUNC_3(FICL_VM *VAR_0)
{
    CELL VAR_1, VAR_2;



    VAR_1 = FUNC_1(VAR_0->pStack);
    VAR_2 = FUNC_1(VAR_0->pStack);
    FUNC_0(VAR_1.i ^ VAR_2.i);
    return;
}
