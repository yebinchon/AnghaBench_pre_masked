
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
struct mlx5_fpga_device {int mdev; } ;
struct mlx5_fpga_conn_attr {int tx_size; int rx_size; int cb_arg; scalar_t__ recv_cb; } ;
struct TYPE_5__ {int qpn; } ;
struct TYPE_4__ {int lock; int backlog; } ;
struct TYPE_6__ {int sgid_index; TYPE_2__ mqp; TYPE_1__ sq; } ;
struct mlx5_fpga_conn {TYPE_3__ qp; int fpga_qpn; struct mlx5_fpga_device* fdev; int fpga_qpc; int cb_arg; scalar_t__ recv_cb; } ;
typedef enum mlx5_ifc_fpga_qp_type { ____Placeholder_mlx5_ifc_fpga_qp_type } mlx5_ifc_fpga_qp_type ;


 int VAR_0 ;
 int VAR_1 ;
 struct mlx5_fpga_conn* FUNC_0 (int) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int *) ;
 int* FUNC_2 (int ,int ,int*) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_3 (int ,int ,int,int) ;
 int FUNC_4 (int*,int*) ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_5 (struct mlx5_fpga_conn*) ;
 struct mlx5_fpga_conn* FUNC_6 (int,int ) ;
 int FUNC_7 (int ,int *) ;
 int FUNC_8 (int ,int ) ;
 int FUNC_9 (int ,int ,int ,int ,int*,int*,int,int ) ;
 int FUNC_10 (struct mlx5_fpga_conn*) ;
 int FUNC_11 (struct mlx5_fpga_conn*) ;
 int FUNC_12 (struct mlx5_fpga_conn*,int) ;
 int FUNC_13 (struct mlx5_fpga_conn*,int,int) ;
 int FUNC_14 (struct mlx5_fpga_conn*) ;
 int FUNC_15 (struct mlx5_fpga_conn*) ;
 int FUNC_16 (int ,int *,int *) ;
 int FUNC_17 (struct mlx5_fpga_device*,char*,int ) ;
 int FUNC_18 (int ,int ) ;
 int FUNC_19 (struct mlx5_fpga_device*,char*,int) ;
 int FUNC_20 (int ,int ,int*) ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int* VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int FUNC_21 (int *) ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;

struct mlx5_fpga_conn *FUNC_22(struct mlx5_fpga_device *VAR_21,
          struct mlx5_fpga_conn_attr *VAR_22,
          enum mlx5_ifc_fpga_qp_type VAR_23)
{
 struct mlx5_fpga_conn *VAR_24, *VAR_25;
 u8 *VAR_26, *VAR_27;
 int VAR_28;

 if (!VAR_22->recv_cb)
  return FUNC_0(-VAR_0);

 VAR_25 = FUNC_6(sizeof(*VAR_25), VAR_3);
 if (!VAR_25)
  return FUNC_0(-VAR_1);

 VAR_25->fdev = VAR_21;
 FUNC_1(&VAR_25->qp.sq.backlog);

 FUNC_21(&VAR_25->qp.sq.lock);

 VAR_25->recv_cb = VAR_22->recv_cb;
 VAR_25->cb_arg = VAR_22->cb_arg;

 VAR_26 = FUNC_2(VAR_10, VAR_25->fpga_qpc, VAR_14);
 VAR_28 = FUNC_20(VAR_21->mdev, 0, VAR_26);
 if (VAR_28) {
  FUNC_19(VAR_21, "Failed to query local MAC: %d\n", VAR_28);
  VAR_24 = FUNC_0(VAR_28);
  goto err;
 }


 VAR_27 = FUNC_2(VAR_10, VAR_25->fpga_qpc, VAR_27);
 VAR_27[0] = 0xfe;
 VAR_27[1] = 0x80;
 FUNC_4(&VAR_27[8], VAR_26);

