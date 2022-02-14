
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef union ib_gid {int dummy; } ib_gid ;
struct net_device {int dummy; } ;
struct mlx4_ib_qp {int port; } ;
struct TYPE_2__ {int lock; struct net_device** netdevs; } ;
struct mlx4_ib_dev {TYPE_1__ iboe; } ;


 int FUNC_0 (struct net_device*) ;
 int FUNC_1 (struct net_device*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

int FUNC_4(struct mlx4_ib_dev *VAR_0, struct mlx4_ib_qp *VAR_1,
     union ib_gid *VAR_2)
{
 struct net_device *VAR_3;
 int VAR_4 = 0;

 if (!VAR_1->port)
  return 0;

 FUNC_2(&VAR_0->iboe.lock);
 VAR_3 = VAR_0->iboe.netdevs[VAR_1->port - 1];
 if (VAR_3)
  FUNC_0(VAR_3);
 FUNC_3(&VAR_0->iboe.lock);

 if (VAR_3) {
  VAR_4 = 1;
  FUNC_1(VAR_3);
 }

 return VAR_4;
}
