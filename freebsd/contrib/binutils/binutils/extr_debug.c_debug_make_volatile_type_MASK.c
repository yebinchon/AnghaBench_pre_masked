
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {struct debug_type* kvolatile; } ;
struct debug_type {TYPE_1__ u; } ;
struct debug_handle {int dummy; } ;
typedef struct debug_type* debug_type ;


 int VAR_0 ;
 struct debug_type* VAR_1 ;
 struct debug_type* FUNC_0 (struct debug_handle*,int ,int ) ;

debug_type
FUNC_1 (void *VAR_2, debug_type VAR_3)
{
  struct debug_handle *VAR_4 = (struct debug_handle *) VAR_2;
  struct debug_type *VAR_5;

  if (VAR_3 == ((void*)0))
    return VAR_1;

  VAR_5 = FUNC_0 (VAR_4, VAR_0, 0);
  if (VAR_5 == ((void*)0))
    return VAR_1;

  VAR_5->u.kvolatile = VAR_3;

  return VAR_5;
}
