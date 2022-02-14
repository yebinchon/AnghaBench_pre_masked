
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct objfile {int sect_index_text; int sect_index_data; int sect_index_bss; int sect_index_rodata; int flags; struct objfile* next; int * cp_namespace_symtab; int * md; int * name; int mtime; int * obfd; int objfile_obstack; void* macro_cache; void* psymbol_cache; } ;
typedef int bfd ;


 void* FUNC_0 () ;
 char* FUNC_1 (int ) ;
 int FUNC_2 () ;
 char* FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (struct objfile*) ;
 int FUNC_6 (char*,int *,char*) ;
 int FUNC_7 (struct objfile*,int ,int) ;
 void* FUNC_8 (int *,char*) ;
 struct objfile* VAR_0 ;
 int FUNC_9 (struct objfile*) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (struct objfile*) ;
 scalar_t__ FUNC_12 (int) ;
 int FUNC_13 (int *,int *) ;

struct objfile *
FUNC_14 (bfd *VAR_1, int VAR_2)
{
  struct objfile *VAR_3 = ((void*)0);
  struct objfile *VAR_4 = ((void*)0);





  if (VAR_3 == ((void*)0))
    {
      VAR_3 = (struct objfile *) FUNC_12 (sizeof (struct objfile));
      FUNC_7 (VAR_3, 0, sizeof (struct objfile));
      VAR_3->md = ((void*)0);
      VAR_3->psymbol_cache = FUNC_0 ();
      VAR_3->macro_cache = FUNC_0 ();


      FUNC_10 (&VAR_3->objfile_obstack);
      FUNC_11 (VAR_3);
    }

  FUNC_9 (VAR_3);





  VAR_3->obfd = VAR_1;
  if (VAR_3->name != ((void*)0))
    {
      FUNC_13 (VAR_3->md, VAR_3->name);
    }
  if (VAR_1 != ((void*)0))
    {
      VAR_3->name = FUNC_8 (VAR_3->md, FUNC_3 (VAR_1));
      VAR_3->mtime = FUNC_4 (VAR_1);



      if (FUNC_5 (VAR_3))
 {
   FUNC_6 ("Can't find the file sections in `%s': %s",
   VAR_3->name, FUNC_1 (FUNC_2 ()));
 }
    }
  else
    {
      VAR_3->name = FUNC_8 (VAR_3->md, "<<anonymous objfile>>");
    }




  VAR_3->sect_index_text = -1;
  VAR_3->sect_index_data = -1;
  VAR_3->sect_index_bss = -1;
  VAR_3->sect_index_rodata = -1;



  VAR_3->cp_namespace_symtab = ((void*)0);



  VAR_3->next = ((void*)0);
  if (VAR_0 == ((void*)0))
    VAR_0 = VAR_3;
  else
    {
      for (VAR_4 = VAR_0;
    VAR_4->next;
    VAR_4 = VAR_4->next);
      VAR_4->next = VAR_3;
    }


  VAR_3->flags |= VAR_2;

  return (VAR_3);
}
