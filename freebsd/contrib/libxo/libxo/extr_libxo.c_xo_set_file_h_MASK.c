
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int xo_flush; int xo_close; int xo_write; int * xo_opaque; } ;
typedef TYPE_1__ xo_handle_t ;
typedef int FILE ;


 int VAR_0 ;
 TYPE_1__* FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*,char*) ;
 int VAR_1 ;
 int VAR_2 ;

int
FUNC_2 (xo_handle_t *VAR_3, FILE *VAR_4)
{
    VAR_3 = FUNC_0(VAR_3);

    if (VAR_4 == ((void*)0)) {
 FUNC_1(VAR_3, "xo_set_file: NULL fp");
 return -1;
    }

    VAR_3->xo_opaque = VAR_4;
    VAR_3->xo_write = VAR_2;
    VAR_3->xo_close = VAR_0;
    VAR_3->xo_flush = VAR_1;

    return 0;
}
