
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int* e_ident; } ;
struct TYPE_4__ {TYPE_1__ eo_ehdr; } ;
typedef int Dwarf_Endianness ;
typedef TYPE_2__ Dwarf_Elf_Object ;


 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;



 int FUNC_0 (int ) ;

Dwarf_Endianness
FUNC_1(void *VAR_3)
{
 Dwarf_Elf_Object *VAR_4;

 VAR_4 = VAR_3;
 FUNC_0(VAR_4 != ((void*)0));

 switch (VAR_4->eo_ehdr.e_ident[VAR_2]) {
 case 129:
  return (VAR_1);

 case 130:
 case 128:
 default:
  return (VAR_0);
 }
}
