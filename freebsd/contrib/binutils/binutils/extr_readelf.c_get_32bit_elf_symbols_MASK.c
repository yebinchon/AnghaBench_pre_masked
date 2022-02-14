
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef int shndx ;
struct TYPE_15__ {unsigned long sh_link; unsigned long sh_size; int sh_offset; } ;
struct TYPE_14__ {int st_other; int st_info; int st_shndx; int st_size; int st_value; int st_name; } ;
struct TYPE_13__ {unsigned long sh_size; unsigned long sh_entsize; int sh_offset; } ;
struct TYPE_12__ {scalar_t__ st_shndx; void* st_other; void* st_info; void* st_size; void* st_value; void* st_name; } ;
typedef int FILE ;
typedef TYPE_1__ Elf_Internal_Sym ;
typedef TYPE_2__ Elf_Internal_Shdr ;
typedef TYPE_3__ Elf_External_Sym_Shndx ;
typedef TYPE_3__ Elf32_External_Sym ;


 void* FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (TYPE_2__*) ;
 scalar_t__ VAR_0 ;
 int FUNC_2 (char*) ;
 scalar_t__ FUNC_3 (unsigned char*,int) ;
 TYPE_1__* FUNC_4 (unsigned long,int) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (TYPE_3__*) ;
 TYPE_3__* FUNC_7 (int *,int *,int ,int,unsigned long,int ) ;
 int VAR_1 ;
 TYPE_5__* VAR_2 ;

__attribute__((used)) static Elf_Internal_Sym *
FUNC_8 (FILE *VAR_3, Elf_Internal_Shdr *VAR_4)
{
  unsigned long VAR_5;
  Elf32_External_Sym *VAR_6;
  Elf_External_Sym_Shndx *VAR_7;
  Elf_Internal_Sym *VAR_8;
  Elf_Internal_Sym *VAR_9;
  unsigned int VAR_10;

  VAR_6 = FUNC_7 (((void*)0), VAR_3, VAR_4->sh_offset, 1, VAR_4->sh_size,
      FUNC_2("symbols"));
  if (!VAR_6)
    return ((void*)0);

  VAR_7 = ((void*)0);
  if (VAR_2 != ((void*)0)
      && (VAR_2->sh_link
   == (unsigned long) FUNC_1 (VAR_4 - VAR_1)))
    {
      VAR_7 = FUNC_7 (((void*)0), VAR_3, VAR_2->sh_offset,
   1, VAR_2->sh_size, FUNC_2("symtab shndx"));
      if (!VAR_7)
 {
   FUNC_6 (VAR_6);
   return ((void*)0);
 }
    }

  VAR_5 = VAR_4->sh_size / VAR_4->sh_entsize;
  VAR_8 = FUNC_4 (VAR_5, sizeof (Elf_Internal_Sym));

  if (VAR_8 == ((void*)0))
    {
      FUNC_5 (FUNC_2("Out of memory\n"));
      if (VAR_7)
 FUNC_6 (VAR_7);
      FUNC_6 (VAR_6);
      return ((void*)0);
    }

  for (VAR_10 = 0, VAR_9 = VAR_8;
       VAR_10 < VAR_5;
       VAR_10++, VAR_9++)
    {
      VAR_9->st_name = FUNC_0 (VAR_6[VAR_10].st_name);
      VAR_9->st_value = FUNC_0 (VAR_6[VAR_10].st_value);
      VAR_9->st_size = FUNC_0 (VAR_6[VAR_10].st_size);
      VAR_9->st_shndx = FUNC_0 (VAR_6[VAR_10].st_shndx);
      if (VAR_9->st_shndx == VAR_0 && VAR_7 != ((void*)0))
 VAR_9->st_shndx
   = FUNC_3 ((unsigned char *) &VAR_7[VAR_10], sizeof (VAR_7[VAR_10]));
      VAR_9->st_info = FUNC_0 (VAR_6[VAR_10].st_info);
      VAR_9->st_other = FUNC_0 (VAR_6[VAR_10].st_other);
    }

  if (VAR_7)
    FUNC_6 (VAR_7);
  FUNC_6 (VAR_6);

  return VAR_8;
}
