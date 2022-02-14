
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
typedef scalar_t__ u16 ;
struct TYPE_2__ {scalar_t__ (* setup_link ) (struct e1000_hw*) ;int (* clear_vfta ) (struct e1000_hw*) ;scalar_t__ (* id_led_init ) (struct e1000_hw*) ;} ;
struct e1000_mac_info {scalar_t__ rar_entry_count; scalar_t__ mta_reg_count; int type; TYPE_1__ ops; } ;
struct e1000_hw {struct e1000_mac_info mac; } ;
typedef scalar_t__ s32 ;


 int FUNC_0 (char*) ;
 int FUNC_1 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (struct e1000_hw*,int ) ;
 int FUNC_3 (int) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_4 (struct e1000_hw*,int ,int) ;
 int FUNC_5 (struct e1000_hw*,int ,scalar_t__,int ) ;



 int FUNC_6 (struct e1000_hw*) ;
 int FUNC_7 (struct e1000_hw*) ;
 scalar_t__ FUNC_8 (struct e1000_hw*) ;
 int FUNC_9 (struct e1000_hw*,scalar_t__) ;
 int FUNC_10 (struct e1000_hw*) ;
 scalar_t__ FUNC_11 (struct e1000_hw*) ;
 int FUNC_12 (struct e1000_hw*) ;
 scalar_t__ FUNC_13 (struct e1000_hw*) ;

__attribute__((used)) static s32 FUNC_14(struct e1000_hw *VAR_6)
{
 struct e1000_mac_info *VAR_7 = &VAR_6->mac;
 u32 VAR_8;
 s32 VAR_9;
 u16 VAR_10, VAR_11 = VAR_7->rar_entry_count;

 FUNC_0("e1000_init_hw_82571");

 FUNC_10(VAR_6);


 VAR_9 = VAR_7->ops.id_led_init(VAR_6);

 if (VAR_9)
  FUNC_1("Error initializing identification LED\n");


 FUNC_1("Initializing the IEEE VLAN\n");
 VAR_7->ops.clear_vfta(VAR_6);






 if (FUNC_8(VAR_6))
  VAR_11--;
 FUNC_9(VAR_6, VAR_11);


 FUNC_1("Zeroing the MTA\n");
 for (VAR_10 = 0; VAR_10 < VAR_7->mta_reg_count; VAR_10++)
  FUNC_5(VAR_6, VAR_2, VAR_10, 0);


 VAR_9 = VAR_7->ops.setup_link(VAR_6);


 VAR_8 = FUNC_2(VAR_6, FUNC_3(0));
 VAR_8 = ((VAR_8 & ~VAR_5) |
      VAR_4 | VAR_3);
 FUNC_4(VAR_6, FUNC_3(0), VAR_8);


 switch (VAR_7->type) {
 case 130:
  FUNC_7(VAR_6);

 case 129:
 case 128:
  VAR_8 = FUNC_2(VAR_6, VAR_0);
  VAR_8 |= VAR_1;
  FUNC_4(VAR_6, VAR_0, VAR_8);
  break;
 default:
  VAR_8 = FUNC_2(VAR_6, FUNC_3(1));
  VAR_8 = ((VAR_8 & ~VAR_5) |
       VAR_4 |
       VAR_3);
  FUNC_4(VAR_6, FUNC_3(1), VAR_8);
  break;
 }






 FUNC_6(VAR_6);

 return VAR_9;
}
