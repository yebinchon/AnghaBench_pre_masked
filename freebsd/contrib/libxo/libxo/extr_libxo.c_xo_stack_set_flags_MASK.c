
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int xs_flags; } ;
typedef TYPE_1__ xo_stack_t ;
struct TYPE_7__ {size_t xo_depth; TYPE_1__* xo_stack; } ;
typedef TYPE_2__ xo_handle_t ;


 int FUNC_0 (TYPE_2__*,int ) ;
 scalar_t__ FUNC_1 (TYPE_2__*,int ) ;
 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static void
FUNC_2 (xo_handle_t *VAR_2)
{
    if (FUNC_1(VAR_2, VAR_0)) {
 xo_stack_t *VAR_3 = &VAR_2->xo_stack[VAR_2->xo_depth];

 VAR_3->xs_flags |= VAR_1;
 FUNC_0(VAR_2, VAR_0);
    }
}
