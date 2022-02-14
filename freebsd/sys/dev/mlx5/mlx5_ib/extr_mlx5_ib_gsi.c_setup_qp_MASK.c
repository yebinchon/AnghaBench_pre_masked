
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u16 ;
struct mlx5_ib_gsi_qp {int lock; struct ib_qp** tx_qps; int port_num; TYPE_1__* rx_qp; } ;
struct mlx5_ib_dev {int dummy; } ;
struct ib_qp {int dummy; } ;
struct ib_device {int dummy; } ;
struct TYPE_2__ {struct ib_device* device; } ;


 scalar_t__ FUNC_0 (struct ib_qp*) ;
 int FUNC_1 (struct ib_qp*) ;
 int FUNC_2 (struct ib_qp*) ;
 struct ib_qp* FUNC_3 (struct mlx5_ib_gsi_qp*) ;
 int FUNC_4 (struct ib_device*,int ,size_t,size_t*) ;
 int FUNC_5 (struct mlx5_ib_dev*,char*,int ,size_t) ;
 int FUNC_6 (struct mlx5_ib_dev*,char*,int ,...) ;
 int FUNC_7 (struct mlx5_ib_gsi_qp*,struct ib_qp*,size_t) ;
 int FUNC_8 (int *,unsigned long) ;
 int FUNC_9 (int *,unsigned long) ;
 struct mlx5_ib_dev* FUNC_10 (struct ib_device*) ;

__attribute__((used)) static void FUNC_11(struct mlx5_ib_gsi_qp *VAR_0, u16 VAR_1)
{
 struct ib_device *VAR_2 = VAR_0->rx_qp->device;
 struct mlx5_ib_dev *VAR_3 = FUNC_10(VAR_2);
 struct ib_qp *VAR_4;
 unsigned long VAR_5;
 u16 VAR_6;
 int VAR_7;

 VAR_7 = FUNC_4(VAR_2, VAR_0->port_num, VAR_1, &VAR_6);
 if (VAR_7) {
  FUNC_6(VAR_3, "unable to read P_Key at port %d, index %d\n",
        VAR_0->port_num, VAR_1);
  return;
 }

 if (!VAR_6) {
  FUNC_5(VAR_3, "invalid P_Key at port %d, index %d.  Skipping.\n",
       VAR_0->port_num, VAR_1);
  return;
 }

 FUNC_8(&VAR_0->lock, VAR_5);
 VAR_4 = VAR_0->tx_qps[VAR_1];
 FUNC_9(&VAR_0->lock, VAR_5);
 if (VAR_4) {
  FUNC_5(VAR_3, "already existing GSI TX QP at port %d, index %d. Skipping\n",
       VAR_0->port_num, VAR_1);
  return;
 }

 VAR_4 = FUNC_3(VAR_0);
 if (FUNC_0(VAR_4)) {
  FUNC_6(VAR_3, "unable to create hardware UD QP for GSI: %ld\n",
        FUNC_1(VAR_4));
  return;
 }

 VAR_7 = FUNC_7(VAR_0, VAR_4, VAR_1);
 if (VAR_7)
  goto err_destroy_qp;

 FUNC_8(&VAR_0->lock, VAR_5);
 FUNC_2(VAR_0->tx_qps[VAR_1]);
 VAR_0->tx_qps[VAR_1] = VAR_4;
 FUNC_9(&VAR_0->lock, VAR_5);

 return;

err_destroy_qp:
 FUNC_2(VAR_4);
}
