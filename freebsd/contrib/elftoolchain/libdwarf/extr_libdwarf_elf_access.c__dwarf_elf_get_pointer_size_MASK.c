
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int eo_elf; } ;
typedef int Dwarf_Small ;
typedef TYPE_1__ Dwarf_Elf_Object ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;

Dwarf_Small
FUNC_2(void *VAR_1)
{
 Dwarf_Elf_Object *VAR_2;

 VAR_2 = VAR_1;
 FUNC_0(VAR_2 != ((void*)0));

 if (FUNC_1(VAR_2->eo_elf) == VAR_0)
  return (4);
 else
  return (8);
}
