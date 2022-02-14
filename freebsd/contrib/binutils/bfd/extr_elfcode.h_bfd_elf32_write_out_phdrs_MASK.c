
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int bfd ;
typedef int Elf_Internal_Phdr ;
typedef int Elf_External_Phdr ;


 int FUNC_0 (int *,int,int *) ;
 int FUNC_1 (int *,int const*,int *) ;

int
FUNC_2 (bfd *VAR_0,
       const Elf_Internal_Phdr *VAR_1,
       unsigned int VAR_2)
{
  while (VAR_2--)
    {
      Elf_External_Phdr VAR_3;
      FUNC_1 (VAR_0, VAR_1, &VAR_3);
      if (FUNC_0 (&VAR_3, sizeof (Elf_External_Phdr), VAR_0)
   != sizeof (Elf_External_Phdr))
 return -1;
      VAR_1++;
    }
  return 0;
}
