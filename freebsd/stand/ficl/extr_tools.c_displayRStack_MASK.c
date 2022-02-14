
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_15__ {int i; scalar_t__ p; } ;
struct TYPE_14__ {TYPE_4__* base; } ;
struct TYPE_13__ {char* pad; int base; TYPE_3__* rStack; } ;
struct TYPE_12__ {char* name; TYPE_4__* param; } ;
typedef TYPE_1__ FICL_WORD ;
typedef TYPE_2__ FICL_VM ;
typedef TYPE_3__ FICL_STACK ;
typedef int FICL_DICT ;
typedef TYPE_4__ CELL ;


 scalar_t__ FUNC_0 (int *,scalar_t__) ;
 TYPE_1__* FUNC_1 (TYPE_2__*,scalar_t__) ;
 char* FUNC_2 (int ,char*,int ) ;
 int FUNC_3 (char*,char*,char*,int) ;
 int FUNC_4 (TYPE_3__*) ;
 int FUNC_5 (TYPE_2__*,int ,int ) ;
 int * FUNC_6 (TYPE_2__*) ;
 int FUNC_7 (TYPE_2__*,char*,int ) ;

__attribute__((used)) static void FUNC_8(FICL_VM *VAR_0)
{
    FICL_STACK *VAR_1 = VAR_0->rStack;
    int VAR_2 = FUNC_4(VAR_1);
    int VAR_3;
    CELL *VAR_4;
    FICL_DICT *VAR_5 = FUNC_6(VAR_0);

    FUNC_5(VAR_0, 0, 0);

    if (VAR_2 == 0)
        FUNC_7(VAR_0, "(Stack Empty) ", 0);
    else
    {
        VAR_4 = VAR_1->base;
        for (VAR_3 = 0; VAR_3 < VAR_2; VAR_3++)
        {
            CELL VAR_6 = *VAR_4++;






            if (FUNC_0(VAR_5, VAR_6.p))
            {
                FICL_WORD *VAR_7 = FUNC_1(VAR_0, VAR_6.p);
                if (VAR_7)
                {
                    int VAR_8 = (CELL *)VAR_6.p - &VAR_7->param[0];
                    FUNC_3(VAR_0->pad, "%s+%d ", VAR_7->name, VAR_8);
                    FUNC_7(VAR_0, VAR_0->pad, 0);
                    continue;
                }
            }
            FUNC_7(VAR_0, FUNC_2(VAR_6.i, VAR_0->pad, VAR_0->base), 0);
            FUNC_7(VAR_0, " ", 0);
        }
    }

    return;
}
