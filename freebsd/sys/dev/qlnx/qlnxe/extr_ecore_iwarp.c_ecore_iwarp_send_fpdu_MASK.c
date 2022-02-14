
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
typedef scalar_t__ u16 ;
typedef int tx_pkt ;
struct unaligned_opaque_data {scalar_t__ first_mpa_offset; } ;
struct ecore_ll2_tx_pkt_info {int num_of_bds; int l4_hdr_offset_w; int first_frag_len; int enable_ip_cksum; int enable_l4_cksum; int calc_ip_len; TYPE_3__* cookie; scalar_t__ first_frag; int vlan; int tx_dest; } ;
struct ecore_iwarp_ll2_buff {scalar_t__ data_phys_addr; } ;
struct ecore_iwarp_fpdu {int pkt_hdr_size; scalar_t__ fpdu_length; scalar_t__ incomplete_bytes; scalar_t__ mpa_frag_len; scalar_t__ mpa_frag; TYPE_3__* mpa_buf; scalar_t__ pkt_hdr; } ;
struct ecore_hwfn {TYPE_2__* p_rdma_info; } ;
typedef enum ecore_iwarp_mpa_pkt_type { ____Placeholder_ecore_iwarp_mpa_pkt_type } ecore_iwarp_mpa_pkt_type ;
typedef enum _ecore_status_t { ____Placeholder__ecore_status_t } _ecore_status_t ;
struct TYPE_6__ {struct ecore_iwarp_ll2_buff* piggy_buf; } ;
struct TYPE_4__ {int ll2_mpa_handle; } ;
struct TYPE_5__ {TYPE_1__ iwarp; } ;


 int FUNC_0 (struct ecore_hwfn*,int ,char*,int,unsigned long,int,unsigned long,scalar_t__,scalar_t__,scalar_t__,TYPE_3__*,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct ecore_ll2_tx_pkt_info*,int) ;
 int FUNC_2 (struct ecore_hwfn*,int ,struct ecore_ll2_tx_pkt_info*,int) ;
 int FUNC_3 (struct ecore_hwfn*,int ,scalar_t__,scalar_t__) ;

__attribute__((used)) static enum _ecore_status_t
FUNC_4(struct ecore_hwfn *VAR_4,
        struct ecore_iwarp_fpdu *VAR_5,
        struct unaligned_opaque_data *VAR_6,
        struct ecore_iwarp_ll2_buff *VAR_7,
        u16 VAR_8,
        enum ecore_iwarp_mpa_pkt_type VAR_9)
{
 struct ecore_ll2_tx_pkt_info VAR_10;
 enum _ecore_status_t VAR_11;
 u8 VAR_12;

 FUNC_1(&VAR_10, sizeof(VAR_10));

 VAR_10.num_of_bds = (VAR_9 == VAR_0) ? 3 : 2;
 VAR_10.tx_dest = VAR_1;
 VAR_10.l4_hdr_offset_w = VAR_5->pkt_hdr_size >> 2;


 if ((VAR_9 == VAR_0) ||
     (VAR_8 <= VAR_5->fpdu_length))
  VAR_10.cookie = VAR_5->mpa_buf;

 VAR_10.first_frag = VAR_5->pkt_hdr;
 VAR_10.first_frag_len = VAR_5->pkt_hdr_size;
 VAR_10.enable_ip_cksum = 1;
 VAR_10.enable_l4_cksum = 1;
 VAR_10.calc_ip_len = 1;

 VAR_10.vlan = VAR_3;




 if (VAR_8 == VAR_5->incomplete_bytes) {
  VAR_5->mpa_buf->piggy_buf = VAR_7;
 }

 VAR_12 = VAR_4->p_rdma_info->iwarp.ll2_mpa_handle;

 VAR_11 = FUNC_2(VAR_4,
      VAR_12,
      &VAR_10, 1);
 if (VAR_11)
  goto err;

 VAR_11 = FUNC_3(VAR_4, VAR_12,
       VAR_5->mpa_frag,
       VAR_5->mpa_frag_len);
 if (VAR_11)
  goto err;

 if (VAR_5->incomplete_bytes) {
  VAR_11 = FUNC_3(
   VAR_4, VAR_12,
   VAR_7->data_phys_addr + VAR_6->first_mpa_offset,
   VAR_5->incomplete_bytes);

  if (VAR_11)
   goto err;
 }

err:
 FUNC_0(VAR_4, VAR_2,
     "MPA_ALIGN: Sent FPDU num_bds=%d [%lx, 0x%x], [0x%lx, 0x%x], [0x%lx, 0x%x] (cookie %p) rc=%d\n",
     VAR_10.num_of_bds, (long unsigned int)VAR_10.first_frag,
     VAR_10.first_frag_len, (long unsigned int)VAR_5->mpa_frag,
     VAR_5->mpa_frag_len, (long unsigned int)VAR_7->data_phys_addr +
     VAR_6->first_mpa_offset, VAR_5->incomplete_bytes,
     VAR_10.cookie, VAR_11);

 return VAR_11;
}
