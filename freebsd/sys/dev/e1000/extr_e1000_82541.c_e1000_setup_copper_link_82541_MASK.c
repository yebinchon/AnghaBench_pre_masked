
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct e1000_phy_info {int mdix; } ;
struct TYPE_4__ {scalar_t__ type; scalar_t__ autoneg; } ;
struct e1000_dev_spec_82541 {scalar_t__ ffe_config; int dsp_config; } ;
struct TYPE_3__ {struct e1000_dev_spec_82541 _82541; } ;
struct e1000_hw {TYPE_2__ mac; TYPE_1__ dev_spec; struct e1000_phy_info phy; } ;
typedef scalar_t__ s32 ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (struct e1000_hw*,int ) ;
 int FUNC_2 (struct e1000_hw*,int ,int) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ FUNC_3 (struct e1000_hw*) ;
 int VAR_10 ;
 int VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 scalar_t__ FUNC_4 (struct e1000_hw*) ;

__attribute__((used)) static s32 FUNC_5(struct e1000_hw *VAR_14)
{
 struct e1000_phy_info *VAR_15 = &VAR_14->phy;
 struct e1000_dev_spec_82541 *VAR_16 = &VAR_14->dev_spec._82541;
 s32 VAR_17;
 u32 VAR_18, VAR_19;

 FUNC_0("e1000_setup_copper_link_82541");

 VAR_18 = FUNC_1(VAR_14, VAR_0);
 VAR_18 |= VAR_3;
 VAR_18 &= ~(VAR_2 | VAR_1);
 FUNC_2(VAR_14, VAR_0, VAR_18);



 if (VAR_14->mac.type == VAR_8 || VAR_14->mac.type == VAR_9) {
  VAR_16->dsp_config = VAR_10;
  VAR_15->mdix = 1;
 } else {
  VAR_16->dsp_config = VAR_11;
 }

 VAR_17 = FUNC_3(VAR_14);
 if (VAR_17)
  goto out;

 if (VAR_14->mac.autoneg) {
  if (VAR_16->ffe_config == VAR_12)
   VAR_16->ffe_config = VAR_13;
 }


 VAR_19 = FUNC_1(VAR_14, VAR_4);
 VAR_19 &= VAR_6;
 VAR_19 |= (VAR_5 | VAR_7);
 FUNC_2(VAR_14, VAR_4, VAR_19);

 VAR_17 = FUNC_4(VAR_14);

out:
 return VAR_17;
}
