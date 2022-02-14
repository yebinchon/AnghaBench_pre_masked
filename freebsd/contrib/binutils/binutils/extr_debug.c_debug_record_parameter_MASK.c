
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct debug_parameter {char const* name; int kind; struct debug_parameter* next; int val; int * type; } ;
struct debug_handle {TYPE_1__* current_function; int * current_unit; } ;
typedef enum debug_parm_kind { ____Placeholder_debug_parm_kind } debug_parm_kind ;
typedef int * debug_type ;
typedef int bfd_vma ;
typedef int bfd_boolean ;
struct TYPE_2__ {struct debug_parameter* parameters; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct debug_parameter*,int ,int) ;
 scalar_t__ FUNC_3 (int) ;

bfd_boolean
FUNC_4 (void *VAR_2, const char *VAR_3, debug_type VAR_4,
   enum debug_parm_kind VAR_5, bfd_vma VAR_6)
{
  struct debug_handle *VAR_7 = (struct debug_handle *) VAR_2;
  struct debug_parameter *VAR_8, **VAR_9;

  if (VAR_3 == ((void*)0) || VAR_4 == ((void*)0))
    return VAR_0;

  if (VAR_7->current_unit == ((void*)0)
      || VAR_7->current_function == ((void*)0))
    {
      FUNC_1 (FUNC_0("debug_record_parameter: no current function"));
      return VAR_0;
    }

  VAR_8 = (struct debug_parameter *) FUNC_3 (sizeof *VAR_8);
  FUNC_2 (VAR_8, 0, sizeof *VAR_8);

  VAR_8->name = VAR_3;
  VAR_8->type = VAR_4;
  VAR_8->kind = VAR_5;
  VAR_8->val = VAR_6;

  for (VAR_9 = &VAR_7->current_function->parameters;
       *VAR_9 != ((void*)0);
       VAR_9 = &(*VAR_9)->next)
    ;
  *VAR_9 = VAR_8;

  return VAR_1;
}
