
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ipt_clusterip_tgt_info {int num_local_nodes; scalar_t__* local_nodes; } ;
struct clusterip_config {int local_nodes; } ;


 int FUNC_0 (scalar_t__,int *) ;

__attribute__((used)) static void
FUNC_1(struct clusterip_config *VAR_0,
          const struct ipt_clusterip_tgt_info *VAR_1)
{
 int VAR_2;

 for (VAR_2 = 0; VAR_2 < VAR_1->num_local_nodes; VAR_2++)
  FUNC_0(VAR_1->local_nodes[VAR_2] - 1, &VAR_0->local_nodes);
}
