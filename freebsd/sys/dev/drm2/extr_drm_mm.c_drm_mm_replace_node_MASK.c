
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_mm_node {int allocated; int color; int size; int start; int mm; int hole_follows; int hole_stack; int node_list; } ;


 int FUNC_0 (int *,int *) ;

void FUNC_1(struct drm_mm_node *VAR_0, struct drm_mm_node *VAR_1)
{
 FUNC_0(&VAR_0->node_list, &VAR_1->node_list);
 FUNC_0(&VAR_0->hole_stack, &VAR_1->hole_stack);
 VAR_1->hole_follows = VAR_0->hole_follows;
 VAR_1->mm = VAR_0->mm;
 VAR_1->start = VAR_0->start;
 VAR_1->size = VAR_0->size;
 VAR_1->color = VAR_0->color;

 VAR_0->allocated = 0;
 VAR_1->allocated = 1;
}
