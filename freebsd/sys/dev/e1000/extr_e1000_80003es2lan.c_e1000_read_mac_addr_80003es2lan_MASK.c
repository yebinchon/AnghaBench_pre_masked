
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct e1000_hw {int dummy; } ;
typedef scalar_t__ s32 ;


 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (struct e1000_hw*) ;
 scalar_t__ FUNC_2 (struct e1000_hw*) ;

__attribute__((used)) static s32 FUNC_3(struct e1000_hw *VAR_0)
{
 s32 VAR_1;

 FUNC_0("e1000_read_mac_addr_80003es2lan");





 VAR_1 = FUNC_1(VAR_0);
 if (VAR_1)
  return VAR_1;

 return FUNC_2(VAR_0);
}
