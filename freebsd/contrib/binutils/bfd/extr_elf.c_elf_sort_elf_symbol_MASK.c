
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int st_shndx; } ;
typedef TYPE_1__ Elf_Internal_Sym ;



__attribute__((used)) static int
FUNC_0 (const void *VAR_0, const void *VAR_1)
{
  const Elf_Internal_Sym *VAR_2 = *(const Elf_Internal_Sym **) VAR_0;
  const Elf_Internal_Sym *VAR_3 = *(const Elf_Internal_Sym **) VAR_1;

  return VAR_2->st_shndx - VAR_3->st_shndx;
}
