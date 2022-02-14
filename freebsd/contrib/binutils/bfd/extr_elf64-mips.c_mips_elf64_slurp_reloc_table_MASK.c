
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {scalar_t__ sh_offset; } ;
struct bfd_elf_section_data {TYPE_2__* rel_hdr2; TYPE_2__ this_hdr; TYPE_2__ rel_hdr; } ;
typedef int bfd_size_type ;
typedef int bfd_boolean ;
typedef int bfd ;
typedef int asymbol ;
struct TYPE_8__ {int flags; scalar_t__ reloc_count; scalar_t__ rel_filepos; scalar_t__ size; int * relocation; } ;
typedef TYPE_1__ asection ;
typedef int arelent ;
typedef TYPE_2__ Elf_Internal_Shdr ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (TYPE_2__*) ;
 int VAR_1 ;
 int VAR_2 ;
 int * FUNC_2 (int *,int) ;
 struct bfd_elf_section_data* FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (int *,TYPE_1__*,TYPE_2__*,int,int *,int **,int ) ;

__attribute__((used)) static bfd_boolean
FUNC_5 (bfd *VAR_3, asection *VAR_4,
         asymbol **VAR_5, bfd_boolean VAR_6)
{
  struct bfd_elf_section_data * const VAR_7 = FUNC_3 (VAR_4);
  Elf_Internal_Shdr *VAR_8;
  Elf_Internal_Shdr *VAR_9;
  bfd_size_type VAR_10;
  bfd_size_type VAR_11;
  arelent *VAR_12;
  bfd_size_type VAR_13;

  if (VAR_4->relocation != ((void*)0))
    return VAR_2;

  if (! VAR_6)
    {
      if ((VAR_4->flags & VAR_1) == 0
   || VAR_4->reloc_count == 0)
 return VAR_2;

      VAR_8 = &VAR_7->rel_hdr;
      VAR_10 = FUNC_1 (VAR_8);
      VAR_9 = VAR_7->rel_hdr2;
      VAR_11 = (VAR_9 ? FUNC_1 (VAR_9) : 0);

      FUNC_0 (VAR_4->reloc_count == VAR_10 + VAR_11);
      FUNC_0 (VAR_4->rel_filepos == VAR_8->sh_offset
    || (VAR_9 && VAR_4->rel_filepos == VAR_9->sh_offset));

    }
  else
    {




      if (VAR_4->size == 0)
 return VAR_2;

      VAR_8 = &VAR_7->this_hdr;
      VAR_10 = FUNC_1 (VAR_8);
      VAR_9 = ((void*)0);
      VAR_11 = 0;
    }


  VAR_13 = (VAR_10 + VAR_11) * 3 * sizeof (arelent);
  VAR_12 = FUNC_2 (VAR_3, VAR_13);
  if (VAR_12 == ((void*)0))
    return VAR_0;


  VAR_4->reloc_count = 0;

  if (! FUNC_4 (VAR_3, VAR_4,
       VAR_8, VAR_10,
       VAR_12,
       VAR_5, VAR_6))
    return VAR_0;
  if (VAR_7->rel_hdr2 != ((void*)0))
    {
      if (! FUNC_4 (VAR_3, VAR_4,
           VAR_9, VAR_11,
           VAR_12 + VAR_10 * 3,
           VAR_5, VAR_6))
 return VAR_0;
    }

  VAR_4->relocation = VAR_12;
  return VAR_2;
}
