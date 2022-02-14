
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int xo_write_func_t ;
struct TYPE_5__ {int xo_flush; int xo_close; int xo_write; void* xo_opaque; } ;
typedef TYPE_1__ xo_handle_t ;
typedef int xo_flush_func_t ;
typedef int xo_close_func_t ;


 TYPE_1__* FUNC_0 (TYPE_1__*) ;

void
FUNC_1 (xo_handle_t *VAR_0, void *VAR_1, xo_write_func_t VAR_2,
        xo_close_func_t VAR_3, xo_flush_func_t VAR_4)
{
    VAR_0 = FUNC_0(VAR_0);

    VAR_0->xo_opaque = VAR_1;
    VAR_0->xo_write = VAR_2;
    VAR_0->xo_close = VAR_3;
    VAR_0->xo_flush = VAR_4;
}
