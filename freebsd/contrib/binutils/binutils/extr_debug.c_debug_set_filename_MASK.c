
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct debug_unit {char const* filename; struct debug_unit* next; struct debug_unit* files; } ;
struct debug_handle {int * current_lineno; int * current_block; int * current_function; struct debug_unit* current_unit; struct debug_unit* units; struct debug_unit* current_file; } ;
struct debug_file {char const* filename; struct debug_file* next; struct debug_file* files; } ;
typedef int bfd_boolean ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct debug_unit*,int ,int) ;
 scalar_t__ FUNC_2 (int) ;

bfd_boolean
FUNC_3 (void *VAR_1, const char *VAR_2)
{
  struct debug_handle *VAR_3 = (struct debug_handle *) VAR_1;
  struct debug_file *VAR_4;
  struct debug_unit *VAR_5;

  if (VAR_2 == ((void*)0))
    VAR_2 = "";

  VAR_4 = (struct debug_file *) FUNC_2 (sizeof *VAR_4);
  FUNC_1 (VAR_4, 0, sizeof *VAR_4);

  VAR_4->filename = VAR_2;

  VAR_5 = (struct debug_unit *) FUNC_2 (sizeof *VAR_5);
  FUNC_1 (VAR_5, 0, sizeof *VAR_5);

  VAR_5->files = VAR_4;
  VAR_3->current_file = VAR_4;

  if (VAR_3->current_unit != ((void*)0))
    VAR_3->current_unit->next = VAR_5;
  else
    {
      FUNC_0 (VAR_3->units == ((void*)0));
      VAR_3->units = VAR_5;
    }

  VAR_3->current_unit = VAR_5;

  VAR_3->current_function = ((void*)0);
  VAR_3->current_block = ((void*)0);
  VAR_3->current_lineno = ((void*)0);

  return VAR_0;
}
