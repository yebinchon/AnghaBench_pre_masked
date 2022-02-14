
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {size_t index; } ;
struct elf_strtab_hash_entry {scalar_t__ refcount; TYPE_1__ u; } ;
struct elf_strtab_hash {size_t size; int sec_size; struct elf_strtab_hash_entry** array; } ;
typedef size_t bfd_size_type ;


 int FUNC_0 (int) ;

bfd_size_type
FUNC_1 (struct elf_strtab_hash *VAR_0, bfd_size_type VAR_1)
{
  struct elf_strtab_hash_entry *VAR_2;

  if (VAR_1 == 0)
    return 0;
  FUNC_0 (VAR_1 < VAR_0->size);
  FUNC_0 (VAR_0->sec_size);
  VAR_2 = VAR_0->array[VAR_1];
  FUNC_0 (VAR_2->refcount > 0);
  VAR_2->refcount--;
  return VAR_0->array[VAR_1]->u.index;
}
