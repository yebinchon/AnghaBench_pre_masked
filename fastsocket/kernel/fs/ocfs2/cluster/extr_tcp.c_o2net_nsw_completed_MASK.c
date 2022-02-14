
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct o2net_status_wait {int ns_node_item; } ;
struct o2net_node {int nn_lock; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static int FUNC_3(struct o2net_node *VAR_0,
          struct o2net_status_wait *VAR_1)
{
 int VAR_2;
 FUNC_1(&VAR_0->nn_lock);
 VAR_2 = FUNC_0(&VAR_1->ns_node_item);
 FUNC_2(&VAR_0->nn_lock);
 return VAR_2;
}
