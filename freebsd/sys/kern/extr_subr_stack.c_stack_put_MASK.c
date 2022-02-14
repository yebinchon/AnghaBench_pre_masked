
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vm_offset_t ;
struct stack {scalar_t__ depth; int * pcs; } ;


 scalar_t__ VAR_0 ;

int
FUNC_0(struct stack *VAR_1, vm_offset_t VAR_2)
{

 if (VAR_1->depth < VAR_0) {
  VAR_1->pcs[VAR_1->depth++] = VAR_2;
  return (0);
 } else
  return (-1);
}
