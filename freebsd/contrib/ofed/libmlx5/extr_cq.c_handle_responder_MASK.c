
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
typedef size_t uint16_t ;
struct mlx5_wq {int tail; int wqe_cnt; int * wrid; } ;
struct mlx5_srq {int * wrid; } ;
struct mlx5_resource {scalar_t__ type; } ;
struct mlx5_qp {int qp_cap_cache; struct mlx5_wq rq; } ;
struct mlx5_cqe64 {int byte_cnt; int op_own; int hds_ip_ext; int imm_inval_pkey; int flags_rqpn; int ml_path; int slid; int wqe_counter; } ;
struct ibv_wc {int byte_len; int wc_flags; int imm_data; int sl; int src_qp; int dlid_path_bits; int pkey_index; void* slid; void* opcode; int wr_id; } ;
struct TYPE_2__ {struct mlx5_wq rq; } ;


 int VAR_0 ;
 int VAR_1 ;
 void* VAR_2 ;
 void* VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;




 int VAR_10 ;
 int VAR_11 ;
 scalar_t__ VAR_12 ;
 int VAR_13 ;
 void* FUNC_0 (int ) ;
 int FUNC_1 (int) ;
 scalar_t__ FUNC_2 (struct mlx5_cqe64*) ;
 scalar_t__ FUNC_3 (int) ;
 int FUNC_4 (struct mlx5_srq*,size_t,struct mlx5_cqe64*,int) ;
 int FUNC_5 (struct mlx5_qp*,size_t,struct mlx5_cqe64*,int) ;
 int FUNC_6 (struct mlx5_srq*,size_t) ;
 struct mlx5_qp* FUNC_7 (struct mlx5_resource*) ;
 TYPE_1__* FUNC_8 (struct mlx5_resource*) ;

__attribute__((used)) static inline int FUNC_9(struct ibv_wc *VAR_14, struct mlx5_cqe64 *VAR_15,
       struct mlx5_resource *VAR_16, struct mlx5_srq *VAR_17)
{
 uint16_t VAR_18;
 struct mlx5_wq *VAR_19;
 struct mlx5_qp *VAR_20 = FUNC_7(VAR_16);
 uint8_t VAR_21;
 int VAR_22 = 0;

 VAR_14->byte_len = FUNC_1(VAR_15->byte_cnt);
 if (VAR_17) {
  VAR_18 = FUNC_0(VAR_15->wqe_counter);
  VAR_14->wr_id = VAR_17->wrid[VAR_18];
  FUNC_6(VAR_17, VAR_18);
  if (VAR_15->op_own & VAR_10)
   VAR_22 = FUNC_4(VAR_17, VAR_18, VAR_15,
          VAR_14->byte_len);
  else if (VAR_15->op_own & VAR_11)
   VAR_22 = FUNC_4(VAR_17, VAR_18, VAR_15 - 1,
          VAR_14->byte_len);
 } else {
  if (FUNC_3(VAR_16->type == VAR_12)) {
   VAR_19 = &VAR_20->rq;
   if (VAR_20->qp_cap_cache & VAR_13)
    VAR_14->wc_flags |= (!!(VAR_15->hds_ip_ext & VAR_9) &
       !!(VAR_15->hds_ip_ext & VAR_8) &
      (FUNC_2(VAR_15) ==
      VAR_7)) <<
      VAR_1;
  } else {
   VAR_19 = &(FUNC_8(VAR_16)->rq);
  }

  VAR_18 = VAR_19->tail & (VAR_19->wqe_cnt - 1);
  VAR_14->wr_id = VAR_19->wrid[VAR_18];
  ++VAR_19->tail;
  if (VAR_15->op_own & VAR_10)
   VAR_22 = FUNC_5(VAR_20, VAR_18, VAR_15,
          VAR_14->byte_len);
  else if (VAR_15->op_own & VAR_11)
   VAR_22 = FUNC_5(VAR_20, VAR_18, VAR_15 - 1,
          VAR_14->byte_len);
 }
 if (VAR_22)
  return VAR_22;

 switch (VAR_15->op_own >> 4) {
 case 128:
  VAR_14->opcode = VAR_3;
  VAR_14->wc_flags |= VAR_5;
  VAR_14->imm_data = VAR_15->imm_inval_pkey;
  break;
 case 131:
  VAR_14->opcode = VAR_2;
  break;
 case 130:
  VAR_14->opcode = VAR_2;
  VAR_14->wc_flags |= VAR_5;
  VAR_14->imm_data = VAR_15->imm_inval_pkey;
  break;
 case 129:
  VAR_14->opcode = VAR_2;
  VAR_14->wc_flags |= VAR_6;
  VAR_14->imm_data = FUNC_1(VAR_15->imm_inval_pkey);
  break;
 }
 VAR_14->slid = FUNC_0(VAR_15->slid);
 VAR_14->sl = (FUNC_1(VAR_15->flags_rqpn) >> 24) & 0xf;
 VAR_14->src_qp = FUNC_1(VAR_15->flags_rqpn) & 0xffffff;
 VAR_14->dlid_path_bits = VAR_15->ml_path & 0x7f;
 VAR_21 = (FUNC_1(VAR_15->flags_rqpn) >> 28) & 3;
 VAR_14->wc_flags |= VAR_21 ? VAR_0 : 0;
 VAR_14->pkey_index = FUNC_1(VAR_15->imm_inval_pkey) & 0xffff;

 return VAR_4;
}
