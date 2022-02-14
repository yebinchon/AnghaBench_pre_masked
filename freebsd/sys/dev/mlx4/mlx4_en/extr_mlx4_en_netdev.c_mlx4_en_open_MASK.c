
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct mlx4_en_priv {int port; struct net_device* dev; struct mlx4_en_dev* mdev; } ;
struct mlx4_en_dev {int state_lock; int device_up; } ;


 int FUNC_0 (struct mlx4_en_priv*,char*,...) ;
 int FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct net_device*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static void FUNC_5(void* VAR_0)
{

        struct mlx4_en_priv *VAR_1;
        struct mlx4_en_dev *VAR_2;
        struct net_device *VAR_3;
        int VAR_4 = 0;

        VAR_1 = VAR_0;
        VAR_2 = VAR_1->mdev;
        VAR_3 = VAR_1->dev;


 FUNC_3(&VAR_2->state_lock);

 if (!VAR_2->device_up) {
  FUNC_0(VAR_1, "Cannot open - device down/disabled\n");
  goto out;
 }


 FUNC_1(VAR_3);

 VAR_4 = FUNC_2(VAR_3);
 if (VAR_4)
  FUNC_0(VAR_1, "Failed starting port:%d\n", VAR_1->port);

out:
 FUNC_4(&VAR_2->state_lock);
 return;
}
