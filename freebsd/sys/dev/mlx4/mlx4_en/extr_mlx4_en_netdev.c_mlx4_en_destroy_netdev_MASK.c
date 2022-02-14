
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct mlx4_en_priv {size_t port; int gone; struct mlx4_en_priv* tx_cq; struct mlx4_en_priv* tx_ring; int conf_ctx; int * conf_sysctl; int watchdog_timer; int service_task; int stats_task; int res; scalar_t__ allocated; scalar_t__ registered; int * vlan_detach; int * vlan_attach; struct mlx4_en_dev* mdev; } ;
struct mlx4_en_dev {int state_lock; int ** pndev; int workqueue; int dev; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int *) ;
 int VAR_1 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ,struct mlx4_en_priv*,char*,size_t) ;
 int FUNC_4 (struct net_device*) ;
 int FUNC_5 (int ) ;
 int VAR_2 ;
 int FUNC_6 (struct net_device*) ;
 int FUNC_7 (struct mlx4_en_priv*) ;
 int FUNC_8 (struct mlx4_en_priv*) ;
 int FUNC_9 (struct net_device*) ;
 int FUNC_10 (int ,int *,int ) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *) ;
 struct mlx4_en_priv* FUNC_13 (struct net_device*) ;
 int FUNC_14 (char*,int ) ;
 int FUNC_15 (int *) ;
 int VAR_3 ;
 int VAR_4 ;

void FUNC_16(struct net_device *VAR_5)
{
 struct mlx4_en_priv *VAR_6 = FUNC_13(VAR_5);
 struct mlx4_en_dev *VAR_7 = VAR_6->mdev;

 FUNC_3(VAR_0, VAR_6, "Destroying netdev on port:%d\n", VAR_6->port);


 VAR_6->gone = 1;


 FUNC_14("W", VAR_2);

 if (VAR_6->vlan_attach != ((void*)0))
  FUNC_0(VAR_3, VAR_6->vlan_attach);
 if (VAR_6->vlan_detach != ((void*)0))
  FUNC_0(VAR_4, VAR_6->vlan_detach);

 FUNC_11(&VAR_7->state_lock);
 FUNC_9(VAR_5);
 FUNC_12(&VAR_7->state_lock);


 if (VAR_6->registered)
  FUNC_4(VAR_5);

 if (VAR_6->allocated)
  FUNC_10(VAR_7->dev, &VAR_6->res, VAR_1);

 FUNC_2(&VAR_6->stats_task);
 FUNC_2(&VAR_6->service_task);

 FUNC_5(VAR_7->workqueue);
        FUNC_1(&VAR_6->watchdog_timer);


 FUNC_11(&VAR_7->state_lock);
 VAR_7->pndev[VAR_6->port] = ((void*)0);
 FUNC_12(&VAR_7->state_lock);


 FUNC_8(VAR_6);


 if (VAR_6->conf_sysctl != ((void*)0))
  FUNC_15(&VAR_6->conf_ctx);

 FUNC_7(VAR_6->tx_ring);
 FUNC_7(VAR_6->tx_cq);

        FUNC_7(VAR_6);
        FUNC_6(VAR_5);

}
