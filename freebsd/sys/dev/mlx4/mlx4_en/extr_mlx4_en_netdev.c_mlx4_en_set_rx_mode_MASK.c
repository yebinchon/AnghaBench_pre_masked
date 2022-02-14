
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct net_device {int dummy; } ;
struct mlx4_en_priv {int rx_mode_task; TYPE_1__* mdev; int port_up; } ;
struct TYPE_2__ {int workqueue; } ;


 struct mlx4_en_priv* FUNC_0 (struct net_device*) ;
 int FUNC_1 (int ,int *) ;

__attribute__((used)) static void FUNC_2(struct net_device *VAR_0)
{
 struct mlx4_en_priv *VAR_1 = FUNC_0(VAR_0);

 if (!VAR_1->port_up)
  return;

 FUNC_1(VAR_1->mdev->workqueue, &VAR_1->rx_mode_task);
}
