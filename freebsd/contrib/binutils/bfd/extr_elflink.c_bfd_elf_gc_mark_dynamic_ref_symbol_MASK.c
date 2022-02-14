
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {TYPE_2__* section; } ;
struct TYPE_6__ {scalar_t__ link; } ;
struct TYPE_9__ {TYPE_3__ def; TYPE_1__ i; } ;
struct TYPE_10__ {scalar_t__ type; TYPE_4__ u; } ;
struct elf_link_hash_entry {TYPE_5__ root; int other; scalar_t__ def_regular; scalar_t__ ref_dynamic; } ;
struct bfd_link_info {int executable; } ;
typedef int bfd_boolean ;
struct TYPE_7__ {int flags; } ;


 scalar_t__ FUNC_0 (int ) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;

bfd_boolean
FUNC_1 (struct elf_link_hash_entry *VAR_7, void *VAR_8)
{
  struct bfd_link_info *VAR_9 = (struct bfd_link_info *) VAR_8;

  if (VAR_7->root.type == VAR_6)
    VAR_7 = (struct elf_link_hash_entry *) VAR_7->root.u.i.link;

  if ((VAR_7->root.type == VAR_4
       || VAR_7->root.type == VAR_5)
      && (VAR_7->ref_dynamic
   || (!VAR_9->executable
       && VAR_7->def_regular
       && FUNC_0 (VAR_7->other) != VAR_2
       && FUNC_0 (VAR_7->other) != VAR_1)))
    VAR_7->root.u.def.section->flags |= VAR_0;

  return VAR_3;
}
