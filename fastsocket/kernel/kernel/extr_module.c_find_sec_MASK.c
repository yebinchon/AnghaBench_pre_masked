
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {unsigned int e_shnum; } ;
struct TYPE_5__ {int sh_flags; int sh_name; } ;
typedef TYPE_1__ Elf_Shdr ;
typedef TYPE_2__ Elf_Ehdr ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (char const*,char const*) ;

__attribute__((used)) static unsigned int FUNC_1(Elf_Ehdr *VAR_1,
        Elf_Shdr *VAR_2,
        const char *VAR_3,
        const char *VAR_4)
{
 unsigned int VAR_5;

 for (VAR_5 = 1; VAR_5 < VAR_1->e_shnum; VAR_5++)

  if ((VAR_2[VAR_5].sh_flags & VAR_0)
      && FUNC_0(VAR_3+VAR_2[VAR_5].sh_name, VAR_4) == 0)
   return VAR_5;
 return 0;
}
