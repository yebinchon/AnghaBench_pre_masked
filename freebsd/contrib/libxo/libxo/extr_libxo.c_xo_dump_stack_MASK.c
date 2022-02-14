
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int xs_flags; scalar_t__ xs_name; int xs_state; } ;
typedef TYPE_1__ xo_stack_t ;
struct TYPE_7__ {int xo_depth; TYPE_1__* xo_stack; } ;
typedef TYPE_2__ xo_handle_t ;


 int FUNC_0 (int ,char*,...) ;
 int VAR_0 ;
 TYPE_2__* FUNC_1 (TYPE_2__*) ;
 char* FUNC_2 (int ) ;

void
FUNC_3 (xo_handle_t *VAR_1)
{
    int VAR_2;
    xo_stack_t *VAR_3;

    VAR_1 = FUNC_1(VAR_1);

    FUNC_0(VAR_0, "Stack dump:\n");

    VAR_3 = VAR_1->xo_stack;
    for (VAR_2 = 1, VAR_3++; VAR_2 <= VAR_1->xo_depth; VAR_2++, VAR_3++) {
 FUNC_0(VAR_0, "   [%d] %s '%s' [%x]\n",
  VAR_2, FUNC_2(VAR_3->xs_state),
  VAR_3->xs_name ?: "--", VAR_3->xs_flags);
    }
}
