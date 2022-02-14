
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ u16 ;
struct TYPE_4__ {scalar_t__ (* setup_link ) (struct e1000_hw*) ;int (* clear_vfta ) (struct e1000_hw*) ;scalar_t__ (* id_led_init ) (struct e1000_hw*) ;} ;
struct e1000_mac_info {scalar_t__ rar_entry_count; scalar_t__ mta_reg_count; scalar_t__ uta_reg_count; TYPE_1__ ops; } ;
struct TYPE_5__ {int mtu; } ;
struct TYPE_6__ {TYPE_2__ _82575; } ;
struct e1000_hw {TYPE_3__ dev_spec; struct e1000_mac_info mac; } ;
typedef scalar_t__ s32 ;


 int FUNC_0 (char*) ;
 int FUNC_1 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (struct e1000_hw*,int ,scalar_t__,int ) ;
 int FUNC_3 (struct e1000_hw*) ;
 int FUNC_4 (struct e1000_hw*,scalar_t__) ;
 scalar_t__ FUNC_5 (struct e1000_hw*) ;
 int FUNC_6 (struct e1000_hw*) ;
 scalar_t__ FUNC_7 (struct e1000_hw*) ;

s32 FUNC_8(struct e1000_hw *VAR_2)
{
 struct e1000_mac_info *VAR_3 = &VAR_2->mac;
 s32 VAR_4;
 u16 VAR_5, VAR_6 = VAR_3->rar_entry_count;

 FUNC_0("e1000_init_hw_82575");


 VAR_4 = VAR_3->ops.id_led_init(VAR_2);
 if (VAR_4) {
  FUNC_1("Error initializing identification LED\n");

 }


 FUNC_1("Initializing the IEEE VLAN\n");
 VAR_3->ops.clear_vfta(VAR_2);


 FUNC_4(VAR_2, VAR_6);


 FUNC_1("Zeroing the MTA\n");
 for (VAR_5 = 0; VAR_5 < VAR_3->mta_reg_count; VAR_5++)
  FUNC_2(VAR_2, VAR_0, VAR_5, 0);


 FUNC_1("Zeroing the UTA\n");
 for (VAR_5 = 0; VAR_5 < VAR_3->uta_reg_count; VAR_5++)
  FUNC_2(VAR_2, VAR_1, VAR_5, 0);


 VAR_4 = VAR_3->ops.setup_link(VAR_2);


 VAR_2->dev_spec._82575.mtu = 1500;







 FUNC_3(VAR_2);

 return VAR_4;
}
