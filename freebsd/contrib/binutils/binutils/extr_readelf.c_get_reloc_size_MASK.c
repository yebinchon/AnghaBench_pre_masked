
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int e_machine; } ;
struct TYPE_4__ {int r_info; } ;
typedef TYPE_1__ Elf_Internal_Rela ;


 int FUNC_0 (int ) ;





 TYPE_3__ VAR_0 ;

__attribute__((used)) static unsigned int
FUNC_1 (Elf_Internal_Rela * VAR_1)
{
  switch (VAR_0.e_machine)
    {
    case 132:
    case 131:
    case 130:
    case 129:
      switch (FUNC_0 (VAR_1->r_info))
 {


 case 128:
   return 2;
 default:
   return 4;
 }
    default:





      return 4;
    }
}
