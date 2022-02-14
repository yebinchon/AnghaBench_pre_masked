
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int linker_file_t ;
typedef TYPE_1__* elf_file_t ;
struct TYPE_2__ {scalar_t__ nchains; int const* symtab; } ;
typedef int Elf_Sym ;
typedef scalar_t__ Elf_Size ;



const Elf_Sym *
FUNC_0(linker_file_t VAR_0, Elf_Size VAR_1)
{
 elf_file_t VAR_2 = (elf_file_t)VAR_0;

 if (VAR_1 >= VAR_2->nchains)
  return (((void*)0));
 return (VAR_2->symtab + VAR_1);
}
