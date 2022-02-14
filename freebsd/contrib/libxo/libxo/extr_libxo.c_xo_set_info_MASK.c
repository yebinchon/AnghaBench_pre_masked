
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__ xi_name; } ;
typedef TYPE_1__ xo_info_t ;
struct TYPE_8__ {int xo_info_count; TYPE_1__* xo_info; } ;
typedef TYPE_2__ xo_handle_t ;


 TYPE_2__* FUNC_0 (TYPE_2__*) ;

void
FUNC_1 (xo_handle_t *VAR_0, xo_info_t *VAR_1, int VAR_2)
{
    VAR_0 = FUNC_0(VAR_0);

    if (VAR_2 < 0 && VAR_1) {
 xo_info_t *VAR_3;

 for (VAR_3 = VAR_1, VAR_2 = 0; VAR_3->xi_name; VAR_3++, VAR_2++)
     continue;
    }

    VAR_0->xo_info = VAR_1;
    VAR_0->xo_info_count = VAR_2;
}
