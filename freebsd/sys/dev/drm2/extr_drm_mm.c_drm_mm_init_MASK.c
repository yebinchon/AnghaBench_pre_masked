
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int hole_follows; unsigned long start; unsigned long size; int hole_stack; struct drm_mm* mm; scalar_t__ scanned_next_free; scalar_t__ scanned_prev_free; scalar_t__ scanned_block; int node_list; } ;
struct drm_mm {int * color_adjust; int hole_stack; TYPE_1__ head_node; int unused_lock; scalar_t__ scanned_blocks; scalar_t__ num_unused; int unused_nodes; } ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int *,char*,int *,int ) ;

int FUNC_3(struct drm_mm * VAR_1, unsigned long VAR_2, unsigned long VAR_3)
{
 FUNC_0(&VAR_1->hole_stack);
 FUNC_0(&VAR_1->unused_nodes);
 VAR_1->num_unused = 0;
 VAR_1->scanned_blocks = 0;
 FUNC_2(&VAR_1->unused_lock, "drm_unused", ((void*)0), VAR_0);


 FUNC_0(&VAR_1->head_node.node_list);
 FUNC_0(&VAR_1->head_node.hole_stack);
 VAR_1->head_node.hole_follows = 1;
 VAR_1->head_node.scanned_block = 0;
 VAR_1->head_node.scanned_prev_free = 0;
 VAR_1->head_node.scanned_next_free = 0;
 VAR_1->head_node.mm = VAR_1;
 VAR_1->head_node.start = VAR_2 + VAR_3;
 VAR_1->head_node.size = VAR_2 - VAR_1->head_node.start;
 FUNC_1(&VAR_1->head_node.hole_stack, &VAR_1->hole_stack);

 VAR_1->color_adjust = ((void*)0);

 return 0;
}
