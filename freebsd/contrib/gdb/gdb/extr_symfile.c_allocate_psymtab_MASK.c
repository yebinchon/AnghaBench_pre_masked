
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct partial_symtab {struct partial_symtab* next; struct objfile* objfile; int * symtab; int filename; } ;
struct objfile {struct partial_symtab* psymtabs; int objfile_obstack; struct partial_symtab* free_psymtabs; } ;


 int FUNC_0 (struct partial_symtab*,int ,int) ;
 int FUNC_1 (char*,int ,int *) ;
 scalar_t__ FUNC_2 (int *,int) ;
 int FUNC_3 (char*) ;

struct partial_symtab *
FUNC_4 (char *VAR_0, struct objfile *VAR_1)
{
  struct partial_symtab *VAR_2;

  if (VAR_1->free_psymtabs)
    {
      VAR_2 = VAR_1->free_psymtabs;
      VAR_1->free_psymtabs = VAR_2->next;
    }
  else
    VAR_2 = (struct partial_symtab *)
      FUNC_2 (&VAR_1->objfile_obstack,
       sizeof (struct partial_symtab));

  FUNC_0 (VAR_2, 0, sizeof (struct partial_symtab));
  VAR_2->filename = FUNC_1 (VAR_0, FUNC_3 (VAR_0),
        &VAR_1->objfile_obstack);
  VAR_2->symtab = ((void*)0);





  VAR_2->objfile = VAR_1;
  VAR_2->next = VAR_1->psymtabs;
  VAR_1->psymtabs = VAR_2;
  return (VAR_2);
}
