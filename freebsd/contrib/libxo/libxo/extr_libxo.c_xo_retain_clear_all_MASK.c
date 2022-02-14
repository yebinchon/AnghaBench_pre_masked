
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {struct TYPE_4__* xre_next; } ;
typedef TYPE_1__ xo_retain_entry_t ;
struct TYPE_5__ {TYPE_1__** xr_bucket; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 TYPE_2__ VAR_1 ;
 scalar_t__ VAR_2 ;

void
FUNC_1 (void)
{
    int VAR_3;
    xo_retain_entry_t *VAR_4, *VAR_5;

    for (VAR_3 = 0; VAR_3 < VAR_0; VAR_3++) {
 for (VAR_4 = VAR_1.xr_bucket[VAR_3]; VAR_4; VAR_4 = VAR_5) {
     VAR_5 = VAR_4->xre_next;
     FUNC_0(VAR_4);
 }
 VAR_1.xr_bucket[VAR_3] = ((void*)0);
    }
    VAR_2 = 0;
}
