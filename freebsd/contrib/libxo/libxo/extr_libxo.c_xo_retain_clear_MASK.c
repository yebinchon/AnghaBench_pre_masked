
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {char const* xre_format; struct TYPE_3__* xre_next; } ;
typedef TYPE_1__ xo_retain_entry_t ;
struct TYPE_4__ {TYPE_1__** xr_bucket; } ;


 TYPE_2__ VAR_0 ;
 int VAR_1 ;
 unsigned int FUNC_0 (char const*) ;

void
FUNC_1 (const char *VAR_2)
{
    xo_retain_entry_t **VAR_3;
    unsigned VAR_4 = FUNC_0(VAR_2);

    for (VAR_3 = &VAR_0.xr_bucket[VAR_4]; *VAR_3;
  VAR_3 = &(*VAR_3)->xre_next) {
 if ((*VAR_3)->xre_format == VAR_2) {
     *VAR_3 = (*VAR_3)->xre_next;
     VAR_1 -= 1;
     return;
 }
    }
}
