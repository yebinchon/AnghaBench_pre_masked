
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_8__ ;
typedef struct TYPE_15__ TYPE_7__ ;
typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_9__ {int pdn; } ;
struct mlx5_fpga_device {TYPE_1__ conn_res; struct mlx5_core_dev* mdev; } ;
struct TYPE_16__ {int qpn; } ;
struct TYPE_12__ {int dma; } ;
struct TYPE_13__ {TYPE_4__ db; } ;
struct TYPE_14__ {TYPE_8__ mqp; TYPE_5__ wq_ctrl; } ;
struct TYPE_10__ {int cqn; } ;
struct TYPE_11__ {TYPE_2__ mcq; } ;
struct mlx5_fpga_conn {TYPE_6__ qp; TYPE_3__ cq; struct mlx5_fpga_device* fdev; } ;
struct mlx5_core_dev {int dummy; } ;
struct TYPE_15__ {int port; int pkey_index; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int *,int *,int ,int ) ;
 int FUNC_1 (int *,int *,int ,int ) ;
 int FUNC_2 (int *) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_3 (int *) ;
 int * FUNC_4 (int ,int ) ;
 int FUNC_5 (struct mlx5_core_dev*,int ,int ,int *,TYPE_8__*) ;
 int FUNC_6 (struct mlx5_fpga_device*,char*,int ) ;
 int FUNC_7 (struct mlx5_fpga_device*,char*,int) ;
 int VAR_10 ;
 int VAR_11 ;
 TYPE_7__ VAR_12 ;
 int VAR_13 ;

__attribute__((used)) static inline int FUNC_8(struct mlx5_fpga_conn *VAR_14)
{
 struct mlx5_fpga_device *VAR_15 = VAR_14->fdev;
 struct mlx5_core_dev *VAR_16 = VAR_15->mdev;
 u32 *VAR_17 = ((void*)0);
 int VAR_18;

 FUNC_6(VAR_14->fdev, "Modifying QP %u to INIT\n", VAR_14->qp.mqp.qpn);

 VAR_17 = FUNC_4(FUNC_2(VAR_17), VAR_1);
 if (!VAR_17) {
  VAR_18 = -VAR_0;
  goto out;
 }

 FUNC_0(VAR_17, VAR_17, VAR_13, VAR_6);
 FUNC_0(VAR_17, VAR_17, VAR_11, VAR_5);
 FUNC_0(VAR_17, VAR_17, VAR_12.pkey_index, VAR_3);
 FUNC_0(VAR_17, VAR_17, VAR_12.port, VAR_4);
 FUNC_0(VAR_17, VAR_17, VAR_10, VAR_14->fdev->conn_res.pdn);
 FUNC_0(VAR_17, VAR_17, VAR_8, VAR_14->cq.mcq.cqn);
 FUNC_0(VAR_17, VAR_17, VAR_7, VAR_14->cq.mcq.cqn);
 FUNC_1(VAR_17, VAR_17, VAR_9, VAR_14->qp.wq_ctrl.db.dma);

 VAR_18 = FUNC_5(VAR_16, VAR_2, 0, VAR_17,
      &VAR_14->qp.mqp);
 if (VAR_18) {
  FUNC_7(VAR_15, "qp_modify RST2INIT failed: %d\n", VAR_18);
  goto out;
 }

out:
 FUNC_3(VAR_17);
 return VAR_18;
}
