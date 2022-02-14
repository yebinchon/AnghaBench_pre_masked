
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct dwarf_section {scalar_t__ size; scalar_t__ address; int * start; } ;
typedef enum dwarf_section_display_enum { ____Placeholder_dwarf_section_display_enum } dwarf_section_display_enum ;
struct TYPE_2__ {struct dwarf_section section; } ;


 TYPE_1__* VAR_0 ;
 int FUNC_0 (char*) ;

void
FUNC_1 (enum dwarf_section_display_enum VAR_1)
{
  struct dwarf_section *VAR_2 = &VAR_0 [VAR_1].section;

  if (VAR_2->start == ((void*)0))
    return;

  FUNC_0 ((char *) VAR_2->start);
  VAR_2->start = ((void*)0);
  VAR_2->address = 0;
  VAR_2->size = 0;
}
