
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ type; } ;
struct TYPE_3__ {scalar_t__ refcount; } ;
struct elf_link_hash_entry {int pointer_equality_needed; int needs_plt; int ref_regular_nonweak; int ref_regular; int ref_dynamic; scalar_t__ dynamic_adjusted; TYPE_2__ root; TYPE_1__ got; } ;
struct elf64_x86_64_link_hash_entry {int tls_type; struct elf64_x86_64_dyn_relocs* dyn_relocs; } ;
struct elf64_x86_64_dyn_relocs {scalar_t__ sec; struct elf64_x86_64_dyn_relocs* next; scalar_t__ count; scalar_t__ pc_count; } ;
struct bfd_link_info {int dummy; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct bfd_link_info*,struct elf_link_hash_entry*,struct elf_link_hash_entry*) ;
 scalar_t__ VAR_2 ;

__attribute__((used)) static void
FUNC_1 (struct bfd_link_info *VAR_3,
       struct elf_link_hash_entry *VAR_4,
       struct elf_link_hash_entry *VAR_5)
{
  struct elf64_x86_64_link_hash_entry *VAR_6, *VAR_7;

  VAR_6 = (struct elf64_x86_64_link_hash_entry *) VAR_4;
  VAR_7 = (struct elf64_x86_64_link_hash_entry *) VAR_5;

  if (VAR_7->dyn_relocs != ((void*)0))
    {
      if (VAR_6->dyn_relocs != ((void*)0))
 {
   struct elf64_x86_64_dyn_relocs **VAR_8;
   struct elf64_x86_64_dyn_relocs *VAR_9;



   for (VAR_8 = &VAR_7->dyn_relocs; (VAR_9 = *VAR_8) != ((void*)0); )
     {
       struct elf64_x86_64_dyn_relocs *VAR_10;

       for (VAR_10 = VAR_6->dyn_relocs; VAR_10 != ((void*)0); VAR_10 = VAR_10->next)
  if (VAR_10->sec == VAR_9->sec)
    {
      VAR_10->pc_count += VAR_9->pc_count;
      VAR_10->count += VAR_9->count;
      *VAR_8 = VAR_9->next;
      break;
    }
       if (VAR_10 == ((void*)0))
  VAR_8 = &VAR_9->next;
     }
   *VAR_8 = VAR_6->dyn_relocs;
 }

      VAR_6->dyn_relocs = VAR_7->dyn_relocs;
      VAR_7->dyn_relocs = ((void*)0);
    }

  if (VAR_5->root.type == VAR_2
      && VAR_4->got.refcount <= 0)
    {
      VAR_6->tls_type = VAR_7->tls_type;
      VAR_7->tls_type = VAR_1;
    }

  if (VAR_0
      && VAR_5->root.type != VAR_2
      && VAR_4->dynamic_adjusted)
    {



      VAR_4->ref_dynamic |= VAR_5->ref_dynamic;
      VAR_4->ref_regular |= VAR_5->ref_regular;
      VAR_4->ref_regular_nonweak |= VAR_5->ref_regular_nonweak;
      VAR_4->needs_plt |= VAR_5->needs_plt;
      VAR_4->pointer_equality_needed |= VAR_5->pointer_equality_needed;
    }
  else
    FUNC_0 (VAR_3, VAR_4, VAR_5);
}
