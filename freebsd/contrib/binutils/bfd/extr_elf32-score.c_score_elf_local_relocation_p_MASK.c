
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_8__ ;
typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {scalar_t__ link; } ;
struct TYPE_10__ {TYPE_1__ i; } ;
struct TYPE_11__ {scalar_t__ type; TYPE_2__ u; } ;
struct TYPE_12__ {scalar_t__ forced_local; TYPE_3__ root; } ;
struct score_elf_link_hash_entry {TYPE_4__ root; } ;
typedef scalar_t__ bfd_boolean ;
typedef int bfd ;
typedef int asection ;
struct TYPE_13__ {size_t sh_info; } ;
struct TYPE_15__ {TYPE_5__ symtab_hdr; } ;
struct TYPE_14__ {int r_info; } ;
typedef TYPE_5__ Elf_Internal_Shdr ;
typedef TYPE_6__ Elf_Internal_Rela ;


 unsigned long FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_1 (int *) ;
 scalar_t__* FUNC_2 (int *) ;
 TYPE_8__* FUNC_3 (int *) ;

__attribute__((used)) static bfd_boolean
FUNC_4 (bfd *VAR_4,
         const Elf_Internal_Rela *VAR_5,
         asection **VAR_6,
         bfd_boolean VAR_7)
{
  unsigned long VAR_8;
  Elf_Internal_Shdr *VAR_9;
  struct score_elf_link_hash_entry *VAR_10;
  size_t VAR_11;

  VAR_8 = FUNC_0 (VAR_5->r_info);
  VAR_9 = &FUNC_3 (VAR_4)->symtab_hdr;
  VAR_11 = (FUNC_1 (VAR_4)) ? 0 : VAR_9->sh_info;

  if (VAR_8 < VAR_11)
    return VAR_1;
  if (FUNC_1 (VAR_4) && VAR_6[VAR_8] != ((void*)0))
    return VAR_1;

  if (VAR_7)
    {

      VAR_10 = (struct score_elf_link_hash_entry *)
 FUNC_2 (VAR_4) [VAR_8 - VAR_11];

      while (VAR_10->root.root.type == VAR_2
      || VAR_10->root.root.type == VAR_3)
 VAR_10 = (struct score_elf_link_hash_entry *) VAR_10->root.root.u.i.link;
      if (VAR_10->root.forced_local)
 return VAR_1;
    }

  return VAR_0;
}
