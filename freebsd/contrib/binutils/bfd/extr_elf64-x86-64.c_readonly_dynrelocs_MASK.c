
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ link; } ;
struct TYPE_7__ {TYPE_1__ i; } ;
struct TYPE_9__ {scalar_t__ type; TYPE_2__ u; } ;
struct elf_link_hash_entry {TYPE_4__ root; } ;
struct elf64_x86_64_link_hash_entry {struct elf64_x86_64_dyn_relocs* dyn_relocs; } ;
struct elf64_x86_64_dyn_relocs {TYPE_3__* sec; struct elf64_x86_64_dyn_relocs* next; } ;
struct bfd_link_info {int flags; } ;
typedef int bfd_boolean ;
struct TYPE_10__ {int flags; } ;
typedef TYPE_5__ asection ;
struct TYPE_8__ {TYPE_5__* output_section; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;

__attribute__((used)) static bfd_boolean
FUNC_0 (struct elf_link_hash_entry *VAR_5, void * VAR_6)
{
  struct elf64_x86_64_link_hash_entry *VAR_7;
  struct elf64_x86_64_dyn_relocs *VAR_8;

  if (VAR_5->root.type == VAR_4)
    VAR_5 = (struct elf_link_hash_entry *) VAR_5->root.u.i.link;

  VAR_7 = (struct elf64_x86_64_link_hash_entry *) VAR_5;
  for (VAR_8 = VAR_7->dyn_relocs; VAR_8 != ((void*)0); VAR_8 = VAR_8->next)
    {
      asection *VAR_9 = VAR_8->sec->output_section;

      if (VAR_9 != ((void*)0) && (VAR_9->flags & VAR_2) != 0)
 {
   struct bfd_link_info *VAR_10 = (struct bfd_link_info *) VAR_6;

   VAR_10->flags |= VAR_0;


   return VAR_1;
 }
    }
  return VAR_3;
}
