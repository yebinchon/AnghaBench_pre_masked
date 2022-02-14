
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {int initialized; int toggle; scalar_t__ pool; scalar_t__ hcr; scalar_t__ use_events; int event_sem; int poll_sem; int slave_cmd_mutex; int switch_sem; } ;
struct TYPE_6__ {scalar_t__ vhcr; int vhcr_dma; } ;
struct mlx4_priv {TYPE_3__ cmd; TYPE_1__ mfunc; } ;
struct mlx4_dev {TYPE_2__* persist; } ;
struct TYPE_9__ {int dev; } ;
struct TYPE_7__ {TYPE_4__* pdev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ FUNC_0 (int *,int ,int *,int ) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (scalar_t__,int ) ;
 int FUNC_3 (struct mlx4_dev*,int) ;
 int FUNC_4 (struct mlx4_dev*,char*) ;
 scalar_t__ FUNC_5 (struct mlx4_dev*) ;
 int FUNC_6 (struct mlx4_dev*) ;
 struct mlx4_priv* FUNC_7 (struct mlx4_dev*) ;
 int FUNC_8 (int *) ;
 scalar_t__ FUNC_9 (char*,TYPE_4__*,int ,int ,int ) ;
 scalar_t__ FUNC_10 (TYPE_4__*,int ) ;
 int FUNC_11 (int *,int) ;

int FUNC_12(struct mlx4_dev *VAR_10)
{
 struct mlx4_priv *VAR_11 = FUNC_7(VAR_10);
 int VAR_12 = 0;

 if (!VAR_11->cmd.initialized) {
  FUNC_1(&VAR_11->cmd.switch_sem);
  FUNC_8(&VAR_11->cmd.slave_cmd_mutex);
  FUNC_11(&VAR_11->cmd.poll_sem, 1);
  FUNC_11(&VAR_11->cmd.event_sem, 0);
  VAR_11->cmd.use_events = 0;
  VAR_11->cmd.toggle = 1;
  VAR_11->cmd.initialized = 1;
  VAR_12 |= VAR_4;
 }

 if (!FUNC_6(VAR_10) && !VAR_11->cmd.hcr) {
  VAR_11->cmd.hcr = FUNC_2(FUNC_10(VAR_10->persist->pdev,
     0) + VAR_6, VAR_7);
  if (!VAR_11->cmd.hcr) {
   FUNC_4(VAR_10, "Couldn't map command register\n");
   goto err;
  }
  VAR_12 |= VAR_2;
 }

 if (FUNC_5(VAR_10) && !VAR_11->mfunc.vhcr) {
  VAR_11->mfunc.vhcr = FUNC_0(&VAR_10->persist->pdev->dev,
            VAR_9,
            &VAR_11->mfunc.vhcr_dma,
            VAR_1);
  if (!VAR_11->mfunc.vhcr)
   goto err;

  VAR_12 |= VAR_5;
 }

 if (!VAR_11->cmd.pool) {
  VAR_11->cmd.pool = FUNC_9("mlx4_cmd",
       VAR_10->persist->pdev,
       VAR_8,
       VAR_8, 0);
  if (!VAR_11->cmd.pool)
   goto err;

  VAR_12 |= VAR_3;
 }

 return 0;

err:
 FUNC_3(VAR_10, VAR_12);
 return -VAR_0;
}
