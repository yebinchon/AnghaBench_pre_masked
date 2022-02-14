
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int type; } ;
struct e1000_hw {TYPE_1__ phy; } ;
typedef scalar_t__ s32 ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_1 (struct e1000_hw*,int ) ;
 int FUNC_2 (struct e1000_hw*,int ,int) ;
 scalar_t__ FUNC_3 (struct e1000_hw*) ;
 scalar_t__ FUNC_4 (struct e1000_hw*) ;



 scalar_t__ FUNC_5 (struct e1000_hw*) ;

__attribute__((used)) static s32 FUNC_6(struct e1000_hw *VAR_5)
{
 u32 VAR_6;
 s32 VAR_7;

 FUNC_0("e1000_setup_copper_link_82571");

 VAR_6 = FUNC_1(VAR_5, VAR_0);
 VAR_6 |= VAR_3;
 VAR_6 &= ~(VAR_2 | VAR_1);
 FUNC_2(VAR_5, VAR_0, VAR_6);

 switch (VAR_5->phy.type) {
 case 128:
 case 130:
  VAR_7 = FUNC_4(VAR_5);
  break;
 case 129:
  VAR_7 = FUNC_3(VAR_5);
  break;
 default:
  return -VAR_4;
  break;
 }

 if (VAR_7)
  return VAR_7;

 return FUNC_5(VAR_5);
}
