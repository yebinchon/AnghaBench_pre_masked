
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
typedef scalar_t__ u16 ;
struct TYPE_5__ {int (* clear_vfta ) (struct e1000_hw*) ;} ;
struct e1000_mac_info {scalar_t__ mta_reg_count; int rar_entry_count; TYPE_2__ ops; } ;
struct TYPE_6__ {int pci_cmd_word; } ;
struct e1000_dev_spec_82542 {scalar_t__ dma_fairness; } ;
struct TYPE_4__ {struct e1000_dev_spec_82542 _82542; } ;
struct e1000_hw {scalar_t__ revision_id; TYPE_3__ bus; TYPE_1__ dev_spec; struct e1000_mac_info mac; } ;
typedef int s32 ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (char*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (struct e1000_hw*,int ) ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_3 (struct e1000_hw*) ;
 int FUNC_4 (struct e1000_hw*,int ,int) ;
 int FUNC_5 (struct e1000_hw*,int ,scalar_t__,int ) ;
 int FUNC_6 (struct e1000_hw*) ;
 int FUNC_7 (struct e1000_hw*,int ) ;
 int FUNC_8 (struct e1000_hw*) ;
 int FUNC_9 (struct e1000_hw*) ;
 int FUNC_10 (struct e1000_hw*) ;
 int FUNC_11 (int) ;
 int FUNC_12 (struct e1000_hw*) ;

__attribute__((used)) static s32 FUNC_13(struct e1000_hw *VAR_9)
{
 struct e1000_mac_info *VAR_10 = &VAR_9->mac;
 struct e1000_dev_spec_82542 *VAR_11 = &VAR_9->dev_spec._82542;
 s32 VAR_12 = VAR_7;
 u32 VAR_13;
 u16 VAR_14;

 FUNC_0("e1000_init_hw_82542");


 FUNC_4(VAR_9, VAR_8, 0);
 VAR_10->ops.clear_vfta(VAR_9);


 if (VAR_9->revision_id == VAR_6) {
  FUNC_1("Disabling MWI on 82542 rev 2.0\n");
  FUNC_8(VAR_9);
  FUNC_4(VAR_9, VAR_4, VAR_5);
  FUNC_3(VAR_9);
  FUNC_11(5);
 }


 FUNC_7(VAR_9, VAR_10->rar_entry_count);


 if (VAR_9->revision_id == VAR_6) {
  FUNC_4(VAR_9, VAR_4, 0);
  FUNC_3(VAR_9);
  FUNC_11(1);
  if (VAR_9->bus.pci_cmd_word & VAR_0)
   FUNC_9(VAR_9);
 }


 FUNC_1("Zeroing the MTA\n");
 for (VAR_14 = 0; VAR_14 < VAR_10->mta_reg_count; VAR_14++)
  FUNC_5(VAR_9, VAR_3, VAR_14, 0);






 if (VAR_11->dma_fairness) {
  VAR_13 = FUNC_2(VAR_9, VAR_1);
  FUNC_4(VAR_9, VAR_1, VAR_13 | VAR_2);
 }


 VAR_12 = FUNC_10(VAR_9);







 FUNC_6(VAR_9);

 return VAR_12;
}
