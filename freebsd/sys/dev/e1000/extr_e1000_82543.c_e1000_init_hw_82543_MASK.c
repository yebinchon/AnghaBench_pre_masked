
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
typedef scalar_t__ u16 ;
struct TYPE_4__ {int (* setup_link ) (struct e1000_hw*) ;int (* clear_vfta ) (struct e1000_hw*) ;} ;
struct e1000_mac_info {scalar_t__ mta_reg_count; scalar_t__ type; TYPE_2__ ops; int rar_entry_count; } ;
struct e1000_dev_spec_82543 {scalar_t__ dma_fairness; } ;
struct TYPE_3__ {struct e1000_dev_spec_82543 _82543; } ;
struct e1000_hw {struct e1000_mac_info mac; TYPE_1__ dev_spec; } ;
typedef int s32 ;


 int FUNC_0 (char*) ;
 int FUNC_1 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (struct e1000_hw*,int ) ;
 int VAR_3 ;
 int FUNC_3 (struct e1000_hw*) ;
 int FUNC_4 (struct e1000_hw*,int ,int) ;
 int FUNC_5 (struct e1000_hw*,int ,scalar_t__,int ) ;
 scalar_t__ VAR_4 ;
 int FUNC_6 (struct e1000_hw*) ;
 int FUNC_7 (struct e1000_hw*,int ) ;
 int FUNC_8 (struct e1000_hw*) ;
 int FUNC_9 (struct e1000_hw*) ;
 int FUNC_10 (struct e1000_hw*) ;

__attribute__((used)) static s32 FUNC_11(struct e1000_hw *VAR_5)
{
 struct e1000_mac_info *VAR_6 = &VAR_5->mac;
 struct e1000_dev_spec_82543 *VAR_7 = &VAR_5->dev_spec._82543;
 u32 VAR_8;
 s32 VAR_9;
 u16 VAR_10;

 FUNC_0("e1000_init_hw_82543");


 FUNC_4(VAR_5, VAR_3, 0);
 VAR_6->ops.clear_vfta(VAR_5);


 FUNC_7(VAR_5, VAR_6->rar_entry_count);


 FUNC_1("Zeroing the MTA\n");
 for (VAR_10 = 0; VAR_10 < VAR_6->mta_reg_count; VAR_10++) {
  FUNC_5(VAR_5, VAR_2, VAR_10, 0);
  FUNC_3(VAR_5);
 }






 if (VAR_5->mac.type == VAR_4 && VAR_7->dma_fairness) {
  VAR_8 = FUNC_2(VAR_5, VAR_0);
  FUNC_4(VAR_5, VAR_0, VAR_8 | VAR_1);
 }

 FUNC_8(VAR_5);


 VAR_9 = VAR_6->ops.setup_link(VAR_5);







 FUNC_6(VAR_5);

 return VAR_9;
}
