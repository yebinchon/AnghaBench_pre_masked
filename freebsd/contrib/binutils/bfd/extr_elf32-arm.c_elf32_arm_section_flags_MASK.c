
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int flagword ;
typedef int bfd_boolean ;
struct TYPE_3__ {scalar_t__ sh_type; } ;
typedef TYPE_1__ Elf_Internal_Shdr ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static bfd_boolean
FUNC_0 (flagword *VAR_4, const Elf_Internal_Shdr *VAR_5)
{
  if (VAR_5->sh_type == VAR_2)
    *VAR_4 |= VAR_1 | VAR_0;

  return VAR_3;
}
