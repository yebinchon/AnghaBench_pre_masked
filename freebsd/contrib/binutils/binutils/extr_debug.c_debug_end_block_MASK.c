
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct debug_handle {struct debug_block* current_block; int * current_unit; } ;
struct debug_block {int end; struct debug_block* parent; } ;
typedef int bfd_vma ;
typedef int bfd_boolean ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int ) ;

bfd_boolean
FUNC_2 (void *VAR_2, bfd_vma VAR_3)
{
  struct debug_handle *VAR_4 = (struct debug_handle *) VAR_2;
  struct debug_block *VAR_5;

  if (VAR_4->current_unit == ((void*)0)
      || VAR_4->current_block == ((void*)0))
    {
      FUNC_1 (FUNC_0("debug_end_block: no current block"));
      return VAR_0;
    }

  VAR_5 = VAR_4->current_block->parent;
  if (VAR_5 == ((void*)0))
    {
      FUNC_1 (FUNC_0("debug_end_block: attempt to close top level block"));
      return VAR_0;
    }

  VAR_4->current_block->end = VAR_3;

  VAR_4->current_block = VAR_5;

  return VAR_1;
}
