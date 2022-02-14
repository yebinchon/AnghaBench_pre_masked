
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct e1000_hw {int dummy; } ;
typedef scalar_t__ s32 ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct e1000_hw*,int ) ;
 int FUNC_2 (struct e1000_hw*,int ,int) ;
 scalar_t__ FUNC_3 (struct e1000_hw*) ;
 scalar_t__ FUNC_4 (struct e1000_hw*) ;

__attribute__((used)) static s32 FUNC_5(struct e1000_hw *VAR_4)
{
 u32 VAR_5;
 s32 VAR_6;

 FUNC_0("e1000_setup_copper_link_pch_lpt");

 VAR_5 = FUNC_1(VAR_4, VAR_0);
 VAR_5 |= VAR_3;
 VAR_5 &= ~(VAR_2 | VAR_1);
 FUNC_2(VAR_4, VAR_0, VAR_5);

 VAR_6 = FUNC_3(VAR_4);
 if (VAR_6)
  return VAR_6;

 return FUNC_4(VAR_4);
}
