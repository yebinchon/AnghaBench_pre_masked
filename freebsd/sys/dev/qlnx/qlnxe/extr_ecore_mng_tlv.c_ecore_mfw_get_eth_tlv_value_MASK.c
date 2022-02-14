
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct ecore_tlv_parsed_buf {int * p_val; } ;
struct ecore_mfw_tlv_eth {int num_rxqs_full; int num_rxqs_full_set; int num_txqs_full; int num_txqs_full_set; int rxqs_empty; int rxqs_empty_set; int txqs_empty; int txqs_empty_set; int iov_offload; int iov_offload_set; int rx_descr_qdepth; int rx_descr_qdepth_set; int tx_descr_qdepth; int tx_descr_qdepth_set; int tcp6_offloads; int tcp6_offloads_set; int tcp4_offloads; int tcp4_offloads_set; int netq_count; int netq_count_set; int rx_descr_size; int rx_descr_size_set; int tx_descr_size; int tx_descr_size_set; int prom_mode; int prom_mode_set; int lso_minseg_size; int lso_minseg_size_set; int lso_maxoff_size; int lso_maxoff_size_set; } ;
struct ecore_drv_tlv_hdr {int tlv_type; } ;
__attribute__((used)) static int
FUNC_0(struct ecore_drv_tlv_hdr *VAR_0,
       struct ecore_mfw_tlv_eth *VAR_1,
       struct ecore_tlv_parsed_buf *VAR_2)
{
 switch (VAR_0->tlv_type) {
 case 141:
  if (VAR_1->lso_maxoff_size_set) {
   VAR_2->p_val = (u8 *)&VAR_1->lso_maxoff_size;
   return sizeof(VAR_1->lso_maxoff_size);
  }
  break;
 case 140:
  if (VAR_1->lso_minseg_size_set) {
   VAR_2->p_val = (u8 *)&VAR_1->lso_minseg_size;
   return sizeof(VAR_1->lso_minseg_size);
  }
  break;
 case 136:
  if (VAR_1->prom_mode_set) {
   VAR_2->p_val = (u8 *)&VAR_1->prom_mode;
   return sizeof(VAR_1->prom_mode);
  }
  break;
 case 131:
  if (VAR_1->tx_descr_size_set) {
   VAR_2->p_val = (u8 *)&VAR_1->tx_descr_size;
   return sizeof(VAR_1->tx_descr_size);
  }
  break;
 case 134:
  if (VAR_1->rx_descr_size_set) {
   VAR_2->p_val = (u8 *)&VAR_1->rx_descr_size;
   return sizeof(VAR_1->rx_descr_size);
  }
  break;
 case 137:
  if (VAR_1->netq_count_set) {
   VAR_2->p_val = (u8 *)&VAR_1->netq_count;
   return sizeof(VAR_1->netq_count);
  }
  break;
 case 139:
  if (VAR_1->tcp4_offloads_set) {
   VAR_2->p_val = (u8 *)&VAR_1->tcp4_offloads;
   return sizeof(VAR_1->tcp4_offloads);
  }
  break;
 case 138:
  if (VAR_1->tcp6_offloads_set) {
   VAR_2->p_val = (u8 *)&VAR_1->tcp6_offloads;
   return sizeof(VAR_1->tcp6_offloads);
  }
  break;
 case 130:
  if (VAR_1->tx_descr_qdepth_set) {
   VAR_2->p_val = (u8 *)&VAR_1->tx_descr_qdepth;
   return sizeof(VAR_1->tx_descr_qdepth);
  }
  break;
 case 135:
  if (VAR_1->rx_descr_qdepth_set) {
   VAR_2->p_val = (u8 *)&VAR_1->rx_descr_qdepth;
   return sizeof(VAR_1->rx_descr_qdepth);
  }
  break;
 case 142:
  if (VAR_1->iov_offload_set) {
   VAR_2->p_val = (u8 *)&VAR_1->iov_offload;
   return sizeof(VAR_1->iov_offload);
  }
  break;
 case 129:
  if (VAR_1->txqs_empty_set) {
   VAR_2->p_val = (u8 *)&VAR_1->txqs_empty;
   return sizeof(VAR_1->txqs_empty);
  }
  break;
 case 133:
  if (VAR_1->rxqs_empty_set) {
   VAR_2->p_val = (u8 *)&VAR_1->rxqs_empty;
   return sizeof(VAR_1->rxqs_empty);
  }
  break;
 case 128:
  if (VAR_1->num_txqs_full_set) {
   VAR_2->p_val = (u8 *)&VAR_1->num_txqs_full;
   return sizeof(VAR_1->num_txqs_full);
  }
  break;
 case 132:
  if (VAR_1->num_rxqs_full_set) {
   VAR_2->p_val = (u8 *)&VAR_1->num_rxqs_full;
   return sizeof(VAR_1->num_rxqs_full);
  }
  break;
 default:
  break;
 }

 return -1;
}
