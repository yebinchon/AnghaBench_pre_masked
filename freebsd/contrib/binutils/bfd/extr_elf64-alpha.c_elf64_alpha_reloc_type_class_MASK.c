
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef enum elf_reloc_type_class { ____Placeholder_elf_reloc_type_class } elf_reloc_type_class ;
struct TYPE_3__ {int r_info; } ;
typedef TYPE_1__ Elf_Internal_Rela ;


 scalar_t__ FUNC_0 (int ) ;



 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static enum elf_reloc_type_class
FUNC_1 (const Elf_Internal_Rela *VAR_4)
{
  switch ((int) FUNC_0 (VAR_4->r_info))
    {
    case 128:
      return VAR_3;
    case 129:
      return VAR_2;
    case 130:
      return VAR_0;
    default:
      return VAR_1;
    }
}
