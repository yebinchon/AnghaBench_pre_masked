
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ttm_buffer_object {TYPE_1__* vm_node; } ;
struct TYPE_2__ {scalar_t__ start; } ;



int
FUNC_0(struct ttm_buffer_object *VAR_0,
    struct ttm_buffer_object *VAR_1)
{

 if (VAR_0->vm_node->start < VAR_1->vm_node->start) {
  return (-1);
 } else if (VAR_0->vm_node->start > VAR_1->vm_node->start) {
  return (1);
 } else {
  return (0);
 }
}
