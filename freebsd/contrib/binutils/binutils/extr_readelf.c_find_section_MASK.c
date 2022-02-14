
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {unsigned int e_shnum; } ;
typedef int Elf_Internal_Shdr ;


 int FUNC_0 (int *) ;
 TYPE_1__ VAR_0 ;
 int * VAR_1 ;
 scalar_t__ FUNC_1 (int ,char const*) ;

__attribute__((used)) static Elf_Internal_Shdr *
FUNC_2 (const char *VAR_2)
{
  unsigned int VAR_3;

  for (VAR_3 = 0; VAR_3 < VAR_0.e_shnum; VAR_3++)
    if (FUNC_1 (FUNC_0 (VAR_1 + VAR_3), VAR_2))
      return VAR_1 + VAR_3;

  return ((void*)0);
}
