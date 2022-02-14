
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct ppc_elf_dyn_relocs {TYPE_3__* sec; struct ppc_elf_dyn_relocs* next; } ;
struct TYPE_7__ {scalar_t__ link; } ;
struct TYPE_8__ {TYPE_1__ i; } ;
struct TYPE_10__ {scalar_t__ type; TYPE_2__ u; } ;
struct elf_link_hash_entry {TYPE_4__ root; } ;
struct bfd_link_info {int flags; } ;
typedef int bfd_boolean ;
struct TYPE_11__ {int flags; } ;
typedef TYPE_5__ asection ;
struct TYPE_12__ {struct ppc_elf_dyn_relocs* dyn_relocs; } ;
struct TYPE_9__ {TYPE_5__* output_section; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 TYPE_6__* FUNC_0 (struct elf_link_hash_entry*) ;

__attribute__((used)) static bfd_boolean
FUNC_1 (struct elf_link_hash_entry *VAR_7, void *VAR_8)
{
  struct ppc_elf_dyn_relocs *VAR_9;

  if (VAR_7->root.type == VAR_5)
    return VAR_4;

  if (VAR_7->root.type == VAR_6)
    VAR_7 = (struct elf_link_hash_entry *) VAR_7->root.u.i.link;

  for (VAR_9 = FUNC_0 (VAR_7)->dyn_relocs; VAR_9 != ((void*)0); VAR_9 = VAR_9->next)
    {
      asection *VAR_10 = VAR_9->sec->output_section;

      if (VAR_10 != ((void*)0)
   && ((VAR_10->flags & (VAR_3 | VAR_2))
       == (VAR_3 | VAR_2)))
 {
   ((struct bfd_link_info *) VAR_8)->flags |= VAR_0;


   return VAR_1;
 }
    }
  return VAR_4;
}
