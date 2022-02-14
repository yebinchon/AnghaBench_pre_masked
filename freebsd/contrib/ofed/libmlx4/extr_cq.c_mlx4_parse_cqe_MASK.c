
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint64_t ;
typedef int uint32_t ;
typedef size_t uint16_t ;
struct mlx4_wq {int tail; int wqe_cnt; int * wrid; } ;
struct mlx4_srq {int * wrid; } ;
struct TYPE_4__ {int qp_num; scalar_t__ srq; } ;
struct TYPE_5__ {TYPE_1__ qp; } ;
struct mlx4_qp {int qp_cap_cache; scalar_t__ link_layer; struct mlx4_wq rq; struct mlx4_wq sq; TYPE_2__ verbs_qp; } ;
struct mlx4_err_cqe {int vendor_err; } ;
struct mlx4_cqe {int vlan_my_qpn; int owner_sr_opcode; int g_mlpath_rqpn; int byte_cnt; int immed_rss_invalid; int status; int sl_vid; int rlid; int wqe_index; } ;
struct TYPE_6__ {int status; int wr_id; int context; } ;
struct mlx4_cq {int flags; TYPE_3__ ibv_cq; struct mlx4_cqe* cqe; } ;
struct mlx4_context {int xsrq_table; } ;
struct ibv_wc {int qp_num; int status; int byte_len; int wc_flags; int imm_data; int slid; int src_qp; int dlid_path_bits; int pkey_index; int sl; void* opcode; int vendor_err; int wr_id; } ;
typedef enum ibv_wc_status { ____Placeholder_ibv_wc_status } ibv_wc_status ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 void* VAR_5 ;
 void* VAR_6 ;
 int VAR_7 ;
 void* VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;




 int VAR_16 ;
 int VAR_17 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct ibv_wc*,struct mlx4_cqe*) ;
 int FUNC_3 (int ) ;
 struct mlx4_qp* FUNC_4 (struct mlx4_context*,int) ;
 struct mlx4_srq* FUNC_5 (int *,int) ;
 int FUNC_6 (struct mlx4_srq*,size_t) ;
 int FUNC_7 (struct mlx4_err_cqe*) ;
 struct mlx4_context* FUNC_8 (int ) ;
 struct mlx4_srq* FUNC_9 (scalar_t__) ;

__attribute__((used)) static inline int FUNC_10(struct mlx4_cq *VAR_18,
     struct mlx4_cqe *VAR_19,
     struct mlx4_qp **VAR_20,
     struct ibv_wc *VAR_21, int VAR_22)
{
 struct mlx4_wq *VAR_23;
 struct mlx4_srq *VAR_24;
 uint32_t VAR_25;
 uint32_t VAR_26;
 uint64_t *VAR_27;
 uint16_t VAR_28;
 struct mlx4_err_cqe *VAR_29;
 struct mlx4_context *VAR_30;
 int VAR_31;
 int VAR_32;
 enum ibv_wc_status *VAR_33;

 VAR_30 = FUNC_8(VAR_18->ibv_cq.context);
 VAR_25 = FUNC_1(VAR_19->vlan_my_qpn) & VAR_13;
 if (VAR_22) {
  VAR_18->cqe = VAR_19;
  VAR_18->flags &= (~VAR_15);
 } else
  VAR_21->qp_num = VAR_25;

 VAR_32 = VAR_19->owner_sr_opcode & VAR_10;
 VAR_31 = (VAR_19->owner_sr_opcode & VAR_12) ==
  VAR_11;

 if ((VAR_25 & VAR_17) && !VAR_32) {





  VAR_24 = FUNC_5(&VAR_30->xsrq_table,
         FUNC_1(VAR_19->g_mlpath_rqpn) & VAR_13);
  if (!VAR_24)
   return VAR_1;
 } else {
  if (!*VAR_20 || (VAR_25 != (*VAR_20)->verbs_qp.qp.qp_num)) {





   *VAR_20 = FUNC_4(VAR_30, VAR_25);
   if (!*VAR_20)
    return VAR_1;
  }
  VAR_24 = ((*VAR_20)->verbs_qp.qp.srq) ? FUNC_9((*VAR_20)->verbs_qp.qp.srq) : ((void*)0);
 }

