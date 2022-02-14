
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct symtab {struct symtab* next; struct objfile* objfile; void* debugformat; int language; int * fullname; void* filename; } ;
struct objfile {struct symtab* symtabs; int objfile_obstack; } ;


 int FUNC_0 (struct symtab*) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (struct symtab*,int ,int) ;
 void* FUNC_3 (char*,int,int *) ;
 scalar_t__ FUNC_4 (int *,int) ;
 int FUNC_5 (char*) ;

struct symtab *
FUNC_6 (char *VAR_0, struct objfile *VAR_1)
{
  struct symtab *VAR_2;

  VAR_2 = (struct symtab *)
    FUNC_4 (&VAR_1->objfile_obstack, sizeof (struct symtab));
  FUNC_2 (VAR_2, 0, sizeof (*VAR_2));
  VAR_2->filename = FUNC_3 (VAR_0, FUNC_5 (VAR_0),
       &VAR_1->objfile_obstack);
  VAR_2->fullname = ((void*)0);
  VAR_2->language = FUNC_1 (VAR_0);
  VAR_2->debugformat = FUNC_3 ("unknown", 7,
          &VAR_1->objfile_obstack);



  VAR_2->objfile = VAR_1;
  VAR_2->next = VAR_1->symtabs;
  VAR_1->symtabs = VAR_2;
  return (VAR_2);
}
