
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dwarf2_cie {scalar_t__ cie_pointer; struct dwarf2_cie* next; } ;
struct comp_unit {struct dwarf2_cie* cie; } ;
typedef scalar_t__ ULONGEST ;



__attribute__((used)) static struct dwarf2_cie *
FUNC_0 (struct comp_unit *VAR_0, ULONGEST VAR_1)
{
  struct dwarf2_cie *VAR_2 = VAR_0->cie;

  while (VAR_2)
    {
      if (VAR_2->cie_pointer == VAR_1)
 return VAR_2;

      VAR_2 = VAR_2->next;
    }

  return ((void*)0);
}