 VAR_27 = VAR_22 ? &VAR_18->ibv_cq.wr_id : &VAR_21->wr_id;
 if (VAR_32) {
  VAR_23 = &(*VAR_20)->sq;
  VAR_28 = FUNC_0(VAR_19->wqe_index);
  VAR_23->tail += (uint16_t) (VAR_28 - (uint16_t) VAR_23->tail);
  *VAR_27 = VAR_23->wrid[VAR_23->tail & (VAR_23->wqe_cnt - 1)];
  ++VAR_23->tail;
 } else if (VAR_24) {
  VAR_28 = FUNC_0(VAR_19->wqe_index);
  *VAR_27 = VAR_24->wrid[VAR_28];
  FUNC_6(VAR_24, VAR_28);
 } else {
  VAR_23 = &(*VAR_20)->rq;
  *VAR_27 = VAR_23->wrid[VAR_23->tail & (VAR_23->wqe_cnt - 1)];
  ++VAR_23->tail;
 }

 VAR_33 = VAR_22 ? &VAR_18->ibv_cq.status : &VAR_21->status;
 if (VAR_31) {
  VAR_29 = (struct mlx4_err_cqe *)VAR_19;
  *VAR_33 = FUNC_7(VAR_29);
  if (!VAR_22)
   VAR_21->vendor_err = VAR_29->vendor_err;
  return VAR_0;
 }

 *VAR_33 = VAR_7;
 if (VAR_22) {
  if (!VAR_32)
   if ((*VAR_20) && ((*VAR_20)->qp_cap_cache & VAR_16))
    VAR_18->flags |= VAR_15;
 } else if (VAR_32) {
  FUNC_2(VAR_21, VAR_19);
 } else {
  VAR_21->byte_len = FUNC_1(VAR_19->byte_cnt);

  switch (VAR_19->owner_sr_opcode & VAR_12) {
  case 131:
   VAR_21->opcode = VAR_6;
   VAR_21->wc_flags = VAR_8;
   VAR_21->imm_data = VAR_19->immed_rss_invalid;
   break;
  case 128:
   VAR_21->opcode = VAR_5;
   VAR_21->wc_flags |= VAR_9;
   VAR_21->imm_data = FUNC_1(VAR_19->immed_rss_invalid);
   break;
  case 130:
   VAR_21->opcode = VAR_5;
   VAR_21->wc_flags = 0;
   break;
  case 129:
   VAR_21->opcode = VAR_5;
   VAR_21->wc_flags = VAR_8;
   VAR_21->imm_data = VAR_19->immed_rss_invalid;
   break;
  }

  VAR_21->slid = FUNC_0(VAR_19->rlid);
  VAR_26 = FUNC_1(VAR_19->g_mlpath_rqpn);
  VAR_21->src_qp = VAR_26 & 0xffffff;
  VAR_21->dlid_path_bits = (VAR_26 >> 24) & 0x7f;
  VAR_21->wc_flags |= VAR_26 & 0x80000000 ? VAR_3 : 0;
  VAR_21->pkey_index = FUNC_1(VAR_19->immed_rss_invalid) & 0x7f;



  if ((*VAR_20) && (*VAR_20)->link_layer == VAR_2)
   VAR_21->sl = FUNC_0(VAR_19->sl_vid) >> 13;
  else
   VAR_21->sl = FUNC_0(VAR_19->sl_vid) >> 12;

  if ((*VAR_20) && ((*VAR_20)->qp_cap_cache & VAR_16)) {
   VAR_21->wc_flags |= ((VAR_19->status & FUNC_3(VAR_14)) ==
     FUNC_3(VAR_14)) <<
    VAR_4;
  }
 }

 return VAR_0;
}
