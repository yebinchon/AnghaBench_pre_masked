
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct elf_internal_shdr {size_t sh_name; } ;
typedef int bfd ;
struct TYPE_2__ {int e_shstrndx; } ;
typedef struct elf_internal_shdr Elf_Internal_Shdr ;


 char* FUNC_0 (int *,int ) ;
 TYPE_1__* FUNC_1 (int *) ;
 struct elf_internal_shdr** FUNC_2 (int *) ;
 unsigned int FUNC_3 (int *) ;
 int FUNC_4 (char*,char*) ;

struct elf_internal_shdr *
FUNC_5 (bfd *VAR_0, char *VAR_1)
{
  Elf_Internal_Shdr **VAR_2;
  char *VAR_3;
  unsigned int VAR_4;
  unsigned int VAR_5;

  VAR_2 = FUNC_2 (VAR_0);
  if (VAR_2 != ((void*)0))
    {
      VAR_3 = FUNC_0 (VAR_0,
       FUNC_1 (VAR_0)->e_shstrndx);
      if (VAR_3 != ((void*)0))
 {
   VAR_4 = FUNC_3 (VAR_0);
   for (VAR_5 = 1; VAR_5 < VAR_4; VAR_5++)
     if (!FUNC_4 (&VAR_3[VAR_2[VAR_5]->sh_name], VAR_1))
       return VAR_2[VAR_5];
 }
    }
  return 0;
}
