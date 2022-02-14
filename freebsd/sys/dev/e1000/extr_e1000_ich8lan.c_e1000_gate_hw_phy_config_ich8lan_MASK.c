
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {scalar_t__ type; } ;
struct e1000_hw {TYPE_1__ mac; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct e1000_hw*,int ) ;
 int FUNC_2 (struct e1000_hw*,int ,int ) ;
 scalar_t__ VAR_2 ;

__attribute__((used)) static void FUNC_3(struct e1000_hw *VAR_3, bool VAR_4)
{
 u32 VAR_5;

 FUNC_0("e1000_gate_hw_phy_config_ich8lan");

 if (VAR_3->mac.type < VAR_2)
  return;

 VAR_5 = FUNC_1(VAR_3, VAR_0);

 if (VAR_4)
  VAR_5 |= VAR_1;
 else
  VAR_5 &= ~VAR_1;

 FUNC_2(VAR_3, VAR_0, VAR_5);
}
