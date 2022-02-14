
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int reloc_count; } ;
typedef TYPE_1__ asection ;
struct TYPE_6__ {int r_info; } ;
typedef TYPE_2__ Elf_Internal_Rela ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static unsigned int
FUNC_1 (asection *VAR_2, Elf_Internal_Rela *VAR_3)
{
  unsigned int VAR_4 = 0;
  Elf_Internal_Rela *VAR_5 = VAR_3 + VAR_2->reloc_count;

  for (; VAR_3 < VAR_5; VAR_3++)
    {
      int VAR_6 = FUNC_0 (VAR_3->r_info);
      if (VAR_6 == VAR_0 || VAR_6 == VAR_1)
 ++VAR_4;
    }

  return VAR_4;
}
