
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint8_t ;
typedef scalar_t__ Elf_Sxword ;
typedef scalar_t__ Elf_Sword ;


 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (scalar_t__*,void*,size_t) ;

__attribute__((used)) static __inline Elf_Sxword
FUNC_2(void *VAR_0, size_t VAR_1)
{
 Elf_Sxword VAR_2;

 if (FUNC_0(((uintptr_t)VAR_0 & (VAR_1 - 1)) == 0)) {




  return *(Elf_Sword *)VAR_0;
 }

 VAR_2 = 0;

 (void)FUNC_1(&VAR_2, VAR_0, VAR_1);


 (void)FUNC_1((uint8_t *)((&VAR_2)+1) - VAR_1, VAR_0, VAR_1);

 return (VAR_1 == sizeof(Elf_Sxword)) ? VAR_2 : (Elf_Sword)VAR_2;
}
