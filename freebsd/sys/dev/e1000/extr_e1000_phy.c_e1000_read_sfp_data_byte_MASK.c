
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef scalar_t__ u32 ;
typedef scalar_t__ u16 ;
struct e1000_hw {int dummy; } ;
typedef int s32 ;


 int FUNC_0 (char*) ;
 int FUNC_1 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ FUNC_2 (int) ;
 scalar_t__ FUNC_3 (struct e1000_hw*,int ) ;
 int VAR_7 ;
 int FUNC_4 (struct e1000_hw*,int ,scalar_t__) ;
 int FUNC_5 (int) ;

s32 FUNC_6(struct e1000_hw *VAR_8, u16 VAR_9, u8 *VAR_10)
{
 u32 VAR_11 = 0;
 u32 VAR_12 = 0;
 u32 VAR_13 = 0;

 FUNC_0("e1000_read_sfp_data_byte");

 if (VAR_9 > FUNC_2(255)) {
  FUNC_1("I2CCMD command address exceeds upper limit\n");
  return -VAR_0;
 }





 VAR_12 = ((VAR_9 << VAR_6) |
    VAR_3);

 FUNC_4(VAR_8, VAR_1, VAR_12);


 for (VAR_11 = 0; VAR_11 < VAR_4; VAR_11++) {
  FUNC_5(50);
  VAR_13 = FUNC_3(VAR_8, VAR_1);
  if (VAR_13 & VAR_5)
   break;
 }
 if (!(VAR_13 & VAR_5)) {
  FUNC_1("I2CCMD Read did not complete\n");
  return -VAR_0;
 }
 if (VAR_13 & VAR_2) {
  FUNC_1("I2CCMD Error bit set\n");
  return -VAR_0;
 }
 *VAR_10 = (u8) VAR_13 & 0xFF;

 return VAR_7;
}
