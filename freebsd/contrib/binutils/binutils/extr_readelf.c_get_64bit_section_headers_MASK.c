
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_6__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_10__ {int e_shentsize; int e_shoff; } ;
struct TYPE_9__ {int sh_addralign; int sh_offset; int sh_info; int sh_link; int sh_entsize; int sh_size; int sh_addr; int sh_flags; int sh_type; int sh_name; } ;
struct TYPE_8__ {void* sh_addralign; void* sh_offset; void* sh_info; void* sh_link; void* sh_entsize; void* sh_size; void* sh_addr; void* sh_flags; void* sh_type; void* sh_name; } ;
typedef int FILE ;
typedef TYPE_1__ Elf_Internal_Shdr ;
typedef TYPE_2__ Elf64_External_Shdr ;


 void* FUNC_0 (int ) ;
 int FUNC_1 (char*) ;
 TYPE_1__* FUNC_2 (unsigned int,int) ;
 TYPE_6__ VAR_0 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (TYPE_2__*) ;
 TYPE_2__* FUNC_5 (int *,int *,int ,int ,unsigned int,int ) ;
 TYPE_1__* VAR_1 ;

__attribute__((used)) static int
FUNC_6 (FILE *VAR_2, unsigned int VAR_3)
{
  Elf64_External_Shdr *VAR_4;
  Elf_Internal_Shdr *VAR_5;
  unsigned int VAR_6;

  VAR_4 = FUNC_5 (((void*)0), VAR_2, VAR_0.e_shoff,
      VAR_0.e_shentsize, VAR_3, FUNC_1("section headers"));
  if (!VAR_4)
    return 0;

  VAR_1 = FUNC_2 (VAR_3, sizeof (Elf_Internal_Shdr));

  if (VAR_1 == ((void*)0))
    {
      FUNC_3 (FUNC_1("Out of memory\n"));
      return 0;
    }

  for (VAR_6 = 0, VAR_5 = VAR_1;
       VAR_6 < VAR_3;
       VAR_6++, VAR_5++)
    {
      VAR_5->sh_name = FUNC_0 (VAR_4[VAR_6].sh_name);
      VAR_5->sh_type = FUNC_0 (VAR_4[VAR_6].sh_type);
      VAR_5->sh_flags = FUNC_0 (VAR_4[VAR_6].sh_flags);
      VAR_5->sh_addr = FUNC_0 (VAR_4[VAR_6].sh_addr);
      VAR_5->sh_size = FUNC_0 (VAR_4[VAR_6].sh_size);
      VAR_5->sh_entsize = FUNC_0 (VAR_4[VAR_6].sh_entsize);
      VAR_5->sh_link = FUNC_0 (VAR_4[VAR_6].sh_link);
      VAR_5->sh_info = FUNC_0 (VAR_4[VAR_6].sh_info);
      VAR_5->sh_offset = FUNC_0 (VAR_4[VAR_6].sh_offset);
      VAR_5->sh_addralign = FUNC_0 (VAR_4[VAR_6].sh_addralign);
    }

  FUNC_4 (VAR_4);

  return 1;
}
