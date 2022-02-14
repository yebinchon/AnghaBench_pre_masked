
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {char const* xre_format; unsigned int xre_num_fields; int xre_hits; int * xre_fields; struct TYPE_3__* xre_next; } ;
typedef TYPE_1__ xo_retain_entry_t ;
typedef int xo_field_info_t ;
struct TYPE_4__ {TYPE_1__** xr_bucket; } ;


 TYPE_2__ VAR_0 ;
 scalar_t__ VAR_1 ;
 unsigned int FUNC_0 (char const*) ;

__attribute__((used)) static int
FUNC_1 (const char *VAR_2, xo_field_info_t **VAR_3, unsigned *VAR_4)
{
    if (VAR_1 == 0)
 return -1;

    unsigned VAR_5 = FUNC_0(VAR_2);
    xo_retain_entry_t *VAR_6;

    for (VAR_6 = VAR_0.xr_bucket[VAR_5]; VAR_6 != ((void*)0);
  VAR_6 = VAR_6->xre_next) {
 if (VAR_6->xre_format == VAR_2) {
     *VAR_3 = VAR_6->xre_fields;
     *VAR_4 = VAR_6->xre_num_fields;
     VAR_6->xre_hits += 1;
     return 0;
 }
    }

    return -1;
}
