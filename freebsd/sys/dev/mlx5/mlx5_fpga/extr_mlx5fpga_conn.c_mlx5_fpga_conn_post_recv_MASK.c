
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
struct mlx5_fpga_dma_buf {TYPE_4__* sg; } ;
struct TYPE_14__ {int pc; int cc; int size; struct mlx5_fpga_dma_buf** bufs; } ;
struct TYPE_16__ {void** db; } ;
struct TYPE_13__ {TYPE_8__ rq; } ;
struct TYPE_15__ {TYPE_6__ rq; TYPE_5__ wq; } ;
struct mlx5_fpga_conn {TYPE_7__ qp; TYPE_3__* fdev; } ;
struct TYPE_12__ {int size; int dma_addr; } ;
struct TYPE_9__ {int key; } ;
struct TYPE_10__ {TYPE_1__ mkey; } ;
struct TYPE_11__ {TYPE_2__ conn_res; } ;


 int VAR_0 ;
 void* FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 () ;
 int FUNC_3 (struct mlx5_fpga_conn*,struct mlx5_fpga_dma_buf*) ;
 int FUNC_4 (struct mlx5_fpga_conn*,struct mlx5_fpga_dma_buf*) ;
 struct mlx5_wqe_data_seg* FUNC_5 (TYPE_8__*,unsigned int) ;
 scalar_t__ FUNC_6 (int) ;

__attribute__((used)) static int FUNC_7(struct mlx5_fpga_conn *VAR_1,
        struct mlx5_fpga_dma_buf *VAR_2)
{
 struct mlx5_wqe_data_seg *VAR_3;
 unsigned int VAR_4;
 int VAR_5 = 0;

 VAR_5 = FUNC_3(VAR_1, VAR_2);
 if (FUNC_6(VAR_5))
  goto out;

 if (FUNC_6(VAR_1->qp.rq.pc - VAR_1->qp.rq.cc >= VAR_1->qp.rq.size)) {
  FUNC_4(VAR_1, VAR_2);
  return -VAR_0;
 }

 VAR_4 = VAR_1->qp.rq.pc & (VAR_1->qp.rq.size - 1);
 VAR_3 = FUNC_5(&VAR_1->qp.wq.rq, VAR_4);
 VAR_3->byte_count = FUNC_0(VAR_2->sg[0].size);
 VAR_3->lkey = FUNC_0(VAR_1->fdev->conn_res.mkey.key);
 VAR_3->addr = FUNC_1(VAR_2->sg[0].dma_addr);

 VAR_1->qp.rq.pc++;
 VAR_1->qp.rq.bufs[VAR_4] = VAR_2;


 FUNC_2();
 *VAR_1->qp.wq.rq.db = FUNC_0(VAR_1->qp.rq.pc & 0xffff);
out:
 return VAR_5;
}
