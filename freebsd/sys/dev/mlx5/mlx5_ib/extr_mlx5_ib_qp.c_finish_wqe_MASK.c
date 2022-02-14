
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u8 ;
typedef int u64 ;
typedef int u32 ;
struct mlx5_wqe_ctrl_seg {int fm_ce_se; int signature; void* qpn_ds; void* opmod_idx_opcode; } ;
struct TYPE_10__ {scalar_t__ cur_post; TYPE_4__* w_list; scalar_t__ head; scalar_t__* wqe_head; int * wrid; } ;
struct TYPE_6__ {int qpn; } ;
struct TYPE_7__ {TYPE_1__ mqp; } ;
struct TYPE_8__ {TYPE_2__ base; } ;
struct mlx5_ib_qp {int fm_cache; TYPE_5__ sq; int wq_sig; TYPE_3__ trans_qp; } ;
struct TYPE_9__ {int opcode; scalar_t__ next; } ;


 scalar_t__ FUNC_0 (int,int ) ;
 int VAR_0 ;
 void* FUNC_1 (int) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (struct mlx5_wqe_ctrl_seg*) ;

__attribute__((used)) static void FUNC_4(struct mlx5_ib_qp *VAR_1,
         struct mlx5_wqe_ctrl_seg *VAR_2,
         u8 VAR_3, unsigned VAR_4, u64 VAR_5,
         int VAR_6, u8 VAR_7, u8 VAR_8,
         u32 VAR_9)
{
 u8 VAR_10 = 0;

 VAR_2->opmod_idx_opcode = FUNC_1(((u32)(VAR_1->sq.cur_post) << 8) |
          VAR_9 | ((u32)VAR_10 << 24));
 VAR_2->qpn_ds = FUNC_1(VAR_3 | (VAR_1->trans_qp.base.mqp.qpn << 8));
 VAR_2->fm_ce_se |= VAR_7;
 VAR_1->fm_cache = VAR_8;
 if (FUNC_2(VAR_1->wq_sig))
  VAR_2->signature = FUNC_3(VAR_2);

 VAR_1->sq.wrid[VAR_4] = VAR_5;
 VAR_1->sq.w_list[VAR_4].opcode = VAR_9;
 VAR_1->sq.wqe_head[VAR_4] = VAR_1->sq.head + VAR_6;
 VAR_1->sq.cur_post += FUNC_0(VAR_3 * 16, VAR_0);
 VAR_1->sq.w_list[VAR_4].next = VAR_1->sq.cur_post;
}
