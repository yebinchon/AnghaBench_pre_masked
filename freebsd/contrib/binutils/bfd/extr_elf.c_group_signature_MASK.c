
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int bfd ;
struct TYPE_7__ {size_t sh_link; scalar_t__ sh_type; int sh_info; } ;
struct TYPE_8__ {TYPE_1__ symtab_hdr; } ;
typedef int Elf_Internal_Sym ;
typedef TYPE_1__ Elf_Internal_Shdr ;
typedef int Elf_External_Sym_Shndx ;
typedef int Elf64_External_Sym ;


 scalar_t__ VAR_0 ;
 int * FUNC_0 (int *,TYPE_1__*,int,int ,int *,unsigned char*,int *) ;
 char const* FUNC_1 (int *,TYPE_1__*,int *,int *) ;
 int FUNC_2 (int *,size_t) ;
 TYPE_1__** FUNC_3 (int *) ;
 TYPE_3__* FUNC_4 (int *) ;

__attribute__((used)) static const char *
FUNC_5 (bfd *VAR_1, Elf_Internal_Shdr *VAR_2)
{
  Elf_Internal_Shdr *VAR_3;
  unsigned char VAR_4[sizeof (Elf64_External_Sym)];
  Elf_External_Sym_Shndx VAR_5;
  Elf_Internal_Sym VAR_6;



  VAR_3 = FUNC_3 (VAR_1) [VAR_2->sh_link];
  if (VAR_3->sh_type != VAR_0
      || ! FUNC_2 (VAR_1, VAR_2->sh_link))
    return ((void*)0);


  VAR_3 = &FUNC_4 (VAR_1)->symtab_hdr;
  if (FUNC_0 (VAR_1, VAR_3, 1, VAR_2->sh_info,
       &VAR_6, VAR_4, &VAR_5) == ((void*)0))
    return ((void*)0);

  return FUNC_1 (VAR_1, VAR_3, &VAR_6, ((void*)0));
}
