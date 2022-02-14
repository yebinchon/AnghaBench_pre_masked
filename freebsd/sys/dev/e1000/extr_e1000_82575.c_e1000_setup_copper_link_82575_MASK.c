
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_5__ {scalar_t__ (* reset ) (struct e1000_hw*) ;} ;
struct TYPE_6__ {int type; int id; TYPE_2__ ops; } ;
struct TYPE_4__ {int type; } ;
struct e1000_hw {TYPE_3__ phy; TYPE_1__ mac; } ;
typedef scalar_t__ s32 ;


 int FUNC_0 (char*) ;
 int FUNC_1 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_2 (struct e1000_hw*,int ) ;
 int FUNC_3 (struct e1000_hw*,int ,int) ;







 scalar_t__ FUNC_4 (struct e1000_hw*) ;
 scalar_t__ FUNC_5 (struct e1000_hw*) ;
 scalar_t__ FUNC_6 (struct e1000_hw*) ;
 scalar_t__ FUNC_7 (struct e1000_hw*) ;







 scalar_t__ FUNC_8 (struct e1000_hw*) ;
 scalar_t__ FUNC_9 (struct e1000_hw*) ;
 scalar_t__ FUNC_10 (struct e1000_hw*) ;
 int FUNC_11 (int) ;
 scalar_t__ FUNC_12 (struct e1000_hw*) ;

__attribute__((used)) static s32 FUNC_13(struct e1000_hw *VAR_7)
{
 u32 VAR_8;
 s32 VAR_9;
 u32 VAR_10;

 FUNC_0("e1000_setup_copper_link_82575");

 VAR_8 = FUNC_2(VAR_7, VAR_2);
 VAR_8 |= VAR_5;
 VAR_8 &= ~(VAR_4 | VAR_3);
 FUNC_3(VAR_7, VAR_2, VAR_8);


 switch (VAR_7->mac.type) {
 case 135:
 case 132:
 case 134:
 case 133:
  VAR_10 = FUNC_2(VAR_7, VAR_0);
  VAR_10 &= ~VAR_1;
  FUNC_3(VAR_7, VAR_0, VAR_10);
  break;
 default:
  break;
 }

 VAR_9 = FUNC_9(VAR_7);
 if (VAR_9)
  goto out;

 if (FUNC_10(VAR_7)) {

  FUNC_11(300);

  VAR_9 = VAR_7->phy.ops.reset(VAR_7);
  if (VAR_9) {
   FUNC_1("Error resetting the PHY.\n");
   goto out;
  }
 }
 switch (VAR_7->phy.type) {
 case 130:
 case 128:
  switch (VAR_7->phy.id) {
  case 140:
  case 139:
  case 138:
  case 136:
  case 137:
  case 141:
   VAR_9 = FUNC_7(VAR_7);
   break;
  default:
   VAR_9 = FUNC_6(VAR_7);
   break;
  }
  break;
 case 129:
  VAR_9 = FUNC_5(VAR_7);
  break;
 case 131:
  VAR_9 = FUNC_4(VAR_7);
  break;
 default:
  VAR_9 = -VAR_6;
  break;
 }

 if (VAR_9)
  goto out;

 VAR_9 = FUNC_8(VAR_7);
out:
 return VAR_9;
}
