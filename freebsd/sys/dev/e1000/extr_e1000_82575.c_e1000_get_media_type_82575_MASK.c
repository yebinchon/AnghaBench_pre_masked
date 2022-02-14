
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_6__ {void* media_type; } ;
struct TYPE_5__ {int e100_base_fx; } ;
struct e1000_dev_spec_82575 {TYPE_2__ eth_flags; void* sgmii_active; void* module_plugged; } ;
struct TYPE_4__ {struct e1000_dev_spec_82575 _82575; } ;
struct e1000_hw {TYPE_3__ phy; TYPE_1__ dev_spec; } ;
typedef int s32 ;


 int VAR_0 ;


 int VAR_1 ;


 int FUNC_0 (struct e1000_hw*,int ) ;
 int VAR_2 ;
 int FUNC_1 (struct e1000_hw*,int ,int) ;
 void* VAR_3 ;
 void* VAR_4 ;
 void* VAR_5 ;
 void* VAR_6 ;
 void* VAR_7 ;
 int FUNC_2 (struct e1000_hw*) ;
 int FUNC_3 (struct e1000_hw*) ;

__attribute__((used)) static s32 FUNC_4(struct e1000_hw *VAR_8)
{
 struct e1000_dev_spec_82575 *VAR_9 = &VAR_8->dev_spec._82575;
 s32 VAR_10 = VAR_2;
 u32 VAR_11 = 0;
 u32 VAR_12 = 0;


 VAR_9->sgmii_active = VAR_3;
 VAR_9->module_plugged = VAR_3;


 VAR_11 = FUNC_0(VAR_8, VAR_0);


 VAR_12 = VAR_11 & VAR_1;

 switch (VAR_12) {
 case 131:
  VAR_8->phy.media_type = VAR_6;
  break;
 case 130:
  VAR_8->phy.media_type = VAR_5;
  break;
 case 128:

  if (FUNC_3(VAR_8)) {
   VAR_8->phy.media_type = VAR_5;
   VAR_9->sgmii_active = VAR_4;
   break;
  }


 case 129:

  VAR_10 = FUNC_2(VAR_8);
  if ((VAR_10 != VAR_2) ||
      (VAR_8->phy.media_type == VAR_7)) {




   VAR_8->phy.media_type = VAR_6;

   if (VAR_12 == 128) {
    VAR_8->phy.media_type = VAR_5;
    VAR_9->sgmii_active = VAR_4;
   }

   break;
  }


  if (VAR_9->eth_flags.e100_base_fx)
   break;


  VAR_11 &= ~VAR_1;

  if (VAR_8->phy.media_type == VAR_5)
   VAR_11 |= 128;
  else
   VAR_11 |= 129;

  FUNC_1(VAR_8, VAR_0, VAR_11);

  break;
 }

 return VAR_10;
}
