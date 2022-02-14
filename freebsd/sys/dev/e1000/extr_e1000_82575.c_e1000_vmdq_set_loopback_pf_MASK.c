
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int type; } ;
struct e1000_hw {TYPE_1__ mac; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct e1000_hw*,int ) ;
 int VAR_2 ;
 int FUNC_1 (struct e1000_hw*,int ,int ) ;




void FUNC_2(struct e1000_hw *VAR_3, bool VAR_4)
{
 u32 VAR_5;

 switch (VAR_3->mac.type) {
 case 130:
  VAR_5 = FUNC_0(VAR_3, VAR_0);
  if (VAR_4)
   VAR_5 |= VAR_1;
  else
   VAR_5 &= ~VAR_1;
  FUNC_1(VAR_3, VAR_0, VAR_5);
  break;
 case 129:
 case 128:
  VAR_5 = FUNC_0(VAR_3, VAR_2);
  if (VAR_4)
   VAR_5 |= VAR_1;
  else
   VAR_5 &= ~VAR_1;
  FUNC_1(VAR_3, VAR_2, VAR_5);
  break;
 default:

  break;
 }


}
