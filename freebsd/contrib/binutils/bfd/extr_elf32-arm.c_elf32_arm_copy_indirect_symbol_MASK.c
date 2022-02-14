
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ refcount; } ;
struct TYPE_3__ {scalar_t__ type; } ;
struct elf_link_hash_entry {TYPE_2__ got; TYPE_1__ root; } ;
struct elf32_arm_relocs_copied {scalar_t__ section; struct elf32_arm_relocs_copied* next; scalar_t__ count; scalar_t__ pc_count; } ;
struct elf32_arm_link_hash_entry {int tls_type; scalar_t__ plt_thumb_refcount; struct elf32_arm_relocs_copied* relocs_copied; } ;
struct bfd_link_info {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct bfd_link_info*,struct elf_link_hash_entry*,struct elf_link_hash_entry*) ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static void
FUNC_1 (struct bfd_link_info *VAR_2,
    struct elf_link_hash_entry *VAR_3,
    struct elf_link_hash_entry *VAR_4)
{
  struct elf32_arm_link_hash_entry *VAR_5, *VAR_6;

  VAR_5 = (struct elf32_arm_link_hash_entry *) VAR_3;
  VAR_6 = (struct elf32_arm_link_hash_entry *) VAR_4;

  if (VAR_6->relocs_copied != ((void*)0))
    {
      if (VAR_5->relocs_copied != ((void*)0))
 {
   struct elf32_arm_relocs_copied **VAR_7;
   struct elf32_arm_relocs_copied *VAR_8;



   for (VAR_7 = &VAR_6->relocs_copied; (VAR_8 = *VAR_7) != ((void*)0); )
     {
       struct elf32_arm_relocs_copied *VAR_9;

       for (VAR_9 = VAR_5->relocs_copied; VAR_9 != ((void*)0); VAR_9 = VAR_9->next)
  if (VAR_9->section == VAR_8->section)
    {
      VAR_9->pc_count += VAR_8->pc_count;
      VAR_9->count += VAR_8->count;
      *VAR_7 = VAR_8->next;
      break;
    }
       if (VAR_9 == ((void*)0))
  VAR_7 = &VAR_8->next;
     }
   *VAR_7 = VAR_5->relocs_copied;
 }

      VAR_5->relocs_copied = VAR_6->relocs_copied;
      VAR_6->relocs_copied = ((void*)0);
    }

  if (VAR_4->root.type == VAR_1)
    {

      VAR_5->plt_thumb_refcount += VAR_6->plt_thumb_refcount;
      VAR_6->plt_thumb_refcount = 0;

      if (VAR_3->got.refcount <= 0)
 {
   VAR_5->tls_type = VAR_6->tls_type;
   VAR_6->tls_type = VAR_0;
 }
    }

  FUNC_0 (VAR_2, VAR_3, VAR_4);
}
