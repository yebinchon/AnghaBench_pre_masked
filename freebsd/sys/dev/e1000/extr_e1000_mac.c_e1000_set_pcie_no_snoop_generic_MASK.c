
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {scalar_t__ type; } ;
struct e1000_hw {TYPE_1__ bus; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int FUNC_1 (struct e1000_hw*,int ) ;
 int FUNC_2 (struct e1000_hw*,int ,int) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;

void FUNC_3(struct e1000_hw *VAR_3, u32 VAR_4)
{
 u32 VAR_5;

 FUNC_0("e1000_set_pcie_no_snoop_generic");

 if (VAR_3->bus.type != VAR_2)
  return;

 if (VAR_4) {
  VAR_5 = FUNC_1(VAR_3, VAR_0);
  VAR_5 &= ~(VAR_1);
  VAR_5 |= VAR_4;
  FUNC_2(VAR_3, VAR_0, VAR_5);
 }
}
