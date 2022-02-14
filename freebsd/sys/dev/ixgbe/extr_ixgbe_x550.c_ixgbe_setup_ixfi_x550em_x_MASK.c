
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_3__ {scalar_t__ (* read_iosf_sb_reg ) (struct ixgbe_hw*,int ,int ,int *) ;scalar_t__ (* write_iosf_sb_reg ) (struct ixgbe_hw*,int ,int ,int ) ;} ;
struct ixgbe_mac_info {TYPE_1__ ops; } ;
struct TYPE_4__ {int lan_id; } ;
struct ixgbe_hw {TYPE_2__ bus; struct ixgbe_mac_info mac; } ;
typedef scalar_t__ s32 ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (int ) ;
 int VAR_3 ;
 int FUNC_3 (int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ FUNC_4 (struct ixgbe_hw*,int ,int ,int *) ;
 scalar_t__ FUNC_5 (struct ixgbe_hw*,int ,int ,int ) ;
 scalar_t__ FUNC_6 (struct ixgbe_hw*,int ,int ,int *) ;
 scalar_t__ FUNC_7 (struct ixgbe_hw*,int ,int ,int ) ;
 scalar_t__ FUNC_8 (struct ixgbe_hw*,int ,int ,int *) ;
 scalar_t__ FUNC_9 (struct ixgbe_hw*,int ,int ,int ) ;
 scalar_t__ FUNC_10 (struct ixgbe_hw*,int ,int ,int *) ;
 scalar_t__ FUNC_11 (struct ixgbe_hw*,int ,int ,int ) ;

__attribute__((used)) static s32 FUNC_12(struct ixgbe_hw *VAR_10)
{
 struct ixgbe_mac_info *VAR_11 = &VAR_10->mac;
 s32 VAR_12;
 u32 VAR_13;


 VAR_12 = VAR_11->ops.read_iosf_sb_reg(VAR_10,
    FUNC_2(VAR_10->bus.lan_id),
    VAR_8, &VAR_13);
 if (VAR_12 != VAR_9)
  return VAR_12;
 VAR_13 |= VAR_3;
 VAR_12 = VAR_11->ops.write_iosf_sb_reg(VAR_10,
    FUNC_2(VAR_10->bus.lan_id),
    VAR_8, VAR_13);
 if (VAR_12 != VAR_9)
  return VAR_12;


 VAR_12 = VAR_11->ops.read_iosf_sb_reg(VAR_10,
    FUNC_0(VAR_10->bus.lan_id),
    VAR_8, &VAR_13);
 if (VAR_12 != VAR_9)
  return VAR_12;
 VAR_13 &= ~VAR_0;
 VAR_13 &= ~VAR_2;
 VAR_13 &= ~VAR_1;
 VAR_12 = VAR_11->ops.write_iosf_sb_reg(VAR_10,
    FUNC_0(VAR_10->bus.lan_id),
    VAR_8, VAR_13);
 if (VAR_12 != VAR_9)
  return VAR_12;
 VAR_12 = VAR_11->ops.read_iosf_sb_reg(VAR_10,
    FUNC_1(VAR_10->bus.lan_id),
    VAR_8, &VAR_13);
 if (VAR_12 != VAR_9)
  return VAR_12;
 VAR_13 &= ~VAR_0;
 VAR_13 &= ~VAR_2;
 VAR_13 &= ~VAR_1;
 VAR_12 = VAR_11->ops.write_iosf_sb_reg(VAR_10,
    FUNC_1(VAR_10->bus.lan_id),
    VAR_8, VAR_13);
 if (VAR_12 != VAR_9)
  return VAR_12;


 VAR_12 = VAR_11->ops.read_iosf_sb_reg(VAR_10,
    FUNC_3(VAR_10->bus.lan_id),
    VAR_8, &VAR_13);
 if (VAR_12 != VAR_9)
  return VAR_12;
 VAR_13 |= VAR_7;
 VAR_13 |= VAR_6;
 VAR_13 |= VAR_5;
 VAR_13 |= VAR_4;
 VAR_12 = VAR_11->ops.write_iosf_sb_reg(VAR_10,
    FUNC_3(VAR_10->bus.lan_id),
    VAR_8, VAR_13);
 return VAR_12;
}
