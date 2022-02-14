
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int top; char** err_data; int* err_data_flags; } ;
typedef TYPE_1__ ERR_STATE ;


 TYPE_1__* FUNC_0 () ;
 int FUNC_1 (TYPE_1__*,int) ;

__attribute__((used)) static int FUNC_2(char *VAR_0, int VAR_1)
{
    ERR_STATE *VAR_2;
    int VAR_3;

    VAR_2 = FUNC_0();
    if (VAR_2 == ((void*)0))
        return 0;

    VAR_3 = VAR_2->top;

    FUNC_1(VAR_2, VAR_3);
    VAR_2->err_data[VAR_3] = VAR_0;
    VAR_2->err_data_flags[VAR_3] = VAR_1;

    return 1;
}
