
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int GElf_Sym ;
typedef int Elf64_Sym ;


 int FUNC_0 (int const*,int *,int) ;

__attribute__((used)) static GElf_Sym *
FUNC_1(const Elf64_Sym *VAR_0, GElf_Sym *VAR_1)
{
 if (VAR_1 != ((void*)0))
  FUNC_0(VAR_0, VAR_1, sizeof (GElf_Sym));

 return (VAR_1);
}
