
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct debug_handle {struct debug_file* current_file; TYPE_1__* current_unit; } ;
struct debug_file {char const* filename; struct debug_file* next; } ;
typedef int bfd_boolean ;
struct TYPE_2__ {struct debug_file* files; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct debug_file*,int ,int) ;
 scalar_t__ FUNC_3 (char const*,char const*) ;
 scalar_t__ FUNC_4 (int) ;

bfd_boolean
FUNC_5 (void *VAR_2, const char *VAR_3)
{
  struct debug_handle *VAR_4 = (struct debug_handle *) VAR_2;
  struct debug_file *VAR_5, **VAR_6;

  if (VAR_3 == ((void*)0))
    VAR_3 = "";

  if (VAR_4->current_unit == ((void*)0))
    {
      FUNC_1 (FUNC_0("debug_start_source: no debug_set_filename call"));
      return VAR_0;
    }

  for (VAR_5 = VAR_4->current_unit->files; VAR_5 != ((void*)0); VAR_5 = VAR_5->next)
    {
      if (VAR_5->filename[0] == VAR_3[0]
   && VAR_5->filename[1] == VAR_3[1]
   && FUNC_3 (VAR_5->filename, VAR_3) == 0)
 {
   VAR_4->current_file = VAR_5;
   return VAR_1;
 }
    }

  VAR_5 = (struct debug_file *) FUNC_4 (sizeof *VAR_5);
  FUNC_2 (VAR_5, 0, sizeof *VAR_5);

  VAR_5->filename = VAR_3;

  for (VAR_6 = &VAR_4->current_file->next;
       *VAR_6 != ((void*)0);
       VAR_6 = &(*VAR_6)->next)
    ;
  *VAR_6 = VAR_5;

  VAR_4->current_file = VAR_5;

  return VAR_1;
}
