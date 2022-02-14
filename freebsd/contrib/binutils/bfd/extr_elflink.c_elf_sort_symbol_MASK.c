
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ value; TYPE_1__* section; } ;
struct TYPE_7__ {TYPE_2__ def; } ;
struct TYPE_8__ {TYPE_3__ u; } ;
struct elf_link_hash_entry {TYPE_4__ root; } ;
typedef scalar_t__ bfd_signed_vma ;
struct TYPE_5__ {long id; } ;



__attribute__((used)) static int
FUNC_0 (const void *VAR_0, const void *VAR_1)
{
  const struct elf_link_hash_entry *VAR_2;
  const struct elf_link_hash_entry *VAR_3;
  bfd_signed_vma VAR_4;

  VAR_2 = *(const struct elf_link_hash_entry **) VAR_0;
  VAR_3 = *(const struct elf_link_hash_entry **) VAR_1;
  VAR_4 = VAR_2->root.u.def.value - VAR_3->root.u.def.value;
  if (VAR_4 != 0)
    return VAR_4 > 0 ? 1 : -1;
  else
    {
      long VAR_5 = VAR_2->root.u.def.section->id - VAR_3->root.u.def.section->id;
      if (VAR_5 != 0)
 return VAR_5 > 0 ? 1 : -1;
    }
  return 0;
}
