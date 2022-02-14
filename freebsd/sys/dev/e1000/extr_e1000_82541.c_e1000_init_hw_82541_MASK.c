
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct TYPE_8__ {scalar_t__ (* setup_link ) (struct e1000_hw*) ;int (* clear_vfta ) (struct e1000_hw*) ;scalar_t__ (* id_led_init ) (struct e1000_hw*) ;} ;
struct e1000_mac_info {scalar_t__ mta_reg_count; TYPE_4__ ops; int rar_entry_count; } ;
struct TYPE_6__ {scalar_t__ (* read_reg ) (struct e1000_hw*,int ,int *) ;} ;
struct TYPE_7__ {TYPE_2__ ops; } ;
struct e1000_dev_spec_82541 {int spd_default; } ;
struct TYPE_5__ {struct e1000_dev_spec_82541 _82541; } ;
struct e1000_hw {TYPE_3__ phy; TYPE_1__ dev_spec; struct e1000_mac_info mac; } ;
typedef scalar_t__ s32 ;


 int FUNC_0 (char*) ;
 int FUNC_1 (char*) ;
 int VAR_0 ;
 scalar_t__ FUNC_2 (struct e1000_hw*,int ) ;
 int FUNC_3 (int ) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_4 (struct e1000_hw*) ;
 int FUNC_5 (struct e1000_hw*,int ,scalar_t__) ;
 int FUNC_6 (struct e1000_hw*,int ,scalar_t__,int ) ;
 int VAR_3 ;
 int FUNC_7 (struct e1000_hw*) ;
 int FUNC_8 (struct e1000_hw*,int ) ;
 scalar_t__ FUNC_9 (struct e1000_hw*) ;
 scalar_t__ FUNC_10 (struct e1000_hw*,int ,int *) ;
 int FUNC_11 (struct e1000_hw*) ;
 scalar_t__ FUNC_12 (struct e1000_hw*) ;

__attribute__((used)) static s32 FUNC_13(struct e1000_hw *VAR_4)
{
 struct e1000_mac_info *VAR_5 = &VAR_4->mac;
 struct e1000_dev_spec_82541 *VAR_6 = &VAR_4->dev_spec._82541;
 u32 VAR_7, VAR_8;
 s32 VAR_9;

 FUNC_0("e1000_init_hw_82541");


 VAR_9 = VAR_5->ops.id_led_init(VAR_4);
 if (VAR_9) {
  FUNC_1("Error initializing identification LED\n");

 }


 VAR_9 = VAR_4->phy.ops.read_reg(VAR_4, VAR_3,
           &VAR_6->spd_default);
 if (VAR_9)
  goto out;


 FUNC_1("Initializing the IEEE VLAN\n");
 VAR_5->ops.clear_vfta(VAR_4);


 FUNC_8(VAR_4, VAR_5->rar_entry_count);


 FUNC_1("Zeroing the MTA\n");
 for (VAR_7 = 0; VAR_7 < VAR_5->mta_reg_count; VAR_7++) {
  FUNC_6(VAR_4, VAR_0, VAR_7, 0);






  FUNC_4(VAR_4);
 }


 VAR_9 = VAR_5->ops.setup_link(VAR_4);

 VAR_8 = FUNC_2(VAR_4, FUNC_3(0));
 VAR_8 = (VAR_8 & ~VAR_2) |
    VAR_1;
 FUNC_5(VAR_4, FUNC_3(0), VAR_8);







 FUNC_7(VAR_4);

out:
 return VAR_9;
}
