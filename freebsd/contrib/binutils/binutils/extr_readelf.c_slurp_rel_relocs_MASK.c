
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {int r_info; int r_offset; } ;
struct TYPE_8__ {scalar_t__ r_addend; void* r_info; void* r_offset; } ;
typedef int FILE ;
typedef TYPE_1__ Elf_Internal_Rela ;
typedef TYPE_2__ Elf64_External_Rel ;
typedef TYPE_2__ Elf32_External_Rel ;


 void* FUNC_0 (int ) ;
 int FUNC_1 (char*) ;
 TYPE_1__* FUNC_2 (unsigned long,int) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (TYPE_2__*) ;
 TYPE_2__* FUNC_5 (int *,int *,unsigned long,int,unsigned long,int ) ;
 scalar_t__ VAR_0 ;

__attribute__((used)) static int
FUNC_6 (FILE *VAR_1,
    unsigned long VAR_2,
    unsigned long VAR_3,
    Elf_Internal_Rela **VAR_4,
    unsigned long *VAR_5)
{
  Elf_Internal_Rela *VAR_6;
  unsigned long VAR_7;
  unsigned int VAR_8;

  if (VAR_0)
    {
      Elf32_External_Rel *VAR_9;

      VAR_9 = FUNC_5 (((void*)0), VAR_1, VAR_2, 1, VAR_3, FUNC_1("relocs"));
      if (!VAR_9)
 return 0;

      VAR_7 = VAR_3 / sizeof (Elf32_External_Rel);

      VAR_6 = FUNC_2 (VAR_7, sizeof (Elf_Internal_Rela));

      if (VAR_6 == ((void*)0))
 {
   FUNC_4 (VAR_9);
   FUNC_3 (FUNC_1("out of memory parsing relocs\n"));
   return 0;
 }

      for (VAR_8 = 0; VAR_8 < VAR_7; VAR_8++)
 {
   VAR_6[VAR_8].r_offset = FUNC_0 (VAR_9[VAR_8].r_offset);
   VAR_6[VAR_8].r_info = FUNC_0 (VAR_9[VAR_8].r_info);
   VAR_6[VAR_8].r_addend = 0;
 }

      FUNC_4 (VAR_9);
    }
  else
    {
      Elf64_External_Rel *VAR_10;

      VAR_10 = FUNC_5 (((void*)0), VAR_1, VAR_2, 1, VAR_3, FUNC_1("relocs"));
      if (!VAR_10)
 return 0;

      VAR_7 = VAR_3 / sizeof (Elf64_External_Rel);

      VAR_6 = FUNC_2 (VAR_7, sizeof (Elf_Internal_Rela));

      if (VAR_6 == ((void*)0))
 {
   FUNC_4 (VAR_10);
   FUNC_3 (FUNC_1("out of memory parsing relocs\n"));
   return 0;
 }

      for (VAR_8 = 0; VAR_8 < VAR_7; VAR_8++)
 {
   VAR_6[VAR_8].r_offset = FUNC_0 (VAR_10[VAR_8].r_offset);
   VAR_6[VAR_8].r_info = FUNC_0 (VAR_10[VAR_8].r_info);
   VAR_6[VAR_8].r_addend = 0;
 }

      FUNC_4 (VAR_10);
    }
  *VAR_4 = VAR_6;
  *VAR_5 = VAR_7;
  return 1;
}
