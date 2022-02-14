
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int if_mtu; int if_drv_flags; } ;
struct mlx4_en_priv {int max_mtu; int watchdog_task; int port; struct mlx4_en_dev* mdev; } ;
struct mlx4_en_dev {int state_lock; int workqueue; int device_up; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,struct mlx4_en_priv*,char*,...) ;
 int FUNC_1 (struct mlx4_en_priv*,char*,int,...) ;
 int FUNC_2 (struct net_device*) ;
 int FUNC_3 (struct net_device*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 struct mlx4_en_priv* FUNC_6 (struct net_device*) ;
 int FUNC_7 (int ,int *) ;

__attribute__((used)) static int FUNC_8(struct net_device *VAR_4, int VAR_5)
{
 struct mlx4_en_priv *VAR_6 = FUNC_6(VAR_4);
 struct mlx4_en_dev *VAR_7 = VAR_6->mdev;
 int VAR_8 = 0;

 FUNC_0(VAR_0, VAR_6, "Change MTU called - current:%u new:%u\n",
        (unsigned)VAR_4->if_mtu, (unsigned)VAR_5);

 if ((VAR_5 < VAR_3) || (VAR_5 > VAR_6->max_mtu)) {
  FUNC_1(VAR_6, "Bad MTU size:%d, max %u.\n", VAR_5,
      VAR_6->max_mtu);
  return -VAR_1;
 }
 FUNC_4(&VAR_7->state_lock);
 VAR_4->if_mtu = VAR_5;
 if (VAR_4->if_drv_flags & VAR_2) {
  if (!VAR_7->device_up) {


   FUNC_0(VAR_0, VAR_6, "Change MTU called with card down!?\n");
  } else {
   FUNC_3(VAR_4);
   VAR_8 = FUNC_2(VAR_4);
   if (VAR_8) {
    FUNC_1(VAR_6, "Failed restarting port:%d\n",
      VAR_6->port);
    FUNC_7(VAR_7->workqueue, &VAR_6->watchdog_task);
   }
  }
 }
 FUNC_5(&VAR_7->state_lock);
 return 0;
}
