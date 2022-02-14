
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {scalar_t__ type; } ;
struct e1000_hw {TYPE_1__ mac; } ;
struct adapter {int ims; struct e1000_hw hw; } ;
typedef int if_ctx_t ;


 int VAR_0 ;
 int FUNC_0 (struct e1000_hw*,int ,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 struct adapter* FUNC_1 (int ) ;

__attribute__((used)) static void
FUNC_2(if_ctx_t VAR_5)
{
 struct adapter *VAR_6 = FUNC_1(VAR_5);
 struct e1000_hw *VAR_7 = &VAR_6->hw;
 u32 VAR_8 = VAR_3;

 if (VAR_7->mac.type == VAR_4) {
  FUNC_0(VAR_7, VAR_1, VAR_2);
  VAR_8 |= VAR_6->ims;
 }
 FUNC_0(VAR_7, VAR_0, VAR_8);
}
