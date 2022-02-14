
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {struct debug_array_type* karray; } ;
struct debug_type {TYPE_1__ u; } ;
struct debug_handle {int dummy; } ;
struct debug_array_type {int stringp; void* upper; void* lower; struct debug_type* range_type; struct debug_type* element_type; } ;
typedef struct debug_type* debug_type ;
typedef void* bfd_signed_vma ;
typedef int bfd_boolean ;


 int VAR_0 ;
 struct debug_type* VAR_1 ;
 struct debug_type* FUNC_0 (struct debug_handle*,int ,int ) ;
 int FUNC_1 (struct debug_array_type*,int ,int) ;
 scalar_t__ FUNC_2 (int) ;

debug_type
FUNC_3 (void *VAR_2, debug_type VAR_3,
         debug_type VAR_4, bfd_signed_vma VAR_5,
         bfd_signed_vma VAR_6, bfd_boolean VAR_7)
{
  struct debug_handle *VAR_8 = (struct debug_handle *) VAR_2;
  struct debug_type *VAR_9;
  struct debug_array_type *VAR_10;

  if (VAR_3 == ((void*)0) || VAR_4 == ((void*)0))
    return VAR_1;

  VAR_9 = FUNC_0 (VAR_8, VAR_0, 0);
  if (VAR_9 == ((void*)0))
    return VAR_1;

  VAR_10 = (struct debug_array_type *) FUNC_2 (sizeof *VAR_10);
  FUNC_1 (VAR_10, 0, sizeof *VAR_10);

  VAR_10->element_type = VAR_3;
  VAR_10->range_type = VAR_4;
  VAR_10->lower = VAR_5;
  VAR_10->upper = VAR_6;
  VAR_10->stringp = VAR_7;

  VAR_9->u.karray = VAR_10;

  return VAR_9;
}
