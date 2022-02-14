
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct stat {long st_mtime; } ;
struct section_offsets {int dummy; } ;
struct TYPE_10__ {scalar_t__ list; } ;
struct objfile {long mtime; int num_sections; int flags; TYPE_2__* sf; struct section_offsets* section_offsets; int objfile_obstack; int name; void* macro_cache; void* psymbol_cache; int * md; int * fundamental_types; TYPE_3__ msymbol_demangled_hash; TYPE_3__ msymbol_hash; scalar_t__ minimal_symbol_count; int * sym_private; int * msymbols; int * cp_namespace_symtab; int * free_psymtabs; int * psymtabs; int * symtabs; int * sections; int * demangled_names_hash; TYPE_3__ static_psymbols; TYPE_3__ global_psymbols; TYPE_4__* obfd; struct objfile* next; } ;
struct cleanup {int dummy; } ;
struct TYPE_11__ {TYPE_1__* my_archive; } ;
struct TYPE_9__ {int (* sym_read ) (struct objfile*,int ) ;int (* sym_init ) (struct objfile*) ;int (* sym_new_init ) (struct objfile*) ;int (* sym_finish ) (struct objfile*) ;} ;
struct TYPE_8__ {int filename; } ;


 int VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 (int) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (void*) ;
 void* FUNC_4 () ;
 int FUNC_5 (TYPE_4__*,int ) ;
 int FUNC_6 (TYPE_4__*) ;
 char* FUNC_7 (int ) ;
 int FUNC_8 () ;
 char* FUNC_9 (TYPE_4__*) ;
 int VAR_1 ;
 TYPE_4__* FUNC_10 (char*,int ) ;
 scalar_t__ FUNC_11 (struct objfile*) ;
 int FUNC_12 (int *,int,int) ;
 int FUNC_13 (struct objfile*) ;
 int FUNC_14 () ;
 int VAR_2 ;
 int FUNC_15 (struct cleanup*) ;
 int FUNC_16 (char*,int ,...) ;
 int VAR_3 ;
 int FUNC_17 () ;
 int FUNC_18 () ;
 int FUNC_19 (int *) ;
 int FUNC_20 (int ,int ) ;
 struct cleanup* FUNC_21 (struct objfile*) ;
 int FUNC_22 (struct section_offsets*,struct section_offsets*,int ) ;
 int FUNC_23 (TYPE_3__*,int ,int) ;
 struct objfile* VAR_4 ;
 scalar_t__ FUNC_24 (int *,int ) ;
 int FUNC_25 (int *,int ) ;
 int FUNC_26 (int *) ;
 int FUNC_27 (char*,...) ;
 int FUNC_28 () ;
 int FUNC_29 (struct objfile*) ;
 int FUNC_30 (int ,struct stat*) ;
 int FUNC_31 (struct objfile*) ;
 int FUNC_32 (struct objfile*) ;
 int FUNC_33 (struct objfile*) ;
 int FUNC_34 (struct objfile*,int ) ;
 int VAR_5 ;
 struct objfile* VAR_6 ;
 int FUNC_35 (struct objfile*) ;
 int FUNC_36 (char*) ;
 int FUNC_37 (int *,scalar_t__) ;

