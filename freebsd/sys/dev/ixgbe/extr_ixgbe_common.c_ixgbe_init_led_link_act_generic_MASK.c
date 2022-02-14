
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct ixgbe_mac_info {int led_link_act; int type; } ;
struct ixgbe_hw {struct ixgbe_mac_info mac; } ;
typedef int s32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct ixgbe_hw*,int ) ;
 int VAR_3 ;



s32 FUNC_2(struct ixgbe_hw *VAR_4)
{
 struct ixgbe_mac_info *VAR_5 = &VAR_4->mac;
 u32 VAR_6, VAR_7;
 u8 VAR_8;

 VAR_6 = FUNC_1(VAR_4, VAR_0);


 for (VAR_8 = 0; VAR_8 < 4; VAR_8++) {
  VAR_7 = VAR_6 >> FUNC_0(VAR_8);

  if ((VAR_7 & VAR_2) ==
       VAR_1) {
   VAR_5->led_link_act = VAR_8;
   return VAR_3;
  }
 }





 switch (VAR_4->mac.type) {
 case 129:
 case 128:
  VAR_5->led_link_act = 1;
  break;
 default:
  VAR_5->led_link_act = 2;
 }
 return VAR_3;
}
