
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct debug_write_fns {int (* end_block ) (void*,int ) ;int (* start_block ) (void*,int ) ;} ;
struct debug_name {struct debug_name* next; } ;
struct debug_handle {int dummy; } ;
struct debug_block {int end; int * parent; TYPE_1__* locals; struct debug_block* next; struct debug_block* children; int start; } ;
typedef int bfd_boolean ;
struct TYPE_2__ {struct debug_name* list; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct debug_handle*,struct debug_write_fns const*,void*,int ) ;
 int FUNC_1 (struct debug_handle*,struct debug_write_fns const*,void*,struct debug_name*) ;
 int FUNC_2 (void*,int ) ;
 int FUNC_3 (void*,int ) ;

__attribute__((used)) static bfd_boolean
FUNC_4 (struct debug_handle *VAR_2,
     const struct debug_write_fns *VAR_3, void *VAR_4,
     struct debug_block *VAR_5)
{
  struct debug_name *VAR_6;
  struct debug_block *VAR_7;

  if (! FUNC_0 (VAR_2, VAR_3, VAR_4, VAR_5->start))
    return VAR_0;



  if (VAR_5->locals != ((void*)0) || VAR_5->parent == ((void*)0))
    {
      if (! (*VAR_3->start_block) (VAR_4, VAR_5->start))
 return VAR_0;
    }

  if (VAR_5->locals != ((void*)0))
    {
      for (VAR_6 = VAR_5->locals->list; VAR_6 != ((void*)0); VAR_6 = VAR_6->next)
 {
   if (! FUNC_1 (VAR_2, VAR_3, VAR_4, VAR_6))
     return VAR_0;
 }
    }

  for (VAR_7 = VAR_5->children; VAR_7 != ((void*)0); VAR_7 = VAR_7->next)
    {
      if (! FUNC_4 (VAR_2, VAR_3, VAR_4, VAR_7))
 return VAR_0;
    }

  if (! FUNC_0 (VAR_2, VAR_3, VAR_4, VAR_5->end))
    return VAR_0;

  if (VAR_5->locals != ((void*)0) || VAR_5->parent == ((void*)0))
    {
      if (! (*VAR_3->end_block) (VAR_4, VAR_5->end))
 return VAR_0;
    }

  return VAR_1;
}
