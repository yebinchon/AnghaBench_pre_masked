
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


struct TYPE_13__ {int raw; } ;
struct TYPE_14__ {int traffic_class; int hop_limit; int sgid_index; int flow_label; TYPE_5__ dgid; } ;
struct TYPE_15__ {int port_num; int is_global; int static_rate; int src_path_bits; int sl; TYPE_6__ grh; int dlid; } ;
struct TYPE_9__ {int raw; } ;
struct TYPE_10__ {int traffic_class; int hop_limit; int sgid_index; int flow_label; TYPE_1__ dgid; } ;
struct TYPE_12__ {int port_num; int is_global; int static_rate; int src_path_bits; int sl; TYPE_2__ grh; int dlid; } ;
struct ibv_qp_attr {int dest_qp_num; int path_mig_state; int max_dest_rd_atomic; int sq_psn; int min_rnr_timer; TYPE_7__ alt_ah_attr; int alt_timeout; int alt_port_num; int alt_pkey_index; int max_rd_atomic; int rq_psn; int rnr_retry; int retry_cnt; int timeout; int path_mtu; TYPE_4__ ah_attr; int qkey; int port_num; int pkey_index; int qp_access_flags; int en_sqd_async_notify; int cur_qp_state; int qp_state; } ;
struct ibv_qp {int handle; } ;
struct TYPE_16__ {int port_num; int is_global; int static_rate; int src_path_bits; int sl; int traffic_class; int hop_limit; int sgid_index; scalar_t__ reserved; int dlid; int flow_label; int dgid; } ;
struct TYPE_11__ {int port_num; int is_global; int static_rate; int src_path_bits; int sl; int traffic_class; int hop_limit; int sgid_index; scalar_t__ reserved; int dlid; int flow_label; int dgid; } ;
struct ibv_modify_qp_common {int attr_mask; scalar_t__* reserved; int dest_qp_num; int path_mig_state; int max_dest_rd_atomic; int sq_psn; int min_rnr_timer; TYPE_8__ alt_dest; int alt_timeout; int alt_port_num; int alt_pkey_index; int max_rd_atomic; int rq_psn; int rnr_retry; int retry_cnt; int timeout; int path_mtu; TYPE_3__ dest; int qkey; int port_num; int pkey_index; int qp_access_flags; int en_sqd_async_notify; int cur_qp_state; int qp_state; int qp_handle; } ;


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
 int FUNC_0 (int ,int ,int) ;

__attribute__((used)) static void FUNC_1(struct ibv_qp *VAR_20, struct ibv_qp_attr *VAR_21,
      int VAR_22,
      struct ibv_modify_qp_common *VAR_23)
{
 VAR_23->qp_handle = VAR_20->handle;
 VAR_23->attr_mask = VAR_22;

 if (VAR_22 & VAR_18)
  VAR_23->qp_state = VAR_21->qp_state;
 if (VAR_22 & VAR_3)
  VAR_23->cur_qp_state = VAR_21->cur_qp_state;
 if (VAR_22 & VAR_5)
  VAR_23->en_sqd_async_notify = VAR_21->en_sqd_async_notify;
 if (VAR_22 & VAR_0)
  VAR_23->qp_access_flags = VAR_21->qp_access_flags;
 if (VAR_22 & VAR_11)
  VAR_23->pkey_index = VAR_21->pkey_index;
 if (VAR_22 & VAR_12)
  VAR_23->port_num = VAR_21->port_num;
 if (VAR_22 & VAR_13)
  VAR_23->qkey = VAR_21->qkey;

 if (VAR_22 & VAR_2) {
  FUNC_0(VAR_23->dest.dgid, VAR_21->ah_attr.grh.dgid.raw, 16);
  VAR_23->dest.flow_label = VAR_21->ah_attr.grh.flow_label;
  VAR_23->dest.dlid = VAR_21->ah_attr.dlid;
  VAR_23->dest.reserved = 0;
  VAR_23->dest.sgid_index = VAR_21->ah_attr.grh.sgid_index;
  VAR_23->dest.hop_limit = VAR_21->ah_attr.grh.hop_limit;
  VAR_23->dest.traffic_class = VAR_21->ah_attr.grh.traffic_class;
  VAR_23->dest.sl = VAR_21->ah_attr.sl;
  VAR_23->dest.src_path_bits = VAR_21->ah_attr.src_path_bits;
  VAR_23->dest.static_rate = VAR_21->ah_attr.static_rate;
  VAR_23->dest.is_global = VAR_21->ah_attr.is_global;
  VAR_23->dest.port_num = VAR_21->ah_attr.port_num;
 }

 if (VAR_22 & VAR_10)
  VAR_23->path_mtu = VAR_21->path_mtu;
 if (VAR_22 & VAR_19)
  VAR_23->timeout = VAR_21->timeout;
 if (VAR_22 & VAR_14)
  VAR_23->retry_cnt = VAR_21->retry_cnt;
 if (VAR_22 & VAR_15)
  VAR_23->rnr_retry = VAR_21->rnr_retry;
 if (VAR_22 & VAR_16)
  VAR_23->rq_psn = VAR_21->rq_psn;
 if (VAR_22 & VAR_7)
  VAR_23->max_rd_atomic = VAR_21->max_rd_atomic;

 if (VAR_22 & VAR_1) {
  VAR_23->alt_pkey_index = VAR_21->alt_pkey_index;
  VAR_23->alt_port_num = VAR_21->alt_port_num;
  VAR_23->alt_timeout = VAR_21->alt_timeout;

  FUNC_0(VAR_23->alt_dest.dgid, VAR_21->alt_ah_attr.grh.dgid.raw, 16);
  VAR_23->alt_dest.flow_label = VAR_21->alt_ah_attr.grh.flow_label;
  VAR_23->alt_dest.dlid = VAR_21->alt_ah_attr.dlid;
  VAR_23->alt_dest.reserved = 0;
  VAR_23->alt_dest.sgid_index = VAR_21->alt_ah_attr.grh.sgid_index;
  VAR_23->alt_dest.hop_limit = VAR_21->alt_ah_attr.grh.hop_limit;
  VAR_23->alt_dest.traffic_class =
      VAR_21->alt_ah_attr.grh.traffic_class;
  VAR_23->alt_dest.sl = VAR_21->alt_ah_attr.sl;
  VAR_23->alt_dest.src_path_bits = VAR_21->alt_ah_attr.src_path_bits;
  VAR_23->alt_dest.static_rate = VAR_21->alt_ah_attr.static_rate;
  VAR_23->alt_dest.is_global = VAR_21->alt_ah_attr.is_global;
  VAR_23->alt_dest.port_num = VAR_21->alt_ah_attr.port_num;
 }

 if (VAR_22 & VAR_8)
  VAR_23->min_rnr_timer = VAR_21->min_rnr_timer;
 if (VAR_22 & VAR_17)
  VAR_23->sq_psn = VAR_21->sq_psn;
 if (VAR_22 & VAR_6)
  VAR_23->max_dest_rd_atomic = VAR_21->max_dest_rd_atomic;
 if (VAR_22 & VAR_9)
  VAR_23->path_mig_state = VAR_21->path_mig_state;
 if (VAR_22 & VAR_4)
  VAR_23->dest_qp_num = VAR_21->dest_qp_num;

 VAR_23->reserved[0] = VAR_23->reserved[1] = 0;
}
