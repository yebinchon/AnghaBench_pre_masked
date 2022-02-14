
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ vm_offset_t ;
typedef scalar_t__ Elf_Size ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;

int
FUNC_0(vm_offset_t VAR_3, vm_offset_t VAR_4)
{
 Elf_Size VAR_5;

 if (VAR_4 > VAR_3 && VAR_3 != 0) {
  VAR_1 = VAR_3;
  VAR_2 = *(Elf_Size*)VAR_1;
  VAR_1 += sizeof(Elf_Size);
  VAR_0 = VAR_1 + VAR_2;
  VAR_5 = *(Elf_Size*)VAR_0;
  VAR_0 += sizeof(Elf_Size);
  if (VAR_0 + VAR_5 > VAR_4) {

   VAR_1 = VAR_2 = VAR_0 = 0;
  }
 }

 if (VAR_1 == 0 || VAR_2 == 0 || VAR_0 == 0)
  return (-1);

 return (0);
}
