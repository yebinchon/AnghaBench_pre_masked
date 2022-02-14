
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef int u32 ;
struct ixgbe_hw {int dummy; } ;
struct adapter {struct ixgbe_hw hw; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct ixgbe_hw*,int ,int) ;

__attribute__((used)) static inline void
FUNC_1(struct adapter *VAR_2, u32 VAR_3)
{
 struct ixgbe_hw *VAR_4 = &VAR_2->hw;
 u64 VAR_5 = (u64)(1 << VAR_3);
 u32 VAR_6;

 VAR_6 = (VAR_0 & VAR_5);
 FUNC_0(VAR_4, VAR_1, VAR_6);
}
