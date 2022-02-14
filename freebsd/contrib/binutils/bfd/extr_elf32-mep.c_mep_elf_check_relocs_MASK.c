
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_6__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct elf_link_hash_entry {int dummy; } ;
struct bfd_link_info {scalar_t__ relocatable; } ;
typedef int bfd_boolean ;
typedef int bfd ;
struct TYPE_7__ {int reloc_count; } ;
typedef TYPE_1__ asection ;
struct TYPE_8__ {int sh_size; unsigned long sh_info; } ;
struct TYPE_10__ {TYPE_2__ symtab_hdr; } ;
struct TYPE_9__ {int r_info; } ;
typedef TYPE_2__ Elf_Internal_Shdr ;
typedef TYPE_3__ Elf_Internal_Rela ;
typedef int Elf32_External_Sym ;


 unsigned long FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int *) ;
 struct elf_link_hash_entry** FUNC_2 (int *) ;
 TYPE_6__* FUNC_3 (int *) ;

__attribute__((used)) static bfd_boolean
FUNC_4
    (bfd * VAR_1,
     struct bfd_link_info * VAR_2,
     asection * VAR_3,
     const Elf_Internal_Rela * VAR_4)
{
  Elf_Internal_Shdr * VAR_5;
  struct elf_link_hash_entry ** VAR_6;
  struct elf_link_hash_entry ** VAR_7;
  const Elf_Internal_Rela * VAR_8;
  const Elf_Internal_Rela * VAR_9;

  if (VAR_2->relocatable)
    return VAR_0;

  VAR_5 = &FUNC_3 (VAR_1)->symtab_hdr;
  VAR_6 = FUNC_2 (VAR_1);
  VAR_7 = VAR_6 + VAR_5->sh_size / sizeof (Elf32_External_Sym);
  if (!FUNC_1 (VAR_1))
    VAR_7 -= VAR_5->sh_info;

  VAR_9 = VAR_4 + VAR_3->reloc_count;
  for (VAR_8 = VAR_4; VAR_8 < VAR_9; VAR_8++)
    {
      struct elf_link_hash_entry *VAR_10;
      unsigned long VAR_11;

      VAR_11 = FUNC_0 (VAR_8->r_info);
      if (VAR_11 < VAR_5->sh_info)
        VAR_10 = ((void*)0);
      else
        VAR_10 = VAR_6[VAR_11 - VAR_5->sh_info];
    }
  return VAR_0;
}
