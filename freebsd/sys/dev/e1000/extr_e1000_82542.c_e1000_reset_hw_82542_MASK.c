
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_3__ {int (* reload ) (struct e1000_hw*) ;} ;
struct TYPE_4__ {TYPE_1__ ops; } ;
struct e1000_bus_info {int pci_cmd_word; } ;
struct e1000_hw {scalar_t__ revision_id; TYPE_2__ nvm; struct e1000_bus_info bus; } ;
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
 int VAR_9 ;
 int FUNC_3 (struct e1000_hw*) ;
 int FUNC_4 (struct e1000_hw*,int ,int) ;
 int FUNC_5 (struct e1000_hw*) ;
 int FUNC_6 (struct e1000_hw*) ;
 int FUNC_7 (int) ;
 int FUNC_8 (struct e1000_hw*) ;

__attribute__((used)) static s32 FUNC_9(struct e1000_hw *VAR_10)
{
 struct e1000_bus_info *VAR_11 = &VAR_10->bus;
 s32 VAR_12 = VAR_7;
 u32 VAR_13;

 FUNC_0("e1000_reset_hw_82542");

 if (VAR_10->revision_id == VAR_6) {
  FUNC_1("Disabling MWI on 82542 rev 2\n");
  FUNC_5(VAR_10);
 }

 FUNC_1("Masking off all interrupts\n");
 FUNC_4(VAR_10, VAR_4, 0xffffffff);

 FUNC_4(VAR_10, VAR_5, 0);
 FUNC_4(VAR_10, VAR_8, VAR_9);
 FUNC_3(VAR_10);





 FUNC_7(10);

 VAR_13 = FUNC_2(VAR_10, VAR_1);

 FUNC_1("Issuing a global reset to 82542/82543 MAC\n");
 FUNC_4(VAR_10, VAR_1, VAR_13 | VAR_2);

 VAR_10->nvm.ops.reload(VAR_10);
 FUNC_7(2);

 FUNC_4(VAR_10, VAR_4, 0xffffffff);
 FUNC_2(VAR_10, VAR_3);

 if (VAR_10->revision_id == VAR_6) {
  if (VAR_11->pci_cmd_word & VAR_0)
   FUNC_6(VAR_10);
 }

 return VAR_12;
}
