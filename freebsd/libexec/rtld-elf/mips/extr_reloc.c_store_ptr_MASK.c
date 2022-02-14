
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int const Elf_Sxword ;
typedef int Elf_Sword ;


 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (void*,int const*,size_t) ;

__attribute__((used)) static __inline void
FUNC_2(void *VAR_0, Elf_Sxword VAR_1, size_t VAR_2)
{
 if (FUNC_0(((uintptr_t)VAR_0 & (VAR_2 - 1)) == 0)) {






  *(Elf_Sword *)VAR_0 = VAR_1;
  return;
 }

 (void)FUNC_1(VAR_0, &VAR_1, VAR_2);


 (void)FUNC_1(VAR_0, (const uint8_t *)((&VAR_1)+1) - VAR_2, VAR_2);

}
