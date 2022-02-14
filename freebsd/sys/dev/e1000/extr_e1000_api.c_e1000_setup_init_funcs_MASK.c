
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int type; } ;
struct e1000_hw {TYPE_1__ mac; int hw_addr; } ;
typedef int s32 ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int FUNC_1 (struct e1000_hw*) ;
 int FUNC_2 (struct e1000_hw*) ;
 int FUNC_3 (struct e1000_hw*) ;
 int FUNC_4 (struct e1000_hw*) ;
 int FUNC_5 (struct e1000_hw*) ;
 int FUNC_6 (struct e1000_hw*) ;
 int FUNC_7 (struct e1000_hw*) ;
 int FUNC_8 (struct e1000_hw*) ;
 int FUNC_9 (struct e1000_hw*) ;
 int FUNC_10 (struct e1000_hw*) ;
 int FUNC_11 (struct e1000_hw*) ;
 int FUNC_12 (struct e1000_hw*) ;
 int FUNC_13 (struct e1000_hw*) ;
 int FUNC_14 (struct e1000_hw*) ;
 int FUNC_15 (struct e1000_hw*) ;
 int FUNC_16 (struct e1000_hw*) ;
 int FUNC_17 (struct e1000_hw*) ;
 int FUNC_18 (struct e1000_hw*) ;





 int FUNC_19 (struct e1000_hw*) ;



s32 FUNC_20(struct e1000_hw *VAR_1, bool VAR_2)
{
 s32 VAR_3;


 VAR_3 = FUNC_19(VAR_1);
 if (VAR_3) {
  FUNC_0("ERROR: MAC type could not be set properly.\n");
  goto out;
 }

 if (!VAR_1->hw_addr) {
  FUNC_0("ERROR: Registers not mapped\n");
  VAR_3 = -VAR_0;
  goto out;
 }





 FUNC_11(VAR_1);
 FUNC_17(VAR_1);
 FUNC_15(VAR_1);
 FUNC_13(VAR_1);






 switch (VAR_1->mac.type) {
 case 158:
  FUNC_4(VAR_1);
  break;
 case 157:
 case 156:
  FUNC_5(VAR_1);
  break;
 case 161:
 case 155:
 case 154:
 case 153:
 case 152:
  FUNC_2(VAR_1);
  break;
 case 160:
 case 159:
 case 151:
 case 150:
  FUNC_3(VAR_1);
  break;
 case 149:
 case 148:
 case 147:
 case 146:
 case 142:
  FUNC_6(VAR_1);
  break;
 case 162:
  FUNC_1(VAR_1);
  break;
 case 136:
 case 135:
 case 137:
 case 130:
 case 134:
 case 132:
 case 131:
 case 133:
  FUNC_9(VAR_1);
  break;
 case 145:
 case 144:
 case 143:
 case 139:
 case 138:
  FUNC_7(VAR_1);
  break;
 case 141:
 case 140:
  FUNC_8(VAR_1);
  break;
 case 129:
  FUNC_10(VAR_1);
  break;
 case 128:
  FUNC_10(VAR_1);
  break;
 default:
  FUNC_0("Hardware not supported\n");
  VAR_3 = -VAR_0;
  break;
 }





 if (!(VAR_3) && VAR_2) {
  VAR_3 = FUNC_12(VAR_1);
  if (VAR_3)
   goto out;

  VAR_3 = FUNC_16(VAR_1);
  if (VAR_3)
   goto out;

  VAR_3 = FUNC_18(VAR_1);
  if (VAR_3)
   goto out;

  VAR_3 = FUNC_14(VAR_1);
  if (VAR_3)
   goto out;
 }

out:
 return VAR_3;
}
