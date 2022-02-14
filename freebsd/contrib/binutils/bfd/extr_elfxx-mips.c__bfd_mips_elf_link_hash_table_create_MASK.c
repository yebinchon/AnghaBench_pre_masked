
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct bfd_link_hash_table {int dummy; } ;
struct TYPE_2__ {struct bfd_link_hash_table root; } ;
struct mips_elf_link_hash_table {int* dynsym_sec_strindex; TYPE_1__ root; scalar_t__ function_stub_size; scalar_t__ plt_entry_size; scalar_t__ plt_header_size; int * splt; int * sgotplt; int * srelplt2; int * srelplt; int * sdynbss; int * srelbss; void* is_vxworks; void* mips16_stubs_seen; scalar_t__ rld_value; void* use_rld_obj_head; scalar_t__ compact_rel_size; scalar_t__ procedure_count; } ;
struct mips_elf_link_hash_entry {int dummy; } ;
typedef int bfd_size_type ;
typedef int bfd ;


 void* VAR_0 ;
 size_t VAR_1 ;
 int FUNC_0 (TYPE_1__*,int *,int ,int) ;
 struct mips_elf_link_hash_table* FUNC_1 (int) ;
 int FUNC_2 (struct mips_elf_link_hash_table*) ;
 size_t VAR_2 ;
 int VAR_3 ;

struct bfd_link_hash_table *
FUNC_3 (bfd *VAR_4)
{
  struct mips_elf_link_hash_table *VAR_5;
  bfd_size_type VAR_6 = sizeof (struct mips_elf_link_hash_table);

  VAR_5 = FUNC_1 (VAR_6);
  if (VAR_5 == ((void*)0))
    return ((void*)0);

  if (!FUNC_0 (&VAR_5->root, VAR_4,
          VAR_3,
          sizeof (struct mips_elf_link_hash_entry)))
    {
      FUNC_2 (VAR_5);
      return ((void*)0);
    }






  VAR_5->procedure_count = 0;
  VAR_5->compact_rel_size = 0;
  VAR_5->use_rld_obj_head = VAR_0;
  VAR_5->rld_value = 0;
  VAR_5->mips16_stubs_seen = VAR_0;
  VAR_5->is_vxworks = VAR_0;
  VAR_5->srelbss = ((void*)0);
  VAR_5->sdynbss = ((void*)0);
  VAR_5->srelplt = ((void*)0);
  VAR_5->srelplt2 = ((void*)0);
  VAR_5->sgotplt = ((void*)0);
  VAR_5->splt = ((void*)0);
  VAR_5->plt_header_size = 0;
  VAR_5->plt_entry_size = 0;
  VAR_5->function_stub_size = 0;

  return &VAR_5->root.root;
}
