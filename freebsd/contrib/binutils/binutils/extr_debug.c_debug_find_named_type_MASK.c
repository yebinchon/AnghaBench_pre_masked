
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_8__ {int type; } ;
struct debug_name {scalar_t__ kind; char const* name; TYPE_4__ u; struct debug_name* next; } ;
struct debug_handle {TYPE_2__* current_unit; struct debug_block* current_block; } ;
struct debug_file {TYPE_3__* globals; struct debug_file* next; } ;
struct debug_block {TYPE_1__* locals; struct debug_block* parent; } ;
typedef int debug_type ;
struct TYPE_7__ {struct debug_name* list; } ;
struct TYPE_6__ {struct debug_file* files; } ;
struct TYPE_5__ {struct debug_name* list; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (char const*,char const*) ;

debug_type
FUNC_3 (void *VAR_2, const char *VAR_3)
{
  struct debug_handle *VAR_4 = (struct debug_handle *) VAR_2;
  struct debug_block *VAR_5;
  struct debug_file *VAR_6;




  if (VAR_4->current_unit == ((void*)0))
    {
      FUNC_1 (FUNC_0("debug_find_named_type: no current compilation unit"));
      return VAR_1;
    }

  for (VAR_5 = VAR_4->current_block; VAR_5 != ((void*)0); VAR_5 = VAR_5->parent)
    {
      if (VAR_5->locals != ((void*)0))
 {
   struct debug_name *VAR_7;

   for (VAR_7 = VAR_5->locals->list; VAR_7 != ((void*)0); VAR_7 = VAR_7->next)
     {
       if (VAR_7->kind == VAR_0
    && VAR_7->name[0] == VAR_3[0]
    && FUNC_2 (VAR_7->name, VAR_3) == 0)
  return VAR_7->u.type;
     }
 }
    }

  for (VAR_6 = VAR_4->current_unit->files; VAR_6 != ((void*)0); VAR_6 = VAR_6->next)
    {
      if (VAR_6->globals != ((void*)0))
 {
   struct debug_name *VAR_8;

   for (VAR_8 = VAR_6->globals->list; VAR_8 != ((void*)0); VAR_8 = VAR_8->next)
     {
       if (VAR_8->kind == VAR_0
    && VAR_8->name[0] == VAR_3[0]
    && FUNC_2 (VAR_8->name, VAR_3) == 0)
  return VAR_8->u.type;
     }
 }
    }

  return VAR_1;
}
