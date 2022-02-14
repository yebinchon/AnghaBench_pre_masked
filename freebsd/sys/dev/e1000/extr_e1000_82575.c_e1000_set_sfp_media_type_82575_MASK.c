
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u8 ;
typedef int u32 ;
struct sfp_e1000_flags {scalar_t__ e1000_base_t; scalar_t__ e100_base_fx; scalar_t__ e1000_base_sx; scalar_t__ e1000_base_lx; } ;
struct TYPE_4__ {void* media_type; } ;
struct e1000_dev_spec_82575 {void* sgmii_active; void* module_plugged; struct sfp_e1000_flags eth_flags; } ;
struct TYPE_3__ {struct e1000_dev_spec_82575 _82575; } ;
struct e1000_hw {TYPE_2__ phy; TYPE_1__ dev_spec; } ;
typedef scalar_t__ s32 ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct e1000_hw*,int ) ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_3 (struct e1000_hw*) ;
 int FUNC_4 (struct e1000_hw*,int ,int) ;
 void* VAR_9 ;
 void* VAR_10 ;
 void* VAR_11 ;
 void* VAR_12 ;
 scalar_t__ FUNC_5 (struct e1000_hw*,int ,scalar_t__*) ;
 int FUNC_6 (int) ;

__attribute__((used)) static s32 FUNC_7(struct e1000_hw *VAR_13)
{
 s32 VAR_14 = VAR_3;
 u32 VAR_15 = 0;
 struct e1000_dev_spec_82575 *VAR_16 = &VAR_13->dev_spec._82575;
 struct sfp_e1000_flags *VAR_17 = &VAR_16->eth_flags;
 u8 VAR_18 = 0;
 s32 VAR_19 = 3;


 VAR_15 = FUNC_2(VAR_13, VAR_0);
 VAR_15 &= ~VAR_1;
 FUNC_4(VAR_13, VAR_0, VAR_15 | VAR_2);

 FUNC_3(VAR_13);


 while (VAR_19) {
  VAR_14 = FUNC_5(VAR_13,
   FUNC_1(VAR_5),
   &VAR_18);
  if (VAR_14 == VAR_8)
   break;
  FUNC_6(100);
  VAR_19--;
 }
 if (VAR_14 != VAR_8)
  goto out;

 VAR_14 = FUNC_5(VAR_13,
   FUNC_1(VAR_4),
   (u8 *)VAR_17);
 if (VAR_14 != VAR_8)
  goto out;


 if ((VAR_18 == VAR_7) ||
     (VAR_18 == VAR_6)) {
  VAR_16->module_plugged = VAR_9;
  if (VAR_17->e1000_base_lx || VAR_17->e1000_base_sx) {
   VAR_13->phy.media_type = VAR_11;
  } else if (VAR_17->e100_base_fx) {
   VAR_16->sgmii_active = VAR_9;
   VAR_13->phy.media_type = VAR_11;
  } else if (VAR_17->e1000_base_t) {
   VAR_16->sgmii_active = VAR_9;
   VAR_13->phy.media_type = VAR_10;
  } else {
   VAR_13->phy.media_type = VAR_12;
   FUNC_0("PHY module has not been recognized\n");
   goto out;
  }
 } else {
  VAR_13->phy.media_type = VAR_12;
 }
 VAR_14 = VAR_8;
out:

 FUNC_4(VAR_13, VAR_0, VAR_15);
 return VAR_14;
}
