
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u16 ;
struct TYPE_3__ {scalar_t__ (* write_reg ) (struct e1000_hw*,int ,int) ;scalar_t__ (* read_reg ) (struct e1000_hw*,int ,int*) ;} ;
struct TYPE_4__ {TYPE_1__ ops; } ;
struct e1000_hw {TYPE_2__ phy; } ;
typedef scalar_t__ s32 ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (struct e1000_hw*,int ,int*) ;
 scalar_t__ FUNC_2 (struct e1000_hw*,int ,int) ;
 scalar_t__ FUNC_3 (struct e1000_hw*,int ,int*) ;
 scalar_t__ FUNC_4 (struct e1000_hw*,int ,int) ;
 scalar_t__ FUNC_5 (struct e1000_hw*,int ,int) ;
 scalar_t__ FUNC_6 (struct e1000_hw*,int ,int*) ;
 scalar_t__ FUNC_7 (struct e1000_hw*,int ,int) ;
 scalar_t__ FUNC_8 (struct e1000_hw*,int ,int) ;

__attribute__((used)) static s32 FUNC_9(struct e1000_hw *VAR_4)
{
 s32 VAR_5;
 u16 VAR_6 = 0;
 u16 VAR_7;

 FUNC_0("e1000_set_vco_speed_82540");



 VAR_5 = VAR_4->phy.ops.read_reg(VAR_4, VAR_1,
           &VAR_6);
 if (VAR_5)
  goto out;

 VAR_5 = VAR_4->phy.ops.write_reg(VAR_4, VAR_1, 0x0005);
 if (VAR_5)
  goto out;

 VAR_5 = VAR_4->phy.ops.read_reg(VAR_4, VAR_0, &VAR_7);
 if (VAR_5)
  goto out;

 VAR_7 &= ~VAR_3;
 VAR_5 = VAR_4->phy.ops.write_reg(VAR_4, VAR_0, VAR_7);
 if (VAR_5)
  goto out;



 VAR_5 = VAR_4->phy.ops.write_reg(VAR_4, VAR_1, 0x0004);
 if (VAR_5)
  goto out;

 VAR_5 = VAR_4->phy.ops.read_reg(VAR_4, VAR_0, &VAR_7);
 if (VAR_5)
  goto out;

 VAR_7 |= VAR_2;
 VAR_5 = VAR_4->phy.ops.write_reg(VAR_4, VAR_0, VAR_7);
 if (VAR_5)
  goto out;

 VAR_5 = VAR_4->phy.ops.write_reg(VAR_4, VAR_1,
     VAR_6);

out:
 return VAR_5;
}
