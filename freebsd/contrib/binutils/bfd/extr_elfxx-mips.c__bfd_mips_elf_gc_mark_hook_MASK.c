
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct elf_link_hash_entry {int dummy; } ;
struct bfd_link_info {int dummy; } ;
struct TYPE_9__ {int owner; } ;
typedef TYPE_1__ asection ;
struct TYPE_10__ {int r_info; } ;
typedef int Elf_Internal_Sym ;
typedef TYPE_2__ Elf_Internal_Rela ;


 int FUNC_0 (int ,int ) ;


 TYPE_1__* FUNC_1 (TYPE_1__*,struct bfd_link_info*,TYPE_2__*,struct elf_link_hash_entry*,int *) ;

asection *
FUNC_2 (asection *VAR_0,
       struct bfd_link_info *VAR_1,
       Elf_Internal_Rela *VAR_2,
       struct elf_link_hash_entry *VAR_3,
       Elf_Internal_Sym *VAR_4)
{


  if (VAR_3 != ((void*)0))
    switch (FUNC_0 (VAR_0->owner, VAR_2->r_info))
      {
      case 128:
      case 129:
 return ((void*)0);
      }

  return FUNC_1 (VAR_0, VAR_1, VAR_2, VAR_3, VAR_4);
}
