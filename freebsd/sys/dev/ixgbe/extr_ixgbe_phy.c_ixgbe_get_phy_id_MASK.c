
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u32 ;
typedef int u16 ;
struct TYPE_3__ {scalar_t__ (* read_reg ) (struct ixgbe_hw*,int ,int ,int*) ;} ;
struct TYPE_4__ {scalar_t__ id; scalar_t__ revision; TYPE_1__ ops; } ;
struct ixgbe_hw {TYPE_2__ phy; } ;
typedef scalar_t__ s32 ;


 int FUNC_0 (char*) ;
 int FUNC_1 (char*,int,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_2 (struct ixgbe_hw*,int ,int ,int*) ;
 scalar_t__ FUNC_3 (struct ixgbe_hw*,int ,int ,int*) ;

s32 FUNC_4(struct ixgbe_hw *VAR_5)
{
 u32 VAR_6;
 u16 VAR_7 = 0;
 u16 VAR_8 = 0;

 FUNC_0("ixgbe_get_phy_id");

 VAR_6 = VAR_5->phy.ops.read_reg(VAR_5, VAR_0,
          VAR_2,
          &VAR_7);

 if (VAR_6 == VAR_4) {
  VAR_5->phy.id = (u32)(VAR_7 << 16);
  VAR_6 = VAR_5->phy.ops.read_reg(VAR_5, VAR_1,
           VAR_2,
           &VAR_8);
  VAR_5->phy.id |= (u32)(VAR_8 & VAR_3);
  VAR_5->phy.revision = (u32)(VAR_8 & ~VAR_3);
 }
 FUNC_1("PHY_ID_HIGH 0x%04X, PHY_ID_LOW 0x%04X\n",
    VAR_7, VAR_8);

 return VAR_6;
}
