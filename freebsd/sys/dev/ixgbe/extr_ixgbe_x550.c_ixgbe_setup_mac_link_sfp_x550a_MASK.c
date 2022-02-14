
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u32 ;
typedef int u16 ;
struct TYPE_9__ {scalar_t__ (* read_reg ) (struct ixgbe_hw*,int,int ,int*) ;scalar_t__ (* write_reg ) (struct ixgbe_hw*,int,int ,int) ;} ;
struct TYPE_10__ {int addr; TYPE_4__ ops; } ;
struct TYPE_8__ {int lan_id; int instance_id; } ;
struct TYPE_6__ {scalar_t__ (* read_iosf_sb_reg ) (struct ixgbe_hw*,int ,int ,int*) ;scalar_t__ (* write_iosf_sb_reg ) (struct ixgbe_hw*,int ,int ,int) ;} ;
struct TYPE_7__ {TYPE_1__ ops; } ;
struct ixgbe_hw {scalar_t__ device_id; TYPE_5__ phy; TYPE_3__ bus; TYPE_2__ mac; } ;
typedef scalar_t__ s32 ;
typedef int ixgbe_link_speed ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_1 (int) ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 scalar_t__ VAR_13 ;
 int FUNC_2 (int) ;
 int FUNC_3 (struct ixgbe_hw*,int ) ;
 scalar_t__ FUNC_4 (struct ixgbe_hw*,int *) ;
 scalar_t__ FUNC_5 (struct ixgbe_hw*,int*) ;
 scalar_t__ FUNC_6 (struct ixgbe_hw*,int ,int ,int*) ;
 scalar_t__ FUNC_7 (struct ixgbe_hw*,int ,int ,int) ;
 scalar_t__ FUNC_8 (struct ixgbe_hw*,int,int ,int*) ;
 scalar_t__ FUNC_9 (struct ixgbe_hw*,int,int ,int*) ;
 scalar_t__ FUNC_10 (struct ixgbe_hw*,int,int ,int) ;
 scalar_t__ FUNC_11 (struct ixgbe_hw*,int,int ,int*) ;

s32 FUNC_12(struct ixgbe_hw *VAR_14,
        ixgbe_link_speed VAR_15,
        bool VAR_16)
{
 s32 VAR_17;
 u16 VAR_18;
 bool VAR_19 = VAR_0;
 u32 VAR_20, VAR_21, VAR_22;

 FUNC_2(VAR_16);


 VAR_17 = FUNC_5(VAR_14, &VAR_19);




 if (VAR_17 == VAR_8)
  return VAR_13;

 if (VAR_17 != VAR_13)
  return VAR_17;

 if (VAR_14->device_id == VAR_6) {

  VAR_17 = VAR_14->mac.ops.read_iosf_sb_reg(VAR_14,
       FUNC_1(VAR_14->bus.lan_id),
       VAR_12, &VAR_21);

  if (VAR_17 != VAR_13)
   return VAR_17;

  VAR_21 &= VAR_9;
  if (!VAR_19)
   VAR_21 |= VAR_10;

  VAR_17 = VAR_14->mac.ops.write_iosf_sb_reg(VAR_14,
       FUNC_1(VAR_14->bus.lan_id),
       VAR_12, VAR_21);

  if (VAR_17 != VAR_13)
   return VAR_17;


  VAR_17 = FUNC_4(VAR_14, &VAR_15);
 } else {

  FUNC_3(VAR_14, VAR_15);

  if (VAR_14->phy.addr == 0x0 || VAR_14->phy.addr == 0xFFFF) {

   FUNC_0("Invalid NW_MNG_IF_SEL.MDIO_PHY_ADD value\n");
   return VAR_7;
  }


  VAR_17 = VAR_14->phy.ops.read_reg(VAR_14, VAR_4,
     VAR_11, &VAR_18);

  if (VAR_17 != VAR_13)
   return VAR_17;




  if (VAR_18 == VAR_1)
   VAR_22 = (VAR_14->bus.lan_id +
     (VAR_14->bus.instance_id << 1)) << 12;
  else
   VAR_22 = VAR_14->bus.lan_id << 12;


  VAR_20 = VAR_5 + VAR_22;

  VAR_17 = VAR_14->phy.ops.read_reg(VAR_14, VAR_20,
     VAR_11, &VAR_18);

  if (VAR_17 != VAR_13)
   return VAR_17;

  VAR_18 &= ~((VAR_2 << 1) |
     (VAR_3 << 1));

  if (VAR_19)
   VAR_18 = (VAR_2 << 1) | 0x1;
  else
   VAR_18 = (VAR_3 << 1) | 0x1;
  VAR_17 = VAR_14->phy.ops.write_reg(VAR_14, VAR_20,
      VAR_11, VAR_18);


  VAR_17 = VAR_14->phy.ops.read_reg(VAR_14, VAR_20,
     VAR_11, &VAR_18);
 }
 return VAR_17;
}
