
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ use_events; int max_cmds; int switch_sem; int poll_sem; int * context; int event_sem; } ;
struct mlx4_priv {TYPE_1__ cmd; } ;
struct mlx4_dev {int dummy; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 struct mlx4_priv* FUNC_3 (struct mlx4_dev*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

void FUNC_6(struct mlx4_dev *VAR_0)
{
 struct mlx4_priv *VAR_1 = FUNC_3(VAR_0);
 int VAR_2;

 if (VAR_1->cmd.use_events == 0)
  return;

 FUNC_1(&VAR_1->cmd.switch_sem);
 VAR_1->cmd.use_events = 0;

 for (VAR_2 = 0; VAR_2 < VAR_1->cmd.max_cmds; ++VAR_2)
  FUNC_0(&VAR_1->cmd.event_sem);

 FUNC_2(VAR_1->cmd.context);
 VAR_1->cmd.context = ((void*)0);

 FUNC_4(&VAR_1->cmd.poll_sem);
 FUNC_5(&VAR_1->cmd.switch_sem);
}
