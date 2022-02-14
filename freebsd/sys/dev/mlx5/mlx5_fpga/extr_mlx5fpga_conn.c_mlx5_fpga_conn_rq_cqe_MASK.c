
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
struct mlx5_fpga_dma_buf {TYPE_3__* sg; } ;
struct TYPE_4__ {int size; int cc; struct mlx5_fpga_dma_buf** bufs; } ;
struct TYPE_5__ {int active; TYPE_1__ rq; } ;
struct mlx5_fpga_conn {int fdev; int cb_arg; int (* recv_cb ) (int ,struct mlx5_fpga_dma_buf*) ;TYPE_2__ qp; int fpga_qpn; } ;
struct mlx5_cqe64 {int byte_cnt; int wqe_counter; } ;
struct TYPE_6__ {int size; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct mlx5_fpga_dma_buf*) ;
 int FUNC_3 (struct mlx5_fpga_conn*,struct mlx5_fpga_dma_buf*) ;
 int FUNC_4 (struct mlx5_fpga_conn*,struct mlx5_fpga_dma_buf*) ;
 int FUNC_5 (int ,char*,struct mlx5_fpga_dma_buf*,...) ;
 int FUNC_6 (int ,char*,...) ;
 int FUNC_7 (int ,struct mlx5_fpga_dma_buf*) ;
 scalar_t__ FUNC_8 (int) ;

__attribute__((used)) static void FUNC_9(struct mlx5_fpga_conn *VAR_2,
      struct mlx5_cqe64 *VAR_3, u8 VAR_4)
{
 struct mlx5_fpga_dma_buf *VAR_5;
 int VAR_6, VAR_7;

 VAR_6 = FUNC_0(VAR_3->wqe_counter) & (VAR_2->qp.rq.size - 1);
 VAR_5 = VAR_2->qp.rq.bufs[VAR_6];
 VAR_2->qp.rq.bufs[VAR_6] = ((void*)0);
 if (!VAR_4)
  VAR_5->sg[0].size = FUNC_1(VAR_3->byte_cnt);
 VAR_2->qp.rq.cc++;

 if (FUNC_8(VAR_4 && (VAR_4 != VAR_0)))
  FUNC_6(VAR_2->fdev, "RQ buf %p on FPGA QP %u completion status %d\n",
          VAR_5, VAR_2->fpga_qpn, VAR_4);
 else
  FUNC_5(VAR_2->fdev, "RQ buf %p on FPGA QP %u completion status %d\n",
         VAR_5, VAR_2->fpga_qpn, VAR_4);

 FUNC_4(VAR_2, VAR_5);

 if (FUNC_8(VAR_4 || !VAR_2->qp.active)) {
  VAR_2->qp.active = 0;
  FUNC_2(VAR_5);
  return;
 }

 FUNC_5(VAR_2->fdev, "Message with %u bytes received successfully\n",
        VAR_5->sg[0].size);
 VAR_2->recv_cb(VAR_2->cb_arg, VAR_5);

 VAR_5->sg[0].size = VAR_1;
 VAR_7 = FUNC_3(VAR_2, VAR_5);
 if (FUNC_8(VAR_7)) {
  FUNC_6(VAR_2->fdev,
          "Failed to re-post recv buf: %d\n", VAR_7);
  FUNC_2(VAR_5);
 }
}
