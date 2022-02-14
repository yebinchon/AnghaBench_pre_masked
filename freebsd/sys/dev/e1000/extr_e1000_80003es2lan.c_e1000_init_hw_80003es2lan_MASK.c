
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
typedef int u16 ;
struct TYPE_4__ {scalar_t__ (* setup_link ) (struct e1000_hw*) ;int (* clear_vfta ) (struct e1000_hw*) ;scalar_t__ (* id_led_init ) (struct e1000_hw*) ;} ;
struct e1000_mac_info {int mta_reg_count; TYPE_1__ ops; int rar_entry_count; } ;
struct TYPE_5__ {int mdic_wa_enable; } ;
struct TYPE_6__ {TYPE_2__ _80003es2lan; } ;
struct e1000_hw {TYPE_3__ dev_spec; struct e1000_mac_info mac; } ;
typedef scalar_t__ s32 ;


 int FUNC_0 (char*) ;
 int FUNC_1 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_2 (struct e1000_hw*,int ) ;
 int FUNC_3 (struct e1000_hw*,int ,int) ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int FUNC_4 (int) ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int FUNC_5 (struct e1000_hw*,int ,int) ;
 int FUNC_6 (struct e1000_hw*,int ,int,int) ;
 int VAR_19 ;
 int VAR_20 ;
 int FUNC_7 (struct e1000_hw*) ;
 int FUNC_8 (struct e1000_hw*,int ) ;
 int FUNC_9 (struct e1000_hw*) ;
 scalar_t__ FUNC_10 (struct e1000_hw*,int,int*) ;
 scalar_t__ FUNC_11 (struct e1000_hw*,int,int) ;
 scalar_t__ FUNC_12 (struct e1000_hw*) ;
 int FUNC_13 (struct e1000_hw*) ;
 scalar_t__ FUNC_14 (struct e1000_hw*) ;

__attribute__((used)) static s32 FUNC_15(struct e1000_hw *VAR_21)
{
 struct e1000_mac_info *VAR_22 = &VAR_21->mac;
 u32 VAR_23;
 s32 VAR_24;
 u16 VAR_25;
 u16 VAR_26;

 FUNC_0("e1000_init_hw_80003es2lan");

 FUNC_9(VAR_21);


 VAR_24 = VAR_22->ops.id_led_init(VAR_21);

 if (VAR_24)
  FUNC_1("Error initializing identification LED\n");


 FUNC_1("Initializing the IEEE VLAN\n");
 VAR_22->ops.clear_vfta(VAR_21);


 FUNC_8(VAR_21, VAR_22->rar_entry_count);


 FUNC_1("Zeroing the MTA\n");
 for (VAR_26 = 0; VAR_26 < VAR_22->mta_reg_count; VAR_26++)
  FUNC_6(VAR_21, VAR_9, VAR_26, 0);


 VAR_24 = VAR_22->ops.setup_link(VAR_21);
 if (VAR_24)
  return VAR_24;


 VAR_24 =
     FUNC_10(VAR_21, VAR_4,
         &VAR_25);
 if (!VAR_24) {
  VAR_25 |= VAR_3;
  VAR_24 = FUNC_11(VAR_21,
       VAR_4,
       VAR_25);
  if (VAR_24)
   FUNC_1("Error disabling far-end loopback\n");
 } else
  FUNC_1("Error disabling far-end loopback\n");


 VAR_23 = FUNC_2(VAR_21, FUNC_4(0));
 VAR_23 = ((VAR_23 & ~VAR_18) |
      VAR_17 | VAR_16);
 FUNC_5(VAR_21, FUNC_4(0), VAR_23);


 VAR_23 = FUNC_2(VAR_21, FUNC_4(1));
 VAR_23 = ((VAR_23 & ~VAR_18) |
      VAR_17 | VAR_16);
 FUNC_5(VAR_21, FUNC_4(1), VAR_23);


 VAR_23 = FUNC_2(VAR_21, VAR_10);
 VAR_23 |= VAR_13;
 FUNC_5(VAR_21, VAR_10, VAR_23);


 VAR_23 = FUNC_2(VAR_21, VAR_11);
 VAR_23 &= ~VAR_12;
 VAR_23 |= VAR_0;
 FUNC_5(VAR_21, VAR_11, VAR_23);


 VAR_23 = FUNC_2(VAR_21, VAR_14);
 VAR_23 &= ~VAR_15;
 VAR_23 |= VAR_1;
 FUNC_5(VAR_21, VAR_14, VAR_23);

 VAR_23 = FUNC_3(VAR_21, VAR_2, 0x0001);
 VAR_23 &= ~0x00100000;
 FUNC_6(VAR_21, VAR_2, 0x0001, VAR_23);


 VAR_21->dev_spec._80003es2lan.mdic_wa_enable = VAR_20;

 VAR_24 =
     FUNC_10(VAR_21, VAR_5 >>
         VAR_6, &VAR_26);
 if (!VAR_24) {
  if ((VAR_26 & VAR_8) ==
       VAR_7)
   VAR_21->dev_spec._80003es2lan.mdic_wa_enable = VAR_19;
 }






 FUNC_7(VAR_21);

 return VAR_24;
}
