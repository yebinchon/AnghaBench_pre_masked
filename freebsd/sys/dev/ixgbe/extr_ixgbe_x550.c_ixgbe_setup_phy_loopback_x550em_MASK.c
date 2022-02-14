
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_6__ {int lan_id; } ;
struct TYPE_4__ {scalar_t__ (* read_iosf_sb_reg ) (struct ixgbe_hw*,int ,int ,int *) ;scalar_t__ (* write_iosf_sb_reg ) (struct ixgbe_hw*,int ,int ,int ) ;} ;
struct TYPE_5__ {TYPE_1__ ops; } ;
struct ixgbe_hw {TYPE_3__ bus; TYPE_2__ mac; } ;
typedef scalar_t__ s32 ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ) ;
 int VAR_3 ;
 int FUNC_2 (int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_3 (int ) ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ FUNC_4 (struct ixgbe_hw*,int ,int ,int *) ;
 scalar_t__ FUNC_5 (struct ixgbe_hw*,int ,int ,int ) ;
 scalar_t__ FUNC_6 (struct ixgbe_hw*,int ,int ,int *) ;
 scalar_t__ FUNC_7 (struct ixgbe_hw*,int ,int ,int ) ;
 scalar_t__ FUNC_8 (struct ixgbe_hw*,int ,int ,int *) ;
 scalar_t__ FUNC_9 (struct ixgbe_hw*,int ,int ,int ) ;
 scalar_t__ FUNC_10 (struct ixgbe_hw*,int ,int ,int *) ;
 scalar_t__ FUNC_11 (struct ixgbe_hw*,int ,int ,int ) ;

s32 FUNC_12(struct ixgbe_hw *VAR_9)
{
 s32 VAR_10;
 u32 VAR_11;


 VAR_10 = VAR_9->mac.ops.read_iosf_sb_reg(VAR_9,
     FUNC_0(VAR_9->bus.lan_id),
     VAR_7, &VAR_11);
 if (VAR_10 != VAR_8)
  return VAR_10;
 VAR_11 &= ~VAR_0;
 VAR_11 &= ~VAR_2;
 VAR_11 |= VAR_1;
 VAR_10 = VAR_9->mac.ops.write_iosf_sb_reg(VAR_9,
     FUNC_0(VAR_9->bus.lan_id),
     VAR_7, VAR_11);
 if (VAR_10 != VAR_8)
  return VAR_10;


 VAR_10 = VAR_9->mac.ops.read_iosf_sb_reg(VAR_9,
    FUNC_2(VAR_9->bus.lan_id),
    VAR_7, &VAR_11);
 if (VAR_10 != VAR_8)
  return VAR_10;
 VAR_11 |= VAR_4;
 VAR_11 |= VAR_5;
 VAR_10 = VAR_9->mac.ops.write_iosf_sb_reg(VAR_9,
    FUNC_2(VAR_9->bus.lan_id),
    VAR_7, VAR_11);
 if (VAR_10 != VAR_8)
  return VAR_10;


 VAR_10 = VAR_9->mac.ops.read_iosf_sb_reg(VAR_9,
    FUNC_1(VAR_9->bus.lan_id),
    VAR_7, &VAR_11);
 if (VAR_10 != VAR_8)
  return VAR_10;
 VAR_11 |= VAR_3;
 VAR_10 = VAR_9->mac.ops.write_iosf_sb_reg(VAR_9,
    FUNC_1(VAR_9->bus.lan_id),
    VAR_7, VAR_11);
 if (VAR_10 != VAR_8)
  return VAR_10;


 VAR_10 = VAR_9->mac.ops.read_iosf_sb_reg(VAR_9,
    FUNC_3(VAR_9->bus.lan_id),
    VAR_7, &VAR_11);
 if (VAR_10 != VAR_8)
  return VAR_10;
 VAR_11 |= VAR_6;
 VAR_10 = VAR_9->mac.ops.write_iosf_sb_reg(VAR_9,
    FUNC_3(VAR_9->bus.lan_id),
    VAR_7, VAR_11);

 return VAR_10;
}
