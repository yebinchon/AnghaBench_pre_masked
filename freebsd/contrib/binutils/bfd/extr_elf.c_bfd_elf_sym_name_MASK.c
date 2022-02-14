
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int bfd ;
typedef int asection ;
struct TYPE_10__ {unsigned int e_shstrndx; } ;
struct TYPE_9__ {unsigned int sh_name; } ;
struct TYPE_8__ {unsigned int sh_link; } ;
struct TYPE_7__ {unsigned int st_name; size_t st_shndx; int st_info; } ;
typedef TYPE_1__ Elf_Internal_Sym ;
typedef TYPE_2__ Elf_Internal_Shdr ;


 scalar_t__ FUNC_0 (int ) ;
 size_t VAR_0 ;
 size_t VAR_1 ;
 scalar_t__ VAR_2 ;
 char* FUNC_1 (int *,unsigned int,unsigned int) ;
 char* FUNC_2 (int *,int *) ;
 TYPE_4__* FUNC_3 (int *) ;
 TYPE_3__** FUNC_4 (int *) ;
 size_t FUNC_5 (int *) ;

const char *
FUNC_6 (bfd *VAR_3,
    Elf_Internal_Shdr *VAR_4,
    Elf_Internal_Sym *VAR_5,
    asection *VAR_6)
{
  const char *VAR_7;
  unsigned int VAR_8 = VAR_5->st_name;
  unsigned int VAR_9 = VAR_4->sh_link;

  if (VAR_8 == 0 && FUNC_0 (VAR_5->st_info) == VAR_2

      && VAR_5->st_shndx < FUNC_5 (VAR_3)
      && !(VAR_5->st_shndx >= VAR_1 && VAR_5->st_shndx <= VAR_0))
    {
      VAR_8 = FUNC_4 (VAR_3)[VAR_5->st_shndx]->sh_name;
      VAR_9 = FUNC_3 (VAR_3)->e_shstrndx;
    }

  VAR_7 = FUNC_1 (VAR_3, VAR_9, VAR_8);
  if (VAR_7 == ((void*)0))
    VAR_7 = "(null)";
  else if (VAR_6 && *VAR_7 == '\0')
    VAR_7 = FUNC_2 (VAR_3, VAR_6);

  return VAR_7;
}
