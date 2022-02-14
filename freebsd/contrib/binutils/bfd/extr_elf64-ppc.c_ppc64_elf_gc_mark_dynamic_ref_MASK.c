
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_7__ ;
typedef struct TYPE_15__ TYPE_6__ ;
typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_11__ {int value; TYPE_7__* section; } ;
struct TYPE_10__ {scalar_t__ link; } ;
struct TYPE_12__ {TYPE_2__ def; TYPE_1__ i; } ;
struct TYPE_13__ {scalar_t__ type; TYPE_3__ u; } ;
struct TYPE_14__ {TYPE_4__ root; int other; scalar_t__ def_regular; scalar_t__ ref_dynamic; } ;
struct ppc_link_hash_entry {TYPE_5__ elf; struct ppc_link_hash_entry* oh; scalar_t__ is_func_descriptor; } ;
struct elf_link_hash_entry {int dummy; } ;
struct bfd_link_info {int executable; } ;
typedef scalar_t__ bfd_vma ;
typedef int bfd_boolean ;
struct TYPE_15__ {int flags; } ;
typedef TYPE_6__ asection ;
struct TYPE_16__ {int flags; } ;


 scalar_t__ FUNC_0 (int ) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int * FUNC_1 (TYPE_7__*) ;
 scalar_t__ FUNC_2 (TYPE_7__*,int ,TYPE_6__**,int *) ;

__attribute__((used)) static bfd_boolean
FUNC_3 (struct elf_link_hash_entry *VAR_7, void *VAR_8)
{
  struct bfd_link_info *VAR_9 = (struct bfd_link_info *) VAR_8;
  struct ppc_link_hash_entry *VAR_10 = (struct ppc_link_hash_entry *) VAR_7;

  if (VAR_10->elf.root.type == VAR_6)
    VAR_10 = (struct ppc_link_hash_entry *) VAR_10->elf.root.u.i.link;


  if (VAR_10->oh != ((void*)0)
      && VAR_10->oh->is_func_descriptor
      && (VAR_10->oh->elf.root.type == VAR_4
   || VAR_10->oh->elf.root.type == VAR_5))
    VAR_10 = VAR_10->oh;

  if ((VAR_10->elf.root.type == VAR_4
       || VAR_10->elf.root.type == VAR_5)
      && (VAR_10->elf.ref_dynamic
   || (!VAR_9->executable
       && VAR_10->elf.def_regular
       && FUNC_0 (VAR_10->elf.other) != VAR_2
       && FUNC_0 (VAR_10->elf.other) != VAR_1)))
    {
      asection *VAR_11;

      VAR_10->elf.root.u.def.section->flags |= VAR_0;



      if (VAR_10->is_func_descriptor
   && (VAR_10->oh->elf.root.type == VAR_4
       || VAR_10->oh->elf.root.type == VAR_5))
 VAR_10->oh->elf.root.u.def.section->flags |= VAR_0;
      else if (FUNC_1 (VAR_10->elf.root.u.def.section) != ((void*)0)
        && FUNC_2 (VAR_10->elf.root.u.def.section,
       VAR_10->elf.root.u.def.value,
       &VAR_11, ((void*)0)) != (bfd_vma) -1)
 VAR_11->flags |= VAR_0;
    }

  return VAR_3;
}
