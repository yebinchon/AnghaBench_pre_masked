
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int bfd_boolean ;
typedef int bfd ;
struct TYPE_4__ {int e_machine; } ;
struct TYPE_3__ {int elf_machine_code; int elf_machine_alt1; int elf_machine_alt2; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int *) ;
 scalar_t__ VAR_2 ;
 TYPE_2__* FUNC_1 (int *) ;
 TYPE_1__* FUNC_2 (int *) ;

bfd_boolean
FUNC_3 (bfd *VAR_3, int VAR_4)
{
  if (FUNC_0 (VAR_3) == VAR_2)
    {
      int VAR_5;

      switch (VAR_4)
 {
 case 0:
   VAR_5 = FUNC_2 (VAR_3)->elf_machine_code;
   break;

 case 1:
   VAR_5 = FUNC_2 (VAR_3)->elf_machine_alt1;
   if (VAR_5 == 0)
     return VAR_0;
   break;

 case 2:
   VAR_5 = FUNC_2 (VAR_3)->elf_machine_alt2;
   if (VAR_5 == 0)
     return VAR_0;
   break;

 default:
   return VAR_0;
 }

      FUNC_1 (VAR_3)->e_machine = VAR_5;

      return VAR_1;
    }

  return VAR_0;
}
