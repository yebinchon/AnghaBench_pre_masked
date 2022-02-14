
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct section_addr_info {int num_sections; TYPE_1__* other; } ;
struct TYPE_2__ {struct section_addr_info* name; } ;


 int FUNC_0 (struct section_addr_info*) ;

extern void
FUNC_1 (struct section_addr_info *VAR_0)
{
  int VAR_1;

  for (VAR_1 = 0; VAR_1 < VAR_0->num_sections; VAR_1++)
    if (VAR_0->other[VAR_1].name)
      FUNC_0 (VAR_0->other[VAR_1].name);
  FUNC_0 (VAR_0);
}
