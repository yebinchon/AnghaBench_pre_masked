
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef int tx_pkt ;
struct ecore_ll2_tx_pkt_info {int num_of_bds; int l4_hdr_offset_w; int first_frag_len; scalar_t__ first_frag; struct ecore_iwarp_ll2_buff* cookie; int tx_dest; } ;
struct ecore_iwarp_ll2_buff {int piggy_buf; } ;
struct ecore_iwarp_fpdu {int pkt_hdr_size; scalar_t__ pkt_hdr; } ;
struct ecore_hwfn {TYPE_2__* p_rdma_info; } ;
typedef enum _ecore_status_t { ____Placeholder__ecore_status_t } _ecore_status_t ;
struct TYPE_3__ {int ll2_mpa_handle; } ;
struct TYPE_4__ {TYPE_1__ iwarp; } ;


 int FUNC_0 (struct ecore_hwfn*,int ,char*,int,...) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct ecore_ll2_tx_pkt_info*,int) ;
 int VAR_2 ;
 int FUNC_2 (struct ecore_hwfn*,int ,struct ecore_ll2_tx_pkt_info*,int) ;

__attribute__((used)) static enum _ecore_status_t
FUNC_3(struct ecore_hwfn *VAR_3,
   struct ecore_iwarp_fpdu *VAR_4,
   struct ecore_iwarp_ll2_buff *VAR_5)
{
 struct ecore_ll2_tx_pkt_info VAR_6;
 enum _ecore_status_t VAR_7;
 u8 VAR_8;

 FUNC_1(&VAR_6, sizeof(VAR_6));
 VAR_6.num_of_bds = 1;
 VAR_6.tx_dest = VAR_0;
 VAR_6.l4_hdr_offset_w = VAR_4->pkt_hdr_size >> 2;
 VAR_6.first_frag = VAR_4->pkt_hdr;
 VAR_6.first_frag_len = VAR_4->pkt_hdr_size;
 VAR_5->piggy_buf = VAR_2;
 VAR_6.cookie = VAR_5;

 VAR_8 = VAR_3->p_rdma_info->iwarp.ll2_mpa_handle;

 VAR_7 = FUNC_2(VAR_3,
      VAR_8,
      &VAR_6, 1);

 FUNC_0(VAR_3, VAR_1,
     "MPA_ALIGN: send drop tx packet [%lx, 0x%x], buf=%p, rc=%d\n",
     (long unsigned int)VAR_6.first_frag,
     VAR_6.first_frag_len, VAR_5, VAR_7);

 if (VAR_7)
  FUNC_0(VAR_3, VAR_1,
      "Can't drop packet rc=%d\n", VAR_7);

 return VAR_7;
}
