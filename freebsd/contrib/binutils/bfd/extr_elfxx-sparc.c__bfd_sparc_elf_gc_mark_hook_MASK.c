
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct elf_link_hash_entry {int dummy; } ;
struct bfd_link_info {int dummy; } ;
typedef int asection ;
struct TYPE_4__ {int r_info; } ;
typedef int Elf_Internal_Sym ;
typedef TYPE_1__ Elf_Internal_Rela ;




 int FUNC_0 (int ) ;
 int * FUNC_1 (int *,struct bfd_link_info*,TYPE_1__*,struct elf_link_hash_entry*,int *) ;

asection *
FUNC_2 (asection *VAR_0,
        struct bfd_link_info *VAR_1,
        Elf_Internal_Rela *VAR_2,
        struct elf_link_hash_entry *VAR_3,
        Elf_Internal_Sym *VAR_4)
{
  if (VAR_3 != ((void*)0))
    switch (FUNC_0 (VAR_2->r_info))
      {
      case 128:
      case 129:
 return ((void*)0);
      }

  return FUNC_1 (VAR_0, VAR_1, VAR_2, VAR_3, VAR_4);
}
