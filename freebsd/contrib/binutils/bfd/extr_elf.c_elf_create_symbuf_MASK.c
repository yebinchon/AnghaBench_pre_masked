
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct elf_symbuf_symbol {int st_other; int st_info; int st_name; } ;
struct elf_symbuf_head {size_t count; scalar_t__ st_shndx; struct elf_symbuf_symbol* ssym; } ;
typedef size_t bfd_size_type ;
struct TYPE_6__ {scalar_t__ st_shndx; int st_other; int st_info; int st_name; } ;
typedef TYPE_1__ Elf_Internal_Sym ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 struct elf_symbuf_head* FUNC_1 (size_t) ;
 TYPE_1__** FUNC_2 (size_t,int) ;
 int VAR_1 ;
 int FUNC_3 (TYPE_1__**) ;
 int FUNC_4 (TYPE_1__**,int,int,int ) ;

__attribute__((used)) static struct elf_symbuf_head *
FUNC_5 (bfd_size_type VAR_2, Elf_Internal_Sym *VAR_3)
{
  Elf_Internal_Sym **VAR_4, **VAR_5, **VAR_6
    = FUNC_2 (VAR_2, sizeof (*VAR_6));
  struct elf_symbuf_symbol *VAR_7;
  struct elf_symbuf_head *VAR_8, *VAR_9;
  bfd_size_type VAR_10, VAR_11;

  if (VAR_6 == ((void*)0))
    return ((void*)0);

  for (VAR_4 = VAR_6, VAR_10 = 0; VAR_10 < VAR_2; VAR_10++)
    if (VAR_3[VAR_10].st_shndx != VAR_0)
      *VAR_4++ = &VAR_3[VAR_10];
  VAR_5 = VAR_4;

  FUNC_4 (VAR_6, VAR_5 - VAR_6, sizeof (Elf_Internal_Sym *),
  VAR_1);

  VAR_11 = 0;
  if (VAR_5 > VAR_6)
    for (VAR_4 = VAR_6, VAR_11++; VAR_4 < VAR_5 - 1; VAR_4++)
      if (VAR_4[0]->st_shndx != VAR_4[1]->st_shndx)
 VAR_11++;

  VAR_8 = FUNC_1 ((VAR_11 + 1) * sizeof (*VAR_8)
   + (VAR_5 - VAR_6) * sizeof (*VAR_7));
  if (VAR_8 == ((void*)0))
    {
      FUNC_3 (VAR_6);
      return ((void*)0);
    }

  VAR_7 = (struct elf_symbuf_symbol *) (VAR_8 + VAR_11 + 1);
  VAR_8->ssym = ((void*)0);
  VAR_8->count = VAR_11;
  VAR_8->st_shndx = 0;
  for (VAR_9 = VAR_8, VAR_4 = VAR_6; VAR_4 < VAR_5; VAR_7++, VAR_4++)
    {
      if (VAR_4 == VAR_6 || VAR_9->st_shndx != (*VAR_4)->st_shndx)
 {
   VAR_9++;
   VAR_9->ssym = VAR_7;
   VAR_9->count = 0;
   VAR_9->st_shndx = (*VAR_4)->st_shndx;
 }
      VAR_7->st_name = (*VAR_4)->st_name;
      VAR_7->st_info = (*VAR_4)->st_info;
      VAR_7->st_other = (*VAR_4)->st_other;
      VAR_9->count++;
    }
  FUNC_0 ((bfd_size_type) (VAR_9 - VAR_8) == VAR_11);

  FUNC_3 (VAR_6);
  return VAR_8;
}
