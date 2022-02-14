
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int Elf_Auxinfo ;
typedef int Elf_Addr ;


 int * VAR_0 ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static void
FUNC_0(void)
{
 Elf_Addr *VAR_2;

 VAR_2 = (Elf_Addr *)VAR_1;
 while (*VAR_2++ != 0)
  ;
 VAR_0 = (Elf_Auxinfo *)VAR_2;
}
