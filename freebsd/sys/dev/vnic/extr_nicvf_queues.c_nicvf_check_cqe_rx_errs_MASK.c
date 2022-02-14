
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nicvf_hw_stats {int rx_truncated_pkts; int rx_l4_pclp; int rx_tcp_offset_errs; int rx_tcp_flag_errs; int rx_l4_port_errs; int rx_udp_len_errs; int rx_l4_csum_errs; int rx_l4_malformed; int rx_l3_pclp; int rx_ip_ttl_errs; int rx_ip_payload_malformed; int rx_ip_hdr_malformed; int rx_ip_csum_errs; int rx_ip_ver_errs; int rx_l2_pclp; int rx_l2_len_mismatch; int rx_undersize; int rx_oversize; int rx_l2_hdr_malformed; int rx_prel2_errs; int rx_bgx_errs; int rx_fcs_errs; int rx_jabber_errs; int rx_bgx_truncated_pkts; } ;
struct nicvf_drv_stats {int rx_frames_ok; } ;
struct nicvf {struct nicvf_drv_stats drv_stats; struct nicvf_hw_stats hw_stats; } ;
struct cqe_rx_t {int err_opcode; int err_level; } ;
struct cmp_queue {int dummy; } ;
int
FUNC_0(struct nicvf *VAR_0, struct cmp_queue *VAR_1,
    struct cqe_rx_t *VAR_2)
{
 struct nicvf_hw_stats *VAR_3 = &VAR_0->hw_stats;
 struct nicvf_drv_stats *VAR_4 = &VAR_0->drv_stats;

 if (!VAR_2->err_level && !VAR_2->err_opcode) {
  VAR_4->rx_frames_ok++;
  return (0);
 }

 switch (VAR_2->err_opcode) {
 case 132:
  VAR_3->rx_bgx_truncated_pkts++;
  break;
 case 133:
  VAR_3->rx_jabber_errs++;
  break;
 case 134:
  VAR_3->rx_fcs_errs++;
  break;
 case 131:
  VAR_3->rx_bgx_errs++;
  break;
 case 136:
  VAR_3->rx_prel2_errs++;
  break;
 case 145:
  VAR_3->rx_l2_hdr_malformed++;
  break;
 case 144:
  VAR_3->rx_oversize++;
  break;
 case 142:
  VAR_3->rx_undersize++;
  break;
 case 146:
  VAR_3->rx_l2_len_mismatch++;
  break;
 case 143:
  VAR_3->rx_l2_pclp++;
  break;
 case 147:
  VAR_3->rx_ip_ver_errs++;
  break;
 case 151:
  VAR_3->rx_ip_csum_errs++;
  break;
 case 149:
  VAR_3->rx_ip_hdr_malformed++;
  break;
 case 148:
  VAR_3->rx_ip_payload_malformed++;
  break;
 case 150:
  VAR_3->rx_ip_ttl_errs++;
  break;
 case 141:
  VAR_3->rx_l3_pclp++;
  break;
 case 139:
  VAR_3->rx_l4_malformed++;
  break;
 case 140:
  VAR_3->rx_l4_csum_errs++;
  break;
 case 128:
  VAR_3->rx_udp_len_errs++;
  break;
 case 137:
  VAR_3->rx_l4_port_errs++;
  break;
 case 130:
  VAR_3->rx_tcp_flag_errs++;
  break;
 case 129:
  VAR_3->rx_tcp_offset_errs++;
  break;
 case 138:
  VAR_3->rx_l4_pclp++;
  break;
 case 135:
  VAR_3->rx_truncated_pkts++;
  break;
 }

 return (1);
}
