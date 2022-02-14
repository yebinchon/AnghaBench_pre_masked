
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int* src_ip; int* dst_ip; scalar_t__ tunnel_type; int tni_vni; int bkt_hash; int flow_type; scalar_t__ vm_pool; scalar_t__* inner_mac; int vlan_id; int flex_bytes; int src_port; int dst_port; } ;
union ixgbe_atr_input {TYPE_1__ formatted; } ;
typedef scalar_t__ u8 ;
typedef int u32 ;
typedef int u16 ;
struct ixgbe_hw {int dummy; } ;
typedef scalar_t__ s32 ;


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
 int FUNC_2 (int) ;
 int VAR_17 ;
 int VAR_18 ;
 scalar_t__ VAR_19 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 scalar_t__ VAR_20 ;
 int FUNC_5 (struct ixgbe_hw*) ;
 int FUNC_6 (struct ixgbe_hw*,int ,int) ;
 int FUNC_7 (struct ixgbe_hw*,int ,int) ;
 int FUNC_8 (int) ;
 scalar_t__ FUNC_9 (struct ixgbe_hw*,int*) ;

s32 FUNC_10(struct ixgbe_hw *VAR_21,
       union ixgbe_atr_input *VAR_22,
       u16 VAR_23, u8 VAR_24, bool VAR_25)
{
 u32 VAR_26, VAR_27, VAR_28, VAR_29;
 u32 VAR_30, VAR_31;
 u32 VAR_32 = 0;
 s32 VAR_33;
 FUNC_8(VAR_25);

 FUNC_0("ixgbe_fdir_write_perfect_filter_82599");
 if (!VAR_25) {

  FUNC_7(VAR_21, FUNC_2(0),
         VAR_22->formatted.src_ip[0]);
  FUNC_7(VAR_21, FUNC_2(1),
         VAR_22->formatted.src_ip[1]);
  FUNC_7(VAR_21, FUNC_2(2),
         VAR_22->formatted.src_ip[2]);


  FUNC_7(VAR_21, VAR_14,
   VAR_22->formatted.src_ip[0]);



  FUNC_7(VAR_21, VAR_13,
   VAR_22->formatted.dst_ip[0]);


  VAR_26 = FUNC_3(VAR_22->formatted.dst_port);
  VAR_26 <<= VAR_16;
  VAR_26 |= FUNC_3(VAR_22->formatted.src_port);
  FUNC_6(VAR_21, VAR_15, VAR_26);
 }


 VAR_27 = FUNC_4(VAR_22->formatted.flex_bytes);
 VAR_27 <<= VAR_18;
 VAR_27 |= FUNC_3(VAR_22->formatted.vlan_id);
 FUNC_6(VAR_21, VAR_17, VAR_27);

 if (VAR_25) {
  if (VAR_22->formatted.tunnel_type != 0)
   VAR_32 = 0x80000000;

  VAR_30 = ((u32)VAR_22->formatted.inner_mac[0] |
    ((u32)VAR_22->formatted.inner_mac[1] << 8) |
    ((u32)VAR_22->formatted.inner_mac[2] << 16) |
    ((u32)VAR_22->formatted.inner_mac[3] << 24));
  VAR_31 = ((u32)VAR_22->formatted.inner_mac[4] |
    ((u32)VAR_22->formatted.inner_mac[5] << 8));
  VAR_32 |= VAR_31;
  FUNC_7(VAR_21, FUNC_2(0), VAR_30);
  FUNC_7(VAR_21, FUNC_2(1), VAR_32);
  FUNC_7(VAR_21, FUNC_2(2), VAR_22->formatted.tni_vni);
 }


 VAR_28 = VAR_22->formatted.bkt_hash;
 VAR_28 |= VAR_23 << VAR_12;
 FUNC_6(VAR_21, VAR_11, VAR_28);





 FUNC_5(VAR_21);


 VAR_29 = VAR_2 | VAR_4 |
    VAR_6 | VAR_7;
 if (VAR_24 == VAR_19)
  VAR_29 |= VAR_3;
 if (VAR_22->formatted.flow_type & VAR_0)
  VAR_29 |= VAR_9;
 VAR_29 |= VAR_22->formatted.flow_type << VAR_5;
 VAR_29 |= (u32)VAR_24 << VAR_8;
 VAR_29 |= (u32)VAR_22->formatted.vm_pool << VAR_10;

 FUNC_6(VAR_21, VAR_1, VAR_29);
 VAR_33 = FUNC_9(VAR_21, &VAR_29);
 if (VAR_33) {
  FUNC_1("Flow Director command did not complete!\n");
  return VAR_33;
 }

 return VAR_20;
}
