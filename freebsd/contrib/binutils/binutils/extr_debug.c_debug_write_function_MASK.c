
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct debug_write_fns {int (* end_function ) (void*) ;int (* function_parameter ) (void*,int ,int ,int ) ;int (* start_function ) (void*,char const*,int) ;} ;
struct debug_parameter {int val; int kind; int name; int type; struct debug_parameter* next; } ;
struct debug_name {int dummy; } ;
struct debug_handle {int dummy; } ;
struct debug_function {struct debug_block* blocks; struct debug_parameter* parameters; int return_type; } ;
struct debug_block {struct debug_block* next; int start; } ;
typedef enum debug_object_linkage { ____Placeholder_debug_object_linkage } debug_object_linkage ;
typedef int bfd_boolean ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct debug_handle*,struct debug_write_fns const*,void*,struct debug_block*) ;
 int FUNC_1 (struct debug_handle*,struct debug_write_fns const*,void*,int ) ;
 int FUNC_2 (struct debug_handle*,struct debug_write_fns const*,void*,int ,struct debug_name*) ;
 int FUNC_3 (void*,char const*,int) ;
 int FUNC_4 (void*,int ,int ,int ) ;
 int FUNC_5 (void*) ;

__attribute__((used)) static bfd_boolean
FUNC_6 (struct debug_handle *VAR_2,
        const struct debug_write_fns *VAR_3, void *VAR_4,
        const char *VAR_5, enum debug_object_linkage VAR_6,
        struct debug_function *VAR_7)
{
  struct debug_parameter *VAR_8;
  struct debug_block *VAR_9;

  if (! FUNC_1 (VAR_2, VAR_3, VAR_4, VAR_7->blocks->start))
    return VAR_1;

  if (! FUNC_2 (VAR_2, VAR_3, VAR_4, VAR_7->return_type,
     (struct debug_name *) ((void*)0)))
    return VAR_1;

  if (! (*VAR_3->start_function) (VAR_4, VAR_5,
    VAR_6 == VAR_0))
    return VAR_1;

  for (VAR_8 = VAR_7->parameters; VAR_8 != ((void*)0); VAR_8 = VAR_8->next)
    {
      if (! FUNC_2 (VAR_2, VAR_3, VAR_4, VAR_8->type,
         (struct debug_name *) ((void*)0))
   || ! (*VAR_3->function_parameter) (VAR_4, VAR_8->name, VAR_8->kind, VAR_8->val))
 return VAR_1;
    }

  for (VAR_9 = VAR_7->blocks; VAR_9 != ((void*)0); VAR_9 = VAR_9->next)
    {
      if (! FUNC_0 (VAR_2, VAR_3, VAR_4, VAR_9))
 return VAR_1;
    }

  return (*VAR_3->end_function) (VAR_4);
}
