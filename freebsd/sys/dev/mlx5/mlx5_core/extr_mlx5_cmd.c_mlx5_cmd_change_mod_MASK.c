
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlx5_cmd {int mode; int max_reg_cmds; int sem; int pages_sem; } ;
struct mlx5_core_dev {struct mlx5_cmd cmd; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void FUNC_2(struct mlx5_core_dev *VAR_0, int VAR_1)
{
 struct mlx5_cmd *VAR_2 = &VAR_0->cmd;
 int VAR_3;

 if (VAR_2->mode == VAR_1)
  return;

 for (VAR_3 = 0; VAR_3 < VAR_2->max_reg_cmds; VAR_3++)
  FUNC_0(&VAR_2->sem);

 FUNC_0(&VAR_2->pages_sem);
 VAR_2->mode = VAR_1;

 FUNC_1(&VAR_2->pages_sem);
 for (VAR_3 = 0; VAR_3 < VAR_2->max_reg_cmds; VAR_3++)
  FUNC_1(&VAR_2->sem);
}
