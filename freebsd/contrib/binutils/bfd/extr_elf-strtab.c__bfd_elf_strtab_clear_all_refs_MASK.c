
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct elf_strtab_hash {size_t size; TYPE_1__** array; } ;
typedef size_t bfd_size_type ;
struct TYPE_2__ {scalar_t__ refcount; } ;



void
FUNC_0 (struct elf_strtab_hash *VAR_0)
{
  bfd_size_type VAR_1;

  for (VAR_1 = 1; VAR_1 < VAR_0->size; ++VAR_1)
    VAR_0->array[VAR_1]->refcount = 0;
}
