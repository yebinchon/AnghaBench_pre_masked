
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {size_t eo_seccnt; int eo_strndx; int eo_elf; TYPE_1__* eo_shdr; } ;
struct TYPE_6__ {int * name; int size; int addr; } ;
struct TYPE_5__ {int sh_name; int sh_size; int sh_addr; } ;
typedef TYPE_1__ GElf_Shdr ;
typedef TYPE_2__ Dwarf_Obj_Access_Section ;
typedef size_t Dwarf_Half ;
typedef TYPE_3__ Dwarf_Elf_Object ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ) ;
 int * FUNC_1 (int ,int ,int ) ;

int
FUNC_2(void *VAR_6, Dwarf_Half VAR_7,
    Dwarf_Obj_Access_Section *VAR_8, int *VAR_9)
{
 Dwarf_Elf_Object *VAR_10;
 GElf_Shdr *VAR_11;

 VAR_10 = VAR_6;
 FUNC_0(VAR_10 != ((void*)0));

 if (VAR_8 == ((void*)0)) {
  if (VAR_9)
   *VAR_9 = VAR_0;
  return (VAR_3);
 }

 if (VAR_7 >= VAR_10->eo_seccnt) {
  if (VAR_9)
   *VAR_9 = VAR_2;
  return (VAR_4);
 }

 VAR_11 = &VAR_10->eo_shdr[VAR_7];

 VAR_8->addr = VAR_11->sh_addr;
 VAR_8->size = VAR_11->sh_size;

 VAR_8->name = FUNC_1(VAR_10->eo_elf, VAR_10->eo_strndx, VAR_11->sh_name);
 if (VAR_8->name == ((void*)0)) {
  if (VAR_9)
   *VAR_9 = VAR_1;
  return (VAR_3);
 }

 return (VAR_5);
}
