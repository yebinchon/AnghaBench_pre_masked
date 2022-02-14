
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct internal_reloc {int dummy; } ;
struct coff_section_tdata {int dummy; } ;
typedef int bfd_size_type ;
typedef struct internal_reloc bfd_byte ;
typedef scalar_t__ bfd_boolean ;
typedef int bfd ;
struct TYPE_5__ {int reloc_count; int * used_by_bfd; int rel_filepos; } ;
typedef TYPE_1__ asection ;
struct TYPE_6__ {struct internal_reloc* relocs; int * contents; } ;


 int VAR_0 ;
 int FUNC_0 (struct internal_reloc*,int,int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,void*,void*) ;
 struct internal_reloc* FUNC_3 (int) ;
 scalar_t__ FUNC_4 (int *,int ,int ) ;
 int * FUNC_5 (int *,int) ;
 TYPE_2__* FUNC_6 (int *,TYPE_1__*) ;
 int FUNC_7 (struct internal_reloc*) ;
 int FUNC_8 (struct internal_reloc*,struct internal_reloc*,int) ;

struct internal_reloc *
FUNC_9 (bfd *VAR_1,
    asection *VAR_2,
    bfd_boolean VAR_3,
    bfd_byte *VAR_4,
    bfd_boolean VAR_5,
    struct internal_reloc *VAR_6)
{
  bfd_size_type VAR_7;
  bfd_byte *VAR_8 = ((void*)0);
  struct internal_reloc *VAR_9 = ((void*)0);
  bfd_byte *VAR_10;
  bfd_byte *VAR_11;
  struct internal_reloc *VAR_12;
  bfd_size_type VAR_13;

  if (FUNC_6 (VAR_1, VAR_2) != ((void*)0)
      && FUNC_6 (VAR_1, VAR_2)->relocs != ((void*)0))
    {
      if (! VAR_5)
 return FUNC_6 (VAR_1, VAR_2)->relocs;
      FUNC_8 (VAR_6, FUNC_6 (VAR_1, VAR_2)->relocs,
       VAR_2->reloc_count * sizeof (struct internal_reloc));
      return VAR_6;
    }

  VAR_7 = FUNC_1 (VAR_1);

  VAR_13 = VAR_2->reloc_count * VAR_7;
  if (VAR_4 == ((void*)0))
    {
      VAR_8 = FUNC_3 (VAR_13);
      if (VAR_8 == ((void*)0) && VAR_2->reloc_count > 0)
 goto error_return;
      VAR_4 = VAR_8;
    }

  if (FUNC_4 (VAR_1, VAR_2->rel_filepos, VAR_0) != 0
      || FUNC_0 (VAR_4, VAR_13, VAR_1) != VAR_13)
    goto error_return;

  if (VAR_6 == ((void*)0))
    {
      VAR_13 = VAR_2->reloc_count;
      VAR_13 *= sizeof (struct internal_reloc);
      VAR_9 = FUNC_3 (VAR_13);
      if (VAR_9 == ((void*)0) && VAR_2->reloc_count > 0)
 goto error_return;
      VAR_6 = VAR_9;
    }


  VAR_10 = VAR_4;
  VAR_11 = VAR_10 + VAR_7 * VAR_2->reloc_count;
  VAR_12 = VAR_6;
  for (; VAR_10 < VAR_11; VAR_10 += VAR_7, VAR_12++)
    FUNC_2 (VAR_1, (void *) VAR_10, (void *) VAR_12);

  if (VAR_8 != ((void*)0))
    {
      FUNC_7 (VAR_8);
      VAR_8 = ((void*)0);
    }

  if (VAR_3 && VAR_9 != ((void*)0))
    {
      if (FUNC_6 (VAR_1, VAR_2) == ((void*)0))
 {
   VAR_13 = sizeof (struct coff_section_tdata);
   VAR_2->used_by_bfd = FUNC_5 (VAR_1, VAR_13);
   if (VAR_2->used_by_bfd == ((void*)0))
     goto error_return;
   FUNC_6 (VAR_1, VAR_2)->contents = ((void*)0);
 }
      FUNC_6 (VAR_1, VAR_2)->relocs = VAR_9;
    }

  return VAR_6;

 error_return:
  if (VAR_8 != ((void*)0))
    FUNC_7 (VAR_8);
  if (VAR_9 != ((void*)0))
    FUNC_7 (VAR_9);
  return ((void*)0);
}
