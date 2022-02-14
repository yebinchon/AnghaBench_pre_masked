
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct score_elf_link_hash_entry {void* no_fn_stub; void* readonly_reloc; scalar_t__ possibly_dynamic_relocs; } ;
struct TYPE_2__ {scalar_t__ type; } ;
struct elf_link_hash_entry {TYPE_1__ root; } ;
struct bfd_link_info {int dummy; } ;


 void* VAR_0 ;
 int FUNC_0 (struct bfd_link_info*,struct elf_link_hash_entry*,struct elf_link_hash_entry*) ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static void
FUNC_1 (struct bfd_link_info *VAR_2,
         struct elf_link_hash_entry *VAR_3,
         struct elf_link_hash_entry *VAR_4)
{
  struct score_elf_link_hash_entry *VAR_5, *VAR_6;

  FUNC_0 (VAR_2, VAR_3, VAR_4);

  if (VAR_4->root.type != VAR_1)
    return;

  VAR_5 = (struct score_elf_link_hash_entry *) VAR_3;
  VAR_6 = (struct score_elf_link_hash_entry *) VAR_4;
  VAR_5->possibly_dynamic_relocs += VAR_6->possibly_dynamic_relocs;

  if (VAR_6->readonly_reloc)
    VAR_5->readonly_reloc = VAR_0;

  if (VAR_6->no_fn_stub)
    VAR_5->no_fn_stub = VAR_0;
}
