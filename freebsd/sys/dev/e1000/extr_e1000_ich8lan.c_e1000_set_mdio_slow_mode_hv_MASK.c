
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u16 ;
struct TYPE_3__ {scalar_t__ (* write_reg ) (struct e1000_hw*,int ,int ) ;scalar_t__ (* read_reg ) (struct e1000_hw*,int ,int *) ;} ;
struct TYPE_4__ {TYPE_1__ ops; } ;
struct e1000_hw {TYPE_2__ phy; } ;
typedef scalar_t__ s32 ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (struct e1000_hw*,int ,int *) ;
 scalar_t__ FUNC_2 (struct e1000_hw*,int ,int ) ;

__attribute__((used)) static s32 FUNC_3(struct e1000_hw *VAR_2)
{
 s32 VAR_3;
 u16 VAR_4;

 FUNC_0("e1000_set_mdio_slow_mode_hv");

 VAR_3 = VAR_2->phy.ops.read_reg(VAR_2, VAR_1, &VAR_4);
 if (VAR_3)
  return VAR_3;

 VAR_4 |= VAR_0;

 VAR_3 = VAR_2->phy.ops.write_reg(VAR_2, VAR_1, VAR_4);

 return VAR_3;
}
