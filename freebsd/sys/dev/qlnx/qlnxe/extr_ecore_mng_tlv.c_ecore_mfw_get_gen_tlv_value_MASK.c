
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct ecore_tlv_parsed_buf {int* data; int* p_val; } ;
struct TYPE_2__ {int lso_supported; int ipv4_csum_offload; int b_set; } ;
struct ecore_mfw_tlv_generic {int** mac; int tx_bytes; int tx_bytes_set; int tx_frames; int tx_frames_set; int rx_bytes; int rx_bytes_set; int rx_frames; int rx_frames_set; int * mac_set; TYPE_1__ flags; } ;
struct ecore_drv_tlv_hdr {int tlv_type; } ;
 int VAR_0 ;
 int FUNC_0 (int*,int) ;

__attribute__((used)) static int
FUNC_1(struct ecore_drv_tlv_hdr *VAR_1,
       struct ecore_mfw_tlv_generic *VAR_2,
       struct ecore_tlv_parsed_buf *VAR_3)
{
 switch (VAR_1->tlv_type) {
 case 133:
  if (VAR_2->flags.b_set) {
   FUNC_0(VAR_3->data,
          sizeof(u8) * VAR_0);
   VAR_3->data[0] = VAR_2->flags.ipv4_csum_offload ?
      1 : 0;
   VAR_3->data[0] |= (VAR_2->flags.lso_supported ?
        1 : 0) << 1;
   VAR_3->p_val = VAR_3->data;
   return 2;
  }
  break;

 case 132:
 case 135:
 case 134:
 {
  int VAR_4 = VAR_1->tlv_type - 132;

  if (VAR_2->mac_set[VAR_4]) {
   VAR_3->p_val = VAR_2->mac[VAR_4];
   return 6;
  }
  break;
 }

 case 130:
  if (VAR_2->rx_frames_set) {
   VAR_3->p_val = (u8 *)&VAR_2->rx_frames;
   return sizeof(VAR_2->rx_frames);
  }
  break;
 case 131:
  if (VAR_2->rx_bytes_set) {
   VAR_3->p_val = (u8 *)&VAR_2->rx_bytes;
   return sizeof(VAR_2->rx_bytes);
  }
  break;
 case 128:
  if (VAR_2->tx_frames_set) {
   VAR_3->p_val = (u8 *)&VAR_2->tx_frames;
   return sizeof(VAR_2->tx_frames);
  }
  break;
 case 129:
  if (VAR_2->tx_bytes_set) {
   VAR_3->p_val = (u8 *)&VAR_2->tx_bytes;
   return sizeof(VAR_2->tx_bytes);
  }
  break;
 default:
  break;
 }

 return -1;
}
