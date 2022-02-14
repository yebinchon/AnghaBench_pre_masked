
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct o2nm_node {size_t nd_num; int nd_ip_node; scalar_t__ nd_ipv4_address; } ;
struct o2nm_cluster {size_t cl_local_node; int cl_nodes_lock; int cl_nodes_bitmap; struct o2nm_node** cl_nodes; int cl_node_ip_tree; scalar_t__ cl_has_local; } ;
struct config_item {int dummy; } ;
struct TYPE_2__ {int ci_parent; } ;
struct config_group {TYPE_1__ cg_item; } ;


 size_t VAR_0 ;
 int FUNC_0 (size_t,int ) ;
 int FUNC_1 (struct config_item*) ;
 int FUNC_2 (struct o2nm_node*) ;
 int FUNC_3 (struct o2nm_node*) ;
 int FUNC_4 (int *,int *) ;
 struct o2nm_cluster* FUNC_5 (int ) ;
 struct o2nm_node* FUNC_6 (struct config_item*) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;

__attribute__((used)) static void FUNC_9(struct config_group *VAR_1,
          struct config_item *VAR_2)
{
 struct o2nm_node *VAR_3 = FUNC_6(VAR_2);
 struct o2nm_cluster *VAR_4 = FUNC_5(VAR_1->cg_item.ci_parent);

 FUNC_2(VAR_3);

 if (VAR_4->cl_has_local &&
     (VAR_4->cl_local_node == VAR_3->nd_num)) {
  VAR_4->cl_has_local = 0;
  VAR_4->cl_local_node = VAR_0;
  FUNC_3(VAR_3);
 }



 FUNC_7(&VAR_4->cl_nodes_lock);


 if (VAR_3->nd_ipv4_address)
  FUNC_4(&VAR_3->nd_ip_node, &VAR_4->cl_node_ip_tree);


 if (VAR_4->cl_nodes[VAR_3->nd_num] == VAR_3) {
  VAR_4->cl_nodes[VAR_3->nd_num] = ((void*)0);
  FUNC_0(VAR_3->nd_num, VAR_4->cl_nodes_bitmap);
 }
 FUNC_8(&VAR_4->cl_nodes_lock);

 FUNC_1(VAR_2);
}
