
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct internal_reloc {int dummy; } ;
typedef int bfd_byte ;
typedef scalar_t__ bfd_boolean ;
typedef int bfd ;
struct TYPE_8__ {scalar_t__ reloc_count; size_t rel_filepos; } ;
typedef TYPE_1__ asection ;
struct TYPE_10__ {struct internal_reloc* relocs; } ;
struct TYPE_9__ {TYPE_1__* enclosing; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 struct internal_reloc* FUNC_0 (int *,TYPE_1__*,scalar_t__,int *,scalar_t__,struct internal_reloc*) ;
 size_t FUNC_1 (int *) ;
 TYPE_5__* FUNC_2 (int *,TYPE_1__*) ;
 int FUNC_3 (struct internal_reloc*,struct internal_reloc*,int) ;
 TYPE_2__* FUNC_4 (int *,TYPE_1__*) ;

__attribute__((used)) static struct internal_reloc *
FUNC_5 (bfd *VAR_2,
       asection *VAR_3,
       bfd_boolean VAR_4,
       bfd_byte *VAR_5,
       bfd_boolean VAR_6,
       struct internal_reloc *VAR_7)
{
  if (FUNC_2 (VAR_2, VAR_3) != ((void*)0)
      && FUNC_2 (VAR_2, VAR_3)->relocs == ((void*)0)
      && FUNC_4 (VAR_2, VAR_3) != ((void*)0))
    {
      asection *VAR_8;

      VAR_8 = FUNC_4 (VAR_2, VAR_3)->enclosing;

      if (VAR_8 != ((void*)0)
   && (FUNC_2 (VAR_2, VAR_8) == ((void*)0)
       || FUNC_2 (VAR_2, VAR_8)->relocs == ((void*)0))
   && VAR_4
   && VAR_8->reloc_count > 0)
 {
   if (FUNC_0 (VAR_2, VAR_8, VAR_1,
           VAR_5, VAR_0, ((void*)0))
       == ((void*)0))
     return ((void*)0);
 }

      if (VAR_8 != ((void*)0)
   && FUNC_2 (VAR_2, VAR_8) != ((void*)0)
   && FUNC_2 (VAR_2, VAR_8)->relocs != ((void*)0))
 {
   size_t VAR_9;

   VAR_9 = ((VAR_3->rel_filepos - VAR_8->rel_filepos)
   / FUNC_1 (VAR_2));

   if (! VAR_6)
     return FUNC_2 (VAR_2, VAR_8)->relocs + VAR_9;
   FUNC_3 (VAR_7,
    FUNC_2 (VAR_2, VAR_8)->relocs + VAR_9,
    VAR_3->reloc_count * sizeof (struct internal_reloc));
   return VAR_7;
 }
    }

  return FUNC_0 (VAR_2, VAR_3, VAR_4, VAR_5,
      VAR_6, VAR_7);
}
