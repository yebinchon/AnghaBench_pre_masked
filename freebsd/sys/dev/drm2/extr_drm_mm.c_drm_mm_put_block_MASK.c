
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_mm_node {int node_list; struct drm_mm* mm; } ;
struct drm_mm {scalar_t__ num_unused; int unused_lock; int unused_nodes; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct drm_mm_node*) ;
 int FUNC_1 (struct drm_mm_node*,int ) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

void FUNC_5(struct drm_mm_node *VAR_2)
{

 struct drm_mm *VAR_3 = VAR_2->mm;

 FUNC_0(VAR_2);

 FUNC_3(&VAR_3->unused_lock);
 if (VAR_3->num_unused < VAR_1) {
  FUNC_2(&VAR_2->node_list, &VAR_3->unused_nodes);
  ++VAR_3->num_unused;
 } else
  FUNC_1(VAR_2, VAR_0);
 FUNC_4(&VAR_3->unused_lock);
}
