
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {scalar_t__ i; } ;
struct TYPE_7__ {scalar_t__ i; } ;
struct TYPE_6__ {scalar_t__* ip; int rStack; } ;
typedef TYPE_1__ FICL_VM ;
typedef scalar_t__ FICL_INT ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int ,int) ;
 TYPE_4__ FUNC_2 (int ,int) ;
 TYPE_3__ FUNC_3 (int ) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (TYPE_1__*,uintptr_t) ;

__attribute__((used)) static void FUNC_6(FICL_VM *VAR_0)
{
    FICL_INT VAR_1 = FUNC_3(VAR_0->rStack).i;
    FICL_INT VAR_2 = FUNC_2(VAR_0->rStack, 1).i;

    VAR_1++;

    if (VAR_1 >= VAR_2)
    {
        FUNC_1(VAR_0->rStack, 3);
        FUNC_5(VAR_0, 1);
    }
    else
    {
        FUNC_4(VAR_0->rStack, FUNC_0(VAR_1));
        FUNC_5(VAR_0, (uintptr_t)*(VAR_0->ip));
    }

    return;
}
