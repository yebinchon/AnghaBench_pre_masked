
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {struct debug_function_type* kfunction; } ;
struct debug_type {TYPE_1__ u; } ;
struct debug_handle {int dummy; } ;
struct debug_function_type {int varargs; struct debug_type** arg_types; struct debug_type* return_type; } ;
typedef struct debug_type* debug_type ;
typedef int bfd_boolean ;


 int VAR_0 ;
 struct debug_type* VAR_1 ;
 struct debug_type* FUNC_0 (struct debug_handle*,int ,int ) ;
 int FUNC_1 (struct debug_function_type*,int ,int) ;
 scalar_t__ FUNC_2 (int) ;

debug_type
FUNC_3 (void *VAR_2, debug_type VAR_3,
     debug_type *VAR_4, bfd_boolean VAR_5)
{
  struct debug_handle *VAR_6 = (struct debug_handle *) VAR_2;
  struct debug_type *VAR_7;
  struct debug_function_type *VAR_8;

  if (VAR_3 == ((void*)0))
    return VAR_1;

  VAR_7 = FUNC_0 (VAR_6, VAR_0, 0);
  if (VAR_7 == ((void*)0))
    return VAR_1;

  VAR_8 = (struct debug_function_type *) FUNC_2 (sizeof *VAR_8);
  FUNC_1 (VAR_8, 0, sizeof *VAR_8);

  VAR_8->return_type = VAR_3;
  VAR_8->arg_types = VAR_4;
  VAR_8->varargs = VAR_5;

  VAR_7->u.kfunction = VAR_8;

  return VAR_7;
}
