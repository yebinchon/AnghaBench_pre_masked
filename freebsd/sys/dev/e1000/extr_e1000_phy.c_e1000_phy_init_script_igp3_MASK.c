
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int (* write_reg ) (struct e1000_hw*,int,int) ;} ;
struct TYPE_4__ {TYPE_1__ ops; } ;
struct e1000_hw {TYPE_2__ phy; } ;
typedef int s32 ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int FUNC_1 (struct e1000_hw*,int,int) ;
 int FUNC_2 (struct e1000_hw*,int,int) ;
 int FUNC_3 (struct e1000_hw*,int,int) ;
 int FUNC_4 (struct e1000_hw*,int,int) ;
 int FUNC_5 (struct e1000_hw*,int,int) ;
 int FUNC_6 (struct e1000_hw*,int,int) ;
 int FUNC_7 (struct e1000_hw*,int,int) ;
 int FUNC_8 (struct e1000_hw*,int,int) ;
 int FUNC_9 (struct e1000_hw*,int,int) ;
 int FUNC_10 (struct e1000_hw*,int,int) ;
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
 int FUNC_21 (struct e1000_hw*,int,int) ;
 int FUNC_22 (struct e1000_hw*,int,int) ;
 int FUNC_23 (struct e1000_hw*,int,int) ;
 int FUNC_24 (struct e1000_hw*,int,int) ;
 int FUNC_25 (struct e1000_hw*,int,int) ;
 int FUNC_26 (struct e1000_hw*,int,int) ;
 int FUNC_27 (struct e1000_hw*,int,int) ;
 int FUNC_28 (struct e1000_hw*,int,int) ;
 int FUNC_29 (struct e1000_hw*,int,int) ;
 int FUNC_30 (struct e1000_hw*,int,int) ;
 int FUNC_31 (struct e1000_hw*,int,int) ;
 int FUNC_32 (struct e1000_hw*,int,int) ;

s32 FUNC_33(struct e1000_hw *VAR_1)
{
 FUNC_0("Running IGP 3 PHY init script\n");



 VAR_1->phy.ops.write_reg(VAR_1, 0x2F5B, 0x9018);

 VAR_1->phy.ops.write_reg(VAR_1, 0x2F52, 0x0000);

 VAR_1->phy.ops.write_reg(VAR_1, 0x2FB1, 0x8B24);

 VAR_1->phy.ops.write_reg(VAR_1, 0x2FB2, 0xF8F0);

 VAR_1->phy.ops.write_reg(VAR_1, 0x2010, 0x10B0);

 VAR_1->phy.ops.write_reg(VAR_1, 0x2011, 0x0000);

 VAR_1->phy.ops.write_reg(VAR_1, 0x20DD, 0x249A);

 VAR_1->phy.ops.write_reg(VAR_1, 0x20DE, 0x00D3);

 VAR_1->phy.ops.write_reg(VAR_1, 0x28B4, 0x04CE);

 VAR_1->phy.ops.write_reg(VAR_1, 0x2F70, 0x29E4);

 VAR_1->phy.ops.write_reg(VAR_1, 0x0000, 0x0140);

 VAR_1->phy.ops.write_reg(VAR_1, 0x1F30, 0x1606);

 VAR_1->phy.ops.write_reg(VAR_1, 0x1F31, 0xB814);

 VAR_1->phy.ops.write_reg(VAR_1, 0x1F35, 0x002A);

 VAR_1->phy.ops.write_reg(VAR_1, 0x1F3E, 0x0067);

 VAR_1->phy.ops.write_reg(VAR_1, 0x1F54, 0x0065);

 VAR_1->phy.ops.write_reg(VAR_1, 0x1F55, 0x002A);

 VAR_1->phy.ops.write_reg(VAR_1, 0x1F56, 0x002A);

 VAR_1->phy.ops.write_reg(VAR_1, 0x1F72, 0x3FB0);

 VAR_1->phy.ops.write_reg(VAR_1, 0x1F76, 0xC0FF);

 VAR_1->phy.ops.write_reg(VAR_1, 0x1F77, 0x1DEC);

 VAR_1->phy.ops.write_reg(VAR_1, 0x1F78, 0xF9EF);

 VAR_1->phy.ops.write_reg(VAR_1, 0x1F79, 0x0210);

 VAR_1->phy.ops.write_reg(VAR_1, 0x1895, 0x0003);

 VAR_1->phy.ops.write_reg(VAR_1, 0x1796, 0x0008);

 VAR_1->phy.ops.write_reg(VAR_1, 0x1798, 0xD008);



 VAR_1->phy.ops.write_reg(VAR_1, 0x1898, 0xD918);

 VAR_1->phy.ops.write_reg(VAR_1, 0x187A, 0x0800);



 VAR_1->phy.ops.write_reg(VAR_1, 0x0019, 0x008D);

 VAR_1->phy.ops.write_reg(VAR_1, 0x001B, 0x2080);

 VAR_1->phy.ops.write_reg(VAR_1, 0x0014, 0x0045);

 VAR_1->phy.ops.write_reg(VAR_1, 0x0000, 0x1340);

 return VAR_0;
}
