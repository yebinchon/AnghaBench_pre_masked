
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {scalar_t__ link; } ;
struct TYPE_9__ {TYPE_1__ i; } ;
struct TYPE_10__ {scalar_t__ type; TYPE_2__ u; } ;
struct elf_link_hash_entry {TYPE_3__ root; } ;
struct ppc_link_hash_entry {struct elf_link_hash_entry elf; } ;
typedef enum elf_ppc64_reloc_type { ____Placeholder_elf_ppc64_reloc_type } elf_ppc64_reloc_type ;
typedef int bfd_boolean ;
typedef int bfd ;
struct TYPE_11__ {unsigned int sh_info; } ;
struct TYPE_13__ {TYPE_4__ symtab_hdr; } ;
struct TYPE_12__ {int r_info; } ;
typedef TYPE_4__ Elf_Internal_Shdr ;
typedef TYPE_5__ Elf_Internal_Rela ;


 unsigned int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 struct elf_link_hash_entry** FUNC_2 (int const*) ;
 TYPE_6__* FUNC_3 (int const*) ;

__attribute__((used)) static bfd_boolean
FUNC_4 (const bfd *VAR_12,
    const Elf_Internal_Rela *VAR_13,
    const struct ppc_link_hash_entry *VAR_14,
    const struct ppc_link_hash_entry *VAR_15)
{
  Elf_Internal_Shdr *VAR_16 = &FUNC_3 (VAR_12)->symtab_hdr;
  enum elf_ppc64_reloc_type VAR_17 = FUNC_1 (VAR_13->r_info);
  unsigned int VAR_18 = FUNC_0 (VAR_13->r_info);

  if (VAR_18 >= VAR_16->sh_info
      && (VAR_17 == VAR_8
   || VAR_17 == VAR_5
   || VAR_17 == VAR_7
   || VAR_17 == VAR_6
   || VAR_17 == VAR_4
   || VAR_17 == VAR_1
   || VAR_17 == VAR_3
   || VAR_17 == VAR_2))
    {
      struct elf_link_hash_entry **VAR_19 = FUNC_2 (VAR_12);
      struct elf_link_hash_entry *VAR_20;

      VAR_20 = VAR_19[VAR_18 - VAR_16->sh_info];
      while (VAR_20->root.type == VAR_10
      || VAR_20->root.type == VAR_11)
 VAR_20 = (struct elf_link_hash_entry *) VAR_20->root.u.i.link;
      if (VAR_20 == &VAR_14->elf || VAR_20 == &VAR_15->elf)
 return VAR_9;
    }
  return VAR_0;
}
