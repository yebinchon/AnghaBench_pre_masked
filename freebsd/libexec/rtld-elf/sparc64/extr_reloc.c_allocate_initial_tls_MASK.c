
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int Obj_Entry ;
typedef int Elf_Addr ;


 scalar_t__ VAR_0 ;
 int * FUNC_0 (int *,int *,int,int) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;

void
FUNC_1(Obj_Entry *VAR_3)
{
 Elf_Addr* VAR_4;





 VAR_2 = VAR_1 + VAR_0;
 VAR_4 = FUNC_0(VAR_3, ((void*)0), 3 * sizeof(Elf_Addr),
      sizeof(Elf_Addr));
 __asm __volatile("mov %0, %%g7" : : "r" (VAR_4));
}
