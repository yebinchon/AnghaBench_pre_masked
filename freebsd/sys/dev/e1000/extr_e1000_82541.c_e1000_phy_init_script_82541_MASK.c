
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u32 ;
typedef int u16 ;
struct TYPE_7__ {int (* write_reg ) (struct e1000_hw*,int,int) ;int (* read_reg ) (struct e1000_hw*,int,int*) ;} ;
struct TYPE_8__ {TYPE_3__ ops; } ;
struct TYPE_6__ {int type; } ;
struct e1000_dev_spec_82541 {int phy_init_script; } ;
struct TYPE_5__ {struct e1000_dev_spec_82541 _82541; } ;
struct e1000_hw {TYPE_4__ phy; TYPE_2__ mac; TYPE_1__ dev_spec; } ;
typedef int s32 ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;




 int FUNC_1 (int) ;
 int FUNC_2 (struct e1000_hw*,int,int*) ;
 int FUNC_3 (struct e1000_hw*,int,int) ;
 int FUNC_4 (struct e1000_hw*,int,int) ;
 int FUNC_5 (struct e1000_hw*,int,int) ;
 int FUNC_6 (struct e1000_hw*,int,int) ;
 int FUNC_7 (struct e1000_hw*,int,int) ;
 int FUNC_8 (struct e1000_hw*,int,int) ;
 int FUNC_9 (struct e1000_hw*,int,int*) ;
 int FUNC_10 (struct e1000_hw*,int,int*) ;
 int FUNC_11 (struct e1000_hw*,int,int) ;
 int FUNC_12 (struct e1000_hw*,int,int) ;
 int FUNC_13 (struct e1000_hw*,int,int) ;
 int FUNC_14 (struct e1000_hw*,int,int) ;
 int FUNC_15 (struct e1000_hw*,int,int) ;
 int FUNC_16 (struct e1000_hw*,int,int) ;
 int FUNC_17 (struct e1000_hw*,int,int) ;
 int FUNC_18 (struct e1000_hw*,int,int) ;
 int FUNC_19 (struct e1000_hw*,int,int) ;
 int FUNC_20 (struct e1000_hw*,int,int) ;

__attribute__((used)) static s32 FUNC_21(struct e1000_hw *VAR_14)
{
 struct e1000_dev_spec_82541 *VAR_15 = &VAR_14->dev_spec._82541;
 u32 VAR_16;
 u16 VAR_17;

 FUNC_0("e1000_phy_init_script_82541");

 if (!VAR_15->phy_init_script) {
  VAR_16 = VAR_0;
  goto out;
 }


 FUNC_1(20);





 VAR_16 = VAR_14->phy.ops.read_reg(VAR_14, 0x2F5B, &VAR_17);


 VAR_14->phy.ops.write_reg(VAR_14, 0x2F5B, 0x0003);

 FUNC_1(20);

 VAR_14->phy.ops.write_reg(VAR_14, 0x0000, 0x0140);

 FUNC_1(5);

 switch (VAR_14->mac.type) {
 case 131:
 case 129:
  VAR_14->phy.ops.write_reg(VAR_14, 0x1F95, 0x0001);

  VAR_14->phy.ops.write_reg(VAR_14, 0x1F71, 0xBD21);

  VAR_14->phy.ops.write_reg(VAR_14, 0x1F79, 0x0018);

  VAR_14->phy.ops.write_reg(VAR_14, 0x1F30, 0x1600);

  VAR_14->phy.ops.write_reg(VAR_14, 0x1F31, 0x0014);

  VAR_14->phy.ops.write_reg(VAR_14, 0x1F32, 0x161C);

  VAR_14->phy.ops.write_reg(VAR_14, 0x1F94, 0x0003);

  VAR_14->phy.ops.write_reg(VAR_14, 0x1F96, 0x003F);

  VAR_14->phy.ops.write_reg(VAR_14, 0x2010, 0x0008);
  break;
 case 130:
 case 128:
  VAR_14->phy.ops.write_reg(VAR_14, 0x1F73, 0x0099);
  break;
 default:
  break;
 }

 VAR_14->phy.ops.write_reg(VAR_14, 0x0000, 0x3300);

 FUNC_1(20);


 VAR_14->phy.ops.write_reg(VAR_14, 0x2F5B, VAR_17);

 if (VAR_14->mac.type == 129) {
  u16 VAR_18, VAR_19, VAR_20;


  VAR_14->phy.ops.read_reg(VAR_14, VAR_13,
         &VAR_18);

  if (!(VAR_18 & VAR_12)) {
   VAR_14->phy.ops.read_reg(VAR_14, VAR_11,
          &VAR_18);

   VAR_19 = VAR_18 & VAR_9;
   VAR_20 = VAR_18 & VAR_3;

   if (VAR_20 > VAR_4) {
    VAR_20 -= VAR_2;
    VAR_19 -= VAR_7;
   } else if (VAR_20 ==
       VAR_4)
    VAR_19 -= VAR_8;

   VAR_18 = (VAR_18 & VAR_10) |
    (VAR_19 & VAR_9) |
    (VAR_20 & VAR_3);

   VAR_14->phy.ops.write_reg(VAR_14,
           VAR_5,
           VAR_18);
   VAR_14->phy.ops.write_reg(VAR_14,
          VAR_1,
          VAR_6);
  }
 }

out:
 return VAR_16;
}
