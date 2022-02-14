
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
typedef unsigned long long u32 ;
struct TYPE_2__ {scalar_t__ type; } ;
struct ixgbe_hw {TYPE_1__ mac; } ;
struct adapter {struct ixgbe_hw hw; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int VAR_1 ;
 int FUNC_1 (struct ixgbe_hw*,int ,unsigned long long) ;
 scalar_t__ VAR_2 ;

__attribute__((used)) static void
FUNC_2(struct adapter *VAR_3, u32 VAR_4)
{
 struct ixgbe_hw *VAR_5 = &VAR_3->hw;
 u64 VAR_6 = 1ULL << VAR_4;
 u32 VAR_7;

 if (VAR_5->mac.type == VAR_2) {
  VAR_7 = (VAR_1 & VAR_6);
  FUNC_1(VAR_5, VAR_0, VAR_7);
 } else {
  VAR_7 = (VAR_6 & 0xFFFFFFFF);
  if (VAR_7)
   FUNC_1(VAR_5, FUNC_0(0), VAR_7);
  VAR_7 = (VAR_6 >> 32);
  if (VAR_7)
   FUNC_1(VAR_5, FUNC_0(1), VAR_7);
 }
}
