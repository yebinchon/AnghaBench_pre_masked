
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


struct mlx5_wqe_data_seg {int addr; void* lkey; void* byte_count; } ;
struct mlx5_wqe_ctrl_seg {void* qpn_ds; void* opmod_idx_opcode; int fm_ce_se; scalar_t__ imm; } ;
struct mlx5_fpga_dma_buf {TYPE_8__* sg; } ;
struct TYPE_14__ {int pc; int size; struct mlx5_fpga_dma_buf** bufs; } ;
struct TYPE_13__ {int qpn; } ;
struct TYPE_9__ {int sq; } ;
struct TYPE_15__ {TYPE_6__ sq; TYPE_5__ mqp; TYPE_1__ wq; } ;
struct mlx5_fpga_conn {TYPE_7__ qp; TYPE_4__* fdev; } ;
struct TYPE_16__ {int size; int dma_addr; int data; } ;
struct TYPE_10__ {int key; } ;
struct TYPE_11__ {TYPE_2__ mkey; } ;
struct TYPE_12__ {TYPE_3__ conn_res; } ;


 unsigned int FUNC_0 (TYPE_8__*) ;
 int VAR_0 ;
 int VAR_1 ;
 void* FUNC_1 (int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct mlx5_fpga_conn*,struct mlx5_wqe_ctrl_seg*) ;
 struct mlx5_wqe_ctrl_seg* FUNC_4 (int *,unsigned int) ;

__attribute__((used)) static void FUNC_5(struct mlx5_fpga_conn *VAR_2,
         struct mlx5_fpga_dma_buf *VAR_3)
{
 struct mlx5_wqe_ctrl_seg *VAR_4;
 struct mlx5_wqe_data_seg *VAR_5;
 unsigned int VAR_6, VAR_7;
 int VAR_8 = 1;

 VAR_6 = VAR_2->qp.sq.pc & (VAR_2->qp.sq.size - 1);

 VAR_4 = FUNC_4(&VAR_2->qp.wq.sq, VAR_6);
 VAR_5 = (void *)(VAR_4 + 1);

 for (VAR_7 = 0; VAR_7 < FUNC_0(VAR_3->sg); VAR_7++) {
  if (!VAR_3->sg[VAR_7].data)
   break;
  VAR_5->byte_count = FUNC_1(VAR_3->sg[VAR_7].size);
  VAR_5->lkey = FUNC_1(VAR_2->fdev->conn_res.mkey.key);
  VAR_5->addr = FUNC_2(VAR_3->sg[VAR_7].dma_addr);
  VAR_5++;
  VAR_8++;
 }

 VAR_4->imm = 0;
 VAR_4->fm_ce_se = VAR_1;
 VAR_4->opmod_idx_opcode = FUNC_1(((VAR_2->qp.sq.pc & 0xffff) << 8) |
          VAR_0);
 VAR_4->qpn_ds = FUNC_1(VAR_8 | (VAR_2->qp.mqp.qpn << 8));

 VAR_2->qp.sq.pc++;
 VAR_2->qp.sq.bufs[VAR_6] = VAR_3;
 FUNC_3(VAR_2, VAR_4);
}
