
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_mm_node {int node_list; } ;
struct drm_mm {int num_unused; int unused_lock; int unused_nodes; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *,int *) ;
 struct drm_mm_node* FUNC_1 (int,int ,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int ) ;

int FUNC_5(struct drm_mm *VAR_5)
{
 struct drm_mm_node *VAR_6;

 FUNC_2(&VAR_5->unused_lock);
 while (VAR_5->num_unused < VAR_2) {
  FUNC_3(&VAR_5->unused_lock);
  VAR_6 = FUNC_1(sizeof(*VAR_6), VAR_0, VAR_3 | VAR_4);
  FUNC_2(&VAR_5->unused_lock);

  if (FUNC_4(VAR_6 == ((void*)0))) {
   int VAR_7 = (VAR_5->num_unused < 2) ? -VAR_1 : 0;
   FUNC_3(&VAR_5->unused_lock);
   return VAR_7;
  }
  ++VAR_5->num_unused;
  FUNC_0(&VAR_6->node_list, &VAR_5->unused_nodes);
 }
 FUNC_3(&VAR_5->unused_lock);
 return 0;
}
