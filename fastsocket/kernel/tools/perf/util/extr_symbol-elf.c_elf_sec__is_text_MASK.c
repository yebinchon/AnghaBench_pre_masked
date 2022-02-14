
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int GElf_Shdr ;
typedef int Elf_Data ;


 int FUNC_0 (int const*,int const*) ;
 int * FUNC_1 (int ,char*) ;

__attribute__((used)) static inline int FUNC_2(const GElf_Shdr *VAR_0,
     const Elf_Data *VAR_1)
{
 return FUNC_1(FUNC_0(VAR_0, VAR_1), "text") != ((void*)0);
}
