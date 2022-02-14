
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int val ;
typedef int Elf_Addr ;


 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int *,int *,int) ;

__attribute__((used)) static __inline void
FUNC_2(Elf_Addr *VAR_0, Elf_Addr VAR_1)
{
 if (FUNC_0(VAR_0))
  *VAR_0 = VAR_1;
 else
  FUNC_1(VAR_0, &VAR_1, sizeof(VAR_1));
}
