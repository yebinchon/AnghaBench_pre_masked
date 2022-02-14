
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_8__ {struct objfile* list; } ;
struct TYPE_7__ {struct objfile* list; } ;
struct objfile {int md; int objfile_obstack; scalar_t__ demangled_names_hash; int macro_cache; int psymbol_cache; TYPE_4__ static_psymbols; TYPE_3__ global_psymbols; struct objfile* name; int * obfd; TYPE_2__* sf; TYPE_1__* separate_debug_objfile_backlink; struct objfile* separate_debug_objfile; } ;
struct TYPE_6__ {int (* sym_finish ) (struct objfile*) ;} ;
struct TYPE_5__ {int * separate_debug_objfile; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ) ;
 int FUNC_3 () ;
 char* FUNC_4 (int *) ;
 int FUNC_5 () ;
 int FUNC_6 (scalar_t__) ;
 int FUNC_7 (struct objfile*) ;
 int FUNC_8 (int *,int ) ;
 struct objfile* VAR_0 ;
 int FUNC_9 (struct objfile*) ;
 int FUNC_10 (struct objfile*) ;
 int FUNC_11 (char*,char*,int ) ;
 int FUNC_12 (char*) ;
 int FUNC_13 (int ,struct objfile*) ;

void
FUNC_14 (struct objfile *VAR_1)
{
  if (VAR_1->separate_debug_objfile)
    {
      FUNC_14 (VAR_1->separate_debug_objfile);
    }

  if (VAR_1->separate_debug_objfile_backlink)
    {


      VAR_1->separate_debug_objfile_backlink->separate_debug_objfile = ((void*)0);
    }
  if (VAR_1->sf != ((void*)0))
    {
      (*VAR_1->sf->sym_finish) (VAR_1);
    }



  if (VAR_1->obfd != ((void*)0))
    {
      char *VAR_2 = FUNC_4 (VAR_1->obfd);
      if (!FUNC_1 (VAR_1->obfd))
 FUNC_11 ("cannot close \"%s\": %s",
   VAR_2, FUNC_2 (FUNC_3 ()));
      FUNC_12 (VAR_2);
    }



  FUNC_10 (VAR_1);




  if (VAR_1 == VAR_0)
    VAR_0 = ((void*)0);
  FUNC_5 ();



  FUNC_7 (VAR_1);
  if (VAR_1->name != ((void*)0))
    {
      FUNC_13 (VAR_1->md, VAR_1->name);
    }
  if (VAR_1->global_psymbols.list)
    FUNC_13 (VAR_1->md, VAR_1->global_psymbols.list);
  if (VAR_1->static_psymbols.list)
    FUNC_13 (VAR_1->md, VAR_1->static_psymbols.list);

  FUNC_0 (VAR_1->psymbol_cache);
  FUNC_0 (VAR_1->macro_cache);
  if (VAR_1->demangled_names_hash)
    FUNC_6 (VAR_1->demangled_names_hash);
  FUNC_8 (&VAR_1->objfile_obstack, 0);
  FUNC_13 (VAR_1->md, VAR_1);
  VAR_1 = ((void*)0);
}
