
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int string; } ;
struct TYPE_6__ {scalar_t__ type; TYPE_1__ root; } ;
struct elf_link_hash_entry {int dynamic; scalar_t__ type; TYPE_2__ root; } ;
struct bfd_link_info {scalar_t__ dynamic_data; scalar_t__ relocatable; struct bfd_elf_dynamic_list* dynamic_list; } ;
struct bfd_elf_dynamic_list {int head; scalar_t__ (* match ) (int *,int *,int ) ;} ;
struct TYPE_7__ {int st_info; } ;
typedef TYPE_3__ Elf_Internal_Sym ;


 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_1 (int *,int *,int ) ;

void
FUNC_2 (struct bfd_link_info *VAR_2,
      struct elf_link_hash_entry *VAR_3,
      Elf_Internal_Sym *VAR_4)
{
  struct bfd_elf_dynamic_list *VAR_5 = VAR_2->dynamic_list;


  if(VAR_3->dynamic || VAR_2->relocatable)
    return;

  if ((VAR_2->dynamic_data
       && (VAR_3->type == VAR_0
    || (VAR_4 != ((void*)0)
        && FUNC_0 (VAR_4->st_info) == VAR_0)))
      || (VAR_5 != ((void*)0)
   && VAR_3->root.type == VAR_1
   && (*VAR_5->match) (&VAR_5->head, ((void*)0), VAR_3->root.root.string)))
    VAR_3->dynamic = 1;
}
