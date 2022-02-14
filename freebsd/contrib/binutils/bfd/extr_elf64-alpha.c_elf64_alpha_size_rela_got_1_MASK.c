
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_7__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct bfd_link_info {int shared; } ;
struct TYPE_8__ {scalar_t__ link; } ;
struct TYPE_9__ {TYPE_1__ i; } ;
struct TYPE_10__ {scalar_t__ type; TYPE_2__ u; } ;
struct TYPE_13__ {TYPE_3__ root; scalar_t__ needs_plt; } ;
struct alpha_elf_link_hash_entry {struct alpha_elf_got_entry* got_entries; TYPE_7__ root; } ;
struct alpha_elf_got_entry {scalar_t__ use_count; int reloc_type; struct alpha_elf_got_entry* next; } ;
typedef int bfd_boolean ;
typedef int bfd ;
struct TYPE_11__ {int size; } ;
typedef TYPE_4__ asection ;
struct TYPE_12__ {int * dynobj; } ;
typedef int Elf64_External_Rela ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (TYPE_7__*,struct bfd_link_info*) ;
 TYPE_4__* FUNC_3 (int *,char*) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 TYPE_5__* FUNC_4 (struct bfd_link_info*) ;

__attribute__((used)) static bfd_boolean
FUNC_5 (struct alpha_elf_link_hash_entry *VAR_3,
        struct bfd_link_info *VAR_4)
{
  bfd_boolean VAR_5;
  struct alpha_elf_got_entry *VAR_6;
  unsigned long VAR_7;

  if (VAR_3->root.root.type == VAR_2)
    VAR_3 = (struct alpha_elf_link_hash_entry *) VAR_3->root.root.u.i.link;



  if (VAR_3->root.needs_plt)
    return VAR_0;




  VAR_5 = FUNC_2 (&VAR_3->root, VAR_4);




  if (VAR_3->root.root.type == VAR_1 && !VAR_5)
    return VAR_0;

  VAR_7 = 0;
  for (VAR_6 = VAR_3->got_entries; VAR_6 ; VAR_6 = VAR_6->next)
    if (VAR_6->use_count > 0)
      VAR_7 += FUNC_1 (VAR_6->reloc_type,
        VAR_5, VAR_4->shared);

  if (VAR_7 > 0)
    {
      bfd *VAR_8 = FUNC_4(VAR_4)->dynobj;
      asection *VAR_9 = FUNC_3 (VAR_8, ".rela.got");
      FUNC_0 (VAR_9 != ((void*)0));
      VAR_9->size += sizeof (Elf64_External_Rela) * VAR_7;
    }

  return VAR_0;
}
