
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct net_device {int dummy; } ;
struct TYPE_2__ {int netdev_lock; struct net_device* netdev; } ;
struct mlx5_ib_dev {TYPE_1__ roce; } ;
struct ib_device {int dummy; } ;


 int FUNC_0 (struct net_device*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 struct mlx5_ib_dev* FUNC_3 (struct ib_device*) ;

__attribute__((used)) static struct net_device *FUNC_4(struct ib_device *VAR_0,
          u8 VAR_1)
{
 struct mlx5_ib_dev *VAR_2 = FUNC_3(VAR_0);
 struct net_device *VAR_3;



 FUNC_1(&VAR_2->roce.netdev_lock);
 VAR_3 = VAR_2->roce.netdev;
 if (VAR_3)
  FUNC_0(VAR_3);
 FUNC_2(&VAR_2->roce.netdev_lock);

 return VAR_3;
}
