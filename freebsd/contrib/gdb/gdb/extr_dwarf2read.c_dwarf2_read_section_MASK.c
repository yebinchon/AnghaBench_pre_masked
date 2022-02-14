
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct objfile {int objfile_obstack; int * obfd; } ;
typedef scalar_t__ bfd_size_type ;
typedef int bfd_byte ;
typedef int bfd ;
struct TYPE_5__ {int filepos; } ;
typedef TYPE_1__ asection ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (char*,scalar_t__,int *) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (TYPE_1__*) ;
 scalar_t__ FUNC_3 (int *,int ,int ) ;
 int FUNC_4 (char*,int ) ;
 scalar_t__ FUNC_5 (int *,scalar_t__) ;
 scalar_t__ FUNC_6 (int *,TYPE_1__*,int *) ;

char *
FUNC_7 (struct objfile *VAR_1, asection *VAR_2)
{
  bfd *VAR_3 = VAR_1->obfd;
  char *VAR_4, *VAR_5;
  bfd_size_type VAR_6 = FUNC_2 (VAR_2);

  if (VAR_6 == 0)
    return ((void*)0);

  VAR_4 = (char *) FUNC_5 (&VAR_1->objfile_obstack, VAR_6);
  VAR_5
    = (char *) FUNC_6 (VAR_3, VAR_2, (bfd_byte *) VAR_4);
  if (VAR_5 != ((void*)0))
    return VAR_5;

  if (FUNC_3 (VAR_3, VAR_2->filepos, VAR_0) != 0
      || FUNC_0 (VAR_4, VAR_6, VAR_3) != VAR_6)
    FUNC_4 ("Dwarf Error: Can't read DWARF data from '%s'",
    FUNC_1 (VAR_3));

  return VAR_4;
}
