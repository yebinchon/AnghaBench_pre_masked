
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct debug_typed_constant {int val; int * type; } ;
struct TYPE_2__ {struct debug_typed_constant* typed_constant; } ;
struct debug_name {TYPE_1__ u; } ;
struct debug_handle {int dummy; } ;
typedef int * debug_type ;
typedef int bfd_vma ;
typedef int bfd_boolean ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct debug_name* FUNC_0 (struct debug_handle*,char const*,int ,int ) ;
 int FUNC_1 (struct debug_typed_constant*,int ,int) ;
 scalar_t__ FUNC_2 (int) ;

bfd_boolean
FUNC_3 (void *VAR_4, const char *VAR_5, debug_type VAR_6,
     bfd_vma VAR_7)
{
  struct debug_handle *VAR_8 = (struct debug_handle *) VAR_4;
  struct debug_name *VAR_9;
  struct debug_typed_constant *VAR_10;

  if (VAR_5 == ((void*)0) || VAR_6 == ((void*)0))
    return VAR_2;

  VAR_9 = FUNC_0 (VAR_8, VAR_5, VAR_1,
          VAR_0);
  if (VAR_9 == ((void*)0))
    return VAR_2;

  VAR_10 = (struct debug_typed_constant *) FUNC_2 (sizeof *VAR_10);
  FUNC_1 (VAR_10, 0, sizeof *VAR_10);

  VAR_10->type = VAR_6;
  VAR_10->val = VAR_7;

  VAR_9->u.typed_constant = VAR_10;

  return VAR_3;
}
