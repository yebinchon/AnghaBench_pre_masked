
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_22__ TYPE_9__ ;
typedef struct TYPE_21__ TYPE_8__ ;
typedef struct TYPE_20__ TYPE_7__ ;
typedef struct TYPE_19__ TYPE_6__ ;
typedef struct TYPE_18__ TYPE_5__ ;
typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;
typedef struct TYPE_13__ TYPE_11__ ;
typedef struct TYPE_12__ TYPE_10__ ;


struct TYPE_17__ {int port_num; int is_global; int static_rate; int src_path_bits; int sl; int traffic_class; int hop_limit; int sgid_index; int dlid; int flow_label; int dgid; } ;
struct TYPE_13__ {int port_num; int is_global; int static_rate; int src_path_bits; int sl; int traffic_class; int hop_limit; int sgid_index; int dlid; int flow_label; int dgid; } ;
struct ibv_query_qp_resp {int sq_sig_all; int max_inline_data; int max_recv_sge; int max_send_sge; int max_recv_wr; int max_send_wr; TYPE_4__ alt_dest; TYPE_11__ dest; int alt_timeout; int alt_port_num; int rnr_retry; int retry_cnt; int timeout; int port_num; int min_rnr_timer; int max_dest_rd_atomic; int max_rd_atomic; int sq_draining; int path_mig_state; int path_mtu; int cur_qp_state; int qp_state; int alt_pkey_index; int pkey_index; int qp_access_flags; int dest_qp_num; int sq_psn; int rq_psn; int qkey; } ;
struct ibv_query_qp {int attr_mask; int qp_handle; } ;
struct TYPE_18__ {int max_inline_data; int max_recv_sge; int max_send_sge; int max_recv_wr; int max_send_wr; } ;
struct ibv_qp_init_attr {int sq_sig_all; TYPE_5__ cap; int qp_type; int srq; int recv_cq; int send_cq; int qp_context; } ;
struct TYPE_14__ {int raw; } ;
struct TYPE_15__ {int traffic_class; int hop_limit; int sgid_index; int flow_label; TYPE_1__ dgid; } ;
struct TYPE_16__ {int port_num; int is_global; int static_rate; int src_path_bits; int sl; TYPE_2__ grh; int dlid; } ;
struct TYPE_21__ {int raw; } ;
struct TYPE_22__ {int traffic_class; int hop_limit; int sgid_index; int flow_label; TYPE_8__ dgid; } ;
struct TYPE_12__ {int port_num; int is_global; int static_rate; int src_path_bits; int sl; TYPE_9__ grh; int dlid; } ;
struct TYPE_20__ {int max_inline_data; int max_recv_sge; int max_send_sge; int max_recv_wr; int max_send_wr; } ;
struct ibv_qp_attr {TYPE_3__ alt_ah_attr; TYPE_10__ ah_attr; TYPE_7__ cap; int alt_timeout; int alt_port_num; int rnr_retry; int retry_cnt; int timeout; int port_num; int min_rnr_timer; int max_dest_rd_atomic; int max_rd_atomic; int sq_draining; int path_mig_state; int path_mtu; int cur_qp_state; int qp_state; int alt_pkey_index; int pkey_index; int qp_access_flags; int dest_qp_num; int sq_psn; int rq_psn; int qkey; } ;
struct ibv_qp {int qp_type; int srq; int recv_cq; int send_cq; int qp_context; TYPE_6__* context; int handle; } ;
struct TYPE_19__ {int cmd_fd; } ;


 int VAR_0 ;
 int FUNC_0 (struct ibv_query_qp*,size_t,int ,struct ibv_query_qp_resp*,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct ibv_query_qp_resp*,int) ;
 int VAR_3 ;
 int FUNC_2 (int ,int ,int) ;
 size_t FUNC_3 (int ,struct ibv_query_qp*,size_t) ;

int FUNC_4(struct ibv_qp *VAR_4, struct ibv_qp_attr *VAR_5,
       int VAR_6,
       struct ibv_qp_init_attr *VAR_7,
       struct ibv_query_qp *VAR_8, size_t VAR_9)
{
 struct ibv_query_qp_resp VAR_10;





 if (VAR_6 & ~((VAR_1 << 1) - 1))
  return VAR_0;

 FUNC_0(VAR_8, VAR_9, VAR_2, &VAR_10, sizeof VAR_10);
 VAR_8->qp_handle = VAR_4->handle;
 VAR_8->attr_mask = VAR_6;

 if (FUNC_3(VAR_4->context->cmd_fd, VAR_8, VAR_9) != VAR_9)
  return VAR_3;

 (void) FUNC_1(&VAR_10, sizeof VAR_10);

