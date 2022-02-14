
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int max_cmds; int context_lock; struct mlx4_cmd_context* context; } ;
struct mlx4_priv {TYPE_1__ cmd; } ;
struct mlx4_dev {int dummy; } ;
struct mlx4_cmd_context {int done; int result; int fw_status; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 struct mlx4_priv* FUNC_1 (struct mlx4_dev*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

void FUNC_5(struct mlx4_dev *VAR_1)
{
 struct mlx4_priv *VAR_2 = FUNC_1(VAR_1);
 struct mlx4_cmd_context *VAR_3;
 int VAR_4;

 FUNC_3(&VAR_2->cmd.context_lock);
 if (VAR_2->cmd.context != ((void*)0)) {
  for (VAR_4 = 0; VAR_4 < VAR_2->cmd.max_cmds; ++VAR_4) {
   VAR_3 = &VAR_2->cmd.context[VAR_4];
   VAR_3->fw_status = VAR_0;
   VAR_3->result =
    FUNC_2(VAR_0);
   FUNC_0(&VAR_3->done);
  }
 }
 FUNC_4(&VAR_2->cmd.context_lock);
}
