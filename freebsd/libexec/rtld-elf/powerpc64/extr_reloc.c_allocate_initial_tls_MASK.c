
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int Obj_Entry ;
typedef int Elf_Addr ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int *,int *,int,int) ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;

void
FUNC_1(Obj_Entry *VAR_6)
{
 Elf_Addr **VAR_7;







 VAR_5 = VAR_3 + VAR_4 + VAR_0;

 VAR_7 = (Elf_Addr **)((char *)FUNC_0(VAR_6, ((void*)0), VAR_1, 16)
     + VAR_2 + VAR_1);

 __asm __volatile("mr 13,%0" :: "r"(VAR_7));
}
