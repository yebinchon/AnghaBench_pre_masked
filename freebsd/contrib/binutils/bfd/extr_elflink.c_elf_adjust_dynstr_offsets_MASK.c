
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct elf_strtab_hash {int dummy; } ;
struct TYPE_4__ {scalar_t__ link; } ;
struct TYPE_5__ {TYPE_1__ i; } ;
struct TYPE_6__ {scalar_t__ type; TYPE_2__ u; } ;
struct elf_link_hash_entry {int dynindx; int dynstr_index; TYPE_3__ root; } ;
typedef int bfd_boolean ;


 int VAR_0 ;
 int FUNC_0 (struct elf_strtab_hash*,int ) ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static bfd_boolean
FUNC_1 (struct elf_link_hash_entry *VAR_2, void *VAR_3)
{
  struct elf_strtab_hash *VAR_4 = VAR_3;

  if (VAR_2->root.type == VAR_1)
    VAR_2 = (struct elf_link_hash_entry *) VAR_2->root.u.i.link;

  if (VAR_2->dynindx != -1)
    VAR_2->dynstr_index = FUNC_0 (VAR_4, VAR_2->dynstr_index);
  return VAR_0;
}
