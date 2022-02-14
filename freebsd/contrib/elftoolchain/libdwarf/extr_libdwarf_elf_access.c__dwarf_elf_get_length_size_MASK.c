
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ e_machine; } ;
struct TYPE_4__ {TYPE_1__ eo_ehdr; int eo_elf; } ;
typedef int Dwarf_Small ;
typedef TYPE_2__ Dwarf_Elf_Object ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;

Dwarf_Small
FUNC_2(void *VAR_2)
{
 Dwarf_Elf_Object *VAR_3;

 VAR_3 = VAR_2;
 FUNC_0(VAR_3 != ((void*)0));

 if (FUNC_1(VAR_3->eo_elf) == VAR_0)
  return (4);
 else if (VAR_3->eo_ehdr.e_machine == VAR_1)
  return (8);
 else
  return (4);
}
