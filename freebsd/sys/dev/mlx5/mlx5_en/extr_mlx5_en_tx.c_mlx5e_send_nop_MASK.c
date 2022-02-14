
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u32 ;
typedef size_t u16 ;
struct TYPE_9__ {scalar_t__ fm_ce_se; void* qpn_ds; void* opmod_idx_opcode; } ;
struct mlx5e_tx_wqe {TYPE_4__ ctrl; } ;
struct TYPE_6__ {int d32; } ;
struct TYPE_8__ {size_t sz_m1; } ;
struct mlx5e_sq {size_t pc; int sqn; TYPE_2__* mbuf; TYPE_1__ doorbell; TYPE_3__ wq; } ;
struct TYPE_7__ {scalar_t__ num_wqebbs; scalar_t__ num_bytes; int * mbuf; } ;


 scalar_t__ FUNC_0 (int,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 void* FUNC_1 (int) ;
 int FUNC_2 (int ,TYPE_4__*,int) ;
 int FUNC_3 (TYPE_4__*,int ,int) ;
 struct mlx5e_tx_wqe* FUNC_4 (TYPE_3__*,size_t) ;
 scalar_t__ FUNC_5 (struct mlx5e_sq*) ;

void
FUNC_6(struct mlx5e_sq *VAR_3, u32 VAR_4)
{
 u16 VAR_5 = VAR_3->pc & VAR_3->wq.sz_m1;
 struct mlx5e_tx_wqe *VAR_6 = FUNC_4(&VAR_3->wq, VAR_5);

 FUNC_3(&VAR_6->ctrl, 0, sizeof(VAR_6->ctrl));

 VAR_6->ctrl.opmod_idx_opcode = FUNC_1((VAR_3->pc << 8) | VAR_0);
 VAR_6->ctrl.qpn_ds = FUNC_1((VAR_3->sqn << 8) | VAR_4);
 if (FUNC_5(VAR_3))
  VAR_6->ctrl.fm_ce_se = VAR_2;
 else
  VAR_6->ctrl.fm_ce_se = 0;


 FUNC_2(VAR_3->doorbell.d32, &VAR_6->ctrl, sizeof(VAR_3->doorbell.d32));

 VAR_3->mbuf[VAR_5].mbuf = ((void*)0);
 VAR_3->mbuf[VAR_5].num_bytes = 0;
 VAR_3->mbuf[VAR_5].num_wqebbs = FUNC_0(VAR_4, VAR_1);
 VAR_3->pc += VAR_3->mbuf[VAR_5].num_wqebbs;
}
