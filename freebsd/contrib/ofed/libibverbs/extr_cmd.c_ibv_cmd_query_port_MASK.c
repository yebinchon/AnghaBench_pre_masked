
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct ibv_query_port_resp {int link_layer; int phys_state; int active_speed; int active_width; int init_type_reply; int subnet_timeout; int sm_sl; int max_vl_num; int lmc; int sm_lid; int lid; int pkey_tbl_len; int qkey_viol_cntr; int bad_pkey_cntr; int max_msg_sz; int port_cap_flags; int gid_tbl_len; int active_mtu; int max_mtu; int state; } ;
struct ibv_query_port {int reserved; int port_num; } ;
struct ibv_port_attr {int link_layer; int phys_state; int active_speed; int active_width; int init_type_reply; int subnet_timeout; int sm_sl; int max_vl_num; int lmc; int sm_lid; int lid; int pkey_tbl_len; int qkey_viol_cntr; int bad_pkey_cntr; int max_msg_sz; int port_cap_flags; int gid_tbl_len; int active_mtu; int max_mtu; int state; } ;
struct ibv_context {int cmd_fd; } ;


 int FUNC_0 (struct ibv_query_port*,size_t,int ,struct ibv_query_port_resp*,int) ;
 int VAR_0 ;
 int FUNC_1 (struct ibv_query_port_resp*,int) ;
 int VAR_1 ;
 int FUNC_2 (int ,int ,int) ;
 size_t FUNC_3 (int ,struct ibv_query_port*,size_t) ;

int FUNC_4(struct ibv_context *VAR_2, uint8_t VAR_3,
         struct ibv_port_attr *VAR_4,
         struct ibv_query_port *VAR_5, size_t VAR_6)
{
 struct ibv_query_port_resp VAR_7;

 FUNC_0(VAR_5, VAR_6, VAR_0, &VAR_7, sizeof VAR_7);
 VAR_5->port_num = VAR_3;
 FUNC_2(VAR_5->reserved, 0, sizeof VAR_5->reserved);

 if (FUNC_3(VAR_2->cmd_fd, VAR_5, VAR_6) != VAR_6)
  return VAR_1;

 (void) FUNC_1(&VAR_7, sizeof VAR_7);

 VAR_4->state = VAR_7.state;
 VAR_4->max_mtu = VAR_7.max_mtu;
 VAR_4->active_mtu = VAR_7.active_mtu;
 VAR_4->gid_tbl_len = VAR_7.gid_tbl_len;
 VAR_4->port_cap_flags = VAR_7.port_cap_flags;
 VAR_4->max_msg_sz = VAR_7.max_msg_sz;
 VAR_4->bad_pkey_cntr = VAR_7.bad_pkey_cntr;
 VAR_4->qkey_viol_cntr = VAR_7.qkey_viol_cntr;
 VAR_4->pkey_tbl_len = VAR_7.pkey_tbl_len;
 VAR_4->lid = VAR_7.lid;
 VAR_4->sm_lid = VAR_7.sm_lid;
 VAR_4->lmc = VAR_7.lmc;
 VAR_4->max_vl_num = VAR_7.max_vl_num;
 VAR_4->sm_sl = VAR_7.sm_sl;
 VAR_4->subnet_timeout = VAR_7.subnet_timeout;
 VAR_4->init_type_reply = VAR_7.init_type_reply;
 VAR_4->active_width = VAR_7.active_width;
 VAR_4->active_speed = VAR_7.active_speed;
 VAR_4->phys_state = VAR_7.phys_state;
 VAR_4->link_layer = VAR_7.link_layer;

 return 0;
}
