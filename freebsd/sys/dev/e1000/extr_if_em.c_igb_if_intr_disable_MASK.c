
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct e1000_hw {int dummy; } ;
struct adapter {scalar_t__ intr_type; struct e1000_hw hw; } ;
typedef int if_ctx_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct e1000_hw*) ;
 int FUNC_1 (struct e1000_hw*,int ,int) ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_2 (int) ;
 struct adapter* FUNC_3 (int ) ;

__attribute__((used)) static void
FUNC_4(if_ctx_t VAR_4)
{
 struct adapter *VAR_5 = FUNC_3(VAR_4);
 struct e1000_hw *VAR_6 = &VAR_5->hw;

 if (FUNC_2(VAR_5->intr_type == VAR_3)) {
  FUNC_1(VAR_6, VAR_1, 0xffffffff);
  FUNC_1(VAR_6, VAR_0, 0);
 }
 FUNC_1(VAR_6, VAR_2, 0xffffffff);
 FUNC_0(VAR_6);
}
