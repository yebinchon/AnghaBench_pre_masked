
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct loadable_section {TYPE_1__* section; } ;
struct dwarf2_debug {unsigned int loadable_section_count; struct loadable_section* loadable_sections; } ;
struct TYPE_2__ {scalar_t__ vma; } ;



__attribute__((used)) static void
FUNC_0 (struct dwarf2_debug *VAR_0)
{
  unsigned int VAR_1;
  struct loadable_section *VAR_2;

  VAR_1 = VAR_0->loadable_section_count;
  VAR_2 = VAR_0->loadable_sections;
  for (; VAR_1 > 0; VAR_1--, VAR_2++)
    VAR_2->section->vma = 0;
}
