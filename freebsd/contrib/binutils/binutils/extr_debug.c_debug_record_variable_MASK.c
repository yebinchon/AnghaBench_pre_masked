
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct debug_variable {int kind; int val; int * type; } ;
struct debug_namespace {int dummy; } ;
struct TYPE_6__ {struct debug_variable* variable; } ;
struct debug_name {TYPE_3__ u; } ;
struct debug_handle {TYPE_2__* current_block; TYPE_1__* current_file; int * current_unit; } ;
typedef enum debug_var_kind { ____Placeholder_debug_var_kind } debug_var_kind ;
typedef enum debug_object_linkage { ____Placeholder_debug_object_linkage } debug_object_linkage ;
typedef int * debug_type ;
typedef int bfd_vma ;
typedef int bfd_boolean ;
struct TYPE_5__ {struct debug_namespace* locals; } ;
struct TYPE_4__ {struct debug_namespace* globals; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (char*) ;
 struct debug_name* FUNC_1 (struct debug_handle*,struct debug_namespace**,char const*,int ,int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct debug_variable*,int ,int) ;
 scalar_t__ FUNC_4 (int) ;

bfd_boolean
FUNC_5 (void *VAR_8, const char *VAR_9, debug_type VAR_10,
         enum debug_var_kind VAR_11, bfd_vma VAR_12)
{
  struct debug_handle *VAR_13 = (struct debug_handle *) VAR_8;
  struct debug_namespace **VAR_14;
  enum debug_object_linkage VAR_15;
  struct debug_name *VAR_16;
  struct debug_variable *VAR_17;

  if (VAR_9 == ((void*)0) || VAR_10 == ((void*)0))
    return VAR_6;

  if (VAR_13->current_unit == ((void*)0)
      || VAR_13->current_file == ((void*)0))
    {
      FUNC_2 (FUNC_0("debug_record_variable: no current file"));
      return VAR_6;
    }

  if (VAR_11 == VAR_0 || VAR_11 == VAR_5)
    {
      VAR_14 = &VAR_13->current_file->globals;
      if (VAR_11 == VAR_0)
 VAR_15 = VAR_2;
      else
 VAR_15 = VAR_3;
    }
  else
    {
      if (VAR_13->current_block == ((void*)0))
 VAR_14 = &VAR_13->current_file->globals;
      else
 VAR_14 = &VAR_13->current_block->locals;
      VAR_15 = VAR_1;
    }

  VAR_16 = FUNC_1 (VAR_13, VAR_14, VAR_9, VAR_4, VAR_15);
  if (VAR_16 == ((void*)0))
    return VAR_6;

  VAR_17 = (struct debug_variable *) FUNC_4 (sizeof *VAR_17);
  FUNC_3 (VAR_17, 0, sizeof *VAR_17);

  VAR_17->kind = VAR_11;
  VAR_17->type = VAR_10;
  VAR_17->val = VAR_12;

  VAR_16->u.variable = VAR_17;

  return VAR_7;
}
