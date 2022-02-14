
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct e1000_hw {int dummy; } ;
typedef int s32 ;


 int FUNC_0 (char*) ;
 int FUNC_1 (char*,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (struct e1000_hw*,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_3 (struct e1000_hw*,int ,int) ;

__attribute__((used)) static s32 FUNC_4(struct e1000_hw *VAR_7, u32 VAR_8)
{
 u32 VAR_9;
 s32 VAR_10;

 FUNC_0("e1000_set_obff_timer_pch_lpt");


 VAR_10 = VAR_8 & VAR_1;
 VAR_10 = (VAR_10 * VAR_2) / 1000;

 if ((VAR_10 < 0) || (VAR_10 > VAR_1)) {
  FUNC_1("Invalid OBFF timer %d\n", VAR_10);
  return -VAR_0;
 }

 VAR_9 = FUNC_2(VAR_7, VAR_4);
 VAR_9 &= ~VAR_5;
 VAR_9 |= VAR_10 << VAR_6;
 FUNC_3(VAR_7, VAR_4, VAR_9);

 return VAR_3;
}
