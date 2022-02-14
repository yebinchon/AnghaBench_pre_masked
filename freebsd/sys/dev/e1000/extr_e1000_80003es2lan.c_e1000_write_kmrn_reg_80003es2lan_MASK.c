
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int u16 ;
struct e1000_hw {int dummy; } ;
typedef scalar_t__ s32 ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct e1000_hw*) ;
 int FUNC_2 (struct e1000_hw*,int ,int) ;
 scalar_t__ FUNC_3 (struct e1000_hw*) ;
 int FUNC_4 (struct e1000_hw*) ;
 int FUNC_5 (int) ;

__attribute__((used)) static s32 FUNC_6(struct e1000_hw *VAR_3, u32 VAR_4,
         u16 VAR_5)
{
 u32 VAR_6;
 s32 VAR_7;

 FUNC_0("e1000_write_kmrn_reg_80003es2lan");

 VAR_7 = FUNC_3(VAR_3);
 if (VAR_7)
  return VAR_7;

 VAR_6 = ((VAR_4 << VAR_2) &
         VAR_1) | VAR_5;
 FUNC_2(VAR_3, VAR_0, VAR_6);
 FUNC_1(VAR_3);

 FUNC_5(2);

 FUNC_4(VAR_3);

 return VAR_7;
}
