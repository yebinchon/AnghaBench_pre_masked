
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct mlx5_core_health {void* wq; void* wq_watchdog; int recover_work; int work_cmd_completion; int work_watchdog; int work; int wq_lock; void* wq_cmd; } ;
struct TYPE_3__ {struct mlx5_core_health health; } ;
struct mlx5_core_dev {TYPE_2__* pdev; TYPE_1__ priv; } ;
typedef int name ;
struct TYPE_4__ {int dev; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int *,int ) ;
 void* FUNC_2 (char*) ;
 int FUNC_3 (void*) ;
 char* FUNC_4 (int *) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_5 (char*,int,char*,char*) ;
 int FUNC_6 (int *) ;

int FUNC_7(struct mlx5_core_dev *VAR_5)
{
 struct mlx5_core_health *VAR_6;
 char VAR_7[64];

 VAR_6 = &VAR_5->priv.health;

 FUNC_5(VAR_7, sizeof(VAR_7), "%s-rec", FUNC_4(&VAR_5->pdev->dev));
 VAR_6->wq = FUNC_2(VAR_7);
 if (!VAR_6->wq)
  goto err_recovery;

 FUNC_5(VAR_7, sizeof(VAR_7), "%s-wdg", FUNC_4(&VAR_5->pdev->dev));
 VAR_6->wq_watchdog = FUNC_2(VAR_7);
 if (!VAR_6->wq_watchdog)
  goto err_watchdog;

 FUNC_5(VAR_7, sizeof(VAR_7), "%s-cmd", FUNC_4(&VAR_5->pdev->dev));
 VAR_6->wq_cmd = FUNC_2(VAR_7);
 if (!VAR_6->wq_cmd)
  goto err_cmd;

 FUNC_6(&VAR_6->wq_lock);
 FUNC_1(&VAR_6->work, VAR_1);
 FUNC_1(&VAR_6->work_watchdog, VAR_3);
 FUNC_1(&VAR_6->work_cmd_completion, VAR_4);
 FUNC_0(&VAR_6->recover_work, VAR_2);

 return 0;

err_cmd:
 FUNC_3(VAR_6->wq_watchdog);
err_watchdog:
 FUNC_3(VAR_6->wq);
err_recovery:
 return -VAR_0;
}
