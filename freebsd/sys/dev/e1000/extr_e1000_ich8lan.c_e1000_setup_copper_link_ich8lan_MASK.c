
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
typedef int u16 ;
struct TYPE_3__ {scalar_t__ (* write_reg ) (struct e1000_hw*,int ,int) ;scalar_t__ (* read_reg ) (struct e1000_hw*,int ,int*) ;} ;
struct TYPE_4__ {int type; TYPE_1__ ops; int mdix; } ;
struct e1000_hw {TYPE_2__ phy; } ;
typedef scalar_t__ s32 ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (struct e1000_hw*,int ) ;
 int FUNC_2 (struct e1000_hw*,int ,int) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ FUNC_3 (struct e1000_hw*) ;
 scalar_t__ FUNC_4 (struct e1000_hw*) ;
 scalar_t__ FUNC_5 (struct e1000_hw*) ;






 scalar_t__ FUNC_6 (struct e1000_hw*,int ,int*) ;
 scalar_t__ FUNC_7 (struct e1000_hw*) ;
 scalar_t__ FUNC_8 (struct e1000_hw*,int ,int) ;
 scalar_t__ FUNC_9 (struct e1000_hw*,int ,int*) ;
 scalar_t__ FUNC_10 (struct e1000_hw*,int ,int) ;

__attribute__((used)) static s32 FUNC_11(struct e1000_hw *VAR_9)
{
 u32 VAR_10;
 s32 VAR_11;
 u16 VAR_12;

 FUNC_0("e1000_setup_copper_link_ich8lan");

 VAR_10 = FUNC_1(VAR_9, VAR_0);
 VAR_10 |= VAR_3;
 VAR_10 &= ~(VAR_2 | VAR_1);
 FUNC_2(VAR_9, VAR_0, VAR_10);





 VAR_11 = FUNC_8(VAR_9, VAR_5,
            0xFFFF);
 if (VAR_11)
  return VAR_11;
 VAR_11 = FUNC_6(VAR_9,
           VAR_4,
           &VAR_12);
 if (VAR_11)
  return VAR_11;
 VAR_12 |= 0x3F;
 VAR_11 = FUNC_8(VAR_9,
            VAR_4,
            VAR_12);
 if (VAR_11)
  return VAR_11;

 switch (VAR_9->phy.type) {
 case 128:
  VAR_11 = FUNC_4(VAR_9);
  if (VAR_11)
   return VAR_11;
  break;
 case 130:
 case 132:
  VAR_11 = FUNC_5(VAR_9);
  if (VAR_11)
   return VAR_11;
  break;
 case 133:
 case 131:
  VAR_11 = FUNC_3(VAR_9);
  if (VAR_11)
   return VAR_11;
  break;
 case 129:
  VAR_11 = VAR_9->phy.ops.read_reg(VAR_9, VAR_6,
            &VAR_12);
  if (VAR_11)
   return VAR_11;

  VAR_12 &= ~VAR_7;

  switch (VAR_9->phy.mdix) {
  case 1:
   VAR_12 &= ~VAR_8;
   break;
  case 2:
   VAR_12 |= VAR_8;
   break;
  case 0:
  default:
   VAR_12 |= VAR_7;
   break;
  }
  VAR_11 = VAR_9->phy.ops.write_reg(VAR_9, VAR_6,
      VAR_12);
  if (VAR_11)
   return VAR_11;
  break;
 default:
  break;
 }

 return FUNC_7(VAR_9);
}
