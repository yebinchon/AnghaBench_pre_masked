
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
typedef int u16 ;
struct virtchnl_vsi_queue_config_info {int num_queue_pairs; } ;
struct virtchnl_vlan_filter_list {int num_elements; } ;
struct virtchnl_vf_res_request {int dummy; } ;
struct virtchnl_version_info {int dummy; } ;
struct virtchnl_vector_map {int dummy; } ;
struct virtchnl_txq_info {int dummy; } ;
struct virtchnl_rxq_info {int dummy; } ;
struct virtchnl_rss_lut {int lut_entries; } ;
struct virtchnl_rss_key {int key_len; } ;
struct virtchnl_rss_hena {int dummy; } ;
struct virtchnl_queue_select {int dummy; } ;
struct virtchnl_queue_pair_info {int dummy; } ;
struct virtchnl_promisc_info {int dummy; } ;
struct virtchnl_iwarp_qvlist_info {int num_vectors; } ;
struct virtchnl_iwarp_qv_info {int dummy; } ;
struct virtchnl_irq_map_info {int num_vectors; } ;
struct virtchnl_ether_addr_list {int num_elements; } ;
struct virtchnl_ether_addr {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct virtchnl_version_info*) ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static inline int
FUNC_1(struct virtchnl_version_info *VAR_4, u32 VAR_5,
       u8 *VAR_6, u16 VAR_7)
{
 bool VAR_8 = VAR_0;
 int VAR_9 = 0;


 switch (VAR_5) {
 case 128:
  VAR_9 = sizeof(struct virtchnl_version_info);
  break;
 case 131:
  break;
 case 135:
  if (FUNC_0(VAR_4))
   VAR_9 = sizeof(u32);
  break;
 case 146:
  VAR_9 = sizeof(struct virtchnl_txq_info);
  break;
 case 147:
  VAR_9 = sizeof(struct virtchnl_rxq_info);
  break;
 case 145:
  VAR_9 = sizeof(struct virtchnl_vsi_queue_config_info);
  if (VAR_7 >= VAR_9) {
   struct virtchnl_vsi_queue_config_info *VAR_10 =
       (struct virtchnl_vsi_queue_config_info *)VAR_6;
   VAR_9 += (VAR_10->num_queue_pairs *
          sizeof(struct
          virtchnl_queue_pair_info));
   if (VAR_10->num_queue_pairs == 0)
    VAR_8 = VAR_1;
  }
  break;
 case 152:
  VAR_9 = sizeof(struct virtchnl_irq_map_info);
  if (VAR_7 >= VAR_9) {
   struct virtchnl_irq_map_info *VAR_11 =
       (struct virtchnl_irq_map_info *)VAR_6;
   VAR_9 += (VAR_11->num_vectors *
          sizeof(struct virtchnl_vector_map));
   if (VAR_11->num_vectors == 0)
    VAR_8 = VAR_1;
  }
  break;
 case 140:
 case 142:
  VAR_9 = sizeof(struct virtchnl_queue_select);
  break;
 case 154:
 case 144:
  VAR_9 = sizeof(struct virtchnl_ether_addr_list);
  if (VAR_7 >= VAR_9) {
   struct virtchnl_ether_addr_list *VAR_12 =
       (struct virtchnl_ether_addr_list *)VAR_6;
   VAR_9 += VAR_12->num_elements *
       sizeof(struct virtchnl_ether_addr);
   if (VAR_12->num_elements == 0)
    VAR_8 = VAR_1;
  }
  break;
 case 153:
 case 143:
  VAR_9 = sizeof(struct virtchnl_vlan_filter_list);
  if (VAR_7 >= VAR_9) {
   struct virtchnl_vlan_filter_list *VAR_13 =
       (struct virtchnl_vlan_filter_list *)VAR_6;
   VAR_9 += VAR_13->num_elements * sizeof(u16);
   if (VAR_13->num_elements == 0)
    VAR_8 = VAR_1;
  }
  break;
 case 150:
  VAR_9 = sizeof(struct virtchnl_promisc_info);
  break;
 case 136:
  VAR_9 = sizeof(struct virtchnl_queue_select);
  break;
 case 134:




  if (VAR_7)
   VAR_9 = VAR_7;
  else
   VAR_8 = VAR_1;
  break;
 case 133:
  break;
 case 151:
  VAR_9 = sizeof(struct virtchnl_iwarp_qvlist_info);
  if (VAR_7 >= VAR_9) {
   struct virtchnl_iwarp_qvlist_info *VAR_14 =
    (struct virtchnl_iwarp_qvlist_info *)VAR_6;
   if (VAR_14->num_vectors == 0) {
    VAR_8 = VAR_1;
    break;
   }
   VAR_9 += ((VAR_14->num_vectors - 1) *
    sizeof(struct virtchnl_iwarp_qv_info));
  }
  break;
 case 149:
  VAR_9 = sizeof(struct virtchnl_rss_key);
  if (VAR_7 >= VAR_9) {
   struct virtchnl_rss_key *VAR_15 =
    (struct virtchnl_rss_key *)VAR_6;
   VAR_9 += VAR_15->key_len - 1;
  }
  break;
 case 148:
  VAR_9 = sizeof(struct virtchnl_rss_lut);
  if (VAR_7 >= VAR_9) {
   struct virtchnl_rss_lut *VAR_16 =
    (struct virtchnl_rss_lut *)VAR_6;
   VAR_9 += VAR_16->lut_entries - 1;
  }
  break;
 case 137:
  break;
 case 130:
  VAR_9 = sizeof(struct virtchnl_rss_hena);
  break;
 case 139:
 case 141:
  break;
 case 132:
  VAR_9 = sizeof(struct virtchnl_vf_res_request);
  break;

 case 138:
 case 129:
 default:
  return VAR_2;
 }

 if (VAR_8 || VAR_9 != VAR_7)
  return VAR_3;

 return 0;
}
