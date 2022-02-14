
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
struct TYPE_5__ {int (* config_collision_dist ) (struct e1000_hw*) ;} ;
struct TYPE_6__ {TYPE_1__ ops; } ;
struct TYPE_7__ {scalar_t__ (* read_reg ) (struct e1000_hw*,int ,int*) ;} ;
struct TYPE_8__ {TYPE_3__ ops; } ;
struct e1000_hw {TYPE_2__ mac; TYPE_4__ phy; } ;
typedef scalar_t__ s32 ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (struct e1000_hw*,int ) ;
 scalar_t__ VAR_8 ;
 int FUNC_2 (struct e1000_hw*,int ,int) ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 scalar_t__ FUNC_3 (struct e1000_hw*,int ,int*) ;
 int FUNC_4 (struct e1000_hw*) ;

__attribute__((used)) static s32 FUNC_5(struct e1000_hw *VAR_14)
{
 u32 VAR_15;
 s32 VAR_16 = VAR_8;
 u16 VAR_17;

 FUNC_0("e1000_config_mac_to_phy_82543");

 if (!(VAR_14->phy.ops.read_reg))
  goto out;


 VAR_15 = FUNC_1(VAR_14, VAR_0);
 VAR_15 |= (VAR_3 | VAR_2);
 VAR_15 &= ~(VAR_7 | VAR_4);





 VAR_16 = VAR_14->phy.ops.read_reg(VAR_14, VAR_9, &VAR_17);
 if (VAR_16)
  goto out;

 VAR_15 &= ~VAR_1;
 if (VAR_17 & VAR_12)
  VAR_15 |= VAR_1;

 VAR_14->mac.ops.config_collision_dist(VAR_14);





 if ((VAR_17 & VAR_13) == VAR_10)
  VAR_15 |= VAR_6;
 else if ((VAR_17 & VAR_13) == VAR_11)
  VAR_15 |= VAR_5;

 FUNC_2(VAR_14, VAR_0, VAR_15);

out:
 return VAR_16;
}
