
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ ls_event; scalar_t__* ls_stack; scalar_t__ ls_caller; } ;
typedef TYPE_1__ lsrec_t ;


 int VAR_0 ;

__attribute__((used)) static int
FUNC_0(lsrec_t *VAR_1, lsrec_t *VAR_2)
{
 int VAR_3;

 if (VAR_1->ls_event < VAR_2->ls_event)
  return (-1);
 if (VAR_1->ls_event > VAR_2->ls_event)
  return (1);

 for (VAR_3 = VAR_0 - 1; VAR_3 >= 0; VAR_3--) {
  if (VAR_1->ls_stack[VAR_3] < VAR_2->ls_stack[VAR_3])
   return (-1);
  if (VAR_1->ls_stack[VAR_3] > VAR_2->ls_stack[VAR_3])
   return (1);
 }

 if (VAR_1->ls_caller < VAR_2->ls_caller)
  return (-1);
 if (VAR_1->ls_caller > VAR_2->ls_caller)
  return (1);

 return (0);
}
