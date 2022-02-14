
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int Obj_Entry ;
typedef int Elf_Addr ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int *,int *,int ,int) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;

void
FUNC_1(Obj_Entry *VAR_5)
{
 Elf_Addr **VAR_6;






 VAR_4 = VAR_2 + VAR_3 +
     VAR_0;

 VAR_6 = (Elf_Addr **) FUNC_0(VAR_5, ((void*)0), VAR_1, 16);

 asm volatile("msr	tpidr_el0, %0" : : "r"(VAR_6));
}
