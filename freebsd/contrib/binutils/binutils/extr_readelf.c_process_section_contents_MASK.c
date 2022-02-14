
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {unsigned int e_shnum; } ;
typedef int FILE ;
typedef int Elf_Internal_Shdr ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int *,int *) ;
 int VAR_3 ;
 int FUNC_3 (int *,int *) ;
 int* VAR_4 ;
 TYPE_1__ VAR_5 ;
 int FUNC_4 () ;
 unsigned int VAR_6 ;
 int * VAR_7 ;
 int FUNC_5 (int ,unsigned int) ;

__attribute__((used)) static void
FUNC_6 (FILE *VAR_8)
{
  Elf_Internal_Shdr *VAR_9;
  unsigned int VAR_10;

  if (! VAR_3)
    return;

  FUNC_4 ();

  for (VAR_10 = 0, VAR_9 = VAR_7;
       VAR_10 < VAR_5.e_shnum && VAR_10 < VAR_6;
       VAR_10++, VAR_9++)
    {




      if (VAR_4[VAR_10] & VAR_2)
 FUNC_3 (VAR_9, VAR_8);

      if (VAR_4[VAR_10] & VAR_0)
 FUNC_2 (VAR_9, VAR_8);
    }



  while (VAR_10++ < VAR_6)
    if (VAR_4[VAR_10])
      FUNC_5 (FUNC_0("Section %d was not dumped because it does not exist!\n"), VAR_10);
}
