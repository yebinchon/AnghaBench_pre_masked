
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {struct debug_class_type* kclass; } ;
struct debug_type {TYPE_1__ u; } ;
struct debug_handle {int dummy; } ;
struct debug_class_type {int * fields; } ;
typedef struct debug_type* debug_type ;
typedef int debug_field ;
typedef int bfd_vma ;
typedef scalar_t__ bfd_boolean ;


 int VAR_0 ;
 int VAR_1 ;
 struct debug_type* VAR_2 ;
 struct debug_type* FUNC_0 (struct debug_handle*,int ,int ) ;
 int FUNC_1 (struct debug_class_type*,int ,int) ;
 scalar_t__ FUNC_2 (int) ;

debug_type
FUNC_3 (void *VAR_3, bfd_boolean VAR_4, bfd_vma VAR_5,
   debug_field *VAR_6)
{
  struct debug_handle *VAR_7 = (struct debug_handle *) VAR_3;
  struct debug_type *VAR_8;
  struct debug_class_type *VAR_9;

  VAR_8 = FUNC_0 (VAR_7,
         VAR_4 ? VAR_0 : VAR_1,
         VAR_5);
  if (VAR_8 == ((void*)0))
    return VAR_2;

  VAR_9 = (struct debug_class_type *) FUNC_2 (sizeof *VAR_9);
  FUNC_1 (VAR_9, 0, sizeof *VAR_9);

  VAR_9->fields = VAR_6;

  VAR_8->u.kclass = VAR_9;

  return VAR_8;
}
