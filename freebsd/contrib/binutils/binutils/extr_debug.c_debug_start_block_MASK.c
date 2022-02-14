
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct debug_handle {struct debug_block* current_block; int * current_unit; } ;
struct debug_block {struct debug_block* next; struct debug_block* children; void* end; void* start; struct debug_block* parent; } ;
typedef void* bfd_vma ;
typedef int bfd_boolean ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct debug_block*,int ,int) ;
 scalar_t__ FUNC_3 (int) ;

bfd_boolean
FUNC_4 (void *VAR_2, bfd_vma VAR_3)
{
  struct debug_handle *VAR_4 = (struct debug_handle *) VAR_2;
  struct debug_block *VAR_5, **VAR_6;



  if (VAR_4->current_unit == ((void*)0)
      || VAR_4->current_block == ((void*)0))
    {
      FUNC_1 (FUNC_0("debug_start_block: no current block"));
      return VAR_0;
    }

  VAR_5 = (struct debug_block *) FUNC_3 (sizeof *VAR_5);
  FUNC_2 (VAR_5, 0, sizeof *VAR_5);

  VAR_5->parent = VAR_4->current_block;
  VAR_5->start = VAR_3;
  VAR_5->end = (bfd_vma) -1;


  for (VAR_6 = &VAR_4->current_block->children;
       *VAR_6 != ((void*)0);
       VAR_6 = &(*VAR_6)->next)
    ;
  *VAR_6 = VAR_5;

  VAR_4->current_block = VAR_5;

  return VAR_1;
}
