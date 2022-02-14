
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int bfd ;
struct TYPE_5__ {unsigned int e_shstrndx; } ;
struct TYPE_4__ {unsigned int sh_size; unsigned int sh_name; int * contents; } ;
typedef TYPE_1__ Elf_Internal_Shdr ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int ,int *,unsigned int,unsigned long,char*) ;
 int * FUNC_2 (int *,unsigned int) ;
 TYPE_3__* FUNC_3 (int *) ;
 TYPE_1__** FUNC_4 (int *) ;
 unsigned int FUNC_5 (int *) ;
 int FUNC_6 (int ,int *,unsigned int,unsigned long,char*) ;

char *
FUNC_7 (bfd *VAR_0,
     unsigned int VAR_1,
     unsigned int VAR_2)
{
  Elf_Internal_Shdr *VAR_3;

  if (VAR_2 == 0)
    return "";

  if (FUNC_4 (VAR_0) == ((void*)0) || VAR_1 >= FUNC_5 (VAR_0))
    return ((void*)0);

  VAR_3 = FUNC_4 (VAR_0)[VAR_1];

  if (VAR_3->contents == ((void*)0)
      && FUNC_2 (VAR_0, VAR_1) == ((void*)0))
    return ((void*)0);

  if (VAR_2 >= VAR_3->sh_size)
    {
      unsigned int VAR_4 = FUNC_3(VAR_0)->e_shstrndx;
      FUNC_1)
 (FUNC_0("%B: invalid string offset %u >= %lu for section `%s'"),
  VAR_0, VAR_2, (unsigned long) VAR_3->sh_size,
  (VAR_1 == VAR_4 && VAR_2 == VAR_3->sh_name
   ? ".shstrtab"
   : FUNC_7 (VAR_0, VAR_4, VAR_3->sh_name)));
      return "";
    }

  return ((char *) VAR_3->contents) + VAR_2;
}
