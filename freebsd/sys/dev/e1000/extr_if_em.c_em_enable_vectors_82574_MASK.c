
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct e1000_hw {int dummy; } ;
struct adapter {struct e1000_hw hw; } ;
typedef int if_ctx_t ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int ,char*,...) ;
 int FUNC_1 (struct e1000_hw*,int ,int,int*) ;
 int FUNC_2 (struct e1000_hw*) ;
 int FUNC_3 (struct e1000_hw*,int ,int,int*) ;
 int FUNC_4 (int ) ;
 struct adapter* FUNC_5 (int ) ;

__attribute__((used)) static void
FUNC_6(if_ctx_t VAR_4)
{
 struct adapter *VAR_5 = FUNC_5(VAR_4);
 struct e1000_hw *VAR_6 = &VAR_5->hw;
 device_t VAR_7 = FUNC_4(VAR_4);
 u16 VAR_8;

 FUNC_1(VAR_6, VAR_2, 1, &VAR_8);
 if (VAR_3)
  FUNC_0(VAR_7, "EM_NVM_PCIE_CTRL = %#06x\n", VAR_8);
 if (((VAR_8 & VAR_0) >> VAR_1) != 4) {
  FUNC_0(VAR_7, "Writing to eeprom: increasing "
      "reported MSI-X vectors from 3 to 5...\n");
  VAR_8 &= ~(VAR_0);
  VAR_8 |= 4 << VAR_1;
  FUNC_3(VAR_6, VAR_2, 1, &VAR_8);
  FUNC_2(VAR_6);
  FUNC_0(VAR_7, "Writing to eeprom: done\n");
 }
}