 VAR_28 = FUNC_7(VAR_21->mdev, &VAR_25->qp.sgid_index);
 if (VAR_28) {
  FUNC_19(VAR_21, "Failed to allocate SGID: %d\n", VAR_28);
  VAR_24 = FUNC_0(VAR_28);
  goto err;
 }

 VAR_28 = FUNC_9(VAR_21->mdev, VAR_25->qp.sgid_index,
         VAR_8,
         VAR_7,
         VAR_27, VAR_26, 1, 0);
 if (VAR_28) {
  FUNC_19(VAR_21, "Failed to set SGID: %d\n", VAR_28);
  VAR_24 = FUNC_0(VAR_28);
  goto err_rsvd_gid;
 }
 FUNC_17(VAR_21, "Reserved SGID index %u\n", VAR_25->qp.sgid_index);




 VAR_28 = FUNC_12(VAR_25,
           (VAR_22->tx_size + VAR_22->rx_size) * 2);
 if (VAR_28) {
  FUNC_19(VAR_21, "Failed to create CQ: %d\n", VAR_28);
  VAR_24 = FUNC_0(VAR_28);
  goto err_gid;
 }

 FUNC_10(VAR_25);

 VAR_28 = FUNC_13(VAR_25, VAR_22->tx_size, VAR_22->rx_size);
 if (VAR_28) {
  FUNC_19(VAR_21, "Failed to create QP: %d\n", VAR_28);
  VAR_24 = FUNC_0(VAR_28);
  goto err_cq;
 }

 FUNC_3(VAR_10, VAR_25->fpga_qpc, VAR_19, VAR_5);
 FUNC_3(VAR_10, VAR_25->fpga_qpc, VAR_23, VAR_23);
 FUNC_3(VAR_10, VAR_25->fpga_qpc, VAR_18, VAR_6);
 FUNC_3(VAR_10, VAR_25->fpga_qpc, VAR_9, VAR_2);
 FUNC_3(VAR_10, VAR_25->fpga_qpc, VAR_20, 0);
 FUNC_3(VAR_10, VAR_25->fpga_qpc, VAR_11, 1);
 FUNC_3(VAR_10, VAR_25->fpga_qpc, VAR_12, 0);
 FUNC_3(VAR_10, VAR_25->fpga_qpc, VAR_13, VAR_4);
 FUNC_3(VAR_10, VAR_25->fpga_qpc, VAR_15, VAR_25->qp.mqp.qpn);
 FUNC_3(VAR_10, VAR_25->fpga_qpc, VAR_17, 7);
 FUNC_3(VAR_10, VAR_25->fpga_qpc, VAR_16, 7);

 VAR_28 = FUNC_16(VAR_21->mdev, &VAR_25->fpga_qpc,
      &VAR_25->fpga_qpn);
 if (VAR_28) {
  FUNC_19(VAR_21, "Failed to create FPGA RC QP: %d\n", VAR_28);
  VAR_24 = FUNC_0(VAR_28);
  goto err_qp;
 }

 VAR_28 = FUNC_11(VAR_25);
 if (VAR_28) {
  VAR_24 = FUNC_0(VAR_28);
  goto err_conn;
 }

 FUNC_17(VAR_21, "FPGA QPN is %u\n", VAR_25->fpga_qpn);
 VAR_24 = VAR_25;
 goto out;

err_conn:
 FUNC_18(VAR_25->fdev->mdev, VAR_25->fpga_qpn);
err_qp:
 FUNC_15(VAR_25);
err_cq:
 FUNC_14(VAR_25);
err_gid:
 FUNC_9(VAR_21->mdev, VAR_25->qp.sgid_index, 0, 0, ((void*)0),
          ((void*)0), 0, 0);
err_rsvd_gid:
 FUNC_8(VAR_21->mdev, VAR_25->qp.sgid_index);
err:
 FUNC_5(VAR_25);
out:
 return VAR_24;
}
