
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {scalar_t__ xo_depth; int xo_indent; scalar_t__ xo_style; } ;
typedef TYPE_1__ xo_handle_t ;


 int FUNC_0 (TYPE_1__*,int ) ;
 int VAR_0 ;
 int FUNC_1 (TYPE_1__*,int ) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 TYPE_1__* FUNC_2 (TYPE_1__*) ;
 scalar_t__ FUNC_3 (TYPE_1__*,int) ;

void
FUNC_4 (xo_handle_t *VAR_3, int VAR_4)
{
    VAR_3 = FUNC_2(VAR_3);

    if (FUNC_3(VAR_3, VAR_4))
 return;

    VAR_3->xo_depth += VAR_4;
    VAR_3->xo_indent += VAR_4;






    if (VAR_3->xo_style == VAR_2
 && !FUNC_0(VAR_3, VAR_0) && VAR_3->xo_depth > 0)
 FUNC_1(VAR_3, VAR_1);
}
