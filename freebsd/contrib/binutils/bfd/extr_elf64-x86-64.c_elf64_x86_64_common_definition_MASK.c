
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

__attribute__((used)) static bfd_boolean
FUNC_0 (Elf_Internal_Sym *VAR_2)
{
  return (VAR_2->st_shndx == VAR_0
   || VAR_2->st_shndx == VAR_1);
}