 VAR_5->qkey = VAR_10.qkey;
 VAR_5->rq_psn = VAR_10.rq_psn;
 VAR_5->sq_psn = VAR_10.sq_psn;
 VAR_5->dest_qp_num = VAR_10.dest_qp_num;
 VAR_5->qp_access_flags = VAR_10.qp_access_flags;
 VAR_5->pkey_index = VAR_10.pkey_index;
 VAR_5->alt_pkey_index = VAR_10.alt_pkey_index;
 VAR_5->qp_state = VAR_10.qp_state;
 VAR_5->cur_qp_state = VAR_10.cur_qp_state;
 VAR_5->path_mtu = VAR_10.path_mtu;
 VAR_5->path_mig_state = VAR_10.path_mig_state;
 VAR_5->sq_draining = VAR_10.sq_draining;
 VAR_5->max_rd_atomic = VAR_10.max_rd_atomic;
 VAR_5->max_dest_rd_atomic = VAR_10.max_dest_rd_atomic;
 VAR_5->min_rnr_timer = VAR_10.min_rnr_timer;
 VAR_5->port_num = VAR_10.port_num;
 VAR_5->timeout = VAR_10.timeout;
 VAR_5->retry_cnt = VAR_10.retry_cnt;
 VAR_5->rnr_retry = VAR_10.rnr_retry;
 VAR_5->alt_port_num = VAR_10.alt_port_num;
 VAR_5->alt_timeout = VAR_10.alt_timeout;
 VAR_5->cap.max_send_wr = VAR_10.max_send_wr;
 VAR_5->cap.max_recv_wr = VAR_10.max_recv_wr;
 VAR_5->cap.max_send_sge = VAR_10.max_send_sge;
 VAR_5->cap.max_recv_sge = VAR_10.max_recv_sge;
 VAR_5->cap.max_inline_data = VAR_10.max_inline_data;

 FUNC_2(VAR_5->ah_attr.grh.dgid.raw, VAR_10.dest.dgid, 16);
 VAR_5->ah_attr.grh.flow_label = VAR_10.dest.flow_label;
 VAR_5->ah_attr.dlid = VAR_10.dest.dlid;
 VAR_5->ah_attr.grh.sgid_index = VAR_10.dest.sgid_index;
 VAR_5->ah_attr.grh.hop_limit = VAR_10.dest.hop_limit;
 VAR_5->ah_attr.grh.traffic_class = VAR_10.dest.traffic_class;
 VAR_5->ah_attr.sl = VAR_10.dest.sl;
 VAR_5->ah_attr.src_path_bits = VAR_10.dest.src_path_bits;
 VAR_5->ah_attr.static_rate = VAR_10.dest.static_rate;
 VAR_5->ah_attr.is_global = VAR_10.dest.is_global;
 VAR_5->ah_attr.port_num = VAR_10.dest.port_num;

 FUNC_2(VAR_5->alt_ah_attr.grh.dgid.raw, VAR_10.alt_dest.dgid, 16);
 VAR_5->alt_ah_attr.grh.flow_label = VAR_10.alt_dest.flow_label;
 VAR_5->alt_ah_attr.dlid = VAR_10.alt_dest.dlid;
 VAR_5->alt_ah_attr.grh.sgid_index = VAR_10.alt_dest.sgid_index;
 VAR_5->alt_ah_attr.grh.hop_limit = VAR_10.alt_dest.hop_limit;
 VAR_5->alt_ah_attr.grh.traffic_class = VAR_10.alt_dest.traffic_class;
 VAR_5->alt_ah_attr.sl = VAR_10.alt_dest.sl;
 VAR_5->alt_ah_attr.src_path_bits = VAR_10.alt_dest.src_path_bits;
 VAR_5->alt_ah_attr.static_rate = VAR_10.alt_dest.static_rate;
 VAR_5->alt_ah_attr.is_global = VAR_10.alt_dest.is_global;
 VAR_5->alt_ah_attr.port_num = VAR_10.alt_dest.port_num;

 VAR_7->qp_context = VAR_4->qp_context;
 VAR_7->send_cq = VAR_4->send_cq;
 VAR_7->recv_cq = VAR_4->recv_cq;
 VAR_7->srq = VAR_4->srq;
 VAR_7->qp_type = VAR_4->qp_type;
 VAR_7->cap.max_send_wr = VAR_10.max_send_wr;
 VAR_7->cap.max_recv_wr = VAR_10.max_recv_wr;
 VAR_7->cap.max_send_sge = VAR_10.max_send_sge;
 VAR_7->cap.max_recv_sge = VAR_10.max_recv_sge;
 VAR_7->cap.max_inline_data = VAR_10.max_inline_data;
 VAR_7->sq_sig_all = VAR_10.sq_sig_all;

 return 0;
}
