
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct elf_strtab_hash {scalar_t__ sec_size; size_t size; TYPE_1__** array; } ;
typedef size_t bfd_size_type ;
struct TYPE_2__ {scalar_t__ refcount; } ;


 int FUNC_0 (int) ;

void
FUNC_1 (struct elf_strtab_hash *VAR_0, bfd_size_type VAR_1)
{
  if (VAR_1 == 0 || VAR_1 == (bfd_size_type) -1)
    return;
  FUNC_0 (VAR_0->sec_size == 0);
  FUNC_0 (VAR_1 < VAR_0->size);
  FUNC_0 (VAR_0->array[VAR_1]->refcount > 0);
  --VAR_0->array[VAR_1]->refcount;
}
