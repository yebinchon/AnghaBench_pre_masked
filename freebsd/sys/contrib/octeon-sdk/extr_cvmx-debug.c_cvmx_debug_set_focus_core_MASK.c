
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_4__ ;
typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int focus_core; scalar_t__ ever_been_in_debug; } ;
typedef TYPE_1__ cvmx_debug_state_t ;
struct TYPE_7__ {int (* change_core ) (int,int) ;} ;
struct TYPE_6__ {size_t comm_type; } ;


 TYPE_4__** VAR_0 ;
 TYPE_3__* VAR_1 ;
 int FUNC_0 (char*,int) ;
 int FUNC_1 (int,int) ;

__attribute__((used)) static void FUNC_2(cvmx_debug_state_t *VAR_2, int VAR_3)
{
    if (VAR_2->ever_been_in_debug)
        FUNC_0("taking focus.", VAR_3);
    VAR_0[VAR_1->comm_type]->change_core (VAR_2->focus_core, VAR_3);
    VAR_2->focus_core = VAR_3;
}
