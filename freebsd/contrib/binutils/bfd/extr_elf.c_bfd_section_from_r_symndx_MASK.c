
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct sym_sec_cache {unsigned long* indx; int ** sec; int * abfd; } ;
typedef int bfd ;
typedef int asection ;
struct TYPE_5__ {int symtab_hdr; } ;
struct TYPE_4__ {scalar_t__ st_shndx; } ;
typedef TYPE_1__ Elf_Internal_Sym ;
typedef int Elf_Internal_Shdr ;
typedef int Elf_External_Sym_Shndx ;
typedef int Elf64_External_Sym ;


 unsigned long VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int * FUNC_0 (int *,int *,int,unsigned long,TYPE_1__*,unsigned char*,int *) ;
 int * FUNC_1 (int *,scalar_t__) ;
 TYPE_2__* FUNC_2 (int *) ;
 int FUNC_3 (unsigned long*,int,int) ;

asection *
FUNC_4 (bfd *VAR_4,
      struct sym_sec_cache *VAR_5,
      asection *VAR_6,
      unsigned long VAR_7)
{
  Elf_Internal_Shdr *VAR_8;
  unsigned char VAR_9[sizeof (Elf64_External_Sym)];
  Elf_External_Sym_Shndx VAR_10;
  Elf_Internal_Sym VAR_11;
  unsigned int VAR_12 = VAR_7 % VAR_0;

  if (VAR_5->abfd == VAR_4 && VAR_5->indx[VAR_12] == VAR_7)
    return VAR_5->sec[VAR_12];

  VAR_8 = &FUNC_2 (VAR_4)->symtab_hdr;
  if (FUNC_0 (VAR_4, VAR_8, 1, VAR_7,
       &VAR_11, VAR_9, &VAR_10) == ((void*)0))
    return ((void*)0);

  if (VAR_5->abfd != VAR_4)
    {
      FUNC_3 (VAR_5->indx, -1, sizeof (VAR_5->indx));
      VAR_5->abfd = VAR_4;
    }
  VAR_5->indx[VAR_12] = VAR_7;
  VAR_5->sec[VAR_12] = VAR_6;
  if ((VAR_11.st_shndx != VAR_3 && VAR_11.st_shndx < VAR_2)
      || VAR_11.st_shndx > VAR_1)
    {
      asection *VAR_13;
      VAR_13 = FUNC_1 (VAR_4, VAR_11.st_shndx);
      if (VAR_13 != ((void*)0))
 VAR_5->sec[VAR_12] = VAR_13;
    }
  return VAR_5->sec[VAR_12];
}
