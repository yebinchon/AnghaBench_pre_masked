
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ refcount; } ;
struct TYPE_3__ {scalar_t__ type; } ;
struct elf_link_hash_entry {TYPE_2__ got; TYPE_1__ root; } ;
struct bfd_link_info {int dummy; } ;
struct _bfd_sparc_elf_link_hash_entry {int tls_type; struct _bfd_sparc_elf_dyn_relocs* dyn_relocs; } ;
struct _bfd_sparc_elf_dyn_relocs {scalar_t__ sec; struct _bfd_sparc_elf_dyn_relocs* next; scalar_t__ count; scalar_t__ pc_count; } ;


 int VAR_0 ;
 int FUNC_0 (struct bfd_link_info*,struct elf_link_hash_entry*,struct elf_link_hash_entry*) ;
 scalar_t__ VAR_1 ;

void
FUNC_1 (struct bfd_link_info *VAR_2,
         struct elf_link_hash_entry *VAR_3,
         struct elf_link_hash_entry *VAR_4)
{
  struct _bfd_sparc_elf_link_hash_entry *VAR_5, *VAR_6;

  VAR_5 = (struct _bfd_sparc_elf_link_hash_entry *) VAR_3;
  VAR_6 = (struct _bfd_sparc_elf_link_hash_entry *) VAR_4;

  if (VAR_6->dyn_relocs != ((void*)0))
    {
      if (VAR_5->dyn_relocs != ((void*)0))
 {
   struct _bfd_sparc_elf_dyn_relocs **VAR_7;
   struct _bfd_sparc_elf_dyn_relocs *VAR_8;



   for (VAR_7 = &VAR_6->dyn_relocs; (VAR_8 = *VAR_7) != ((void*)0); )
     {
       struct _bfd_sparc_elf_dyn_relocs *VAR_9;

       for (VAR_9 = VAR_5->dyn_relocs; VAR_9 != ((void*)0); VAR_9 = VAR_9->next)
  if (VAR_9->sec == VAR_8->sec)
    {
      VAR_9->pc_count += VAR_8->pc_count;
      VAR_9->count += VAR_8->count;
      *VAR_7 = VAR_8->next;
      break;
    }
       if (VAR_9 == ((void*)0))
  VAR_7 = &VAR_8->next;
     }
   *VAR_7 = VAR_5->dyn_relocs;
 }

      VAR_5->dyn_relocs = VAR_6->dyn_relocs;
      VAR_6->dyn_relocs = ((void*)0);
    }

  if (VAR_4->root.type == VAR_1
      && VAR_3->got.refcount <= 0)
    {
      VAR_5->tls_type = VAR_6->tls_type;
      VAR_6->tls_type = VAR_0;
    }
  FUNC_0 (VAR_2, VAR_3, VAR_4);
}
