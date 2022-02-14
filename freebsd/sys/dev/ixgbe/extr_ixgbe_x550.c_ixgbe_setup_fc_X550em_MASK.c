
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_8__ {int requested_mode; void* disable_fc_autoneg; scalar_t__ strict_ieee; } ;
struct TYPE_7__ {int lan_id; } ;
struct TYPE_5__ {int (* write_iosf_sb_reg ) (struct ixgbe_hw*,int ,int ,int) ;int (* read_iosf_sb_reg ) (struct ixgbe_hw*,int ,int ,int*) ;} ;
struct TYPE_6__ {TYPE_1__ ops; } ;
struct ixgbe_hw {int device_id; TYPE_4__ fc; TYPE_3__ bus; TYPE_2__ mac; } ;
typedef int s32 ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int ,char*) ;




 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 void* VAR_8 ;
 int VAR_9 ;




 int FUNC_3 (struct ixgbe_hw*,int ,int ,int*) ;
 int FUNC_4 (struct ixgbe_hw*,int ,int ,int) ;

s32 FUNC_5(struct ixgbe_hw *VAR_10)
{
 s32 VAR_11 = VAR_7;
 u32 VAR_12, VAR_13, VAR_14;

 FUNC_0("ixgbe_setup_fc_X550em");


 if (VAR_10->fc.strict_ieee && VAR_10->fc.requested_mode == 129) {
  FUNC_1(VAR_1,
   "ixgbe_fc_rx_pause not valid in strict IEEE mode\n");
  VAR_11 = VAR_3;
  goto out;
 }




 if (VAR_10->fc.requested_mode == VAR_9)
  VAR_10->fc.requested_mode = 131;


 switch (VAR_10->fc.requested_mode) {
 case 130:
  VAR_12 = 0;
  VAR_13 = 0;
  break;
 case 128:
  VAR_12 = 0;
  VAR_13 = 1;
  break;
 case 129:
 case 131:
  VAR_12 = 1;
  VAR_13 = 1;
  break;
 default:
  FUNC_1(VAR_0,
   "Flow control param set incorrectly\n");
  VAR_11 = VAR_2;
  goto out;
 }

 switch (VAR_10->device_id) {
 case 133:
 case 135:
 case 134:
  VAR_11 = VAR_10->mac.ops.read_iosf_sb_reg(VAR_10,
     FUNC_2(VAR_10->bus.lan_id),
     VAR_6, &VAR_14);
  if (VAR_11 != VAR_7)
   goto out;
  VAR_14 &= ~(VAR_5 |
   VAR_4);
  if (VAR_12)
   VAR_14 |= VAR_5;
  if (VAR_13)
   VAR_14 |= VAR_4;
  VAR_11 = VAR_10->mac.ops.write_iosf_sb_reg(VAR_10,
     FUNC_2(VAR_10->bus.lan_id),
     VAR_6, VAR_14);


  VAR_10->fc.disable_fc_autoneg = VAR_8;
  break;
 case 132:
  VAR_10->fc.disable_fc_autoneg = VAR_8;
  break;
 default:
  break;
 }

out:
 return VAR_11;
}
