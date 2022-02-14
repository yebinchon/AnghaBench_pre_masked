
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct symloc {scalar_t__ numsyms; scalar_t__ first_symnum; scalar_t__ lineno_off; } ;
struct partial_symtab {char* read_symtab_private; scalar_t__ n_global_syms; scalar_t__ globals_offset; scalar_t__ n_static_syms; scalar_t__ statics_offset; int number_of_dependencies; int filename; int read_symtab; scalar_t__ symtab; scalar_t__ readin; struct partial_symtab** dependencies; scalar_t__ texthigh; scalar_t__ textlow; int section_offsets; struct objfile* objfile; } ;
struct TYPE_4__ {scalar_t__ next; scalar_t__ list; } ;
struct TYPE_3__ {scalar_t__ next; scalar_t__ list; } ;
struct objfile {int objfile_obstack; TYPE_2__ static_psymbols; TYPE_1__ global_psymbols; } ;


 struct partial_symtab* FUNC_0 (char*,struct objfile*) ;
 int FUNC_1 (struct partial_symtab*) ;
 scalar_t__ VAR_0 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct partial_symtab**,struct partial_symtab**,int) ;
 scalar_t__ FUNC_4 (int *,int) ;
 int FUNC_5 (struct partial_symtab*) ;

__attribute__((used)) static struct partial_symtab *
FUNC_6 (struct partial_symtab *VAR_1, char **VAR_2,
     int VAR_3, int VAR_4,
     struct partial_symtab **VAR_5,
     int VAR_6, int VAR_7)
{
  int VAR_8;
  struct objfile *VAR_9 = VAR_1->objfile;

  if (VAR_4 != -1)
    ((struct symloc *) VAR_1->read_symtab_private)->numsyms =
      VAR_4
      - ((struct symloc *) VAR_1->read_symtab_private)->first_symnum;
  ((struct symloc *) VAR_1->read_symtab_private)->lineno_off =
    VAR_0;
  VAR_0 = 0;
  VAR_1->n_global_syms =
    VAR_9->global_psymbols.next - (VAR_9->global_psymbols.list + VAR_1->globals_offset);
  VAR_1->n_static_syms =
    VAR_9->static_psymbols.next - (VAR_9->static_psymbols.list + VAR_1->statics_offset);

  VAR_1->number_of_dependencies = VAR_6;
  if (VAR_6)
    {
      VAR_1->dependencies = (struct partial_symtab **)
 FUNC_4 (&VAR_9->objfile_obstack,
      VAR_6 * sizeof (struct partial_symtab *));
      FUNC_3 (VAR_1->dependencies, VAR_5,
       VAR_6 * sizeof (struct partial_symtab *));
    }
  else
    VAR_1->dependencies = 0;

  for (VAR_8 = 0; VAR_8 < VAR_3; VAR_8++)
    {
      struct partial_symtab *VAR_10 =
      FUNC_0 (VAR_2[VAR_8], VAR_9);

      VAR_10->section_offsets = VAR_1->section_offsets;
      VAR_10->read_symtab_private =
 (char *) FUNC_4 (&VAR_9->objfile_obstack,
    sizeof (struct symloc));
      ((struct symloc *) VAR_10->read_symtab_private)->first_symnum = 0;
      ((struct symloc *) VAR_10->read_symtab_private)->numsyms = 0;
      VAR_10->textlow = 0;
      VAR_10->texthigh = 0;



      VAR_10->dependencies = (struct partial_symtab **)
 FUNC_4 (&VAR_9->objfile_obstack,
         sizeof (struct partial_symtab *));
      VAR_10->dependencies[0] = VAR_1;
      VAR_10->number_of_dependencies = 1;

      VAR_10->globals_offset =
 VAR_10->n_global_syms =
 VAR_10->statics_offset =
 VAR_10->n_static_syms = 0;

      VAR_10->readin = 0;
      VAR_10->symtab = 0;
      VAR_10->read_symtab = VAR_1->read_symtab;
    }

  FUNC_5 (VAR_1);




  FUNC_2 (VAR_1->filename);

  if (VAR_3 == 0
      && VAR_6 == 0
      && VAR_1->n_global_syms == 0
      && VAR_1->n_static_syms == 0)
    {





      FUNC_1 (VAR_1);


      VAR_1 = (struct partial_symtab *) ((void*)0);
    }
  return VAR_1;
}
