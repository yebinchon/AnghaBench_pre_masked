
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
typedef int u16 ;
struct TYPE_2__ {scalar_t__ type; int addr; } ;
struct e1000_hw {TYPE_1__ phy; } ;
typedef scalar_t__ s32 ;


 int FUNC_0 (char*) ;
 int FUNC_1 (char*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_2 (struct e1000_hw*,scalar_t__,int*) ;
 scalar_t__ FUNC_3 (struct e1000_hw*,scalar_t__,int) ;

__attribute__((used)) static s32 FUNC_4(struct e1000_hw *VAR_3, u32 VAR_4,
       u16 *VAR_5, bool VAR_6)
{
 s32 VAR_7;
 u32 VAR_8;
 u32 VAR_9;

 FUNC_0("e1000_access_phy_debug_regs_hv");


 VAR_8 = ((VAR_3->phy.type == VAR_2) ?
      VAR_1 : VAR_0);
 VAR_9 = VAR_8 + 1;


 VAR_3->phy.addr = 2;


 VAR_7 = FUNC_3(VAR_3, VAR_8, (u16)VAR_4 & 0x3F);
 if (VAR_7) {
  FUNC_1("Could not write the Address Offset port register\n");
  return VAR_7;
 }


 if (VAR_6)
  VAR_7 = FUNC_2(VAR_3, VAR_9, VAR_5);
 else
  VAR_7 = FUNC_3(VAR_3, VAR_9, *VAR_5);

 if (VAR_7)
  FUNC_1("Could not access the Data port register\n");

 return VAR_7;
}
