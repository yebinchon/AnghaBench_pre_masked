
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int xo_ssize_t ;
struct TYPE_8__ {size_t xo_depth; TYPE_1__* xo_stack; } ;
typedef TYPE_2__ xo_handle_t ;
struct TYPE_7__ {int xs_flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_2__* FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (TYPE_2__*,char const*,int,int ,int ,int) ;

xo_ssize_t
FUNC_2 (xo_handle_t *VAR_2, const char *VAR_3)
{
    VAR_2 = FUNC_0(VAR_2);

    FUNC_1(VAR_2, VAR_3, 1, 0, VAR_1,
      VAR_2->xo_stack[VAR_2->xo_depth].xs_flags & VAR_0);

    return 0;
}
