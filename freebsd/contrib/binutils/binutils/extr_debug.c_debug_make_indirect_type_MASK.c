
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {struct debug_indirect_type* kindirect; } ;
struct debug_type {TYPE_1__ u; } ;
struct debug_indirect_type {char const* tag; struct debug_type** slot; } ;
struct debug_handle {int dummy; } ;
typedef struct debug_type* debug_type ;


 int VAR_0 ;
 struct debug_type* VAR_1 ;
 struct debug_type* FUNC_0 (struct debug_handle*,int ,int ) ;
 int FUNC_1 (struct debug_indirect_type*,int ,int) ;
 scalar_t__ FUNC_2 (int) ;

debug_type
FUNC_3 (void *VAR_2, debug_type *VAR_3, const char *VAR_4)
{
  struct debug_handle *VAR_5 = (struct debug_handle *) VAR_2;
  struct debug_type *VAR_6;
  struct debug_indirect_type *VAR_7;

  VAR_6 = FUNC_0 (VAR_5, VAR_0, 0);
  if (VAR_6 == ((void*)0))
    return VAR_1;

  VAR_7 = (struct debug_indirect_type *) FUNC_2 (sizeof *VAR_7);
  FUNC_1 (VAR_7, 0, sizeof *VAR_7);

  VAR_7->slot = VAR_3;
  VAR_7->tag = VAR_4;

  VAR_6->u.kindirect = VAR_7;

  return VAR_6;
}
