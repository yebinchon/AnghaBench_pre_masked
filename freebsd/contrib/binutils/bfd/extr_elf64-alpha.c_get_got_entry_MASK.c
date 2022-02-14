
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct alpha_elf_link_hash_entry {struct alpha_elf_got_entry* got_entries; } ;
struct alpha_elf_got_entry {unsigned long reloc_type; scalar_t__ addend; int got_offset; int plt_offset; int use_count; struct alpha_elf_got_entry* next; scalar_t__ reloc_xlated; scalar_t__ reloc_done; int * gotobj; } ;
typedef scalar_t__ bfd_vma ;
typedef int bfd_size_type ;
typedef int bfd ;
struct TYPE_6__ {int total_got_size; int local_got_size; struct alpha_elf_got_entry** local_got_entries; } ;
struct TYPE_4__ {int sh_info; } ;
struct TYPE_5__ {TYPE_1__ symtab_hdr; } ;
typedef TYPE_1__ Elf_Internal_Shdr ;


 TYPE_3__* FUNC_0 (int *) ;
 int FUNC_1 (unsigned long) ;
 scalar_t__ FUNC_2 (int *,int) ;
 scalar_t__ FUNC_3 (int *,int) ;
 TYPE_2__* FUNC_4 (int *) ;

__attribute__((used)) static struct alpha_elf_got_entry *
FUNC_5 (bfd *VAR_0, struct alpha_elf_link_hash_entry *VAR_1,
        unsigned long VAR_2, unsigned long VAR_3,
        bfd_vma VAR_4)
{
  struct alpha_elf_got_entry *VAR_5;
  struct alpha_elf_got_entry **VAR_6;

  if (VAR_1)
    VAR_6 = &VAR_1->got_entries;
  else
    {


      struct alpha_elf_got_entry **VAR_7;

      VAR_7 = FUNC_0(VAR_0)->local_got_entries;
      if (!VAR_7)
 {
   bfd_size_type VAR_8;
   Elf_Internal_Shdr *VAR_9;

   VAR_9 = &FUNC_4(VAR_0)->symtab_hdr;
   VAR_8 = VAR_9->sh_info;
   VAR_8 *= sizeof (struct alpha_elf_got_entry *);

   VAR_7
     = (struct alpha_elf_got_entry **) FUNC_3 (VAR_0, VAR_8);
   if (!VAR_7)
     return ((void*)0);

   FUNC_0 (VAR_0)->local_got_entries = VAR_7;
 }

      VAR_6 = &VAR_7[VAR_3];
    }

  for (VAR_5 = *VAR_6; VAR_5 ; VAR_5 = VAR_5->next)
    if (VAR_5->gotobj == VAR_0
 && VAR_5->reloc_type == VAR_2
 && VAR_5->addend == VAR_4)
      break;

  if (!VAR_5)
    {
      int VAR_10;
      bfd_size_type VAR_11;

      VAR_11 = sizeof (struct alpha_elf_got_entry);
      VAR_5 = (struct alpha_elf_got_entry *) FUNC_2 (VAR_0, VAR_11);
      if (!VAR_5)
 return ((void*)0);

      VAR_5->gotobj = VAR_0;
      VAR_5->addend = VAR_4;
      VAR_5->got_offset = -1;
      VAR_5->plt_offset = -1;
      VAR_5->use_count = 1;
      VAR_5->reloc_type = VAR_2;
      VAR_5->reloc_done = 0;
      VAR_5->reloc_xlated = 0;

      VAR_5->next = *VAR_6;
      *VAR_6 = VAR_5;

      VAR_10 = FUNC_1 (VAR_2);
      FUNC_0 (VAR_0)->total_got_size += VAR_10;
      if (!VAR_1)
 FUNC_0(VAR_0)->local_got_size += VAR_10;
    }
  else
    VAR_5->use_count += 1;

  return VAR_5;
}
