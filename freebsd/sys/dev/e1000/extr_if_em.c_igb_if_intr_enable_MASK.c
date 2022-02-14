
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct e1000_hw {int dummy; } ;
struct adapter {scalar_t__ intr_type; int que_mask; int link_mask; struct e1000_hw hw; } ;
typedef int if_ctx_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct e1000_hw*) ;
 int FUNC_1 (struct e1000_hw*,int ,int) ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_2 (int) ;
 struct adapter* FUNC_3 (int ) ;

__attribute__((used)) static void
FUNC_4(if_ctx_t VAR_7)
{
 struct adapter *VAR_8 = FUNC_3(VAR_7);
 struct e1000_hw *VAR_9 = &VAR_8->hw;
 u32 VAR_10;

 if (FUNC_2(VAR_8->intr_type == VAR_5)) {
  VAR_10 = (VAR_8->que_mask | VAR_8->link_mask);
  FUNC_1(VAR_9, VAR_0, VAR_10);
  FUNC_1(VAR_9, VAR_1, VAR_10);
  FUNC_1(VAR_9, VAR_2, VAR_10);
  FUNC_1(VAR_9, VAR_3, VAR_4);
 } else
  FUNC_1(VAR_9, VAR_3, VAR_6);
 FUNC_0(VAR_9);
}
