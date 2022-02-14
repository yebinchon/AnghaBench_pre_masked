
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_8__ {int lan_id; } ;
struct TYPE_6__ {scalar_t__ (* read_iosf_sb_reg ) (struct ixgbe_hw*,int ,int ,int*) ;scalar_t__ (* write_iosf_sb_reg ) (struct ixgbe_hw*,int ,int ,int) ;} ;
struct TYPE_7__ {TYPE_2__ ops; } ;
struct TYPE_5__ {int requested_mode; scalar_t__ strict_ieee; } ;
struct ixgbe_hw {TYPE_4__ bus; TYPE_3__ mac; TYPE_1__ fc; } ;
typedef scalar_t__ s32 ;


 int FUNC_0 (char*) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int ,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_3 (int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;




 scalar_t__ FUNC_4 (struct ixgbe_hw*) ;
 scalar_t__ FUNC_5 (struct ixgbe_hw*,int ,int ,int*) ;
 scalar_t__ FUNC_6 (struct ixgbe_hw*,int ,int ,int) ;

s32 FUNC_7(struct ixgbe_hw *VAR_9)
{
 s32 VAR_10 = VAR_7;
 u32 VAR_11 = 0;

 FUNC_0("ixgbe_setup_fc_backplane_x550em_a");


 if (VAR_9->fc.strict_ieee && VAR_9->fc.requested_mode == 129) {
  FUNC_2(VAR_1,
         "ixgbe_fc_rx_pause not valid in strict IEEE mode\n");
  return VAR_3;
 }

 if (VAR_9->fc.requested_mode == VAR_8)
  VAR_9->fc.requested_mode = 131;





 VAR_10 = VAR_9->mac.ops.read_iosf_sb_reg(VAR_9,
     FUNC_3(VAR_9->bus.lan_id),
     VAR_6, &VAR_11);

 if (VAR_10 != VAR_7) {
  FUNC_1("Auto-Negotiation did not complete\n");
  return VAR_10;
 }
 switch (VAR_9->fc.requested_mode) {
 case 130:

  VAR_11 &= ~(VAR_5 |
        VAR_4);
  break;
 case 128:



  VAR_11 |= VAR_4;
  VAR_11 &= ~VAR_5;
  break;
 case 129:
 case 131:

  VAR_11 |= VAR_5 |
      VAR_4;
  break;
 default:
  FUNC_2(VAR_0,
         "Flow control param set incorrectly\n");
  return VAR_2;
 }

 VAR_10 = VAR_9->mac.ops.write_iosf_sb_reg(VAR_9,
     FUNC_3(VAR_9->bus.lan_id),
     VAR_6, VAR_11);


 VAR_10 = FUNC_4(VAR_9);

 return VAR_10;
}
