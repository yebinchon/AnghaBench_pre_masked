
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
typedef scalar_t__ u32 ;
struct TYPE_5__ {scalar_t__ rar_used_count; int overflow_promisc; } ;
struct TYPE_4__ {int (* set_rar ) (struct ixgbe_hw*,scalar_t__,int *,scalar_t__,int ) ;} ;
struct TYPE_6__ {scalar_t__ num_rar_entries; TYPE_1__ ops; } ;
struct ixgbe_hw {TYPE_2__ addr_ctrl; TYPE_3__ mac; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char*,scalar_t__) ;
 int FUNC_3 (char*,int ,int ,int ,int ,int ,int ) ;
 int VAR_0 ;
 int FUNC_4 (struct ixgbe_hw*,scalar_t__,int *,scalar_t__,int ) ;

void FUNC_5(struct ixgbe_hw *VAR_1, u8 *VAR_2, u32 VAR_3)
{
 u32 VAR_4 = VAR_1->mac.num_rar_entries;
 u32 VAR_5;

 FUNC_0("ixgbe_add_uc_addr");

 FUNC_3(" UC Addr = %.2X %.2X %.2X %.2X %.2X %.2X\n",
    VAR_2[0], VAR_2[1], VAR_2[2], VAR_2[3], VAR_2[4], VAR_2[5]);





 if (VAR_1->addr_ctrl.rar_used_count < VAR_4) {
  VAR_5 = VAR_1->addr_ctrl.rar_used_count;
  VAR_1->mac.ops.set_rar(VAR_1, VAR_5, VAR_2, VAR_3, VAR_0);
  FUNC_2("Added a secondary address to RAR[%d]\n", VAR_5);
  VAR_1->addr_ctrl.rar_used_count++;
 } else {
  VAR_1->addr_ctrl.overflow_promisc++;
 }

 FUNC_1("ixgbe_add_uc_addr Complete\n");
}
