
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int bfd_boolean ;
struct TYPE_3__ {scalar_t__ st_shndx; } ;
typedef TYPE_1__ Elf_Internal_Sym ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;

bfd_boolean
FUNC_0 (Elf_Internal_Sym *VAR_3)
{
  return (VAR_3->st_shndx == VAR_0
   || VAR_3->st_shndx == VAR_1
   || VAR_3->st_shndx == VAR_2);
}
