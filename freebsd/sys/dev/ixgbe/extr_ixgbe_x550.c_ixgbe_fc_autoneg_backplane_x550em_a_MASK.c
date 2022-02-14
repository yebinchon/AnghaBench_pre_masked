
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_8__ {int requested_mode; int current_mode; int fc_was_autonegged; scalar_t__ disable_fc_autoneg; } ;
struct TYPE_7__ {int lan_id; } ;
struct TYPE_5__ {scalar_t__ (* read_iosf_sb_reg ) (struct ixgbe_hw*,int ,int ,int*) ;int (* check_link ) (struct ixgbe_hw*,int *,int*,int ) ;} ;
struct TYPE_6__ {TYPE_1__ ops; } ;
struct ixgbe_hw {TYPE_4__ fc; TYPE_3__ bus; TYPE_2__ mac; } ;
typedef scalar_t__ s32 ;
typedef int ixgbe_link_speed ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int ,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_2 (int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_3 (int ) ;
 int VAR_6 ;
 int FUNC_4 (int ) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 int VAR_11 ;
 scalar_t__ FUNC_5 (struct ixgbe_hw*,int,int,int ,int ,int ,int ) ;
 int FUNC_6 (struct ixgbe_hw*,int *,int*,int ) ;
 scalar_t__ FUNC_7 (struct ixgbe_hw*,int ,int ,int*) ;
 scalar_t__ FUNC_8 (struct ixgbe_hw*,int ,int ,int*) ;
 scalar_t__ FUNC_9 (struct ixgbe_hw*,int ,int ,int*) ;

void FUNC_10(struct ixgbe_hw *VAR_12)
{
 u32 VAR_13, VAR_14, VAR_15;
 s32 VAR_16 = VAR_3;
 ixgbe_link_speed VAR_17;
 bool VAR_18;






 if (VAR_12->fc.disable_fc_autoneg) {
  FUNC_1(VAR_2,
        "Flow control autoneg is disabled");
  goto out;
 }

 VAR_12->mac.ops.check_link(VAR_12, &VAR_17, &VAR_18, VAR_0);
 if (!VAR_18) {
  FUNC_1(VAR_1, "The link is down");
  goto out;
 }


 VAR_16 = VAR_12->mac.ops.read_iosf_sb_reg(VAR_12,
     FUNC_3(VAR_12->bus.lan_id),
     VAR_9, &VAR_13);

 if (VAR_16 != VAR_10 ||
     (VAR_13 & VAR_6) == 0) {
  FUNC_0("Auto-Negotiation did not complete\n");
  VAR_16 = VAR_3;
  goto out;
 }




 VAR_16 = VAR_12->mac.ops.read_iosf_sb_reg(VAR_12,
    FUNC_2(VAR_12->bus.lan_id),
    VAR_9, &VAR_15);

 if (VAR_16 != VAR_10) {
  FUNC_0("Auto-Negotiation did not complete\n");
  goto out;
 }

 VAR_16 = VAR_12->mac.ops.read_iosf_sb_reg(VAR_12,
    FUNC_4(VAR_12->bus.lan_id),
    VAR_9, &VAR_14);

 if (VAR_16 != VAR_10) {
  FUNC_0("Auto-Negotiation did not complete\n");
  goto out;
 }

 VAR_16 = FUNC_5(VAR_12, VAR_15, VAR_14,
        VAR_5,
        VAR_4,
        VAR_8,
        VAR_7);

out:
 if (VAR_16 == VAR_10) {
  VAR_12->fc.fc_was_autonegged = VAR_11;
 } else {
  VAR_12->fc.fc_was_autonegged = VAR_0;
  VAR_12->fc.current_mode = VAR_12->fc.requested_mode;
 }
}
