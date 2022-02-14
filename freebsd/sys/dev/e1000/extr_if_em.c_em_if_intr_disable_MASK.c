
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ type; } ;
struct e1000_hw {TYPE_1__ mac; } ;
struct adapter {struct e1000_hw hw; } ;
typedef int if_ctx_t ;


 int VAR_0 ;
 int FUNC_0 (struct e1000_hw*,int ,int) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 struct adapter* FUNC_1 (int ) ;

__attribute__((used)) static void
FUNC_2(if_ctx_t VAR_3)
{
 struct adapter *VAR_4 = FUNC_1(VAR_3);
 struct e1000_hw *VAR_5 = &VAR_4->hw;

 if (VAR_5->mac.type == VAR_2)
  FUNC_0(VAR_5, VAR_1, 0);
 FUNC_0(VAR_5, VAR_0, 0xffffffff);
}
