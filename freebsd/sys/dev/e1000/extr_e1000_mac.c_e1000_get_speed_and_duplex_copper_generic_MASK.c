
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int u16 ;
struct e1000_hw {int dummy; } ;
typedef int s32 ;


 int FUNC_0 (char*) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (struct e1000_hw*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;

s32 FUNC_3(struct e1000_hw *VAR_10, u16 *VAR_11,
           u16 *VAR_12)
{
 u32 VAR_13;

 FUNC_0("e1000_get_speed_and_duplex_copper_generic");

 VAR_13 = FUNC_2(VAR_10, VAR_0);
 if (VAR_13 & VAR_3) {
  *VAR_11 = VAR_9;
  FUNC_1("1000 Mbs, ");
 } else if (VAR_13 & VAR_2) {
  *VAR_11 = VAR_8;
  FUNC_1("100 Mbs, ");
 } else {
  *VAR_11 = VAR_7;
  FUNC_1("10 Mbs, ");
 }

 if (VAR_13 & VAR_1) {
  *VAR_12 = VAR_5;
  FUNC_1("Full Duplex\n");
 } else {
  *VAR_12 = VAR_6;
  FUNC_1("Half Duplex\n");
 }

 return VAR_4;
}
