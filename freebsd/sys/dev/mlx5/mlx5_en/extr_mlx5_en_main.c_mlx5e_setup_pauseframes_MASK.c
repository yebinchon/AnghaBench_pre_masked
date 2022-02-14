
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_8__ {int tx_pauseframe_control; int rx_pauseframe_control; scalar_t__ tx_priority_flow_control; scalar_t__ rx_priority_flow_control; } ;
struct mlx5e_priv {TYPE_4__ params; int ifp; int sysctl_ifnet; int sysctl_ctx; TYPE_3__* mdev; } ;
typedef int path ;
struct TYPE_7__ {TYPE_2__* pdev; } ;
struct TYPE_5__ {int bsddev; } ;
struct TYPE_6__ {TYPE_1__ dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct mlx5e_priv*) ;
 int FUNC_1 (struct mlx5e_priv*) ;
 int FUNC_2 (int *,int ,int ,char*,int ,int*,int ,char*) ;
 int FUNC_3 (int *,int ,int ,char*,int,struct mlx5e_priv*,int ,int *,char*,char*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (char*,int*) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ,char*) ;
 int FUNC_8 (struct mlx5e_priv*) ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_9 (char*,int,char*,int) ;

__attribute__((used)) static void
FUNC_10(struct mlx5e_priv *VAR_8)
{

 char VAR_9[96];

 int VAR_10;


 VAR_8->params.tx_pauseframe_control = 1;
 VAR_8->params.rx_pauseframe_control = 1;


 VAR_8->params.tx_priority_flow_control = 0;
 VAR_8->params.rx_priority_flow_control = 0;



 FUNC_9(VAR_9, sizeof(VAR_9), "dev.mce.%d.tx_pauseframe_control",
     FUNC_6(VAR_8->mdev->pdev->dev.bsddev));


 FUNC_5(VAR_9, &VAR_8->params.tx_pauseframe_control);


 FUNC_9(VAR_9, sizeof(VAR_9), "dev.mce.%d.rx_pauseframe_control",
     FUNC_6(VAR_8->mdev->pdev->dev.bsddev));


 FUNC_5(VAR_9, &VAR_8->params.rx_pauseframe_control);



 FUNC_2(&VAR_8->sysctl_ctx, FUNC_4(VAR_8->sysctl_ifnet),
     VAR_5, "tx_pauseframe_control", VAR_1,
     &VAR_8->params.tx_pauseframe_control, 0,
     "Set to enable TX pause frames. Clear to disable.");

 FUNC_2(&VAR_8->sysctl_ctx, FUNC_4(VAR_8->sysctl_ifnet),
     VAR_5, "rx_pauseframe_control", VAR_1,
     &VAR_8->params.rx_pauseframe_control, 0,
     "Set to enable RX pause frames. Clear to disable.");


 FUNC_3(&VAR_8->sysctl_ctx, FUNC_4(VAR_8->sysctl_ifnet),
     VAR_5, "tx_priority_flow_control", VAR_3 | VAR_2 |
     VAR_0, VAR_8, 0, &VAR_7, "CU",
     "Set to enable TX ports flow control frames for priorities 0..7. Clear to disable.");

 FUNC_3(&VAR_8->sysctl_ctx, FUNC_4(VAR_8->sysctl_ifnet),
     VAR_5, "rx_priority_flow_control", VAR_3 | VAR_2 |
     VAR_0, VAR_8, 0, &VAR_6, "CU",
     "Set to enable RX ports flow control frames for priorities 0..7. Clear to disable.");

 FUNC_0(VAR_8);


 VAR_8->params.tx_pauseframe_control =
     VAR_8->params.tx_pauseframe_control ? 1 : 0;
 VAR_8->params.rx_pauseframe_control =
     VAR_8->params.rx_pauseframe_control ? 1 : 0;


 VAR_10 = FUNC_8(VAR_8);
 if (VAR_10 == -VAR_4) {
  FUNC_7(VAR_8->ifp,
      "Global pauseframes must be disabled before enabling PFC.\n");
  VAR_8->params.rx_priority_flow_control = 0;
  VAR_8->params.tx_priority_flow_control = 0;


  (void) FUNC_8(VAR_8);
 }
 FUNC_1(VAR_8);
}
