
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {struct debug_range_type* krange; } ;
struct debug_type {TYPE_1__ u; } ;
struct debug_range_type {void* upper; void* lower; struct debug_type* type; } ;
struct debug_handle {int dummy; } ;
typedef struct debug_type* debug_type ;
typedef void* bfd_signed_vma ;


 int VAR_0 ;
 struct debug_type* VAR_1 ;
 struct debug_type* FUNC_0 (struct debug_handle*,int ,int ) ;
 int FUNC_1 (struct debug_range_type*,int ,int) ;
 scalar_t__ FUNC_2 (int) ;

debug_type
FUNC_3 (void *VAR_2, debug_type VAR_3, bfd_signed_vma VAR_4,
         bfd_signed_vma VAR_5)
{
  struct debug_handle *VAR_6 = (struct debug_handle *) VAR_2;
  struct debug_type *VAR_7;
  struct debug_range_type *VAR_8;

  if (VAR_3 == ((void*)0))
    return VAR_1;

  VAR_7 = FUNC_0 (VAR_6, VAR_0, 0);
  if (VAR_7 == ((void*)0))
    return VAR_1;

  VAR_8 = (struct debug_range_type *) FUNC_2 (sizeof *VAR_8);
  FUNC_1 (VAR_8, 0, sizeof *VAR_8);

  VAR_8->type = VAR_3;
  VAR_8->lower = VAR_4;
  VAR_8->upper = VAR_5;

  VAR_7->u.krange = VAR_8;

  return VAR_7;
}
