
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int top; int* err_flags; } ;
typedef TYPE_1__ ERR_STATE ;


 int VAR_0 ;
 TYPE_1__* FUNC_0 () ;
 int FUNC_1 (int,int ) ;
 int FUNC_2 (int ,int ,int ) ;

void FUNC_3(int VAR_1)
{
    ERR_STATE *VAR_2;
    int VAR_3;

    VAR_2 = FUNC_0();
    if (VAR_2 == ((void*)0))
        return;

    VAR_3 = VAR_2->top;





    VAR_1 = FUNC_2(FUNC_1(VAR_1, 0),
                                     0, VAR_0);
    VAR_2->err_flags[VAR_3] |= VAR_1;
}
