
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {struct debug_class_type* kclass; } ;
struct debug_type {TYPE_1__ u; } ;
struct debug_handle {int dummy; } ;
struct debug_class_type {struct debug_type* vptrbase; int * methods; int * baseclasses; int * fields; } ;
typedef struct debug_type* debug_type ;
typedef int debug_method ;
typedef int debug_field ;
typedef int debug_baseclass ;
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
   debug_field *VAR_6, debug_baseclass *VAR_7,
   debug_method *VAR_8, debug_type VAR_9,
   bfd_boolean VAR_10)
{
  struct debug_handle *VAR_11 = (struct debug_handle *) VAR_3;
  struct debug_type *VAR_12;
  struct debug_class_type *VAR_13;

  VAR_12 = FUNC_0 (VAR_11,
         VAR_4 ? VAR_0 : VAR_1,
         VAR_5);
  if (VAR_12 == ((void*)0))
    return VAR_2;

  VAR_13 = (struct debug_class_type *) FUNC_2 (sizeof *VAR_13);
  FUNC_1 (VAR_13, 0, sizeof *VAR_13);

  VAR_13->fields = VAR_6;
  VAR_13->baseclasses = VAR_7;
  VAR_13->methods = VAR_8;
  if (VAR_10)
    VAR_13->vptrbase = VAR_12;
  else
    VAR_13->vptrbase = VAR_9;

  VAR_12->u.kclass = VAR_13;

  return VAR_12;
}
