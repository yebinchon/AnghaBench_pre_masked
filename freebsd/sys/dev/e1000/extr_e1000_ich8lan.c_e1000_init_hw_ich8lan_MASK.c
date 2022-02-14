
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
typedef int u16 ;
struct TYPE_6__ {scalar_t__ (* setup_link ) (struct e1000_hw*) ;scalar_t__ (* id_led_init ) (struct e1000_hw*) ;} ;
struct e1000_mac_info {scalar_t__ type; TYPE_3__ ops; int mta_reg_count; int rar_entry_count; } ;
struct TYPE_4__ {int (* write_reg ) (struct e1000_hw*,int ,int ) ;int (* read_reg ) (struct e1000_hw*,int ,int *) ;} ;
struct TYPE_5__ {scalar_t__ type; TYPE_1__ ops; } ;
struct e1000_hw {TYPE_2__ phy; struct e1000_mac_info mac; } ;
typedef scalar_t__ s32 ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (char*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (struct e1000_hw*,int ) ;
 int FUNC_3 (int) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_4 (struct e1000_hw*,int ,int) ;
 int FUNC_5 (struct e1000_hw*,int ,int ,int ) ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 int FUNC_6 (struct e1000_hw*) ;
 scalar_t__ VAR_11 ;
 int FUNC_7 (struct e1000_hw*,int ) ;
 int FUNC_8 (struct e1000_hw*) ;
 scalar_t__ VAR_12 ;
 scalar_t__ FUNC_9 (struct e1000_hw*) ;
 int FUNC_10 (struct e1000_hw*,int) ;
 scalar_t__ FUNC_11 (struct e1000_hw*) ;
 int FUNC_12 (struct e1000_hw*,int ,int *) ;
 int FUNC_13 (struct e1000_hw*,int ,int ) ;
 scalar_t__ FUNC_14 (struct e1000_hw*) ;

__attribute__((used)) static s32 FUNC_15(struct e1000_hw *VAR_13)
{
 struct e1000_mac_info *VAR_14 = &VAR_13->mac;
 u32 VAR_15, VAR_16, VAR_17;
 s32 VAR_18;
 u16 VAR_19;

 FUNC_0("e1000_init_hw_ich8lan");

 FUNC_8(VAR_13);


 VAR_18 = VAR_14->ops.id_led_init(VAR_13);

 if (VAR_18)
  FUNC_1("Error initializing identification LED\n");


 FUNC_7(VAR_13, VAR_14->rar_entry_count);


 FUNC_1("Zeroing the MTA\n");
 for (VAR_19 = 0; VAR_19 < VAR_14->mta_reg_count; VAR_19++)
  FUNC_5(VAR_13, VAR_4, VAR_19, 0);





 if (VAR_13->phy.type == VAR_12) {
  VAR_13->phy.ops.read_reg(VAR_13, VAR_0, &VAR_19);
  VAR_19 &= ~VAR_1;
  VAR_13->phy.ops.write_reg(VAR_13, VAR_0, VAR_19);
  VAR_18 = FUNC_9(VAR_13);
  if (VAR_18)
   return VAR_18;
 }


 VAR_18 = VAR_14->ops.setup_link(VAR_13);


 VAR_16 = FUNC_2(VAR_13, FUNC_3(0));
 VAR_16 = ((VAR_16 & ~VAR_8) |
    VAR_5);
 VAR_16 = ((VAR_16 & ~VAR_7) |
    VAR_6);
 FUNC_4(VAR_13, FUNC_3(0), VAR_16);
 VAR_16 = FUNC_2(VAR_13, FUNC_3(1));
 VAR_16 = ((VAR_16 & ~VAR_8) |
    VAR_5);
 VAR_16 = ((VAR_16 & ~VAR_7) |
    VAR_6);
 FUNC_4(VAR_13, FUNC_3(1), VAR_16);




 if (VAR_14->type == VAR_11)
  VAR_17 = VAR_9;
 else
  VAR_17 = (u32) ~(VAR_10);
 FUNC_10(VAR_13, VAR_17);

 VAR_15 = FUNC_2(VAR_13, VAR_2);
 VAR_15 |= VAR_3;
 FUNC_4(VAR_13, VAR_2, VAR_15);






 FUNC_6(VAR_13);

 return VAR_18;
}
