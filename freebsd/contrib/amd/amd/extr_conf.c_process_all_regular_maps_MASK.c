
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {struct TYPE_4__* cfm_next; } ;
typedef TYPE_1__ cf_map_t ;


 TYPE_1__* VAR_0 ;
 scalar_t__ FUNC_0 (TYPE_1__*) ;

int
FUNC_1(void)
{
  cf_map_t *VAR_1 = VAR_0;





  if (!VAR_1)
    return 0;

  while (VAR_1) {
    if (FUNC_0(VAR_1) != 0)
      return 1;
    VAR_1 = VAR_1->cfm_next;
  }
  return 0;
}
