
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int sp; } ;
typedef TYPE_1__ FICL_STACK ;
typedef int CELL ;



void FUNC_0(FICL_STACK *VAR_0, int VAR_1)
{
    CELL VAR_2;
    CELL *VAR_3;

    if (VAR_1 == 0)
        return;
    else if (VAR_1 > 0)
    {
        VAR_3 = VAR_0->sp - VAR_1 - 1;
        VAR_2 = *VAR_3;

        for (;VAR_1 > 0; --VAR_1, VAR_3++)
        {
            *VAR_3 = VAR_3[1];
        }

        *VAR_3 = VAR_2;
    }
    else
    {
        VAR_3 = VAR_0->sp - 1;
        VAR_2 = *VAR_3;

        for (; VAR_1 < 0; ++VAR_1, VAR_3--)
        {
            *VAR_3 = VAR_3[-1];
        }

        *VAR_3 = VAR_2;
    }
    return;
}
