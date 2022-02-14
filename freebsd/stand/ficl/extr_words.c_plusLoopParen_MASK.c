
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_7__ ;
typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_11__ {scalar_t__ i; } ;
struct TYPE_10__ {scalar_t__ i; } ;
struct TYPE_9__ {scalar_t__ i; } ;
struct TYPE_8__ {scalar_t__* ip; int rStack; } ;
typedef TYPE_1__ FICL_VM ;
typedef scalar_t__ FICL_INT ;


 int FUNC_0 (scalar_t__) ;
 TYPE_7__ FUNC_1 () ;
 int FUNC_2 (int ,int) ;
 TYPE_5__ FUNC_3 (int ,int) ;
 TYPE_4__ FUNC_4 (int ) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (TYPE_1__*,uintptr_t) ;
 int FUNC_7 (TYPE_1__*,int,int ) ;

__attribute__((used)) static void FUNC_8(FICL_VM *VAR_0)
{
    FICL_INT VAR_1,VAR_2,VAR_3;
    int VAR_4;





    VAR_1 = FUNC_4(VAR_0->rStack).i;
    VAR_2 = FUNC_3(VAR_0->rStack, 1).i;
    VAR_3 = FUNC_1().i;

    VAR_1 += VAR_3;

    if (VAR_3 < 0)
        VAR_4 = (VAR_1 < VAR_2);
    else
        VAR_4 = (VAR_1 >= VAR_2);

    if (VAR_4)
    {
        FUNC_2(VAR_0->rStack, 3);
        FUNC_6(VAR_0, 1);
    }
    else
    {
        FUNC_5(VAR_0->rStack, FUNC_0(VAR_1));
        FUNC_6(VAR_0, (uintptr_t)*(VAR_0->ip));
    }

    return;
}
