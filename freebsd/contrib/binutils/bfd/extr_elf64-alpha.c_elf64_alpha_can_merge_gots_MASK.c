
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_7__ ;
typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {scalar_t__ link; } ;
struct TYPE_10__ {TYPE_1__ i; } ;
struct TYPE_11__ {scalar_t__ type; TYPE_2__ u; } ;
struct TYPE_12__ {TYPE_3__ root; } ;
struct alpha_elf_link_hash_entry {struct alpha_elf_got_entry* got_entries; TYPE_4__ root; } ;
struct alpha_elf_got_entry {scalar_t__ use_count; scalar_t__ reloc_type; scalar_t__ addend; int * gotobj; struct alpha_elf_got_entry* next; } ;
typedef int bfd_boolean ;
typedef int bfd ;
struct TYPE_15__ {int total_got_size; int local_got_size; int * in_got_link_next; } ;
struct TYPE_13__ {int sh_info; } ;
struct TYPE_14__ {TYPE_5__ symtab_hdr; } ;
typedef TYPE_5__ Elf_Internal_Shdr ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_5__*) ;
 int VAR_2 ;
 struct alpha_elf_link_hash_entry** FUNC_1 (int *) ;
 TYPE_7__* FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (scalar_t__) ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 TYPE_6__* FUNC_4 (int *) ;

__attribute__((used)) static bfd_boolean
FUNC_5 (bfd *VAR_5, bfd *VAR_6)
{
  int VAR_7 = FUNC_2 (VAR_5)->total_got_size;
  bfd *VAR_8;


  if (VAR_7 + FUNC_2 (VAR_6)->total_got_size <= VAR_1)
    return VAR_2;


  if ((VAR_7 += FUNC_2 (VAR_6)->local_got_size) > VAR_1)
    return VAR_0;




  for (VAR_8 = VAR_6; VAR_8 ; VAR_8 = FUNC_2 (VAR_8)->in_got_link_next)
    {
      struct alpha_elf_link_hash_entry **VAR_9 = FUNC_1 (VAR_8);
      Elf_Internal_Shdr *VAR_10 = &FUNC_4 (VAR_8)->symtab_hdr;
      int VAR_11, VAR_12;

      VAR_12 = FUNC_0 (VAR_10) - VAR_10->sh_info;
      for (VAR_11 = 0; VAR_11 < VAR_12; ++VAR_11)
 {
   struct alpha_elf_got_entry *VAR_13, *VAR_14;
   struct alpha_elf_link_hash_entry *VAR_15;

   VAR_15 = VAR_9[VAR_11];
   while (VAR_15->root.root.type == VAR_3
          || VAR_15->root.root.type == VAR_4)
     VAR_15 = (struct alpha_elf_link_hash_entry *)VAR_15->root.root.u.i.link;

   for (VAR_14 = VAR_15->got_entries; VAR_14 ; VAR_14 = VAR_14->next)
     {
       if (VAR_14->use_count == 0)
         continue;
       if (VAR_14->gotobj != VAR_6)
         continue;

       for (VAR_13 = VAR_15->got_entries; VAR_13 ; VAR_13 = VAR_13->next)
         if (VAR_13->gotobj == VAR_5
      && VAR_13->reloc_type == VAR_14->reloc_type
      && VAR_13->addend == VAR_14->addend)
    goto global_found;

       VAR_7 += FUNC_3 (VAR_14->reloc_type);
       if (VAR_7 > VAR_1)
         return VAR_0;
     global_found:;
     }
 }
    }

  return VAR_2;
}
