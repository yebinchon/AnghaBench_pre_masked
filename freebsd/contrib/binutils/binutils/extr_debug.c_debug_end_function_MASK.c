
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct debug_handle {TYPE_1__* current_block; int * current_function; int * current_unit; } ;
typedef int bfd_vma ;
typedef int bfd_boolean ;
struct TYPE_2__ {int end; int * parent; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int ) ;

bfd_boolean
FUNC_2 (void *VAR_2, bfd_vma VAR_3)
{
  struct debug_handle *VAR_4 = (struct debug_handle *) VAR_2;

  if (VAR_4->current_unit == ((void*)0)
      || VAR_4->current_block == ((void*)0)
      || VAR_4->current_function == ((void*)0))
    {
      FUNC_1 (FUNC_0("debug_end_function: no current function"));
      return VAR_0;
    }

  if (VAR_4->current_block->parent != ((void*)0))
    {
      FUNC_1 (FUNC_0("debug_end_function: some blocks were not closed"));
      return VAR_0;
    }

  VAR_4->current_block->end = VAR_3;

  VAR_4->current_function = ((void*)0);
  VAR_4->current_block = ((void*)0);

  return VAR_1;
}
