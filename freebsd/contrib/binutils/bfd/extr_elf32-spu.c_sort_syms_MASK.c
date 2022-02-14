
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ bfd_signed_vma ;
struct TYPE_5__ {int index; } ;
typedef TYPE_1__ asection ;
struct TYPE_6__ {scalar_t__ st_value; scalar_t__ st_size; } ;
typedef TYPE_2__ Elf_Internal_Sym ;


 TYPE_1__** VAR_0 ;
 TYPE_2__* const VAR_1 ;

__attribute__((used)) static int
FUNC_0 (const void *VAR_2, const void *VAR_3)
{
  Elf_Internal_Sym *const *VAR_4 = VAR_2;
  Elf_Internal_Sym *const *VAR_5 = VAR_3;
  asection *VAR_6,*VAR_7;
  bfd_signed_vma VAR_8;

  VAR_6 = VAR_0[*VAR_4 - VAR_1];
  VAR_7 = VAR_0[*VAR_5 - VAR_1];

  if (VAR_6 != VAR_7)
    return VAR_6->index - VAR_7->index;

  VAR_8 = (*VAR_4)->st_value - (*VAR_5)->st_value;
  if (VAR_8 != 0)
    return VAR_8 < 0 ? -1 : 1;

  VAR_8 = (*VAR_5)->st_size - (*VAR_4)->st_size;
  if (VAR_8 != 0)
    return VAR_8 < 0 ? -1 : 1;

  return *VAR_4 < *VAR_5 ? -1 : 1;
}
