
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct ecore_tlv_parsed_buf {int * p_val; } ;
struct ecore_mfw_tlv_iscsi {int tx_bytes; int tx_bytes_set; int tx_frames; int tx_frames_set; int rx_bytes; int rx_bytes_set; int rx_frames; int rx_frames_set; int rx_desc_qdepth; int rx_desc_qdepth_set; int tx_desc_qdepth; int tx_desc_qdepth_set; int boot_progress; int boot_progress_set; int rx_desc_size; int rx_desc_size_set; int tx_desc_size; int tx_desc_size_set; int frame_size; int frame_size_set; int boot_taget_portal; int boot_taget_portal_set; int auth_method; int auth_method_set; int data_digest; int data_digest_set; int header_digest; int header_digest_set; int target_llmnr; int target_llmnr_set; } ;
struct ecore_drv_tlv_hdr {int tlv_type; } ;
__attribute__((used)) static int
FUNC_0(struct ecore_drv_tlv_hdr *VAR_0,
         struct ecore_mfw_tlv_iscsi *VAR_1,
         struct ecore_tlv_parsed_buf *VAR_2)
{
 switch (VAR_0->tlv_type) {
 case 128:
  if (VAR_1->target_llmnr_set) {
   VAR_2->p_val = (u8 *)&VAR_1->target_llmnr;
   return sizeof(VAR_1->target_llmnr);
  }
  break;
 case 140:
  if (VAR_1->header_digest_set) {
   VAR_2->p_val = (u8 *)&VAR_1->header_digest;
   return sizeof(VAR_1->header_digest);
  }
  break;
 case 141:
  if (VAR_1->data_digest_set) {
   VAR_2->p_val = (u8 *)&VAR_1->data_digest;
   return sizeof(VAR_1->data_digest);
  }
  break;
 case 142:
  if (VAR_1->auth_method_set) {
   VAR_2->p_val = (u8 *)&VAR_1->auth_method;
   return sizeof(VAR_1->auth_method);
  }
  break;
 case 138:
  if (VAR_1->boot_taget_portal_set) {
   VAR_2->p_val = (u8 *)&VAR_1->boot_taget_portal;
   return sizeof(VAR_1->boot_taget_portal);
  }
  break;
 case 133:
  if (VAR_1->frame_size_set) {
   VAR_2->p_val = (u8 *)&VAR_1->frame_size;
   return sizeof(VAR_1->frame_size);
  }
  break;
 case 130:
  if (VAR_1->tx_desc_size_set) {
   VAR_2->p_val = (u8 *)&VAR_1->tx_desc_size;
   return sizeof(VAR_1->tx_desc_size);
  }
  break;
 case 131:
  if (VAR_1->rx_desc_size_set) {
   VAR_2->p_val = (u8 *)&VAR_1->rx_desc_size;
   return sizeof(VAR_1->rx_desc_size);
  }
  break;
 case 139:
  if (VAR_1->boot_progress_set) {
   VAR_2->p_val = (u8 *)&VAR_1->boot_progress;
   return sizeof(VAR_1->boot_progress);
  }
  break;
 case 129:
  if (VAR_1->tx_desc_qdepth_set) {
   VAR_2->p_val = (u8 *)&VAR_1->tx_desc_qdepth;
   return sizeof(VAR_1->tx_desc_qdepth);
  }
  break;
 case 132:
  if (VAR_1->rx_desc_qdepth_set) {
   VAR_2->p_val = (u8 *)&VAR_1->rx_desc_qdepth;
   return sizeof(VAR_1->rx_desc_qdepth);
  }
  break;
 case 136:
  if (VAR_1->rx_frames_set) {
   VAR_2->p_val = (u8 *)&VAR_1->rx_frames;
   return sizeof(VAR_1->rx_frames);
  }
  break;
 case 137:
  if (VAR_1->rx_bytes_set) {
   VAR_2->p_val = (u8 *)&VAR_1->rx_bytes;
   return sizeof(VAR_1->rx_bytes);
  }
  break;
 case 134:
  if (VAR_1->tx_frames_set) {
   VAR_2->p_val = (u8 *)&VAR_1->tx_frames;
   return sizeof(VAR_1->tx_frames);
  }
  break;
 case 135:
  if (VAR_1->tx_bytes_set) {
   VAR_2->p_val = (u8 *)&VAR_1->tx_bytes;
   return sizeof(VAR_1->tx_bytes);
  }
  break;
 default:
  break;
 }

 return -1;
}
