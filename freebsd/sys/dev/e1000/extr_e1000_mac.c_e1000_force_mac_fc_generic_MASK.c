
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int current_mode; } ;
struct e1000_hw {TYPE_1__ fc; } ;
typedef int s32 ;


 int FUNC_0 (char*) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char*,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_3 (struct e1000_hw*,int ) ;
 int VAR_4 ;
 int FUNC_4 (struct e1000_hw*,int ,int) ;





s32 FUNC_5(struct e1000_hw *VAR_5)
{
 u32 VAR_6;

 FUNC_0("e1000_force_mac_fc_generic");

 VAR_6 = FUNC_3(VAR_5, VAR_0);
 FUNC_2("hw->fc.current_mode = %u\n", VAR_5->fc.current_mode);

 switch (VAR_5->fc.current_mode) {
 case 130:
  VAR_6 &= (~(VAR_2 | VAR_1));
  break;
 case 129:
  VAR_6 &= (~VAR_2);
  VAR_6 |= VAR_1;
  break;
 case 128:
  VAR_6 &= (~VAR_1);
  VAR_6 |= VAR_2;
  break;
 case 131:
  VAR_6 |= (VAR_2 | VAR_1);
  break;
 default:
  FUNC_1("Flow control param set incorrectly\n");
  return -VAR_3;
 }

 FUNC_4(VAR_5, VAR_0, VAR_6);

 return VAR_4;
}
