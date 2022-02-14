
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
struct ibv_query_device_resp {int phys_port_cnt; int local_ca_ack_delay; int max_pkeys; int max_srq_sge; int max_srq_wr; int max_srq; int max_map_per_fmr; int max_fmr; int max_ah; int max_total_mcast_qp_attach; int max_mcast_qp_attach; int max_mcast_grp; int max_raw_ethy_qp; int max_raw_ipv6_qp; int max_mw; int max_rdd; int max_ee; int atomic_cap; int max_ee_init_rd_atom; int max_qp_init_rd_atom; int max_res_rd_atom; int max_ee_rd_atom; int max_qp_rd_atom; int max_pd; int max_mr; int max_cqe; int max_cq; int max_sge_rd; int max_sge; int device_cap_flags; int max_qp_wr; int max_qp; int hw_ver; int vendor_part_id; int vendor_id; int page_size_cap; int max_mr_size; int sys_image_guid; int node_guid; int fw_ver; } ;
struct ibv_device_attr {int phys_port_cnt; int local_ca_ack_delay; int max_pkeys; int max_srq_sge; int max_srq_wr; int max_srq; int max_map_per_fmr; int max_fmr; int max_ah; int max_total_mcast_qp_attach; int max_mcast_qp_attach; int max_mcast_grp; int max_raw_ethy_qp; int max_raw_ipv6_qp; int max_mw; int max_rdd; int max_ee; int atomic_cap; int max_ee_init_rd_atom; int max_qp_init_rd_atom; int max_res_rd_atom; int max_ee_rd_atom; int max_qp_rd_atom; int max_pd; int max_mr; int max_cqe; int max_cq; int max_sge_rd; int max_sge; int device_cap_flags; int max_qp_wr; int max_qp; int hw_ver; int vendor_part_id; int vendor_id; int page_size_cap; int max_mr_size; int sys_image_guid; int node_guid; } ;



__attribute__((used)) static void FUNC_0(struct ibv_device_attr *VAR_0,
      struct ibv_query_device_resp *VAR_1,
      uint64_t *VAR_2)
{
 *VAR_2 = VAR_1->fw_ver;
 VAR_0->node_guid = VAR_1->node_guid;
 VAR_0->sys_image_guid = VAR_1->sys_image_guid;
 VAR_0->max_mr_size = VAR_1->max_mr_size;
 VAR_0->page_size_cap = VAR_1->page_size_cap;
 VAR_0->vendor_id = VAR_1->vendor_id;
 VAR_0->vendor_part_id = VAR_1->vendor_part_id;
 VAR_0->hw_ver = VAR_1->hw_ver;
 VAR_0->max_qp = VAR_1->max_qp;
 VAR_0->max_qp_wr = VAR_1->max_qp_wr;
 VAR_0->device_cap_flags = VAR_1->device_cap_flags;
 VAR_0->max_sge = VAR_1->max_sge;
 VAR_0->max_sge_rd = VAR_1->max_sge_rd;
 VAR_0->max_cq = VAR_1->max_cq;
 VAR_0->max_cqe = VAR_1->max_cqe;
 VAR_0->max_mr = VAR_1->max_mr;
 VAR_0->max_pd = VAR_1->max_pd;
 VAR_0->max_qp_rd_atom = VAR_1->max_qp_rd_atom;
 VAR_0->max_ee_rd_atom = VAR_1->max_ee_rd_atom;
 VAR_0->max_res_rd_atom = VAR_1->max_res_rd_atom;
 VAR_0->max_qp_init_rd_atom = VAR_1->max_qp_init_rd_atom;
 VAR_0->max_ee_init_rd_atom = VAR_1->max_ee_init_rd_atom;
 VAR_0->atomic_cap = VAR_1->atomic_cap;
 VAR_0->max_ee = VAR_1->max_ee;
 VAR_0->max_rdd = VAR_1->max_rdd;
 VAR_0->max_mw = VAR_1->max_mw;
 VAR_0->max_raw_ipv6_qp = VAR_1->max_raw_ipv6_qp;
 VAR_0->max_raw_ethy_qp = VAR_1->max_raw_ethy_qp;
 VAR_0->max_mcast_grp = VAR_1->max_mcast_grp;
 VAR_0->max_mcast_qp_attach = VAR_1->max_mcast_qp_attach;
 VAR_0->max_total_mcast_qp_attach = VAR_1->max_total_mcast_qp_attach;
 VAR_0->max_ah = VAR_1->max_ah;
 VAR_0->max_fmr = VAR_1->max_fmr;
 VAR_0->max_map_per_fmr = VAR_1->max_map_per_fmr;
 VAR_0->max_srq = VAR_1->max_srq;
 VAR_0->max_srq_wr = VAR_1->max_srq_wr;
 VAR_0->max_srq_sge = VAR_1->max_srq_sge;
 VAR_0->max_pkeys = VAR_1->max_pkeys;
 VAR_0->local_ca_ack_delay = VAR_1->local_ca_ack_delay;
 VAR_0->phys_port_cnt = VAR_1->phys_port_cnt;
}
