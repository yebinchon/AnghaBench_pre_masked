
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
 int FUNC_1 (char*,scalar_t__) ;
 int VAR_0 ;
 int FUNC_2 (scalar_t__) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_3 (struct ixgbe_hw*,int ) ;
 int VAR_3 ;
 int FUNC_4 (struct ixgbe_hw*,int ,scalar_t__) ;

s32 FUNC_5(struct ixgbe_hw *VAR_4, u32 VAR_5, u32 VAR_6)
{
 u32 VAR_7;
 u32 VAR_8 = VAR_4->mac.num_rar_entries;

 FUNC_0("ixgbe_set_vmdq_82598");


 if (VAR_5 >= VAR_8) {
  FUNC_1("RAR index %d is out of range.\n", VAR_5);
  return VAR_0;
 }

 VAR_7 = FUNC_3(VAR_4, FUNC_2(VAR_5));
 VAR_7 &= ~VAR_1;
 VAR_7 |= ((VAR_6 << VAR_2) & VAR_1);
 FUNC_4(VAR_4, FUNC_2(VAR_5), VAR_7);
 return VAR_3;
}
