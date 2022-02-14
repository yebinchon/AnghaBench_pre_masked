
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct wildcard_spec {scalar_t__ sorted; int * name; } ;
struct TYPE_5__ {int * name; } ;
struct wildcard_list {struct wildcard_list* next; TYPE_1__ spec; } ;
struct TYPE_6__ {int filenames_sorted; int children; int keep_sections; struct wildcard_list* section_list; int * filename; } ;
typedef TYPE_2__ lang_wild_statement_type ;
typedef int bfd_boolean ;


 int VAR_0 ;
 void* VAR_1 ;
 int FUNC_0 (TYPE_2__*) ;
 scalar_t__ VAR_2 ;
 void* VAR_3 ;
 int FUNC_1 (int *) ;
 int VAR_4 ;
 TYPE_2__* FUNC_2 (int ,int ) ;
 void* VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_3 (int *,char*) ;
 int FUNC_4 (int *) ;

void
FUNC_5 (struct wildcard_spec *VAR_7,
        struct wildcard_list *VAR_8,
        bfd_boolean VAR_9)
{
  struct wildcard_list *VAR_10, *VAR_11;
  lang_wild_statement_type *VAR_12;


  for (VAR_10 = VAR_8, VAR_8 = ((void*)0);
       VAR_10 != ((void*)0);
       VAR_8 = VAR_10, VAR_10 = VAR_11)
    {
      if (VAR_10->spec.name != ((void*)0) && FUNC_3 (VAR_10->spec.name, "COMMON") == 0)
 VAR_5 = VAR_1;

      VAR_11 = VAR_10->next;
      VAR_10->next = VAR_8;
    }

  if (VAR_7 != ((void*)0) && VAR_7->name != ((void*)0))
    {
      if (FUNC_3 (VAR_7->name, "*") == 0)
 VAR_7->name = ((void*)0);
      else if (! FUNC_4 (VAR_7->name))
 VAR_3 = VAR_1;
    }

  VAR_12 = FUNC_2 (VAR_4, VAR_6);
  VAR_12->filename = ((void*)0);
  VAR_12->filenames_sorted = VAR_0;
  if (VAR_7 != ((void*)0))
    {
      VAR_12->filename = VAR_7->name;
      VAR_12->filenames_sorted = VAR_7->sorted == VAR_2;
    }
  VAR_12->section_list = VAR_8;
  VAR_12->keep_sections = VAR_9;
  FUNC_1 (&VAR_12->children);
  FUNC_0 (VAR_12);
}
