
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int vm_pool; int flow_type; int flex_bytes; int* inner_mac; int tni_vni; int tunnel_type; int* src_ip; int* dst_ip; int vlan_id; int src_port; int dst_port; scalar_t__ bkt_hash; } ;
union ixgbe_atr_input {TYPE_2__ formatted; } ;
typedef int u32 ;
struct TYPE_3__ {int type; } ;
struct ixgbe_hw {TYPE_1__ mac; } ;
typedef int s32 ;


 int FUNC_0 (char*) ;
 int FUNC_1 (char*) ;

 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int FUNC_2 (int ) ;
 int VAR_21 ;
 int FUNC_3 (struct ixgbe_hw*,int ,int) ;
 int FUNC_4 (struct ixgbe_hw*,int ,int) ;
 int FUNC_5 (int) ;
 int FUNC_6 (union ixgbe_atr_input*) ;




s32 FUNC_7(struct ixgbe_hw *VAR_22,
        union ixgbe_atr_input *VAR_23, bool VAR_24)
{

 u32 VAR_25 = VAR_10;
 u32 VAR_26;
 u32 VAR_27;
 FUNC_5(VAR_24);
 FUNC_0("ixgbe_fdir_set_atr_input_mask_82599");
 if (VAR_23->formatted.bkt_hash)
  FUNC_1(" bucket hash should always be 0 in mask\n");


 switch (VAR_23->formatted.vm_pool & 0x7F) {
 case 0x0:
  VAR_25 |= VAR_14;
 case 0x7F:
  break;
 default:
  FUNC_1(" Error on vm pool mask\n");
  return VAR_0;
 }

 switch (VAR_23->formatted.flow_type & 131) {
 case 0x0:
  VAR_25 |= VAR_13;
  if (VAR_23->formatted.dst_port ||
      VAR_23->formatted.src_port) {
   FUNC_1(" Error on src/dst port mask\n");
   return VAR_0;
  }
 case 131:
  break;
 default:
  FUNC_1(" Error on flow type mask\n");
  return VAR_0;
 }

 switch (FUNC_2(VAR_23->formatted.vlan_id) & 0xEFFF) {
 case 0x0000:

  VAR_25 |= VAR_15;

 case 0x0FFF:

  VAR_25 |= VAR_16;
  break;
 case 0xE000:

  VAR_25 |= VAR_15;

 case 0xEFFF:

  break;
 default:
  FUNC_1(" Error on VLAN mask\n");
  return VAR_0;
 }

 switch (VAR_23->formatted.flex_bytes & 0xFFFF) {
 case 0x0000:

  VAR_25 |= VAR_11;

 case 0xFFFF:
  break;
 default:
  FUNC_1(" Error on flexible byte mask\n");
  return VAR_0;
 }

 if (VAR_24) {
  VAR_25 |= VAR_12;
  VAR_27 = ((u32) 0xFFFFU << VAR_4);
  VAR_27 |= VAR_3;

  switch (VAR_23->formatted.inner_mac[0] & 0xFF) {
  case 0x00:

   VAR_27 |= VAR_5;
  case 0xFF:
   break;
  default:
   FUNC_1(" Error on inner_mac byte mask\n");
   return VAR_0;
  }

  switch (VAR_23->formatted.tni_vni & 0xFFFFFFFF) {
  case 0x0:

   VAR_27 |= VAR_6;
   break;
  case 0x00FFFFFF:
   VAR_27 |= VAR_7;
   break;
  case 0xFFFFFFFF:
   break;
  default:
   FUNC_1(" Error on TNI/VNI byte mask\n");
   return VAR_0;
  }

  switch (VAR_23->formatted.tunnel_type & 0xFFFF) {
  case 0x0:

   VAR_27 |= VAR_8;
  case 0xFFFF:
   break;
  default:
   FUNC_1(" Error on tunnel type byte mask\n");
   return VAR_0;
  }
  FUNC_4(VAR_22, VAR_2, VAR_27);





  FUNC_3(VAR_22, VAR_19, 0xFFFFFFFF);
  FUNC_3(VAR_22, VAR_20, 0xFFFFFFFF);
  FUNC_4(VAR_22, VAR_1, 0xFFFFFFFF);
  FUNC_4(VAR_22, VAR_18, 0xFFFFFFFF);
  switch (VAR_22->mac.type) {
  case 130:
  case 128:
  case 129:
   FUNC_3(VAR_22, VAR_17, 0xFFFFFFFF);
   break;
  default:
   break;
  }
 }


 FUNC_3(VAR_22, VAR_9, VAR_25);

 if (!VAR_24) {


  VAR_26 = FUNC_6(VAR_23);


  FUNC_3(VAR_22, VAR_19, ~VAR_26);
  FUNC_3(VAR_22, VAR_20, ~VAR_26);

  switch (VAR_22->mac.type) {
  case 130:
  case 128:
  case 129:
   FUNC_3(VAR_22, VAR_17, ~VAR_26);
   break;
  default:
   break;
  }


  FUNC_4(VAR_22, VAR_18,
         ~VAR_23->formatted.src_ip[0]);
  FUNC_4(VAR_22, VAR_1,
         ~VAR_23->formatted.dst_ip[0]);
 }
 return VAR_21;
}
