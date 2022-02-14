
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int tx_priority_flow_control; int rx_priority_flow_control; int tx_pauseframe_control; int rx_pauseframe_control; } ;
struct mlx5e_priv {TYPE_1__ params; int mdev; } ;


 int FUNC_0 (int ,int,int ,int ,int ,int ) ;

__attribute__((used)) static int
FUNC_1(struct mlx5e_priv *VAR_0)
{
 return (FUNC_0(VAR_0->mdev, 1,
     VAR_0->params.rx_pauseframe_control,
     VAR_0->params.tx_pauseframe_control,
     VAR_0->params.rx_priority_flow_control,
     VAR_0->params.tx_priority_flow_control));
}
