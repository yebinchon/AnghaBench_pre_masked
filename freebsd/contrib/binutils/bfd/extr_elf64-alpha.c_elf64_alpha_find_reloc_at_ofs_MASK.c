
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ bfd_vma ;
struct TYPE_5__ {scalar_t__ r_offset; int r_info; } ;
typedef TYPE_1__ Elf_Internal_Rela ;


 unsigned int FUNC_0 (int ) ;

__attribute__((used)) static Elf_Internal_Rela *
FUNC_1 (Elf_Internal_Rela *VAR_0,
          Elf_Internal_Rela *VAR_1,
          bfd_vma VAR_2, int VAR_3)
{
  while (VAR_0 < VAR_1)
    {
      if (VAR_0->r_offset == VAR_2
   && FUNC_0 (VAR_0->r_info) == (unsigned int) VAR_3)
 return VAR_0;
      ++VAR_0;
    }
  return ((void*)0);
}
