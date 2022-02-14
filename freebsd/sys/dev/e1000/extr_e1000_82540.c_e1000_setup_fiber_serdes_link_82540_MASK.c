
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct e1000_mac_info {int type; } ;
struct TYPE_2__ {int media_type; } ;
struct e1000_hw {TYPE_1__ phy; struct e1000_mac_info mac; } ;
typedef int s32 ;


 int FUNC_0 (char*) ;
 int VAR_0 ;


 int FUNC_1 (struct e1000_hw*) ;
 int VAR_1 ;
 int FUNC_2 (struct e1000_hw*) ;
 int FUNC_3 (struct e1000_hw*) ;

__attribute__((used)) static s32 FUNC_4(struct e1000_hw *VAR_2)
{
 struct e1000_mac_info *VAR_3 = &VAR_2->mac;
 s32 VAR_4 = VAR_0;

 FUNC_0("e1000_setup_fiber_serdes_link_82540");

 switch (VAR_3->type) {
 case 129:
 case 128:
  if (VAR_2->phy.media_type == VAR_1) {




   VAR_4 = FUNC_1(VAR_2);
   if (VAR_4)
    goto out;
  }

  VAR_4 = FUNC_2(VAR_2);
  if (VAR_4)
   goto out;
 default:
  break;
 }

 VAR_4 = FUNC_3(VAR_2);

out:
 return VAR_4;
}
