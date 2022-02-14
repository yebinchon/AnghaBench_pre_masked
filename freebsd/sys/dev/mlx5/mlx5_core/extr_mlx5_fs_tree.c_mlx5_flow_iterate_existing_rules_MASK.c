
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlx5_flow_namespace {int dests_rw_sem; int notifiers_rw_sem; } ;
typedef int rule_event_fn ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct mlx5_flow_namespace*,int ,void*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

void FUNC_5(struct mlx5_flow_namespace *VAR_0,
      rule_event_fn VAR_1,
      void *VAR_2)
{
 FUNC_1(&VAR_0->dests_rw_sem);
 FUNC_0(&VAR_0->notifiers_rw_sem);
 FUNC_2(VAR_0, VAR_1, VAR_2);
 FUNC_3(&VAR_0->notifiers_rw_sem);
 FUNC_4(&VAR_0->dests_rw_sem);
}
