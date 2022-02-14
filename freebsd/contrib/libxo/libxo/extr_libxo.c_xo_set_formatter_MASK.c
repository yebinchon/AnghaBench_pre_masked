
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int xo_checkpointer; int xo_formatter; } ;
typedef TYPE_1__ xo_handle_t ;
typedef int xo_formatter_t ;
typedef int xo_checkpointer_t ;


 TYPE_1__* FUNC_0 (TYPE_1__*) ;

void
FUNC_1 (xo_handle_t *VAR_0, xo_formatter_t VAR_1,
    xo_checkpointer_t VAR_2)
{
    VAR_0 = FUNC_0(VAR_0);

    VAR_0->xo_formatter = VAR_1;
    VAR_0->xo_checkpointer = VAR_2;
}
