
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct objfile {struct obj_section* sections_end; struct obj_section* sections; int objfile_obstack; int obfd; } ;
struct obj_section {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,char*) ;
 scalar_t__ FUNC_1 (int *) ;

int
FUNC_2 (struct objfile *VAR_1)
{






  VAR_1->sections_end = 0;
  FUNC_0 (VAR_1->obfd, VAR_0, (char *) VAR_1);
  VAR_1->sections = (struct obj_section *)
    FUNC_1 (&VAR_1->objfile_obstack);
  VAR_1->sections_end = VAR_1->sections + (unsigned long) VAR_1->sections_end;
  return (0);
}
