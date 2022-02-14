
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct objfile {struct objfile* next; int * md; int name; int objfile_obstack; void* macro_cache; void* psymbol_cache; } ;


 void* FUNC_0 () ;
 int FUNC_1 (struct objfile*,int ,int) ;
 int FUNC_2 (int *,char*) ;
 struct objfile* VAR_0 ;
 int FUNC_3 (int *) ;
 struct objfile* VAR_1 ;
 scalar_t__ FUNC_4 (int) ;

__attribute__((used)) static void
FUNC_5 (void)
{
  struct objfile *VAR_2;
  struct objfile *VAR_3;

  VAR_2 = (struct objfile *) FUNC_4 (sizeof (struct objfile));
  FUNC_1 (VAR_2, 0, sizeof (struct objfile));
  VAR_2->md = ((void*)0);
  VAR_2->psymbol_cache = FUNC_0 ();
  VAR_2->macro_cache = FUNC_0 ();
  FUNC_3 (&VAR_2->objfile_obstack);
  VAR_2->name = FUNC_2 (VAR_2->md, "rt_common");



  VAR_2->next = ((void*)0);
  if (VAR_0 == ((void*)0))
    VAR_0 = VAR_2;
  else
    {
      for (VAR_3 = VAR_0;
    VAR_3->next;
    VAR_3 = VAR_3->next);
      VAR_3->next = VAR_2;
    }

  VAR_1 = VAR_2;
}
