
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {void* needs_plt; } ;
struct alpha_elf_link_hash_entry {TYPE_1__ root; struct alpha_elf_got_entry* got_entries; } ;
struct alpha_elf_got_entry {scalar_t__ reloc_type; scalar_t__ use_count; scalar_t__ plt_offset; struct alpha_elf_got_entry* next; } ;
typedef void* bfd_boolean ;
struct TYPE_4__ {scalar_t__ size; } ;
typedef TYPE_2__ asection ;
typedef scalar_t__ PTR ;


 void* VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 void* VAR_4 ;

__attribute__((used)) static bfd_boolean
FUNC_0 (struct alpha_elf_link_hash_entry *VAR_5, PTR VAR_6)
{
  asection *VAR_7 = (asection *) VAR_6;
  struct alpha_elf_got_entry *VAR_8;
  bfd_boolean VAR_9 = VAR_0;


  if (!VAR_5->root.needs_plt)
    return VAR_4;


  for (VAR_8 = VAR_5->got_entries; VAR_8 ; VAR_8 = VAR_8->next)
    if (VAR_8->reloc_type == VAR_3
 && VAR_8->use_count > 0)
      {
 if (VAR_7->size == 0)
   VAR_7->size = VAR_2;
 VAR_8->plt_offset = VAR_7->size;
 VAR_7->size += VAR_1;
 VAR_9 = VAR_4;
      }


  if (!VAR_9)
    VAR_5->root.needs_plt = VAR_0;

  return VAR_4;
}
