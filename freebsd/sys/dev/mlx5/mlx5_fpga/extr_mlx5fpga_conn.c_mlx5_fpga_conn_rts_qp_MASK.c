
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct mlx5_fpga_device {struct mlx5_core_dev* mdev; } ;
struct TYPE_3__ {int mqp; } ;
struct mlx5_fpga_conn {TYPE_1__ qp; int fpga_qpc; struct mlx5_fpga_device* fdev; } ;
struct mlx5_core_dev {int dummy; } ;
struct TYPE_4__ {int ack_timeout; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ,int ) ;
 int VAR_3 ;
 int FUNC_1 (int *,int *,int ,int) ;
 int FUNC_2 (int *) ;
 int VAR_4 ;
 int FUNC_3 (int *) ;
 int * FUNC_4 (int ,int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_5 (struct mlx5_core_dev*,int ,int ,int *,int *) ;
 int FUNC_6 (struct mlx5_fpga_device*,char*) ;
 int FUNC_7 (struct mlx5_fpga_device*,char*,int) ;
 int VAR_7 ;
 int VAR_8 ;
 TYPE_2__ VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;

__attribute__((used)) static inline int FUNC_8(struct mlx5_fpga_conn *VAR_12)
{
 struct mlx5_fpga_device *VAR_13 = VAR_12->fdev;
 struct mlx5_core_dev *VAR_14 = VAR_13->mdev;
 u32 *VAR_15 = ((void*)0);
 u32 VAR_16;
 int VAR_17;

 FUNC_6(VAR_12->fdev, "QP RTS\n");

 VAR_15 = FUNC_4(FUNC_2(VAR_15), VAR_1);
 if (!VAR_15) {
  VAR_17 = -VAR_0;
  goto out;
 }

 FUNC_1(VAR_15, VAR_15, VAR_5, 8);
 FUNC_1(VAR_15, VAR_15, VAR_6, 0x12);
 FUNC_1(VAR_15, VAR_15, VAR_9.ack_timeout, 0x12);
 FUNC_1(VAR_15, VAR_15, VAR_8,
   FUNC_0(VAR_4, VAR_12->fpga_qpc, VAR_7));
 FUNC_1(VAR_15, VAR_15, VAR_10, 7);
 FUNC_1(VAR_15, VAR_15, VAR_11, 7);

 VAR_16 = VAR_3;
 VAR_17 = FUNC_5(VAR_14, VAR_2, VAR_16, VAR_15,
      &VAR_12->qp.mqp);
 if (VAR_17) {
  FUNC_7(VAR_13, "qp_modify RST2INIT failed: %d\n", VAR_17);
  goto out;
 }

out:
 FUNC_3(VAR_15);
 return VAR_17;
}
