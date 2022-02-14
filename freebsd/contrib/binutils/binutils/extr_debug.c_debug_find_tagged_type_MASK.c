
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct debug_unit {struct debug_file* files; struct debug_unit* next; } ;
struct TYPE_7__ {TYPE_3__* tag; } ;
struct debug_name {scalar_t__ kind; char const* name; TYPE_2__ u; struct debug_name* next; } ;
struct debug_handle {struct debug_unit* units; } ;
struct debug_file {TYPE_1__* globals; struct debug_file* next; } ;
typedef enum debug_type_kind { ____Placeholder_debug_type_kind } debug_type_kind ;
typedef TYPE_3__* debug_type ;
struct TYPE_8__ {int kind; } ;
struct TYPE_6__ {struct debug_name* list; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 TYPE_3__* VAR_2 ;
 scalar_t__ FUNC_0 (char const*,char const*) ;

debug_type
FUNC_1 (void *VAR_3, const char *VAR_4,
   enum debug_type_kind VAR_5)
{
  struct debug_handle *VAR_6 = (struct debug_handle *) VAR_3;
  struct debug_unit *VAR_7;




  for (VAR_7 = VAR_6->units; VAR_7 != ((void*)0); VAR_7 = VAR_7->next)
    {
      struct debug_file *VAR_8;

      for (VAR_8 = VAR_7->files; VAR_8 != ((void*)0); VAR_8 = VAR_8->next)
 {
   struct debug_name *VAR_9;

   if (VAR_8->globals != ((void*)0))
     {
       for (VAR_9 = VAR_8->globals->list; VAR_9 != ((void*)0); VAR_9 = VAR_9->next)
  {
    if (VAR_9->kind == VAR_1
        && (VAR_5 == VAR_0
     || VAR_9->u.tag->kind == VAR_5)
        && VAR_9->name[0] == VAR_4[0]
        && FUNC_0 (VAR_9->name, VAR_4) == 0)
      return VAR_9->u.tag;
  }
     }
 }
    }

  return VAR_2;
}