void
FUNC_38 (void)
{
  struct objfile *VAR_7;
  long VAR_8;
  int VAR_9 = 0;
  struct stat VAR_10;
  int VAR_11;







  for (VAR_7 = VAR_4; VAR_7; VAR_7 = VAR_7->next)
    {
      if (VAR_7->obfd)
 {
     VAR_11 = FUNC_30 (VAR_7->name, &VAR_10);
   if (VAR_11 != 0)
     {

       FUNC_27 ("`%s' has disappeared; keeping its symbols.\n",
          VAR_7->name);
       continue;
     }
   VAR_8 = VAR_10.st_mtime;
   if (VAR_8 != VAR_7->mtime)
     {
       struct cleanup *VAR_12;
       struct section_offsets *VAR_13;
       int VAR_14;
       char *VAR_15;

       FUNC_27 ("`%s' has changed; re-reading symbols.\n",
          VAR_7->name);
       VAR_12 = FUNC_21 (VAR_7);

       FUNC_20 (VAR_2, 0 );




       VAR_15 = FUNC_9 (VAR_7->obfd);
       if (!FUNC_6 (VAR_7->obfd))
  FUNC_16 ("Can't close BFD for %s: %s", VAR_7->name,
         FUNC_7 (FUNC_8 ()));
       VAR_7->obfd = FUNC_10 (VAR_15, VAR_3);
       if (VAR_7->obfd == ((void*)0))
  FUNC_16 ("Can't open %s to read symbols.", VAR_7->name);

       if (!FUNC_5 (VAR_7->obfd, VAR_1))
  FUNC_16 ("Can't read symbols from %s: %s.", VAR_7->name,
         FUNC_7 (FUNC_8 ()));



       VAR_14 = VAR_7->num_sections;
       VAR_13 = ((struct section_offsets *)
    FUNC_2 (FUNC_1 (VAR_14)));
       FUNC_22 (VAR_13, VAR_7->section_offsets,
        FUNC_1 (VAR_14));







       if (VAR_7->global_psymbols.list)
  FUNC_37 (VAR_7->md, VAR_7->global_psymbols.list);
       FUNC_23 (&VAR_7->global_psymbols, 0,
        sizeof (VAR_7->global_psymbols));
       if (VAR_7->static_psymbols.list)
  FUNC_37 (VAR_7->md, VAR_7->static_psymbols.list);
       FUNC_23 (&VAR_7->static_psymbols, 0,
        sizeof (VAR_7->static_psymbols));


       FUNC_3 (VAR_7->psymbol_cache);
       VAR_7->psymbol_cache = FUNC_4 ();
       FUNC_3 (VAR_7->macro_cache);
       VAR_7->macro_cache = FUNC_4 ();
       if (VAR_7->demangled_names_hash != ((void*)0))
  {
    FUNC_19 (VAR_7->demangled_names_hash);
    VAR_7->demangled_names_hash = ((void*)0);
  }
       FUNC_25 (&VAR_7->objfile_obstack, 0);
       VAR_7->sections = ((void*)0);
       VAR_7->symtabs = ((void*)0);
       VAR_7->psymtabs = ((void*)0);
       VAR_7->free_psymtabs = ((void*)0);
       VAR_7->cp_namespace_symtab = ((void*)0);
       VAR_7->msymbols = ((void*)0);
       VAR_7->sym_private = ((void*)0);
       VAR_7->minimal_symbol_count = 0;
       FUNC_23 (&VAR_7->msymbol_hash, 0,
        sizeof (VAR_7->msymbol_hash));
       FUNC_23 (&VAR_7->msymbol_demangled_hash, 0,
        sizeof (VAR_7->msymbol_demangled_hash));
       VAR_7->fundamental_types = ((void*)0);
       FUNC_13 (VAR_7);
       if (VAR_7->sf != ((void*)0))
  {
    (*VAR_7->sf->sym_finish) (VAR_7);
  }


       VAR_7->md = ((void*)0);
       VAR_7->psymbol_cache = FUNC_4 ();
       VAR_7->macro_cache = FUNC_4 ();




       FUNC_26 (&VAR_7->objfile_obstack);
       if (FUNC_11 (VAR_7))
  {
    FUNC_16 ("Can't find the file sections in `%s': %s",
    VAR_7->name, FUNC_7 (FUNC_8 ()));
  }
              FUNC_35 (VAR_7);



       VAR_7->section_offsets = (struct section_offsets *)
  FUNC_24 (&VAR_7->objfile_obstack,
          FUNC_1 (VAR_14));
       FUNC_22 (VAR_7->section_offsets, VAR_13,
        FUNC_1 (VAR_14));
       VAR_7->num_sections = VAR_14;




       if (VAR_7 == VAR_6)
  {
    (*VAR_7->sf->sym_new_init) (VAR_7);



  }

       (*VAR_7->sf->sym_init) (VAR_7);
       FUNC_12 (&VAR_5, 1, 1);



       (*VAR_7->sf->sym_read) (VAR_7, 0);
       if (!FUNC_18 () && !FUNC_17 ())
  {
    FUNC_36 ("");
    FUNC_27 ("(no debugging symbols found)\n");
    FUNC_36 ("");
  }
       VAR_7->flags |= VAR_0;


       FUNC_12 (&VAR_5, 0, 1);




       FUNC_28 ();


       FUNC_15 (VAR_12);




       VAR_7->mtime = VAR_8;
       VAR_9 = 1;
              FUNC_29 (VAR_7);
     }
 }
    }

  if (VAR_9)
    FUNC_14 ();
}
