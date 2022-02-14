
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct TYPE_2__ {scalar_t__ num_rar_entries; } ;
struct ixgbe_hw {TYPE_1__ mac; } ;
typedef int s32 ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int ,char*,scalar_t__) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (scalar_t__) ;
 scalar_t__ FUNC_4 (struct ixgbe_hw*,int ) ;
 int VAR_2 ;
 int FUNC_5 (struct ixgbe_hw*,int ,scalar_t__) ;

s32 FUNC_6(struct ixgbe_hw *VAR_3, u32 VAR_4, u32 VAR_5)
{
 u32 VAR_6;
 u32 VAR_7 = VAR_3->mac.num_rar_entries;

 FUNC_0("ixgbe_set_vmdq_generic");


 if (VAR_4 >= VAR_7) {
  FUNC_1(VAR_0,
        "RAR index %d is out of range.\n", VAR_4);
  return VAR_1;
 }

 if (VAR_5 < 32) {
  VAR_6 = FUNC_4(VAR_3, FUNC_3(VAR_4));
  VAR_6 |= 1 << VAR_5;
  FUNC_5(VAR_3, FUNC_3(VAR_4), VAR_6);
 } else {
  VAR_6 = FUNC_4(VAR_3, FUNC_2(VAR_4));
  VAR_6 |= 1 << (VAR_5 - 32);
  FUNC_5(VAR_3, FUNC_2(VAR_4), VAR_6);
 }
 return VAR_2;
}
