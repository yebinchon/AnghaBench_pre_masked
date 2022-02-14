
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u16 ;
struct TYPE_5__ {scalar_t__ (* write_reg ) (struct e1000_hw*,int ,int ) ;scalar_t__ (* read_reg ) (struct e1000_hw*,int ,int *) ;} ;
struct TYPE_6__ {TYPE_2__ ops; scalar_t__ autoneg_wait_to_complete; } ;
struct TYPE_4__ {int forced_speed_duplex; } ;
struct e1000_hw {TYPE_3__ phy; TYPE_1__ mac; } ;
typedef scalar_t__ s32 ;


 int FUNC_0 (char*) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char*,int ) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_3 (struct e1000_hw*,int *) ;
 scalar_t__ FUNC_4 (struct e1000_hw*,int ,int,int*) ;
 scalar_t__ FUNC_5 (struct e1000_hw*) ;
 scalar_t__ FUNC_6 (struct e1000_hw*,int ,int *) ;
 scalar_t__ FUNC_7 (struct e1000_hw*,int ,int ) ;
 scalar_t__ FUNC_8 (struct e1000_hw*,int ,int *) ;
 scalar_t__ FUNC_9 (struct e1000_hw*,int ,int ) ;
 scalar_t__ FUNC_10 (struct e1000_hw*,int ,int *) ;
 scalar_t__ FUNC_11 (struct e1000_hw*,int ,int ) ;
 int FUNC_12 (int) ;

__attribute__((used)) static s32 FUNC_13(struct e1000_hw *VAR_13)
{
 s32 VAR_14;
 u16 VAR_15;
 bool VAR_16;

 FUNC_0("e1000_phy_force_speed_duplex_80003es2lan");

 if (!(VAR_13->phy.ops.read_reg))
  return VAR_1;




 VAR_14 = VAR_13->phy.ops.read_reg(VAR_13, VAR_9, &VAR_15);
 if (VAR_14)
  return VAR_14;

 VAR_15 &= ~VAR_8;
 VAR_14 = VAR_13->phy.ops.write_reg(VAR_13, VAR_7, VAR_15);
 if (VAR_14)
  return VAR_14;

 FUNC_2("GG82563 PSCR: %X\n", VAR_15);

 VAR_14 = VAR_13->phy.ops.read_reg(VAR_13, VAR_11, &VAR_15);
 if (VAR_14)
  return VAR_14;

 FUNC_3(VAR_13, &VAR_15);


 VAR_15 |= VAR_10;

 VAR_14 = VAR_13->phy.ops.write_reg(VAR_13, VAR_11, VAR_15);
 if (VAR_14)
  return VAR_14;

 FUNC_12(1);

 if (VAR_13->phy.autoneg_wait_to_complete) {
  FUNC_1("Waiting for forced speed/duplex link on GG82563 phy.\n");

  VAR_14 = FUNC_4(VAR_13, VAR_12,
           100000, &VAR_16);
  if (VAR_14)
   return VAR_14;

  if (!VAR_16) {



   VAR_14 = FUNC_5(VAR_13);
   if (VAR_14)
    return VAR_14;
  }


  VAR_14 = FUNC_4(VAR_13, VAR_12,
           100000, &VAR_16);
  if (VAR_14)
   return VAR_14;
 }

 VAR_14 = VAR_13->phy.ops.read_reg(VAR_13, VAR_6,
           &VAR_15);
 if (VAR_14)
  return VAR_14;




 VAR_15 &= ~VAR_5;
 if (VAR_13->mac.forced_speed_duplex & VAR_0)
  VAR_15 |= VAR_4;
 else
  VAR_15 |= VAR_3;




 VAR_15 |= VAR_2;
 VAR_14 = VAR_13->phy.ops.write_reg(VAR_13, VAR_6,
     VAR_15);

 return VAR_14;
}
