
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct debug_lineno {scalar_t__ file; unsigned long* linenos; struct debug_lineno* next; void** addrs; } ;
struct debug_handle {scalar_t__ current_file; struct debug_lineno* current_lineno; TYPE_1__* current_unit; } ;
typedef void* bfd_vma ;
typedef int bfd_boolean ;
struct TYPE_2__ {struct debug_lineno* linenos; } ;


 unsigned int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct debug_lineno*,int ,int) ;
 scalar_t__ FUNC_3 (int) ;

bfd_boolean
FUNC_4 (void *VAR_3, unsigned long VAR_4, bfd_vma VAR_5)
{
  struct debug_handle *VAR_6 = (struct debug_handle *) VAR_3;
  struct debug_lineno *VAR_7;
  unsigned int VAR_8;

  if (VAR_6->current_unit == ((void*)0))
    {
      FUNC_1 (FUNC_0("debug_record_line: no current unit"));
      return VAR_1;
    }

  VAR_7 = VAR_6->current_lineno;
  if (VAR_7 != ((void*)0) && VAR_7->file == VAR_6->current_file)
    {
      for (VAR_8 = 0; VAR_8 < VAR_0; VAR_8++)
 {
   if (VAR_7->linenos[VAR_8] == (unsigned long) -1)
     {
       VAR_7->linenos[VAR_8] = VAR_4;
       VAR_7->addrs[VAR_8] = VAR_5;
       return VAR_2;
     }
 }
    }
  VAR_7 = (struct debug_lineno *) FUNC_3 (sizeof *VAR_7);
  FUNC_2 (VAR_7, 0, sizeof *VAR_7);

  VAR_7->file = VAR_6->current_file;
  VAR_7->linenos[0] = VAR_4;
  VAR_7->addrs[0] = VAR_5;
  for (VAR_8 = 1; VAR_8 < VAR_0; VAR_8++)
    VAR_7->linenos[VAR_8] = (unsigned long) -1;

  if (VAR_6->current_lineno != ((void*)0))
    VAR_6->current_lineno->next = VAR_7;
  else
    VAR_6->current_unit->linenos = VAR_7;

  VAR_6->current_lineno = VAR_7;

  return VAR_2;
}
