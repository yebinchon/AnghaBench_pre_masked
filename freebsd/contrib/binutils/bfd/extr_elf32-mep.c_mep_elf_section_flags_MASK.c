
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int flagword ;
typedef int bfd_boolean ;
struct TYPE_3__ {int sh_flags; } ;
typedef TYPE_1__ Elf_Internal_Shdr ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static bfd_boolean
FUNC_0 (flagword * VAR_3, const Elf_Internal_Shdr * VAR_4)
{
  if (VAR_4->sh_flags & VAR_1)
    * VAR_3 |= VAR_0;
  return VAR_2;
}
