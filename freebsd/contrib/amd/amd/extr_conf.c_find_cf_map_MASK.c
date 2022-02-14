
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {struct TYPE_4__* cfm_next; int cfm_dir; } ;
typedef TYPE_1__ cf_map_t ;


 scalar_t__ FUNC_0 (int ,char const*) ;
 TYPE_1__* VAR_0 ;

cf_map_t *
FUNC_1(const char *VAR_1)
{

  cf_map_t *VAR_2 = VAR_0;

  if (!VAR_2 || !VAR_1)
    return ((void*)0);

  while (VAR_2) {
    if (FUNC_0(VAR_2->cfm_dir, VAR_1)) {
      return VAR_2;
    }
    VAR_2 = VAR_2->cfm_next;
  }
  return ((void*)0);
}
