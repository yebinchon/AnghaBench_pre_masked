
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct comp_unit_head {struct abbrev_info** dwarf2_abbrevs; } ;
struct dwarf2_cu {struct comp_unit_head header; } ;
struct abbrev_info {unsigned int number; struct abbrev_info* next; } ;


 unsigned int VAR_0 ;

__attribute__((used)) static struct abbrev_info *
FUNC_0 (unsigned int VAR_1, struct dwarf2_cu *VAR_2)
{
  struct comp_unit_head *VAR_3 = &VAR_2->header;
  unsigned int VAR_4;
  struct abbrev_info *VAR_5;

  VAR_4 = VAR_1 % VAR_0;
  VAR_5 = VAR_3->dwarf2_abbrevs[VAR_4];

  while (VAR_5)
    {
      if (VAR_5->number == VAR_1)
 return VAR_5;
      else
 VAR_5 = VAR_5->next;
    }
  return ((void*)0);
}
