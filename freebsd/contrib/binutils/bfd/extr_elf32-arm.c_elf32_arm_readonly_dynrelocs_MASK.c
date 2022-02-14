
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__ link; } ;
struct TYPE_6__ {TYPE_3__ i; } ;
struct TYPE_5__ {scalar_t__ type; TYPE_2__ u; } ;
struct elf_link_hash_entry {TYPE_1__ root; } ;
struct elf32_arm_relocs_copied {TYPE_4__* section; struct elf32_arm_relocs_copied* next; } ;
struct elf32_arm_link_hash_entry {struct elf32_arm_relocs_copied* relocs_copied; } ;
struct bfd_link_info {int flags; } ;
typedef int bfd_boolean ;
struct TYPE_8__ {int flags; } ;
typedef TYPE_4__ asection ;
typedef scalar_t__ PTR ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;

__attribute__((used)) static bfd_boolean
FUNC_0 (struct elf_link_hash_entry *VAR_5, PTR VAR_6)
{
  struct elf32_arm_link_hash_entry *VAR_7;
  struct elf32_arm_relocs_copied *VAR_8;

  if (VAR_5->root.type == VAR_4)
    VAR_5 = (struct elf_link_hash_entry *) VAR_5->root.u.i.link;

  VAR_7 = (struct elf32_arm_link_hash_entry *) VAR_5;
  for (VAR_8 = VAR_7->relocs_copied; VAR_8 != ((void*)0); VAR_8 = VAR_8->next)
    {
      asection *VAR_9 = VAR_8->section;

      if (VAR_9 != ((void*)0) && (VAR_9->flags & VAR_2) != 0)
 {
   struct bfd_link_info *VAR_10 = (struct bfd_link_info *) VAR_6;

   VAR_10->flags |= VAR_0;


   return VAR_1;
 }
    }
  return VAR_3;
}
