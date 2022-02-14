
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {int i; } ;
struct TYPE_7__ {int pad; int base; int pStack; } ;
typedef TYPE_1__ FICL_VM ;
typedef TYPE_2__ CELL ;


 int FUNC_0 (int ,int ,int ) ;
 TYPE_2__ FUNC_1 (int ) ;
 int FUNC_2 (TYPE_1__*,int,int ) ;
 int FUNC_3 (TYPE_1__*,int ,int ) ;

__attribute__((used)) static void FUNC_4(FICL_VM *VAR_0)
{
    CELL VAR_1;



    VAR_1 = FUNC_1(VAR_0->pStack);
    FUNC_0((VAR_1).i, VAR_0->pad, VAR_0->base);
    FUNC_3(VAR_0, VAR_0->pad, 0);
    return;
}
