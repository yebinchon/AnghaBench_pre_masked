
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int type; } ;
struct mlx5_flow_namespace {int list_notifiers; int prios; int notifiers_rw_sem; int dests_rw_sem; TYPE_1__ base; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static struct mlx5_flow_namespace *FUNC_2(struct mlx5_flow_namespace
       *VAR_1)
{
 VAR_1->base.type = VAR_0;
 FUNC_1(&VAR_1->dests_rw_sem);
 FUNC_1(&VAR_1->notifiers_rw_sem);
 FUNC_0(&VAR_1->prios);
 FUNC_0(&VAR_1->list_notifiers);

 return VAR_1;
}
