
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
struct alpha_elf_got_entry {scalar_t__ use_count; scalar_t__ reloc_type; scalar_t__ addend; struct alpha_elf_got_entry* next; int * gotobj; int flags; } ;
typedef int bfd ;
struct TYPE_15__ {int total_got_size; int local_got_size; int * in_got_link_next; int * gotobj; struct alpha_elf_got_entry** local_got_entries; } ;
struct TYPE_13__ {int sh_info; } ;
struct TYPE_14__ {TYPE_5__ symtab_hdr; } ;
typedef TYPE_5__ Elf_Internal_Shdr ;


 int FUNC_0 (TYPE_5__*) ;
 struct alpha_elf_link_hash_entry** FUNC_1 (int *) ;
 TYPE_7__* FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (scalar_t__) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 TYPE_6__* FUNC_4 (int *) ;
 int FUNC_5 (struct alpha_elf_got_entry*,int,int) ;

__attribute__((used)) static void
FUNC_6 (bfd *VAR_2, bfd *VAR_3)
{
  int VAR_4 = FUNC_2 (VAR_2)->total_got_size;
  bfd *VAR_5;


  {
    int VAR_6 = FUNC_2 (VAR_3)->local_got_size;
    VAR_4 += VAR_6;
    FUNC_2 (VAR_2)->local_got_size += VAR_6;
  }

  for (VAR_5 = VAR_3; VAR_5 ; VAR_5 = FUNC_2 (VAR_5)->in_got_link_next)
    {
      struct alpha_elf_got_entry **VAR_7;
      struct alpha_elf_link_hash_entry **VAR_8;
      Elf_Internal_Shdr *VAR_9;
      int VAR_10, VAR_11;


      VAR_7 = FUNC_2 (VAR_5)->local_got_entries;
      if (VAR_7)
        {
   VAR_11 = FUNC_4 (VAR_5)->symtab_hdr.sh_info;
   for (VAR_10 = 0; VAR_10 < VAR_11; ++VAR_10)
     {
       struct alpha_elf_got_entry *VAR_12;
       for (VAR_12 = VAR_7[VAR_10]; VAR_12; VAR_12 = VAR_12->next)
         VAR_12->gotobj = VAR_2;
     }
        }


      VAR_8 = FUNC_1 (VAR_5);
      VAR_9 = &FUNC_4 (VAR_5)->symtab_hdr;

      VAR_11 = FUNC_0 (VAR_9) - VAR_9->sh_info;
      for (VAR_10 = 0; VAR_10 < VAR_11; ++VAR_10)
        {
   struct alpha_elf_got_entry *VAR_13, *VAR_14, **VAR_15, **VAR_16;
   struct alpha_elf_link_hash_entry *VAR_17;

   VAR_17 = VAR_8[VAR_10];
   while (VAR_17->root.root.type == VAR_0
          || VAR_17->root.root.type == VAR_1)
     VAR_17 = (struct alpha_elf_link_hash_entry *)VAR_17->root.root.u.i.link;

   VAR_15 = VAR_16 = &VAR_17->got_entries;
   while ((VAR_14 = *VAR_15) != ((void*)0))
     {
       if (VAR_14->use_count == 0)
         {
    *VAR_15 = VAR_14->next;
    FUNC_5 (VAR_14, 0xa5, sizeof (*VAR_14));
    goto kill;
         }
       if (VAR_14->gotobj != VAR_3)
         goto next;

       for (VAR_13 = *VAR_16; VAR_13 ; VAR_13 = VAR_13->next)
         if (VAR_13->gotobj == VAR_2
      && VAR_13->reloc_type == VAR_14->reloc_type
      && VAR_13->addend == VAR_14->addend)
    {
      VAR_13->flags |= VAR_14->flags;
      VAR_13->use_count += VAR_14->use_count;
      *VAR_15 = VAR_14->next;
      FUNC_5 (VAR_14, 0xa5, sizeof (*VAR_14));
      goto kill;
    }
       VAR_14->gotobj = VAR_2;
       VAR_4 += FUNC_3 (VAR_14->reloc_type);

     next:;
       VAR_15 = &VAR_14->next;
     kill:;
     }
        }

      FUNC_2 (VAR_5)->gotobj = VAR_2;
    }
  FUNC_2 (VAR_2)->total_got_size = VAR_4;


  {
    bfd *VAR_18;

    VAR_5 = VAR_2;
    while ((VAR_18 = FUNC_2 (VAR_5)->in_got_link_next) != ((void*)0))
      VAR_5 = VAR_18;

    FUNC_2 (VAR_5)->in_got_link_next = VAR_3;
  }
}
