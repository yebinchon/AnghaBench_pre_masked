
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mlx5_flow_table {int dummy; } ;
struct list_head {int dummy; } ;
struct TYPE_2__ {int lock; } ;
struct fs_prio {TYPE_1__ base; } ;


 struct mlx5_flow_table* FUNC_0 (struct fs_prio*,struct list_head*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static struct mlx5_flow_table *FUNC_3(struct fs_prio *VAR_0,
            struct list_head *VAR_1)
{
 struct mlx5_flow_table *VAR_2;

 if (!VAR_0)
  return ((void*)0);

 FUNC_1(&VAR_0->base.lock);
 VAR_2 = FUNC_0(VAR_0, VAR_1);
 FUNC_2(&VAR_0->base.lock);

 return VAR_2;
}
