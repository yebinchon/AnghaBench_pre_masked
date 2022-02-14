
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct ui_file {int dummy; } ;
struct TYPE_6__ {scalar_t__ list; } ;
struct TYPE_5__ {scalar_t__ list; } ;
struct partial_symtab {int number_of_dependencies; scalar_t__ n_global_syms; scalar_t__ n_static_syms; scalar_t__ statics_offset; TYPE_3__ static_psymbols; scalar_t__ globals_offset; TYPE_2__ global_psymbols; int filename; struct partial_symtab** dependencies; int texthigh; int textlow; int section_offsets; TYPE_1__* objfile; struct partial_symtab* read_symtab; struct partial_symtab* symtab; scalar_t__ readin; int name; } ;
struct objfile {int number_of_dependencies; scalar_t__ n_global_syms; scalar_t__ n_static_syms; scalar_t__ statics_offset; TYPE_3__ static_psymbols; scalar_t__ globals_offset; TYPE_2__ global_psymbols; int filename; struct objfile** dependencies; int texthigh; int textlow; int section_offsets; TYPE_1__* objfile; struct objfile* read_symtab; struct objfile* symtab; scalar_t__ readin; int name; } ;
struct TYPE_4__ {int num_sections; } ;


 int FUNC_0 (int ,int) ;
 int FUNC_1 (struct ui_file*,char*,...) ;
 int FUNC_2 (struct ui_file*,char*,...) ;
 int FUNC_3 (struct partial_symtab*,struct ui_file*) ;
 int FUNC_4 (int ,int,struct ui_file*) ;
 int FUNC_5 (scalar_t__,scalar_t__,char*,struct ui_file*) ;
 int FUNC_6 (char*) ;

__attribute__((used)) static void
FUNC_7 (struct objfile *VAR_0, struct partial_symtab *VAR_1,
       struct ui_file *VAR_2)
{
  int VAR_3;

  FUNC_1 (VAR_2, "\nPartial symtab for source file %s ",
      VAR_1->filename);
  FUNC_1 (VAR_2, "(object ");
  FUNC_3 (VAR_1, VAR_2);
  FUNC_1 (VAR_2, ")\n\n");
  FUNC_2 (VAR_2, "  Read from object file %s (",
        VAR_0->name);
  FUNC_3 (VAR_0, VAR_2);
  FUNC_2 (VAR_2, ")\n");

  if (VAR_1->readin)
    {
      FUNC_1 (VAR_2,
   "  Full symtab was read (at ");
      FUNC_3 (VAR_1->symtab, VAR_2);
      FUNC_1 (VAR_2, " by function at ");
      FUNC_3 (VAR_1->read_symtab, VAR_2);
      FUNC_1 (VAR_2, ")\n");
    }

  FUNC_1 (VAR_2, "  Relocate symbols by ");
  for (VAR_3 = 0; VAR_3 < VAR_1->objfile->num_sections; ++VAR_3)
    {
      if (VAR_3 != 0)
 FUNC_1 (VAR_2, ", ");
      FUNC_6 ("    ");
      FUNC_4 (FUNC_0 (VAR_1->section_offsets, VAR_3),
        1,
        VAR_2);
    }
  FUNC_1 (VAR_2, "\n");

  FUNC_1 (VAR_2, "  Symbols cover text addresses ");
  FUNC_4 (VAR_1->textlow, 1, VAR_2);
  FUNC_1 (VAR_2, "-");
  FUNC_4 (VAR_1->texthigh, 1, VAR_2);
  FUNC_1 (VAR_2, "\n");
  FUNC_1 (VAR_2, "  Depends on %d other partial symtabs.\n",
      VAR_1->number_of_dependencies);
  for (VAR_3 = 0; VAR_3 < VAR_1->number_of_dependencies; VAR_3++)
    {
      FUNC_1 (VAR_2, "    %d ", VAR_3);
      FUNC_3 (VAR_1->dependencies[VAR_3], VAR_2);
      FUNC_1 (VAR_2, " %s\n",
   VAR_1->dependencies[VAR_3]->filename);
    }
  if (VAR_1->n_global_syms > 0)
    {
      FUNC_5 (VAR_0->global_psymbols.list
        + VAR_1->globals_offset,
        VAR_1->n_global_syms, "Global", VAR_2);
    }
  if (VAR_1->n_static_syms > 0)
    {
      FUNC_5 (VAR_0->static_psymbols.list
        + VAR_1->statics_offset,
        VAR_1->n_static_syms, "Static", VAR_2);
    }
  FUNC_1 (VAR_2, "\n");
}
