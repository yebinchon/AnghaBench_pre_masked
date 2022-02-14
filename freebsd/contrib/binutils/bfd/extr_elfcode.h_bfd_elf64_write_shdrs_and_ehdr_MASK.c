
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int x_ehdr ;
typedef int file_ptr ;
typedef int bfd_size_type ;
typedef int bfd_boolean ;
typedef int bfd ;
struct TYPE_10__ {int e_shnum; int e_shstrndx; scalar_t__ e_shoff; } ;
struct TYPE_9__ {int sh_size; int sh_link; } ;
typedef TYPE_1__ Elf_Internal_Shdr ;
typedef TYPE_2__ Elf_Internal_Ehdr ;
typedef int Elf_External_Shdr ;
typedef int Elf_External_Ehdr ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int * FUNC_0 (int *,int) ;
 int FUNC_1 (int *,int,int *) ;
 scalar_t__ FUNC_2 (int *,int ,int ) ;
 int FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (unsigned int,TYPE_1__*) ;
 TYPE_2__* FUNC_5 (int *) ;
 TYPE_1__** FUNC_6 (int *) ;
 int FUNC_7 (int *,TYPE_2__*,int *) ;
 int FUNC_8 (int *,TYPE_1__*,int *) ;

bfd_boolean
FUNC_9 (bfd *VAR_5)
{
  Elf_External_Ehdr VAR_6;
  Elf_Internal_Ehdr *VAR_7;
  Elf_External_Shdr *VAR_8;
  Elf_Internal_Shdr **VAR_9;
  unsigned int VAR_10;
  bfd_size_type VAR_11;

  VAR_7 = FUNC_5 (VAR_5);
  VAR_9 = FUNC_6 (VAR_5);






  FUNC_7 (VAR_5, VAR_7, &VAR_6);
  VAR_11 = sizeof (VAR_6);
  if (FUNC_2 (VAR_5, (file_ptr) 0, VAR_1) != 0
      || FUNC_1 (&VAR_6, VAR_11, VAR_5) != VAR_11)
    return VAR_0;



  if (VAR_7->e_shnum >= VAR_3)
    VAR_9[0]->sh_size = VAR_7->e_shnum;
  if (VAR_7->e_shstrndx >= VAR_3)
    VAR_9[0]->sh_link = VAR_7->e_shstrndx;


  VAR_11 = VAR_7->e_shnum;
  VAR_11 *= sizeof (*VAR_8);
  VAR_8 = FUNC_0 (VAR_5, VAR_11);
  if (!VAR_8)
    return VAR_0;

  for (VAR_10 = 0; VAR_10 < VAR_7->e_shnum; VAR_9++, VAR_10++)
    {



      FUNC_8 (VAR_5, *VAR_9, VAR_8 + VAR_10);

      if (VAR_10 == VAR_3 - 1)
 VAR_9 += VAR_2 + 1 - VAR_3;
    }
  if (FUNC_2 (VAR_5, (file_ptr) VAR_7->e_shoff, VAR_1) != 0
      || FUNC_1 (VAR_8, VAR_11, VAR_5) != VAR_11)
    return VAR_0;



  return VAR_4;
}
