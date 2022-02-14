
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dwarf2_cie {struct dwarf2_cie* next; } ;
struct comp_unit {struct dwarf2_cie* cie; } ;



__attribute__((used)) static void
FUNC_0 (struct comp_unit *VAR_0, struct dwarf2_cie *VAR_1)
{
  VAR_1->next = VAR_0->cie;
  VAR_0->cie = VAR_1;
}
