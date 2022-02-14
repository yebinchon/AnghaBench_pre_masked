
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ vma; } ;
typedef TYPE_1__ reloc_data_type ;
typedef scalar_t__ bfd_vma ;



__attribute__((used)) static int
FUNC_0 (const void *VAR_0, const void *VAR_1)
{
  bfd_vma VAR_2 = ((const reloc_data_type *) VAR_0)->vma;
  bfd_vma VAR_3 = ((const reloc_data_type *) VAR_1)->vma;

  return (VAR_2 > VAR_3) ? 1 : ((VAR_2 < VAR_3) ? -1 : 0);
}
