
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {scalar_t__ type; } ;
struct e1000_hw {int hw_addr; TYPE_1__ bus; } ;
typedef scalar_t__ s32 ;


 int FUNC_0 (char*) ;
 int FUNC_1 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_2 (struct e1000_hw*,int ) ;
 scalar_t__ FUNC_3 (int ) ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_4 (struct e1000_hw*,int ,int) ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_5 (int) ;

s32 FUNC_6(struct e1000_hw *VAR_8)
{
 u32 VAR_9;
 s32 VAR_10 = VAR_6;

 FUNC_0("e1000_disable_pcie_master_generic");

 if (VAR_8->bus.type != VAR_7)
  return VAR_5;

 VAR_9 = FUNC_2(VAR_8, VAR_0);
 VAR_9 |= VAR_1;
 FUNC_4(VAR_8, VAR_0, VAR_9);

 while (VAR_10) {
  if (!(FUNC_2(VAR_8, VAR_3) &
        VAR_4) ||
    FUNC_3(VAR_8->hw_addr))
   break;
  FUNC_5(100);
  VAR_10--;
 }

 if (!VAR_10) {
  FUNC_1("Master requests are pending.\n");
  return -VAR_2;
 }

 return VAR_5;
}
