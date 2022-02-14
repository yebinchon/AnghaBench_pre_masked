
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef scalar_t__ u32 ;
struct TYPE_2__ {scalar_t__ rar_highwater; scalar_t__ num_rar_entries; } ;
struct ixgbe_hw {TYPE_1__ mac; } ;
typedef scalar_t__ s32 ;


 int FUNC_0 (char*) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (scalar_t__) ;
 scalar_t__ VAR_1 ;
 int FUNC_2 (scalar_t__) ;
 scalar_t__ FUNC_3 (struct ixgbe_hw*,int ) ;
 int FUNC_4 (struct ixgbe_hw*,scalar_t__,int ) ;
 int FUNC_5 (struct ixgbe_hw*,scalar_t__,int*,scalar_t__,scalar_t__) ;
 int FUNC_6 (struct ixgbe_hw*,scalar_t__,scalar_t__) ;

s32 FUNC_7(struct ixgbe_hw *VAR_2, u8 *VAR_3, u32 VAR_4)
{
 static const u32 VAR_5 = 0xFFFFFFFF;
 u32 VAR_6 = VAR_5;
 u32 VAR_7;
 u32 VAR_8, VAR_9;
 u32 VAR_10, VAR_11;

 FUNC_0("ixgbe_insert_mac_addr_generic");


 VAR_10 = VAR_3[0] | (VAR_3[1] << 8)
       | (VAR_3[2] << 16)
       | (VAR_3[3] << 24);
 VAR_11 = VAR_3[4] | (VAR_3[5] << 8);







 for (VAR_7 = 0; VAR_7 < VAR_2->mac.rar_highwater; VAR_7++) {
  VAR_9 = FUNC_3(VAR_2, FUNC_1(VAR_7));

  if (((VAR_1 & VAR_9) == 0)
      && VAR_6 == VAR_5) {
   VAR_6 = VAR_7;
  } else if ((VAR_9 & 0xFFFF) == VAR_11) {
   VAR_8 = FUNC_3(VAR_2, FUNC_2(VAR_7));
   if (VAR_8 == VAR_10)
    break;
  }
 }

 if (VAR_7 < VAR_2->mac.rar_highwater) {

  FUNC_6(VAR_2, VAR_7, VAR_4);
 } else if (VAR_6 != VAR_5) {

  VAR_7 = VAR_6;
  FUNC_5(VAR_2, VAR_7, VAR_3, VAR_4, VAR_1);
 } else if (VAR_7 == VAR_2->mac.rar_highwater) {

  FUNC_5(VAR_2, VAR_7, VAR_3, VAR_4, VAR_1);
  VAR_2->mac.rar_highwater++;
 } else if (VAR_7 >= VAR_2->mac.num_rar_entries) {
  return VAR_0;
 }





 if (VAR_7 == 0)
  FUNC_4(VAR_2, VAR_7, 0);

 return VAR_7;
}
