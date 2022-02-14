
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {scalar_t__ sorted; int * name; TYPE_1__* exclude_name_list; } ;
struct wildcard_list {struct wildcard_list* next; TYPE_2__ spec; } ;
struct TYPE_10__ {int name; struct TYPE_10__* next; } ;
typedef TYPE_4__ name_list ;
struct TYPE_9__ {int head; } ;
struct TYPE_11__ {TYPE_3__ children; struct wildcard_list* section_list; scalar_t__ filenames_sorted; int * filename; } ;
typedef TYPE_5__ lang_wild_statement_type ;
typedef int lang_output_section_statement_type ;
struct TYPE_7__ {TYPE_4__* next; int name; } ;


 int FUNC_0 (char*,...) ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 (int ,int *) ;

__attribute__((used)) static void
FUNC_4 (lang_wild_statement_type *VAR_0,
        lang_output_section_statement_type *VAR_1)
{
  struct wildcard_list *VAR_2;

  FUNC_2 ();

  if (VAR_0->filenames_sorted)
    FUNC_0 ("SORT(");
  if (VAR_0->filename != ((void*)0))
    FUNC_0 ("%s", VAR_0->filename);
  else
    FUNC_0 ("*");
  if (VAR_0->filenames_sorted)
    FUNC_0 (")");

  FUNC_0 ("(");
  for (VAR_2 = VAR_0->section_list; VAR_2; VAR_2 = VAR_2->next)
    {
      if (VAR_2->spec.sorted)
 FUNC_0 ("SORT(");
      if (VAR_2->spec.exclude_name_list != ((void*)0))
 {
   name_list *VAR_3;
   FUNC_0 ("EXCLUDE_FILE(%s", VAR_2->spec.exclude_name_list->name);
   for (VAR_3 = VAR_2->spec.exclude_name_list->next; VAR_3; VAR_3 = VAR_3->next)
     FUNC_0 (" %s", VAR_3->name);
   FUNC_0 (") ");
 }
      if (VAR_2->spec.name != ((void*)0))
 FUNC_0 ("%s", VAR_2->spec.name);
      else
 FUNC_0 ("*");
      if (VAR_2->spec.sorted)
 FUNC_0 (")");
      if (VAR_2->next)
 FUNC_0 (" ");
    }
  FUNC_0 (")");

  FUNC_1 ();

  FUNC_3 (VAR_0->children.head, VAR_1);
}
