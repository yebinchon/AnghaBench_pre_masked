
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int e_phnum; } ;
typedef int FILE ;
typedef int Elf_Internal_Phdr ;


 int FUNC_0 (char*) ;
 int * FUNC_1 (int ,int) ;
 TYPE_1__ VAR_0 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int *,int *) ;
 scalar_t__ FUNC_5 (int *,int *) ;
 scalar_t__ VAR_1 ;
 int * VAR_2 ;

__attribute__((used)) static int
FUNC_6 (FILE *VAR_3)
{
  Elf_Internal_Phdr *VAR_4;


  if (VAR_2 != ((void*)0))
    return 1;

  VAR_4 = FUNC_1 (VAR_0.e_phnum, sizeof (Elf_Internal_Phdr));

  if (VAR_4 == ((void*)0))
    {
      FUNC_2 (FUNC_0("Out of memory\n"));
      return 0;
    }

  if (VAR_1
      ? FUNC_4 (VAR_3, VAR_4)
      : FUNC_5 (VAR_3, VAR_4))
    {
      VAR_2 = VAR_4;
      return 1;
    }

  FUNC_3 (VAR_4);
  return 0;
}
