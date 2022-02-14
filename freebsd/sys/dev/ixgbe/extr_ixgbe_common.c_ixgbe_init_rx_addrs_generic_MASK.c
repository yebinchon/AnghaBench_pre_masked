
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_4__ {int (* clear_vmdq ) (struct ixgbe_hw*,int ,int ) ;int (* set_rar ) (struct ixgbe_hw*,int ,int *,int ,int ) ;int (* get_mac_addr ) (struct ixgbe_hw*,int *) ;} ;
struct TYPE_6__ {int num_rar_entries; int mcft_size; int mc_filter_type; TYPE_1__ ops; int * addr; } ;
struct TYPE_5__ {int rar_used_count; scalar_t__ mta_in_use; scalar_t__ overflow_promisc; } ;
struct ixgbe_hw {TYPE_3__ mac; TYPE_2__ addr_ctrl; } ;
typedef int s32 ;


 int FUNC_0 (char*) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char*,int) ;
 int FUNC_3 (char*,int ,int ,int ) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_4 (int) ;
 int FUNC_5 (int) ;
 int VAR_3 ;
 int FUNC_6 (int) ;
 int VAR_4 ;
 int FUNC_7 (struct ixgbe_hw*,int ,int ) ;
 int FUNC_8 (struct ixgbe_hw*) ;
 scalar_t__ FUNC_9 (int *) ;
 int FUNC_10 (struct ixgbe_hw*,int *) ;
 int FUNC_11 (struct ixgbe_hw*,int ,int *,int ,int ) ;
 int FUNC_12 (struct ixgbe_hw*,int ,int ) ;

s32 FUNC_13(struct ixgbe_hw *VAR_5)
{
 u32 VAR_6;
 u32 VAR_7 = VAR_5->mac.num_rar_entries;

 FUNC_0("ixgbe_init_rx_addrs_generic");






 if (FUNC_9(VAR_5->mac.addr) ==
     VAR_1) {

  VAR_5->mac.ops.get_mac_addr(VAR_5, VAR_5->mac.addr);

  FUNC_3(" Keeping Current RAR0 Addr =%.2X %.2X %.2X ",
     VAR_5->mac.addr[0], VAR_5->mac.addr[1],
     VAR_5->mac.addr[2]);
  FUNC_3("%.2X %.2X %.2X\n", VAR_5->mac.addr[3],
     VAR_5->mac.addr[4], VAR_5->mac.addr[5]);
 } else {

  FUNC_1("Overriding MAC Address in RAR[0]\n");
  FUNC_3(" New MAC Addr =%.2X %.2X %.2X ",
     VAR_5->mac.addr[0], VAR_5->mac.addr[1],
     VAR_5->mac.addr[2]);
  FUNC_3("%.2X %.2X %.2X\n", VAR_5->mac.addr[3],
     VAR_5->mac.addr[4], VAR_5->mac.addr[5]);

  VAR_5->mac.ops.set_rar(VAR_5, 0, VAR_5->mac.addr, 0, VAR_3);
 }


 VAR_5->mac.ops.clear_vmdq(VAR_5, 0, VAR_0);

 VAR_5->addr_ctrl.overflow_promisc = 0;

 VAR_5->addr_ctrl.rar_used_count = 1;


 FUNC_2("Clearing RAR[1-%d]\n", VAR_7 - 1);
 for (VAR_6 = 1; VAR_6 < VAR_7; VAR_6++) {
  FUNC_7(VAR_5, FUNC_6(VAR_6), 0);
  FUNC_7(VAR_5, FUNC_5(VAR_6), 0);
 }


 VAR_5->addr_ctrl.mta_in_use = 0;
 FUNC_7(VAR_5, VAR_2, VAR_5->mac.mc_filter_type);

 FUNC_1(" Clearing MTA\n");
 for (VAR_6 = 0; VAR_6 < VAR_5->mac.mcft_size; VAR_6++)
  FUNC_7(VAR_5, FUNC_4(VAR_6), 0);

 FUNC_8(VAR_5);

 return VAR_4;
}
