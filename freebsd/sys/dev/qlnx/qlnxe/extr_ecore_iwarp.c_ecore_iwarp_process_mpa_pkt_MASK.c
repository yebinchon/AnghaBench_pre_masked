
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct unaligned_opaque_data {int cid; int first_mpa_offset; } ;
struct ecore_iwarp_ll2_mpa_buf {int placement_offset; int tcp_payload_len; struct unaligned_opaque_data data; struct ecore_iwarp_ll2_buff* ll2_buf; } ;
struct ecore_iwarp_ll2_buff {scalar_t__ data; } ;
struct ecore_iwarp_fpdu {int fpdu_length; int incomplete_bytes; } ;
struct ecore_hwfn {TYPE_2__* p_rdma_info; } ;
typedef enum ecore_iwarp_mpa_pkt_type { ____Placeholder_ecore_iwarp_mpa_pkt_type } ecore_iwarp_mpa_pkt_type ;
typedef enum _ecore_status_t { ____Placeholder__ecore_status_t } _ecore_status_t ;
struct TYPE_3__ {int ll2_mpa_handle; } ;
struct TYPE_4__ {TYPE_1__ iwarp; } ;


 int FUNC_0 (struct ecore_hwfn*,char*,...) ;
 int FUNC_1 (struct ecore_hwfn*,int ,char*,int) ;
 int FUNC_2 (struct unaligned_opaque_data*) ;



 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_3 (struct ecore_iwarp_fpdu*,int) ;
 int FUNC_4 (struct ecore_hwfn*,struct ecore_iwarp_fpdu*,struct unaligned_opaque_data*,struct ecore_iwarp_ll2_buff*,int) ;
 struct ecore_iwarp_fpdu* FUNC_5 (struct ecore_hwfn*,int) ;
 int FUNC_6 (struct ecore_iwarp_ll2_buff*,struct ecore_iwarp_fpdu*,struct unaligned_opaque_data*,int,int) ;
 int FUNC_7 (struct ecore_hwfn*,struct ecore_iwarp_ll2_buff*,int ) ;
 int FUNC_8 (struct ecore_hwfn*,struct ecore_iwarp_fpdu*,int,int *) ;
 int FUNC_9 (struct ecore_hwfn*,int *) ;
 int FUNC_10 (struct ecore_hwfn*,struct ecore_iwarp_fpdu*,struct unaligned_opaque_data*,struct ecore_iwarp_ll2_buff*,int,int) ;
 int FUNC_11 (struct ecore_hwfn*,struct ecore_iwarp_fpdu*,int *) ;
 int FUNC_12 (struct ecore_hwfn*,struct ecore_iwarp_fpdu*) ;

__attribute__((used)) static enum _ecore_status_t
FUNC_13(struct ecore_hwfn *VAR_3,
       struct ecore_iwarp_ll2_mpa_buf *VAR_4)
{
 struct ecore_iwarp_ll2_buff *VAR_5 = VAR_4->ll2_buf;
 enum ecore_iwarp_mpa_pkt_type VAR_6;
 struct unaligned_opaque_data *VAR_7 = &VAR_4->data;
 struct ecore_iwarp_fpdu *VAR_8;
 u8 *VAR_9;
 enum _ecore_status_t VAR_10 = VAR_1;

 FUNC_9(
  VAR_3, (u8 *)(VAR_5->data) + VAR_4->placement_offset);

 VAR_8 = FUNC_5(VAR_3, VAR_7->cid & 0xffff);
 if (!VAR_8) {
  FUNC_0(VAR_3, "Invalid cid, drop and post back to rx cid=%x\n",
         VAR_7->cid);
  VAR_10 = FUNC_7(
   VAR_3, VAR_5, VAR_3->p_rdma_info->iwarp.ll2_mpa_handle);

  if (VAR_10) {
   FUNC_0(VAR_3, "Post rx buffer failed\n");




   VAR_10 = VAR_2;
  }
  return VAR_10;
 }

 do {
  VAR_9 = ((u8 *)(VAR_5->data) + VAR_7->first_mpa_offset);

  VAR_6 = FUNC_8(VAR_3, VAR_8,
          VAR_4->tcp_payload_len,
          VAR_9);

  switch (VAR_6) {
  case 129:
   FUNC_6(VAR_5, VAR_8,
           VAR_7,
           VAR_4->tcp_payload_len,
           VAR_4->placement_offset);

   if (!FUNC_2(VAR_7)) {
    VAR_4->tcp_payload_len = 0;
    break;
   }

   VAR_10 = FUNC_12(VAR_3, VAR_8);

   if (VAR_10) {
    FUNC_1(VAR_3, VAR_0,
        "Can't send FPDU:reset rc=%d\n", VAR_10);
    FUNC_3(VAR_8, sizeof(*VAR_8));
    break;
   }

   VAR_4->tcp_payload_len = 0;
   break;
  case 130:
   if (VAR_8->fpdu_length == 8) {
    FUNC_0(VAR_3, "SUSPICIOUS fpdu_length = 0x%x: assuming bug...aborting this packet...\n",
           VAR_8->fpdu_length);
    VAR_4->tcp_payload_len = 0;
    break;
   }

   FUNC_6(VAR_5, VAR_8,
           VAR_7,
           VAR_4->tcp_payload_len,
           VAR_4->placement_offset);

   VAR_10 = FUNC_10(VAR_3, VAR_8, VAR_7, VAR_5,
         VAR_4->tcp_payload_len,
         VAR_6);
   if (VAR_10) {
    FUNC_1(VAR_3, VAR_0,
        "Can't send FPDU:reset rc=%d\n", VAR_10);
    FUNC_3(VAR_8, sizeof(*VAR_8));
    break;
   }
   VAR_4->tcp_payload_len -= VAR_8->fpdu_length;
   VAR_7->first_mpa_offset += VAR_8->fpdu_length;
   break;
  case 128:
   FUNC_11(VAR_3, VAR_8, VAR_9);
   if (VAR_4->tcp_payload_len < VAR_8->incomplete_bytes) {



    if (FUNC_2(VAR_7)) {
     VAR_10 = FUNC_12(VAR_3,
         VAR_8);

     if (VAR_10)
      return VAR_10;
    }

    VAR_10 = FUNC_4(
     VAR_3, VAR_8, VAR_7,
     VAR_5, VAR_4->tcp_payload_len);


    if (VAR_10)
     return VAR_10;

    VAR_4->tcp_payload_len = 0;

    break;
   }

   VAR_10 = FUNC_10(VAR_3, VAR_8, VAR_7, VAR_5,
         VAR_4->tcp_payload_len,
         VAR_6);
   if (VAR_10) {
    FUNC_1(VAR_3, VAR_0,
        "Can't send FPDU:delay rc=%d\n", VAR_10);



    break;
   }
   VAR_4->tcp_payload_len -= VAR_8->incomplete_bytes;
   VAR_7->first_mpa_offset += VAR_8->incomplete_bytes;

   VAR_8->incomplete_bytes = 0;
   break;
  }

 } while (VAR_4->tcp_payload_len && !VAR_10);

 return VAR_10;
}
