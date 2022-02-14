
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int Obj_Entry ;
typedef int Elf_Sym ;
typedef scalar_t__ Elf_Addr ;


 scalar_t__ FUNC_0 (void*) ;
 scalar_t__ FUNC_1 (int const*,int const*) ;

void *
FUNC_2(const Obj_Entry *VAR_0, const Elf_Sym *VAR_1)
{
 void *VAR_2;
 Elf_Addr VAR_3;

 VAR_2 = (void *)FUNC_1(VAR_1, VAR_0);
 VAR_3 = FUNC_0(VAR_2);
 return ((void *)VAR_3);
}
