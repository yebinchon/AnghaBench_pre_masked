
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int xo_xof_flags_t ;
typedef int xo_style_t ;
struct TYPE_4__ {int xo_flush; int xo_close; int xo_write; int * xo_opaque; } ;
typedef TYPE_1__ xo_handle_t ;
typedef int FILE ;


 int VAR_0 ;
 TYPE_1__* FUNC_0 (int ,int ) ;
 int VAR_1 ;
 int VAR_2 ;

xo_handle_t *
FUNC_1 (FILE *VAR_3, xo_style_t VAR_4, xo_xof_flags_t VAR_5)
{
    xo_handle_t *VAR_6 = FUNC_0(VAR_4, VAR_5);

    if (VAR_6) {
 VAR_6->xo_opaque = VAR_3;
 VAR_6->xo_write = VAR_2;
 VAR_6->xo_close = VAR_0;
 VAR_6->xo_flush = VAR_1;
    }

    return VAR_6;
}
