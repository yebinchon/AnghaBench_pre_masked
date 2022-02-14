
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ Elf_Addr ;


 scalar_t__ FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 void* FUNC_1 (scalar_t__**,int,size_t) ;

void *
FUNC_2(Elf_Addr **VAR_1, int VAR_2, size_t VAR_3)
{
 Elf_Addr *VAR_4;

 VAR_4 = *VAR_1;

 if (FUNC_0(VAR_4[0] == VAR_0 &&
     VAR_4[VAR_2 + 1] != 0))
  return ((void *)(VAR_4[VAR_2 + 1] + VAR_3));
 return (FUNC_1(VAR_1, VAR_2, VAR_3));
}
