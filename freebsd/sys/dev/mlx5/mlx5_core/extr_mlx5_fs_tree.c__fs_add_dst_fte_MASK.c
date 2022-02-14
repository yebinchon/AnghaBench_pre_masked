
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mlx5_flow_table {int id; int type; int vport; int base; } ;
struct TYPE_2__ {int list; int type; } ;
struct mlx5_flow_rule {TYPE_1__ base; int clients_lock; int clients_data; int dest_attr; } ;
struct mlx5_flow_group {int id; } ;
struct mlx5_flow_destination {int dummy; } ;
struct fs_fte {int dests_size; int dests; int action; int flow_tag; int index; int val; int status; } ;


 int VAR_0 ;
 struct mlx5_flow_rule* FUNC_0 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct mlx5_flow_table*,struct mlx5_flow_group*) ;
 int FUNC_4 (struct mlx5_flow_rule*) ;
 struct mlx5_flow_rule* FUNC_5 (int,int ) ;
 int FUNC_6 (int *,int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *,struct mlx5_flow_destination*,int) ;
 int FUNC_9 (int ,int ,int *,int ,int ,int ,int ,int ,int ,int ,int ,int *) ;
 int FUNC_10 (int *) ;

__attribute__((used)) static struct mlx5_flow_rule *FUNC_11(struct fs_fte *VAR_3,
           struct mlx5_flow_group *VAR_4,
           struct mlx5_flow_destination *VAR_5)
{
 struct mlx5_flow_table *VAR_6;
 struct mlx5_flow_rule *VAR_7;
 int VAR_8;

 VAR_7 = FUNC_5(sizeof(*VAR_7), VAR_2);
 if (!VAR_7)
  return FUNC_0(-VAR_0);

 FUNC_8(&VAR_7->dest_attr, VAR_5, sizeof(*VAR_5));
 VAR_7->base.type = VAR_1;
 FUNC_1(&VAR_7->clients_data);
 FUNC_10(&VAR_7->clients_lock);
 FUNC_3(VAR_6, VAR_4);

 FUNC_6(&VAR_7->base.list, &VAR_3->dests);
 VAR_3->dests_size++;
 VAR_8 = FUNC_9(FUNC_2(&VAR_6->base),
      VAR_6->vport,
      &VAR_3->status,
      VAR_3->val, VAR_6->type,
      VAR_6->id, VAR_3->index, VAR_4->id, VAR_3->flow_tag,
      VAR_3->action, VAR_3->dests_size, &VAR_3->dests);
 if (VAR_8)
  goto free_dst;

 FUNC_7(&VAR_7->base.list);

 return VAR_7;

free_dst:
 FUNC_7(&VAR_7->base.list);
 FUNC_4(VAR_7);
 VAR_3->dests_size--;
 return FUNC_0(VAR_8);
}
