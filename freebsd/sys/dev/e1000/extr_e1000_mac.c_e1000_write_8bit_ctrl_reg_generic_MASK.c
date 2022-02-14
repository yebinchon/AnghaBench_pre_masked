
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
typedef scalar_t__ u32 ;
struct e1000_hw {int dummy; } ;
typedef int s32 ;


 int FUNC_0 (char*) ;
 int FUNC_1 (char*,scalar_t__) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_2 (struct e1000_hw*,scalar_t__) ;
 int VAR_4 ;
 int FUNC_3 (struct e1000_hw*,scalar_t__,scalar_t__) ;
 int FUNC_4 (int) ;

s32 FUNC_5(struct e1000_hw *VAR_5, u32 VAR_6,
          u32 VAR_7, u8 VAR_8)
{
 u32 VAR_9, VAR_10 = 0;

 FUNC_0("e1000_write_8bit_ctrl_reg_generic");


 VAR_10 = ((u32)VAR_8) | (VAR_7 << VAR_1);
 FUNC_3(VAR_5, VAR_6, VAR_10);


 for (VAR_9 = 0; VAR_9 < VAR_3; VAR_9++) {
  FUNC_4(5);
  VAR_10 = FUNC_2(VAR_5, VAR_6);
  if (VAR_10 & VAR_2)
   break;
 }
 if (!(VAR_10 & VAR_2)) {
  FUNC_1("Reg %08x did not indicate ready\n", VAR_6);
  return -VAR_0;
 }

 return VAR_4;
}
