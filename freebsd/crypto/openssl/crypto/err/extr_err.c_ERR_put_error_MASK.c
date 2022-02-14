
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int top; int bottom; char const** err_file; int* err_line; int * err_buffer; scalar_t__* err_flags; } ;
typedef TYPE_1__ ERR_STATE ;


 int VAR_0 ;
 int FUNC_0 (int,int,int) ;
 TYPE_1__* FUNC_1 () ;
 int FUNC_2 (TYPE_1__*,size_t) ;
 int FUNC_3 (char const*) ;
 scalar_t__ FUNC_4 (char const*,char*,int) ;
 char* FUNC_5 (char const*,char) ;

void FUNC_6(int VAR_1, int VAR_2, int VAR_3, const char *VAR_4, int VAR_5)
{
    ERR_STATE *VAR_6;
    VAR_6 = FUNC_1();
    if (VAR_6 == ((void*)0))
        return;

    VAR_6->top = (VAR_6->top + 1) % VAR_0;
    if (VAR_6->top == VAR_6->bottom)
        VAR_6->bottom = (VAR_6->bottom + 1) % VAR_0;
    VAR_6->err_flags[VAR_6->top] = 0;
    VAR_6->err_buffer[VAR_6->top] = FUNC_0(VAR_1, VAR_2, VAR_3);
    VAR_6->err_file[VAR_6->top] = VAR_4;
    VAR_6->err_line[VAR_6->top] = VAR_5;
    FUNC_2(VAR_6, VAR_6->top);
}
