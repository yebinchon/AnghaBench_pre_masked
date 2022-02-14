
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef int tx_pkt ;
struct ecore_ll2_tx_pkt_info {int num_of_bds; int l4_hdr_offset_w; int first_frag_len; int enable_ip_cksum; int enable_l4_cksum; int calc_ip_len; scalar_t__ first_frag; int vlan; int tx_dest; } ;
struct ecore_iwarp_fpdu {int pkt_hdr_size; scalar_t__ pkt_hdr; } ;
struct ecore_hwfn {TYPE_2__* p_rdma_info; } ;
typedef enum _ecore_status_t { ____Placeholder__ecore_status_t } _ecore_status_t ;
struct TYPE_3__ {int ll2_mpa_handle; } ;
struct TYPE_4__ {TYPE_1__ iwarp; } ;


 int FUNC_0 (struct ecore_hwfn*,int ,char*,int,...) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct ecore_ll2_tx_pkt_info*,int) ;
 int FUNC_2 (struct ecore_hwfn*,int ,struct ecore_ll2_tx_pkt_info*,int) ;

__attribute__((used)) static enum _ecore_status_t
FUNC_3(struct ecore_hwfn *VAR_3,
      struct ecore_iwarp_fpdu *VAR_4)
{
 struct ecore_ll2_tx_pkt_info VAR_5;
 enum _ecore_status_t VAR_6;
 u8 VAR_7;

 FUNC_1(&VAR_5, sizeof(VAR_5));
 VAR_5.num_of_bds = 1;
 VAR_5.tx_dest = VAR_0;
 VAR_5.l4_hdr_offset_w = VAR_4->pkt_hdr_size >> 2;

 VAR_5.first_frag = VAR_4->pkt_hdr;
 VAR_5.first_frag_len = VAR_4->pkt_hdr_size;
 VAR_5.enable_ip_cksum = 1;
 VAR_5.enable_l4_cksum = 1;
 VAR_5.calc_ip_len = 1;

 VAR_5.vlan = VAR_2;

 VAR_7 = VAR_3->p_rdma_info->iwarp.ll2_mpa_handle;

 VAR_6 = FUNC_2(VAR_3,
      VAR_7,
      &VAR_5, 1);

 FUNC_0(VAR_3, VAR_1,
     "MPA_ALIGN: Sent right edge FPDU num_bds=%d [%lx, 0x%x], rc=%d\n",
     VAR_5.num_of_bds, (long unsigned int)VAR_5.first_frag,
     VAR_5.first_frag_len, VAR_6);

 if (VAR_6)
  FUNC_0(VAR_3, VAR_1,
      "Can't send right edge rc=%d\n", VAR_6);

 return VAR_6;
}
