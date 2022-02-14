
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ u64 ;
struct net_device {int dummy; } ;
struct mlx4_update_qp_params {int smac_index; } ;
struct TYPE_6__ {scalar_t__ smac; int smac_port; int smac_index; } ;
struct TYPE_5__ {int qpn; } ;
struct mlx4_ib_qp {int mutex; TYPE_3__ pri; TYPE_2__ mqp; } ;
struct TYPE_4__ {int * mac; } ;
struct mlx4_ib_dev {int * qp1_proxy_lock; int dev; struct mlx4_ib_qp** qp1_proxy; TYPE_1__ iboe; } ;


 int FUNC_0 (struct net_device*) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int *,scalar_t__) ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (int ,int,scalar_t__) ;
 int FUNC_5 (int ,int,scalar_t__) ;
 scalar_t__ FUNC_6 (int ,int ,int ,struct mlx4_update_qp_params*) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;

__attribute__((used)) static void FUNC_9(struct mlx4_ib_dev *VAR_2,
          struct net_device *VAR_3,
          int VAR_4)
{
 u64 VAR_5 = 0;
 u64 VAR_6 = VAR_0;
 struct mlx4_ib_qp *VAR_7;

 VAR_5 = FUNC_3(FUNC_0(VAR_3));

 FUNC_1(&VAR_2->iboe.mac[VAR_4 - 1], VAR_5);


 if (!FUNC_2(VAR_2->dev))
  return;

 FUNC_7(&VAR_2->qp1_proxy_lock[VAR_4 - 1]);
 VAR_7 = VAR_2->qp1_proxy[VAR_4 - 1];
 if (VAR_7) {
  int VAR_8;
  u64 VAR_9;
  struct mlx4_update_qp_params VAR_10;

  FUNC_7(&VAR_7->mutex);
  VAR_9 = VAR_7->pri.smac;
  if (VAR_5 == VAR_9)
   goto unlock;

  VAR_8 = FUNC_4(VAR_2->dev, VAR_4, VAR_5);

  if (VAR_8 < 0)
   goto unlock;

  VAR_10.smac_index = VAR_8;
  if (FUNC_6(VAR_2->dev, VAR_7->mqp.qpn, VAR_1,
       &VAR_10)) {
   VAR_6 = VAR_5;
   goto unlock;
  }

  if (VAR_7->pri.smac_port)
   VAR_6 = VAR_9;
  VAR_7->pri.smac = VAR_5;
  VAR_7->pri.smac_port = VAR_4;
  VAR_7->pri.smac_index = VAR_8;
 }

unlock:
 if (VAR_6 != VAR_0)
  FUNC_5(VAR_2->dev, VAR_4, VAR_6);
 if (VAR_7)
  FUNC_8(&VAR_7->mutex);
 FUNC_8(&VAR_2->qp1_proxy_lock[VAR_4 - 1]);
}
