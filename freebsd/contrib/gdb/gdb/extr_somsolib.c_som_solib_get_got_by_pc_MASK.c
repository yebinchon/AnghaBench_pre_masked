
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ text_addr; scalar_t__ text_end; scalar_t__ got_value; } ;
struct so_list {struct so_list* next; TYPE_1__ som_solib; } ;
typedef scalar_t__ CORE_ADDR ;


 struct so_list* VAR_0 ;

CORE_ADDR
FUNC_0 (CORE_ADDR VAR_1)
{
  struct so_list *VAR_2 = VAR_0;
  CORE_ADDR VAR_3 = 0;

  while (VAR_2)
    {
      if (VAR_2->som_solib.text_addr <= VAR_1
   && VAR_2->som_solib.text_end > VAR_1)
 {
   VAR_3 = VAR_2->som_solib.got_value;
   break;
 }
      VAR_2 = VAR_2->next;
    }
  return VAR_3;
}
