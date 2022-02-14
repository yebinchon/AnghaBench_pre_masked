
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {struct debug_class_type* kclass; } ;
struct debug_type {scalar_t__ kind; TYPE_1__ u; } ;
struct debug_handle {scalar_t__ base_id; scalar_t__ class_id; struct debug_class_id* id_list; } ;
struct debug_class_type {scalar_t__ id; } ;
struct debug_class_id {char const* tag; struct debug_class_id* next; struct debug_type* type; } ;
typedef int bfd_boolean ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (struct debug_handle*,struct debug_type*,struct debug_type*) ;
 int FUNC_2 (struct debug_class_id*,int ,int) ;
 scalar_t__ FUNC_3 (char const*,char const*) ;
 scalar_t__ FUNC_4 (int) ;

__attribute__((used)) static bfd_boolean
FUNC_5 (struct debug_handle *VAR_5, const char *VAR_6,
      struct debug_type *VAR_7)
{
  struct debug_class_type *VAR_8;
  struct debug_class_id *VAR_9;

  FUNC_0 (VAR_7->kind == VAR_1
   || VAR_7->kind == VAR_2
   || VAR_7->kind == VAR_0
   || VAR_7->kind == VAR_3);

  VAR_8 = VAR_7->u.kclass;

  if (VAR_8->id > VAR_5->base_id)
    return VAR_4;

  for (VAR_9 = VAR_5->id_list; VAR_9 != ((void*)0); VAR_9 = VAR_9->next)
    {
      if (VAR_9->type->kind != VAR_7->kind)
 continue;

      if (VAR_6 == ((void*)0))
 {
   if (VAR_9->tag != ((void*)0))
     continue;
 }
      else
 {
   if (VAR_9->tag == ((void*)0)
       || VAR_9->tag[0] != VAR_6[0]
       || FUNC_3 (VAR_9->tag, VAR_6) != 0)
     continue;
 }

      if (FUNC_1 (VAR_5, VAR_9->type, VAR_7))
 {
   VAR_8->id = VAR_9->type->u.kclass->id;
   return VAR_4;
 }
    }



  ++VAR_5->class_id;
  VAR_8->id = VAR_5->class_id;

  VAR_9 = (struct debug_class_id *) FUNC_4 (sizeof *VAR_9);
  FUNC_2 (VAR_9, 0, sizeof *VAR_9);

  VAR_9->type = VAR_7;
  VAR_9->tag = VAR_6;

  VAR_9->next = VAR_5->id_list;
  VAR_5->id_list = VAR_9;

  return VAR_4;
}
