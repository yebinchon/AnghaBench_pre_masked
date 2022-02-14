
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct partial_die_info {scalar_t__ tag; int * name; } ;
struct objfile {int * obfd; } ;
struct dwarf2_cu {struct objfile* objfile; } ;
typedef int bfd ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct partial_die_info*,struct dwarf2_cu*,char const*) ;
 int FUNC_1 (int *,char*) ;
 char* FUNC_2 (struct partial_die_info*,int *,char*,struct dwarf2_cu*) ;
 int VAR_1 ;

__attribute__((used)) static char *
FUNC_3 (struct partial_die_info *VAR_2, char *VAR_3,
    struct dwarf2_cu *VAR_4, const char *VAR_5)
{
  struct objfile *VAR_6 = VAR_4->objfile;
  bfd *VAR_7 = VAR_6->obfd;
  struct partial_die_info VAR_8;

  if (VAR_2->name != ((void*)0))
    FUNC_0 (VAR_2, VAR_4, VAR_5);

  while (1)
    {
      VAR_3 = FUNC_2 (&VAR_8, VAR_7, VAR_3, VAR_4);
      if (VAR_8.tag == 0)
 break;
      if (VAR_8.tag != VAR_0 || VAR_8.name == ((void*)0))
 FUNC_1 (&VAR_1, "malformed enumerator DIE ignored");
      else
 FUNC_0 (&VAR_8, VAR_4, VAR_5);
    }

  return VAR_3;
}
