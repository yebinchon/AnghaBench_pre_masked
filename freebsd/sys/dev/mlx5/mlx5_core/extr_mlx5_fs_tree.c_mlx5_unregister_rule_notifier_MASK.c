
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlx5_flow_namespace {int dests_rw_sem; int notifiers_rw_sem; } ;
struct mlx5_flow_handler {int list; struct mlx5_flow_namespace* ns; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct mlx5_flow_namespace*,int ,struct mlx5_flow_handler*) ;
 int FUNC_2 (struct mlx5_flow_handler*) ;
 int FUNC_3 (int *) ;
 int VAR_0 ;
 int FUNC_4 (int *) ;

void FUNC_5(struct mlx5_flow_handler *VAR_1)
{
 struct mlx5_flow_namespace *VAR_2 = VAR_1->ns;


 FUNC_0(&VAR_2->dests_rw_sem);
 FUNC_0(&VAR_2->notifiers_rw_sem);
 FUNC_1(VAR_2, VAR_0, VAR_1);
 FUNC_3(&VAR_1->list);
 FUNC_4(&VAR_2->notifiers_rw_sem);
 FUNC_4(&VAR_2->dests_rw_sem);
 FUNC_2(VAR_1);
}
