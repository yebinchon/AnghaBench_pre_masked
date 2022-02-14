
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct dwarf_section {unsigned long size; int * start; scalar_t__ address; } ;
struct TYPE_2__ {struct dwarf_section section; } ;


 char const* FUNC_0 (char*) ;
 TYPE_1__* VAR_0 ;
 size_t VAR_1 ;
 int FUNC_1 (char const*,unsigned long) ;

__attribute__((used)) static const char *
FUNC_2 (unsigned long VAR_2)
{
  struct dwarf_section *VAR_3 = &VAR_0 [VAR_1].section;

  if (VAR_3->start == ((void*)0))
    return FUNC_0("<no .debug_str section>");


  VAR_2 -= VAR_3->address;
  if (VAR_2 > VAR_3->size)
    {
      FUNC_1 (FUNC_0("DW_FORM_strp offset too big: %lx\n"), VAR_2);
      return FUNC_0("<offset is too big>");
    }

  return (const char *) VAR_3->start + VAR_2;
}
