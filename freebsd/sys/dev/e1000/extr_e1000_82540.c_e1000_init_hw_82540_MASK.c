
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
typedef scalar_t__ u16 ;
struct TYPE_2__ {scalar_t__ (* setup_link ) (struct e1000_hw*) ;int (* clear_vfta ) (struct e1000_hw*) ;scalar_t__ (* id_led_init ) (struct e1000_hw*) ;} ;
struct e1000_mac_info {scalar_t__ type; scalar_t__ mta_reg_count; TYPE_1__ ops; int rar_entry_count; } ;
struct e1000_hw {scalar_t__ device_id; struct e1000_mac_info mac; } ;
typedef scalar_t__ s32 ;


 int FUNC_0 (char*) ;
 int FUNC_1 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (struct e1000_hw*,int ) ;
 int FUNC_3 (int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_4 (struct e1000_hw*) ;
 int FUNC_5 (struct e1000_hw*,int ,int) ;
 int FUNC_6 (struct e1000_hw*,int ,scalar_t__,int ) ;
 scalar_t__ VAR_8 ;
 int FUNC_7 (struct e1000_hw*) ;
 int FUNC_8 (struct e1000_hw*,int ) ;
 int FUNC_9 (struct e1000_hw*) ;
 scalar_t__ FUNC_10 (struct e1000_hw*) ;
 int FUNC_11 (struct e1000_hw*) ;
 scalar_t__ FUNC_12 (struct e1000_hw*) ;

__attribute__((used)) static s32 FUNC_13(struct e1000_hw *VAR_9)
{
 struct e1000_mac_info *VAR_10 = &VAR_9->mac;
 u32 VAR_11, VAR_12;
 s32 VAR_13;
 u16 VAR_14;

 FUNC_0("e1000_init_hw_82540");


 VAR_13 = VAR_10->ops.id_led_init(VAR_9);
 if (VAR_13) {
  FUNC_1("Error initializing identification LED\n");

 }


 FUNC_1("Initializing the IEEE VLAN\n");
 if (VAR_10->type < VAR_8)
  FUNC_5(VAR_9, VAR_7, 0);

 VAR_10->ops.clear_vfta(VAR_9);


 FUNC_8(VAR_9, VAR_10->rar_entry_count);


 FUNC_1("Zeroing the MTA\n");
 for (VAR_14 = 0; VAR_14 < VAR_10->mta_reg_count; VAR_14++) {
  FUNC_6(VAR_9, VAR_4, VAR_14, 0);
  FUNC_4(VAR_9);
 }

 if (VAR_10->type < VAR_8)
  FUNC_9(VAR_9);


 VAR_13 = VAR_10->ops.setup_link(VAR_9);

 VAR_11 = FUNC_2(VAR_9, FUNC_3(0));
 VAR_11 = (VAR_11 & ~VAR_6) |
    VAR_5;
 FUNC_5(VAR_9, FUNC_3(0), VAR_11);







 FUNC_7(VAR_9);

 if ((VAR_9->device_id == VAR_2) ||
     (VAR_9->device_id == VAR_3)) {
  VAR_12 = FUNC_2(VAR_9, VAR_0);




  VAR_12 |= VAR_1;
  FUNC_5(VAR_9, VAR_0, VAR_12);
 }

 return VAR_13;
}
