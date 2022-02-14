
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_8__ {int requested_mode; int current_mode; int fc_was_autonegged; scalar_t__ disable_fc_autoneg; } ;
struct TYPE_7__ {int media_type; } ;
struct TYPE_5__ {int (* check_link ) (struct ixgbe_hw*,int *,int*,int ) ;} ;
struct TYPE_6__ {TYPE_1__ ops; } ;
struct ixgbe_hw {TYPE_4__ fc; TYPE_3__ phy; TYPE_2__ mac; } ;
typedef scalar_t__ s32 ;
typedef int ixgbe_link_speed ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int ,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int FUNC_2 (struct ixgbe_hw*) ;
 scalar_t__ FUNC_3 (struct ixgbe_hw*) ;
 scalar_t__ FUNC_4 (struct ixgbe_hw*) ;
 scalar_t__ FUNC_5 (struct ixgbe_hw*) ;





 int FUNC_6 (struct ixgbe_hw*,int *,int*,int ) ;

void FUNC_7(struct ixgbe_hw *VAR_7)
{
 s32 VAR_8 = VAR_3;
 ixgbe_link_speed VAR_9;
 bool VAR_10;

 FUNC_0("ixgbe_fc_autoneg");







 if (VAR_7->fc.disable_fc_autoneg) {
  FUNC_1(VAR_2,
        "Flow control autoneg is disabled");
  goto out;
 }

 VAR_7->mac.ops.check_link(VAR_7, &VAR_9, &VAR_10, VAR_0);
 if (!VAR_10) {
  FUNC_1(VAR_1, "The link is down");
  goto out;
 }

 switch (VAR_7->phy.media_type) {

 case 129:
 case 128:
 case 130:
  if (VAR_9 == VAR_4)
   VAR_8 = FUNC_5(VAR_7);
  break;


 case 132:
  VAR_8 = FUNC_3(VAR_7);
  break;


 case 131:
  if (FUNC_2(VAR_7))
   VAR_8 = FUNC_4(VAR_7);
  break;

 default:
  break;
 }

out:
 if (VAR_8 == VAR_5) {
  VAR_7->fc.fc_was_autonegged = VAR_6;
 } else {
  VAR_7->fc.fc_was_autonegged = VAR_0;
  VAR_7->fc.current_mode = VAR_7->fc.requested_mode;
 }
}
