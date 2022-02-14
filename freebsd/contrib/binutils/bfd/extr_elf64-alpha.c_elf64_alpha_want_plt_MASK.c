
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ type; } ;
struct TYPE_4__ {scalar_t__ type; TYPE_1__ root; } ;
struct alpha_elf_link_hash_entry {int flags; TYPE_2__ root; } ;
typedef int bfd_boolean ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;

__attribute__((used)) static bfd_boolean
FUNC_0 (struct alpha_elf_link_hash_entry *VAR_4)
{
  return ((VAR_4->root.type == VAR_1
   || VAR_4->root.root.type == VAR_3
   || VAR_4->root.root.type == VAR_2)
   && (VAR_4->flags & VAR_0) != 0
   && (VAR_4->flags & ~VAR_0) == 0);
}
