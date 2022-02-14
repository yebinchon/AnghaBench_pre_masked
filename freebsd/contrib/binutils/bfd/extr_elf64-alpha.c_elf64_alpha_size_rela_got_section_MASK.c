
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_7__ ;
typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct bfd_link_info {int shared; } ;
struct alpha_elf_got_entry {scalar_t__ use_count; int reloc_type; struct alpha_elf_got_entry* next; } ;
typedef int bfd ;
struct TYPE_10__ {int size; } ;
typedef TYPE_2__ asection ;
struct TYPE_14__ {int * got_list; } ;
struct TYPE_13__ {struct alpha_elf_got_entry** local_got_entries; int * in_got_link_next; int * got_link_next; } ;
struct TYPE_12__ {int * dynobj; } ;
struct TYPE_9__ {int sh_info; } ;
struct TYPE_11__ {TYPE_1__ symtab_hdr; } ;
typedef int Elf64_External_Rela ;


 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int ,int ,int ) ;
 TYPE_7__* FUNC_2 (struct bfd_link_info*) ;
 int FUNC_3 (TYPE_7__*,int ,struct bfd_link_info*) ;
 TYPE_6__* FUNC_4 (int *) ;
 TYPE_2__* FUNC_5 (int *,char*) ;
 int VAR_0 ;
 TYPE_4__* FUNC_6 (struct bfd_link_info*) ;
 TYPE_3__* FUNC_7 (int *) ;

__attribute__((used)) static void
FUNC_8 (struct bfd_link_info *VAR_1)
{
  unsigned long VAR_2;
  bfd *VAR_3, *VAR_4;
  asection *VAR_5;




  VAR_2 = 0;
  for (VAR_3 = FUNC_2(VAR_1)->got_list;
       VAR_3 ; VAR_3 = FUNC_4(VAR_3)->got_link_next)
    {
      bfd *VAR_6;

      for (VAR_6 = VAR_3; VAR_6 ; VAR_6 = FUNC_4(VAR_6)->in_got_link_next)
 {
   struct alpha_elf_got_entry **VAR_7, *VAR_8;
   int VAR_9, VAR_10;

   VAR_7 = FUNC_4(VAR_6)->local_got_entries;
   if (!VAR_7)
     continue;

   for (VAR_9 = 0, VAR_10 = FUNC_7(VAR_6)->symtab_hdr.sh_info; VAR_9 < VAR_10; ++VAR_9)
     for (VAR_8 = VAR_7[VAR_9];
   VAR_8 ; VAR_8 = VAR_8->next)
       if (VAR_8->use_count > 0)
  VAR_2 += (FUNC_1
       (VAR_8->reloc_type, 0, VAR_1->shared));
 }
    }

  VAR_4 = FUNC_6(VAR_1)->dynobj;
  VAR_5 = FUNC_5 (VAR_4, ".rela.got");
  if (!VAR_5)
    {
      FUNC_0 (VAR_2 == 0);
      return;
    }
  VAR_5->size = sizeof (Elf64_External_Rela) * VAR_2;


  FUNC_3 (FUNC_2 (VAR_1),
    VAR_0, VAR_1);
}
