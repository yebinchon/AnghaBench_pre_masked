
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {unsigned int st_shndx; } ;
struct TYPE_6__ {int section; } ;
struct TYPE_8__ {TYPE_2__ internal_elf_sym; TYPE_1__ symbol; } ;
typedef TYPE_3__ elf_symbol_type ;
typedef int bfd_boolean ;
typedef int bfd ;
typedef int asymbol ;
struct TYPE_9__ {unsigned int strtab_section; unsigned int shstrtab_section; unsigned int symtab_shndx_section; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ VAR_6 ;
 unsigned int FUNC_2 (int *) ;
 unsigned int FUNC_3 (int *) ;
 TYPE_3__* FUNC_4 (int *,int *) ;
 TYPE_4__* FUNC_5 (int *) ;

bfd_boolean
FUNC_6 (bfd *VAR_7,
       asymbol *VAR_8,
       bfd *VAR_9,
       asymbol *VAR_10)
{
  elf_symbol_type *VAR_11, *VAR_12;

  if (FUNC_0 (VAR_7) != VAR_6
      || FUNC_0 (VAR_9) != VAR_6)
    return VAR_5;

  VAR_11 = FUNC_4 (VAR_7, VAR_8);
  VAR_12 = FUNC_4 (VAR_9, VAR_10);

  if (VAR_11 != ((void*)0)
      && VAR_12 != ((void*)0)
      && FUNC_1 (VAR_11->symbol.section))
    {
      unsigned int VAR_13;

      VAR_13 = VAR_11->internal_elf_sym.st_shndx;
      if (VAR_13 == FUNC_3 (VAR_7))
 VAR_13 = VAR_1;
      else if (VAR_13 == FUNC_2 (VAR_7))
 VAR_13 = VAR_0;
      else if (VAR_13 == FUNC_5 (VAR_7)->strtab_section)
 VAR_13 = VAR_3;
      else if (VAR_13 == FUNC_5 (VAR_7)->shstrtab_section)
 VAR_13 = VAR_2;
      else if (VAR_13 == FUNC_5 (VAR_7)->symtab_shndx_section)
 VAR_13 = VAR_4;
      VAR_12->internal_elf_sym.st_shndx = VAR_13;
    }

  return VAR_5;
}
