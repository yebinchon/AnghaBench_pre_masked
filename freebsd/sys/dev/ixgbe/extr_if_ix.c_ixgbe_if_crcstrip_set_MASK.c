
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct ixgbe_hw {int dummy; } ;
struct adapter {struct ixgbe_hw hw; } ;
typedef int if_ctx_t ;


 int FUNC_0 (char*,char*,int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (struct ixgbe_hw*,int ) ;
 int FUNC_2 (struct ixgbe_hw*,int ,int ) ;
 struct adapter* FUNC_3 (int ) ;
 scalar_t__ VAR_6 ;

__attribute__((used)) static void
FUNC_4(if_ctx_t VAR_7, int VAR_8, int VAR_9)
{
 struct adapter *VAR_10 = FUNC_3(VAR_7);
 struct ixgbe_hw *VAR_11 = &VAR_10->hw;
 uint32_t VAR_12, VAR_13;

 VAR_12 = FUNC_1(VAR_11, VAR_0);
 VAR_13 = FUNC_1(VAR_11, VAR_2);






 VAR_13 &= ~VAR_5;
 VAR_13 |= VAR_4;
 if (VAR_8 && !VAR_9) {

  VAR_12 &= ~VAR_1;
  VAR_13 &= ~VAR_3;
 } else {

  VAR_12 |= VAR_1;
  VAR_13 |= VAR_3;
 }





 FUNC_2(VAR_11, VAR_0, VAR_12);
 FUNC_2(VAR_11, VAR_2, VAR_13);
}
