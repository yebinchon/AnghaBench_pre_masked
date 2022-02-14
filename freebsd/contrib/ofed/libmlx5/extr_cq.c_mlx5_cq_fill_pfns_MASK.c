
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct op {int end_poll; int next_poll; int start_poll; } ;
struct TYPE_4__ {int read_flow_tag; int read_cvlan; int read_completion_ts; int read_dlid_path_bits; int read_sl; int read_slid; int read_src_qp; int read_qp_num; int read_imm_data; int read_byte_len; int read_wc_flags; int read_vendor_err; int read_opcode; int end_poll; int next_poll; int start_poll; } ;
struct mlx5_cq {int flags; TYPE_2__ ibv_cq; scalar_t__ stall_enable; scalar_t__ stall_adaptive_enable; } ;
struct mlx5_context {scalar_t__ cqe_version; } ;
struct ibv_cq_init_attr_ex {int wc_flags; } ;
struct TYPE_3__ {int context; } ;


 size_t VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 size_t VAR_12 ;
 size_t VAR_13 ;
 size_t VAR_14 ;
 TYPE_1__* FUNC_0 (TYPE_2__*) ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 struct op* VAR_28 ;
 struct mlx5_context* FUNC_1 (int ) ;

void FUNC_2(struct mlx5_cq *VAR_29, const struct ibv_cq_init_attr_ex *VAR_30)
{
 struct mlx5_context *VAR_31 = FUNC_1(FUNC_0(&VAR_29->ibv_cq)->context);
 const struct op *VAR_32 = &VAR_28[((VAR_29->stall_enable && VAR_29->stall_adaptive_enable) ? VAR_0 : 0) |
      (VAR_31->cqe_version ? VAR_14 : 0) |
      (VAR_29->flags & VAR_11 ?
            VAR_12 : 0) |
      (VAR_29->stall_enable ? VAR_13 : 0)];

 VAR_29->ibv_cq.start_poll = VAR_32->start_poll;
 VAR_29->ibv_cq.next_poll = VAR_32->next_poll;
 VAR_29->ibv_cq.end_poll = VAR_32->end_poll;

 VAR_29->ibv_cq.read_opcode = VAR_22;
 VAR_29->ibv_cq.read_vendor_err = VAR_27;
 VAR_29->ibv_cq.read_wc_flags = VAR_20;
 if (VAR_30->wc_flags & VAR_1)
  VAR_29->ibv_cq.read_byte_len = VAR_16;
 if (VAR_30->wc_flags & VAR_6)
  VAR_29->ibv_cq.read_imm_data = VAR_21;
 if (VAR_30->wc_flags & VAR_7)
  VAR_29->ibv_cq.read_qp_num = VAR_23;
 if (VAR_30->wc_flags & VAR_10)
  VAR_29->ibv_cq.read_src_qp = VAR_26;
 if (VAR_30->wc_flags & VAR_9)
  VAR_29->ibv_cq.read_slid = VAR_25;
 if (VAR_30->wc_flags & VAR_8)
  VAR_29->ibv_cq.read_sl = VAR_24;
 if (VAR_30->wc_flags & VAR_4)
  VAR_29->ibv_cq.read_dlid_path_bits = VAR_19;
 if (VAR_30->wc_flags & VAR_2)
  VAR_29->ibv_cq.read_completion_ts = VAR_17;
 if (VAR_30->wc_flags & VAR_3)
  VAR_29->ibv_cq.read_cvlan = VAR_18;
 if (VAR_30->wc_flags & VAR_5)
  VAR_29->ibv_cq.read_flow_tag = VAR_15;
}
