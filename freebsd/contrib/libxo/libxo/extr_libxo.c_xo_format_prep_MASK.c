
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int xo_xff_flags_t ;
struct TYPE_7__ {size_t xo_depth; TYPE_1__* xo_stack; } ;
typedef TYPE_2__ xo_handle_t ;
struct TYPE_6__ {int xs_flags; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (TYPE_2__*,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (TYPE_2__*,char*,int) ;

__attribute__((used)) static void
FUNC_2 (xo_handle_t *VAR_3, xo_xff_flags_t VAR_4)
{
    if (VAR_3->xo_stack[VAR_3->xo_depth].xs_flags & VAR_2) {
 FUNC_1(VAR_3, ",", 1);
 if (!(VAR_4 & VAR_0) && FUNC_0(VAR_3, VAR_1))
     FUNC_1(VAR_3, "\n", 1);
    } else
 VAR_3->xo_stack[VAR_3->xo_depth].xs_flags |= VAR_2;
}
