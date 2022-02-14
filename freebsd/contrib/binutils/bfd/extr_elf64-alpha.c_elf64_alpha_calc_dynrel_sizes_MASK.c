
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_8__ ;
typedef struct TYPE_15__ TYPE_7__ ;
typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct bfd_link_info {int flags; int shared; } ;
struct alpha_elf_reloc_entry {unsigned long count; scalar_t__ reltext; TYPE_7__* srel; int rtype; struct alpha_elf_reloc_entry* next; } ;
struct TYPE_12__ {TYPE_3__* section; } ;
struct TYPE_9__ {scalar_t__ link; } ;
struct TYPE_13__ {TYPE_4__ def; TYPE_1__ i; } ;
struct TYPE_14__ {scalar_t__ type; TYPE_5__ u; } ;
struct TYPE_16__ {int def_regular; TYPE_6__ root; int def_dynamic; scalar_t__ ref_regular; } ;
struct alpha_elf_link_hash_entry {struct alpha_elf_reloc_entry* reloc_entries; TYPE_8__ root; } ;
typedef int bfd_boolean ;
struct TYPE_15__ {unsigned long size; } ;
struct TYPE_11__ {TYPE_2__* owner; } ;
struct TYPE_10__ {int flags; } ;
typedef int Elf64_External_Rela ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned long FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (TYPE_8__*,struct bfd_link_info*) ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;

__attribute__((used)) static bfd_boolean
FUNC_2 (struct alpha_elf_link_hash_entry *VAR_7,
          struct bfd_link_info *VAR_8)
{
  bfd_boolean VAR_9;
  struct alpha_elf_reloc_entry *VAR_10;
  unsigned long VAR_11;

  if (VAR_7->root.root.type == VAR_6)
    VAR_7 = (struct alpha_elf_link_hash_entry *) VAR_7->root.root.u.i.link;
  if (!VAR_7->root.def_regular
      && VAR_7->root.ref_regular
      && !VAR_7->root.def_dynamic
      && (VAR_7->root.root.type == VAR_3
   || VAR_7->root.root.type == VAR_4)
      && !(VAR_7->root.root.u.def.section->owner->flags & VAR_1))
    VAR_7->root.def_regular = 1;




  VAR_9 = FUNC_1 (&VAR_7->root, VAR_8);




  if (VAR_7->root.root.type == VAR_5 && !VAR_9)
    return VAR_2;

  for (VAR_10 = VAR_7->reloc_entries; VAR_10; VAR_10 = VAR_10->next)
    {
      VAR_11 = FUNC_0 (VAR_10->rtype, VAR_9,
       VAR_8->shared);
      if (VAR_11)
 {
   VAR_10->srel->size +=
     VAR_11 * sizeof (Elf64_External_Rela) * VAR_10->count;
   if (VAR_10->reltext)
     VAR_8->flags |= VAR_0;
 }
    }

  return VAR_2;
}
