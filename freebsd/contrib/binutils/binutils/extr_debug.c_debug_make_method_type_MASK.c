
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {struct debug_method_type* kmethod; } ;
struct debug_type {TYPE_1__ u; } ;
struct debug_method_type {int varargs; struct debug_type** arg_types; struct debug_type* domain_type; struct debug_type* return_type; } ;
struct debug_handle {int dummy; } ;
typedef struct debug_type* debug_type ;
typedef int bfd_boolean ;


 int VAR_0 ;
 struct debug_type* VAR_1 ;
 struct debug_type* FUNC_0 (struct debug_handle*,int ,int ) ;
 int FUNC_1 (struct debug_method_type*,int ,int) ;
 scalar_t__ FUNC_2 (int) ;

debug_type
FUNC_3 (void *VAR_2, debug_type VAR_3,
   debug_type VAR_4, debug_type *VAR_5,
   bfd_boolean VAR_6)
{
  struct debug_handle *VAR_7 = (struct debug_handle *) VAR_2;
  struct debug_type *VAR_8;
  struct debug_method_type *VAR_9;

  if (VAR_3 == ((void*)0))
    return VAR_1;

  VAR_8 = FUNC_0 (VAR_7, VAR_0, 0);
  if (VAR_8 == ((void*)0))
    return VAR_1;

  VAR_9 = (struct debug_method_type *) FUNC_2 (sizeof *VAR_9);
  FUNC_1 (VAR_9, 0, sizeof *VAR_9);

  VAR_9->return_type = VAR_3;
  VAR_9->domain_type = VAR_4;
  VAR_9->arg_types = VAR_5;
  VAR_9->varargs = VAR_6;

  VAR_8->u.kmethod = VAR_9;

  return VAR_8;
}
