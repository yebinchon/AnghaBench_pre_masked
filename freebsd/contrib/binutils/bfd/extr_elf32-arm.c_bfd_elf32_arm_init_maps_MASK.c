
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


struct TYPE_13__ {int flags; } ;
typedef TYPE_1__ bfd ;
typedef int asection ;
struct TYPE_15__ {unsigned int sh_info; int sh_link; } ;
struct TYPE_16__ {TYPE_3__ symtab_hdr; } ;
struct TYPE_14__ {int st_value; int st_name; int st_info; int st_shndx; } ;
typedef TYPE_2__ Elf_Internal_Sym ;
typedef TYPE_3__ Elf_Internal_Shdr ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ VAR_2 ;
 TYPE_2__* FUNC_1 (TYPE_1__*,TYPE_3__*,unsigned int,int ,int *,int *,int *) ;
 char* FUNC_2 (TYPE_1__*,int ,int ) ;
 scalar_t__ FUNC_3 (TYPE_1__*) ;
 scalar_t__ FUNC_4 (char const*,int ) ;
 int * FUNC_5 (TYPE_1__*,int ) ;
 scalar_t__ VAR_3 ;
 int FUNC_6 (int *,char const,int ) ;
 TYPE_4__* FUNC_7 (TYPE_1__*) ;

void
FUNC_8 (bfd *VAR_4)
{
  Elf_Internal_Sym *VAR_5;
  Elf_Internal_Shdr *VAR_6;
  unsigned int VAR_7, VAR_8;

  if (FUNC_3 (VAR_4) != VAR_3 || FUNC_7 (VAR_4) == ((void*)0))
    return;

  if ((VAR_4->flags & VAR_1) != 0)
    return;

  VAR_6 = &FUNC_7 (VAR_4)->symtab_hdr;
  VAR_8 = VAR_6->sh_info;




  VAR_5 = FUNC_1 (VAR_4, VAR_6, VAR_8, 0, ((void*)0), ((void*)0),
      ((void*)0));


  if (VAR_5 == ((void*)0))
    return;

  for (VAR_7 = 0; VAR_7 < VAR_8; VAR_7++)
    {
      Elf_Internal_Sym *VAR_9 = &VAR_5[VAR_7];
      asection *VAR_10 = FUNC_5 (VAR_4, VAR_9->st_shndx);
      const char *VAR_11;

      if (VAR_10 != ((void*)0)
          && FUNC_0 (VAR_9->st_info) == VAR_2)
        {
          VAR_11 = FUNC_2 (VAR_4,
            VAR_6->sh_link, VAR_9->st_name);

          if (FUNC_4 (VAR_11,
           VAR_0))
            FUNC_6 (VAR_10, VAR_11[1], VAR_9->st_value);
        }
    }
}
