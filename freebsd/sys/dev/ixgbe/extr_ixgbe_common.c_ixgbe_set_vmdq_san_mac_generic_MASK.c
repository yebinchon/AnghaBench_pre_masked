
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int san_mac_rar_index; } ;
struct ixgbe_hw {TYPE_1__ mac; } ;
typedef int s32 ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int VAR_0 ;
 int FUNC_3 (struct ixgbe_hw*,int ,int) ;

s32 FUNC_4(struct ixgbe_hw *VAR_1, u32 VAR_2)
{
 u32 VAR_3 = VAR_1->mac.san_mac_rar_index;

 FUNC_0("ixgbe_set_vmdq_san_mac");

 if (VAR_2 < 32) {
  FUNC_3(VAR_1, FUNC_2(VAR_3), 1 << VAR_2);
  FUNC_3(VAR_1, FUNC_1(VAR_3), 0);
 } else {
  FUNC_3(VAR_1, FUNC_2(VAR_3), 0);
  FUNC_3(VAR_1, FUNC_1(VAR_3), 1 << (VAR_2 - 32));
 }

 return VAR_0;
}
