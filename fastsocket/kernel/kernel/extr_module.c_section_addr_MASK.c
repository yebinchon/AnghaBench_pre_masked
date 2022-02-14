
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ sh_addr; } ;
typedef TYPE_1__ Elf_Shdr ;
typedef int Elf_Ehdr ;


 size_t FUNC_0 (int *,TYPE_1__*,char const*,char const*) ;

__attribute__((used)) static void *FUNC_1(Elf_Ehdr *VAR_0, Elf_Shdr *VAR_1,
     const char *VAR_2, const char *VAR_3)
{

 return (void *)VAR_1[FUNC_0(VAR_0, VAR_1, VAR_2, VAR_3)].sh_addr;
}
