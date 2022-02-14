
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int read_completion_ts; int read_dlid_path_bits; int read_sl; int read_slid; int read_src_qp; int read_qp_num; int read_imm_data; int read_byte_len; int read_wc_flags; int read_vendor_err; int read_opcode; int next_poll; int end_poll; int start_poll; } ;
struct mlx4_cq {int flags; TYPE_1__ ibv_cq; } ;
struct ibv_cq_init_attr_ex {int wc_flags; } ;


 int VAR_0 ;
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
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
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

void FUNC_0(struct mlx4_cq *VAR_25, const struct ibv_cq_init_attr_ex *VAR_26)
{

 if (VAR_25->flags & VAR_8) {
  VAR_25->ibv_cq.start_poll = VAR_23;
  VAR_25->ibv_cq.end_poll = VAR_20;
 } else {
  VAR_25->ibv_cq.start_poll = VAR_24;
  VAR_25->ibv_cq.end_poll = VAR_21;
 }
 VAR_25->ibv_cq.next_poll = VAR_22;

 VAR_25->ibv_cq.read_opcode = VAR_14;
 VAR_25->ibv_cq.read_vendor_err = VAR_19;
 VAR_25->ibv_cq.read_wc_flags = VAR_12;
 if (VAR_26->wc_flags & VAR_0)
  VAR_25->ibv_cq.read_byte_len = VAR_9;
 if (VAR_26->wc_flags & VAR_3)
  VAR_25->ibv_cq.read_imm_data = VAR_13;
 if (VAR_26->wc_flags & VAR_4)
  VAR_25->ibv_cq.read_qp_num = VAR_15;
 if (VAR_26->wc_flags & VAR_7)
  VAR_25->ibv_cq.read_src_qp = VAR_18;
 if (VAR_26->wc_flags & VAR_6)
  VAR_25->ibv_cq.read_slid = VAR_17;
 if (VAR_26->wc_flags & VAR_5)
  VAR_25->ibv_cq.read_sl = VAR_16;
 if (VAR_26->wc_flags & VAR_2)
  VAR_25->ibv_cq.read_dlid_path_bits = VAR_11;
 if (VAR_26->wc_flags & VAR_1)
  VAR_25->ibv_cq.read_completion_ts = VAR_10;
}
