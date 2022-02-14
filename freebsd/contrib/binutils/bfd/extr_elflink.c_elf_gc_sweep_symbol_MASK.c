
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


struct TYPE_10__ {TYPE_3__* section; } ;
struct TYPE_7__ {scalar_t__ link; } ;
struct TYPE_11__ {TYPE_4__ def; TYPE_1__ i; } ;
struct TYPE_12__ {scalar_t__ type; TYPE_5__ u; } ;
struct elf_link_hash_entry {TYPE_6__ root; } ;
struct elf_gc_sweep_symbol_info {int info; int (* hide_symbol ) (int ,struct elf_link_hash_entry*,int ) ;} ;
typedef int bfd_boolean ;
struct TYPE_9__ {TYPE_2__* owner; int gc_mark; } ;
struct TYPE_8__ {int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (int ,struct elf_link_hash_entry*,int ) ;

__attribute__((used)) static bfd_boolean
FUNC_1 (struct elf_link_hash_entry *VAR_5, void *VAR_6)
{
  if (VAR_5->root.type == VAR_4)
    VAR_5 = (struct elf_link_hash_entry *) VAR_5->root.u.i.link;

  if ((VAR_5->root.type == VAR_2
       || VAR_5->root.type == VAR_3)
      && !VAR_5->root.u.def.section->gc_mark
      && !(VAR_5->root.u.def.section->owner->flags & VAR_0))
    {
      struct elf_gc_sweep_symbol_info *VAR_7 = VAR_6;
      (*VAR_7->hide_symbol) (VAR_7->info, VAR_5, VAR_1);
    }

  return VAR_1;
}
