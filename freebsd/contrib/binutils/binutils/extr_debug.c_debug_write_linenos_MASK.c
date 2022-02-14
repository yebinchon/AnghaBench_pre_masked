
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct debug_write_fns {int (* lineno ) (void*,int ,unsigned long,scalar_t__) ;} ;
struct debug_lineno {unsigned long* linenos; scalar_t__* addrs; struct debug_lineno* next; TYPE_1__* file; } ;
struct debug_handle {size_t current_write_lineno_index; struct debug_lineno* current_write_lineno; } ;
typedef scalar_t__ bfd_vma ;
typedef int bfd_boolean ;
struct TYPE_2__ {int filename; } ;


 size_t VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (void*,int ,unsigned long,scalar_t__) ;

__attribute__((used)) static bfd_boolean
FUNC_1 (struct debug_handle *VAR_3,
       const struct debug_write_fns *VAR_4, void *VAR_5,
       bfd_vma VAR_6)
{
  while (VAR_3->current_write_lineno != ((void*)0))
    {
      struct debug_lineno *VAR_7;

      VAR_7 = VAR_3->current_write_lineno;

      while (VAR_3->current_write_lineno_index < VAR_0)
 {
   if (VAR_7->linenos[VAR_3->current_write_lineno_index]
       == (unsigned long) -1)
     break;

   if (VAR_7->addrs[VAR_3->current_write_lineno_index] >= VAR_6)
     return VAR_2;

   if (! (*VAR_4->lineno) (VAR_5, VAR_7->file->filename,
    VAR_7->linenos[VAR_3->current_write_lineno_index],
    VAR_7->addrs[VAR_3->current_write_lineno_index]))
     return VAR_1;

   ++VAR_3->current_write_lineno_index;
 }

      VAR_3->current_write_lineno = VAR_7->next;
      VAR_3->current_write_lineno_index = 0;
    }

  return VAR_2;
}
