
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int top; int bottom; int* err_flags; } ;
typedef TYPE_1__ ERR_STATE ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__* FUNC_0 () ;

int FUNC_1(void)
{
    ERR_STATE *VAR_2;
    int VAR_3;

    VAR_2 = FUNC_0();
    if (VAR_2 == ((void*)0))
        return 0;

    VAR_3 = VAR_2->top;
    while (VAR_2->bottom != VAR_3
           && (VAR_2->err_flags[VAR_3] & VAR_0) == 0) {
        VAR_3 = VAR_3 > 0 ? VAR_3 - 1 : VAR_1 - 1;
    }

    if (VAR_2->bottom == VAR_3)
        return 0;
    VAR_2->err_flags[VAR_3] &= ~VAR_0;
    return 1;
}
